# Pythonisator
 I'm just having fun, writing something that 99% of the time is unnecessary and not entirely working.
This miracle is written entirely in C++, I’m just registering my skills. 09/08/2023->23:53

Installition help:
This is Pythonisator, a set of header files to be included in the project, they are needed to turn C++ into Python, well, almost... 
To access Pythonisator you need to throw the header files into the project folder and include them via #include, and for faster writing and more realism I recommend adding namespaces. Example:
Step 1: Copy all header files - C:\<...>\YourProjectDirectory\print.h, str_equals.h, definer.h, filestream.h;
Step 2: include file in project - 
#include "definer.h"
#include "print.h"
#include "str_equals.h"
#include "filestream.h";
Step 3(Optional): add using namespace to file - 
using namespace Pythonisator_print; using namespace Pythonisator_equals; using namespace Pythonisator_filestream;
Example(with step 3): print("Hello world!"); equals(str1, str2); read_file(filpath, data);
Example(without step 3): Pythonisator_print::print("Hello world"); Pythonisator_equals::equals(str1, str2); Pythonisator_filestream::read_file(filepath, data);
Something like this. Enjoy!
