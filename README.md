
# TEMPLATE PACKAGE FOR TESTING & DEVELOPING IN C++ ON LINUX/WSL

	VERSION 0.5.1 	Added Makefile support for clang++.
			Updated the parser template to version 1.2.0.

	VERSION 0.5.0


## Description

This package contains a bash script that generates a chain of directories in the current user's home
folder in Linux. Then, the script copies the template and its generator script into the newly created
directory (if it has not already been created).

*NOTE: This package only supports Linux and WSL.*

### 1. GNU Make compliant project template
The template project folder is a standard C++ folder with separate directories for source code, headers,
and compiled objects, as well as `Makefile` with support for both `g++` and `clang++`.

`$ make` is default to compile with gcc but user can choose the compiler as needed.

To compile with `gcc`:
	
	$ make CXX=g++

To compile with `clang`:

	$ make CXX=clang++


### 2. Test-driven development & debugging policy
All test code should be itemized and encapsulated in invidiual lambda functions as shown in the template.
This has the benefit of fast deduction in case a bug is found.

### 3. Useful template
In the `hdr/module/` directory, there is a useful template for parsing data from `*.csv` files.

The parsed data remain as strings that can be further processed into real operating data. This can be
done with a simple implementation of the template member function `rawToRealDatum()`.


## Installation & Update

Simply run the `updater.sh` script. You need to give it permission if installing for the first time:
	
	chmod +x updater.sh

The resulting directory is placed here:

	/home/user/
		 |__ .dev/
		        |__ .devscripts/
			              |__ boilerplate_cpp/
				                        |__ boilerplate-cpp.sh
							|__ tmpl_workspace/
	
*NOTE:* `user` *is your Linux username.*

*Since I am still learning about RegEx and still not sure how to append* `alias` *to `.bashrc` safely
once at installation, I opted for a manual edit, as shown below.*

At this time, you must manually put an `alias` in your `.bashrc` file in order for this to work as
intended. Copy and paste the following snippet to the end of your `.bashrc`:

	## Allows typing `newcpp` into the terminal to generate a new C++ workspace:
	alias newcpp="~/.dev/.devscripts/boilerplate_cpp/boilerplate-cpp.sh"

Finally, grant permission to execute to the script:

	chmod +x ~/.dev/.devscripts/boilerplate_cpp/boilerplate-cpp.sh && source ~/.bashrc

You now can type in `newcpp` to generate a new project folder. The folder will be created inside
the directory the user is currently in.
