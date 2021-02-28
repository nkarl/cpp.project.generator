#!/bin/bash
DIR="$(cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"

SCRIPT_PATH="$HOME/.custom-scripts/boilerplate-cpp/"

if [ ! -p "$SCRIPT_PATH" ]; then
    mkdir -p $SCRIPT_PATH;
fi

cp -r "$DIR/workspace.cpp/." $SCRIPT_PATH
