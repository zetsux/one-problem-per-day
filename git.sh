#!/usr/bin/env bash
set -e

if [ $# -ne 1 ]; then
  echo "Usage: ./git.sh <NUMBER>"
  exit 1
fi

NUM=$1

# Validate number
if ! [[ "$NUM" =~ ^[0-9]+$ ]]; then
  echo "Error: NUMBER must be an integer"
  exit 1
fi

# Determine ordinal suffix
if (( NUM % 100 >= 11 && NUM % 100 <= 13 )); then
  SUFFIX="th"
else
  case $((NUM % 10)) in
    1) SUFFIX="st" ;;
    2) SUFFIX="nd" ;;
    3) SUFFIX="rd" ;;
    *) SUFFIX="th" ;;
  esac
fi

ORDINAL="${NUM}${SUFFIX}"
BRANCH="task/add-${ORDINAL}-problem"
MESSAGE="feat: add ${ORDINAL} problem"

echo "Executing Git commands..."
git checkout -b "$BRANCH"
git add .
git commit -m "$MESSAGE"
git push -u origin "$BRANCH"
