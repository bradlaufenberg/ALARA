================
Installing ALARA
================

Requirements
============

	ALARA is written primarily in C++ with one or two 
	FORTRAN77 routines. All development is done with the 
	GNU C++ and FORTRAN compilers and it has been tested 
	and is known to work on Linux and Solaris. 
	Installing ALARA requires both a C++ and a FORTRAN 
	compiler. 

Installation Process
====================

1.  Obtain the distribution from the appropriate source.

2.  Unpack the distribution::

	gunzip -c alara-2.7.1.tar.gz | tar xf -

3.  Go to newly created directory::

	cd alara-2.7.1

4.  Configure ALARA for your system (See below for options 
    that you can give to configure.)::

	./configure

5.  Build the application::

	make

6.  Install the application::

	make install


Installation Options
====================

The configure program provides a lot of options for customizing 
the compilation and installation of ALARA. To learn more about 
the full set of options, you should check the built-in help:
::

	./configure --help

Some common options are listed here: 

::

	--prefix=/your/path/here 

This option allows you to change the default location for the 
installation of ALARA and its accompanying files. The next 
section describes the different files that are installed and 
the directories in which they are installed. More control 
over the specific directories is also possible - see the 
built-in help for more information.

::

	CXX=name_of_your_C++_compiler
	F77=name_of_your_F77_compiler 

This option allows you to explicitly specify which C++ (or 
FORTRAN) compiler you want to use to compile ALARA. If left
out, configure will search for default compilers.

Intalled files and directories
==============================

 When installing ALARA, a number of files and directories are 
 installed in a number of different places. This section
 summarizes these directories which are all subdirectories of
 the "prefix" directory described above.

	**bindir** - prefix/bin 

	The following files are placed in this directory: 

	* alara - the main application 
	* dant2alara - a utility for converting DANTSYS 
	  rtflux/atflux files to a format suitable for ALARA 
	* summary - a Perl utility for extracting summaries 
	  of ALARA output files 
	* extract_pathways - a Perl utility for extracting 
	  pathways from ALARA tree files 

	**datadir** - prefix/share/alara/data 

	This directory contains the following machine-independent 
	files (generally ASCII text files). 

	* ANS6_4_3.txt - Data for implementing contact dose based 
	  on standard ANS6.4.3. 
