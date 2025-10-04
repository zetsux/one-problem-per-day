#!/usr/bin/env bash
set -e

if [ $# -lt 3 ]; then
  echo "Usage: ./new.sh <PLATFORM> <PROBLEM> <EXT>"
  exit 1
fi

PLATFORM=$1
PROBLEM=$2
EXT=$3

make new PLATFORM="$PLATFORM" PROBLEM="$PROBLEM" EXT="$EXT"
