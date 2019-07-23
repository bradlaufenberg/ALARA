=======================================
Acquiring and Installing Data for ALARA
=======================================

Data Formats
============



Format Conversion
=================

	When looking up and retrieving data, ALARA uses its own 
	binary data format exclusively. This requires coversion 
	from the above native data formats to the ALARA v2 
	format. Although a problem can be setup whereby ALARA 
	is told to use data in a native format, the 
	implementation of this simply performs the conversion at 
	the beginning of the run and throws away the converted 
	library at the end. It is best to use ALARA separately 
	to quickly create an ALARA v2 binary library and then 
	install that library for future direct use by ALARA.

	A library can be converted by simply running ALARA with 
	an input file that contains only the 
	:doc:`convert_lib <usersguide/inputtext>` input token.

Cross-Section Installation
==========================

	Once nuclear data has been processed into its ALARA v2 
	binary form, it can be installed in the default location 
	for access by alara: prefix/lib/alara/$OSTYPE. (See the 
	:doc:`installation guide <installguide>` for more on 
	the directory structure.) If not placed in this location, 
	data is searched for either in the path defined by the 
	environment variable $ALARA_XSDIR or in the current 
	working directory. 

Specific Data Packages
======================

	The following links contain information for processing 
	supported files from specific data packages avaiable 
	through standard services, primarily 
	`RSICC <https://rsicc.ornl.gov/>`_ and the NEA Databank. 

		1. D00183 - FENDL 2.0 
