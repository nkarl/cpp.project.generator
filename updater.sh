#!/bin/bash
DIR="$(cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
echo "Enter your username: "
read username

hm="/home/$username"
dev="$hm/.dev"
dscript="$dev/.devscripts"
wspath="$dscript/boilerplate_cpp"

rm -r $wspath/
cp -r "$DIR/workspace.cpp/." $wspath/
