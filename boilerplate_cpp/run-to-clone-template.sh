## This script is to make a new C++ workspace with user-supplied name
## by cloning from a seed template.
#!/bin/zsh

function generate_template_cpp() {
	local TEMPLATE_PATH="$HOME/.custom-scripts/boilerplate_cpp/template"
    local WORKSPACE_NAME=${1:-template-cpp}

	## If workspace NOT already exists, create it:
	if [ ! -d "$WORKSPACE_NAME" ]; then
		mkdir "$WORKSPACE_NAME"
		cp -r $TEMPLATE_PATH/. $WORKSPACE_NAME/
    	else echo "ERROR: WORKSPACE ALREADY EXISTS."
    	fi

    	## Navigate into the new workspace
    	cd "$WORKSPACE_NAME"
}
alias newcpp=generate_template_cpp
