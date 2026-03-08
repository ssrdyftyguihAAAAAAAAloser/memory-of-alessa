#include "pss_vobuf.h"

#ifdef NON_MATCHING
void voBufCreate(VoBuf *f, VoData *data, VoTag *tag, int size)
{
    int i;

    f->data = data;
    f->tag = tag;
    f->size = size;
    f->count = 0;
    f->write = 0;

    for (i = 0; i < size; i++)
    {
        f->tag[i].status = VOBUF_STATUS_;
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/movie/pss_vobuf", voBufCreate);
#endif

void voBufDelete(VoBuf *f)
{
    return;
}

void voBufReset(VoBuf *f)
{
    f->count = 0;
    f->write = 0;
}

int voBufIsFull(VoBuf *f)
{
    return f->count == f->size;
}

#ifdef NON_MATCHING
void voBufIncCount(VoBuf *f)
{
    DIntr();

    f->tag[f->write].status = VOBUF_STATUS_FULL;
    f->count++;
    f->write = (f->write + 1) % f->size;

    EIntr();
}
#else
INCLUDE_ASM("asm/nonmatchings/movie/pss_vobuf", voBufIncCount);
#endif

#ifdef NON_MATCHING
VoData* voBufGetData(VoBuf *f)
{
    return voBufIsFull(f) ? NULL: f->data + f->write;
}
#else
INCLUDE_ASM("asm/nonmatchings/movie/pss_vobuf", voBufGetData);
#endif

int voBufIsEmpty(VoBuf *f)
{
    return f->count == 0;
}

#ifdef NON_MATCHING
VoTag* voBufGetTag(VoBuf *f)
{
    return voBufIsEmpty(f) ? NULL : f->tag + ((f->write - f->count + f->size) % f->size);
}
#else
INCLUDE_ASM("asm/nonmatchings/movie/pss_vobuf", voBufGetTag);
#endif

void voBufDecCount(VoBuf *f)
{
    if (f->count > 0)
    {
        f->count--;
    }
}
