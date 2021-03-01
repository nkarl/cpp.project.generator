#!/usr/bin/sh
#
## this captures the current location where the new clone is to be placed in.
#DIR="$(cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
DIR=$PWD

SCRIPT_PATH="$HOME/.custom-scripts/boilerplate-cpp"

if [ -d "$SCRIPT_PATH" ]; then
    rm -r "$SCRIPT_PATH/"
elif [ ! -p "$SCRIPT_PATH" ]; then
    mkdir -p $SCRIPT_PATH;
fi

cp -r "$DIR/boilerplate-cpp/." $SCRIPT_PATH

## NEED TO FIND A WAY TO APPEND THE FUNCTION AND ALIAS FLOW TO THE FUNCTION SCRIPT
