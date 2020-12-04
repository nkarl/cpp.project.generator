#!/bin/sh


#######################################################################
##                                                                   ##
##  SHELL SCRIPT: TO GENERATE C++ WORKSPACE FOLDER FROM TEMPLATE     ##
##                                                                   ##
#######################################################################

    ###################################################################
    ##  HEADER                                                       ##
    ###################################################################
    echo "\n>>>> C++ WORKSPACE GENERATOR\
	~~~~~~~~~~~~~~~~~~~~~~~~\
	~~~~~~~~~~~~~~~~~~~~~~~~\n"



	###############################################################
	##  START OF SCRIPT:                                         ##
	###############################################################

	## CHECK THIS FIRST:
	##
    	## If .dev/.devscripts/ has not already existed, create it:
	## prompt for this system's username:
	echo "Hello! Hello! Enter your username:"
	read user

#    	script_path="/home/$user/.dev"
#    	if [ ! -d $script_path ]; then
#		mkdir "$script_path" && mkdir "$script_path/.devscripts"
#	fi

	## path to template:
	templ_path="/home/$user/.dev/.devscripts/boilerplate_cpp/templ_workspace"

	## prompt the user to enter name of workspace:
	echo ">>>> Hello, hello! Enter name of the workspace to be created: "
	read string

	## If workspace NOT already exists, create it:
	if [ ! -d "$string" ]; then
		mkdir "$string"
		cp -r $templ_path/. $string/
    	else echo "ERROR: WORKSPACE ALREADY EXISTS."
    	fi

    	## Navigate into the new workspace
    	cd "$string"

	###############################################################
	##  END OF SCRIPT.                                           ##
	###############################################################
