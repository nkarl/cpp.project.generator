#!/bin/bash
DIR="$(cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"

SCRIPT_PATH="$HOME/.custom-scripts/boilerplate_cpp"

if [ -d "$SCRIPT_PATH" ]; then
    rm -r "$SCRIPT_PATH/"
elif [ ! -p "$SCRIPT_PATH" ]; then
    mkdir -p $SCRIPT_PATH;
fi

cp -r "$DIR/boilerplate_cpp/." $SCRIPT_PATH

## NEED TO FIND A WAY TO APPEND THE FUNCTION AND ALIAS FLOW TO THE FUNCTION SCRIPT
