#!/bin/bash

# this script runs in the GitHub action to upload the report to silenthillmuseum.org.

gzip --keep build/$SERIAL/report.json
report_status=$(curl -f \
    -X POST "https://silenthillmuseum.org:666/upload-progress?serial=$SERIAL" \
    -H "Content-Type: application/json" \
    -H "Content-Encoding: gzip" \
    -H "x-api-key: $PROGRESS_API_KEY" \
    --data-binary @build/$SERIAL/report.json.gz)
echo "report status: $report_status"
echo "REPORT_STATUS=$report_status" >> "$GITHUB_ENV"
