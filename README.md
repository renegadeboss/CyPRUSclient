CyPRUSclient
============

Device side network code for Project: CyPRUS

README

Installation Stuff:
1) Install expat 
2) Install exiv2

Stand Alone Demo:
1) make all
2) ./server &
3) ./netexample 127.0.0.1 <image> 

To integrate into your own code:

To use the cyprus client code in your code:

 	#include "cyprus_client.h"
 
 When compiling, use -lm -lexiv2 

