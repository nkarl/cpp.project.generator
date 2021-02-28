#!/bin/sh


#######################################################################
##                                                                   ##
##  SHELL SCRIPT: TO GENERATE C++ WORKSPACE FOLDER FROM TEMPLATE     ##
##                                                                   ##
#######################################################################

    ###################################################################
    ##  HEADER                                                       ##
    ###################################################################


	###############################################################
	##  START OF SCRIPT:                                         ##
	###############################################################

	## CHECK THIS FIRST:

	## path to template:
function generate_template_cpp() {
	local TEMPLATE_PATH="$HOME/.custom-scripts/boilerplate-cpp/template-workspace"
    local WORKSPACE_NAME

    echo "\n\tC++ WORKSPACE GENERATOR-------------------------------------------------"
	## prompt the user to enter name of workspace:
	echo "\tWhat is the name of this workspace? "
	read $WORKSPACE_NAME

	## If workspace NOT already exists, create it:
	if [ ! -d "$WORKSPACE_NAME" ]; then
		mkdir "$WORKSPACE_NAME"
		cp -r $TEMPLATE_PATH/. $WORKSPACE_NAME/
    	else echo "ERROR: WORKSPACE ALREADY EXISTS."
    	fi

    	## Navigate into the new workspace
    	cd "$WORKSPACE_NAME"
}
	###############################################################
	##  END OF SCRIPT.                                           ##
	###############################################################
