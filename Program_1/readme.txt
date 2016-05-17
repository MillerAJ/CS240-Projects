CS240 Data Structures
Spring Semester 2016
Program1 READMEFILE

Due Date: 2/24/16
Submission Date: 2/24/16
Author(s): Alex Miller
email(s): amille31@binghamton.edu

PURPOSE:
	Continue with C++ I/O and text processing, and you will begin to utilize slightly more comple data structures to store information. In particular, you will implement a singly linked list container to store, manipulate, and save stories found in text files.

PERCENT COMPLETE:
	80%?
	
PARTS THAT ARE NOT COMPLETE:
	Update function is incomplete
	no Close function()

BUGS:
	Used LinkList<User*> for MovieChart's linked list and LinkList<std::string> for User's linked list
	having one as a pointer and one as a regular variable created a problem with my LinkList destructor
	needed specialized destructors, couldnt figure it out...
		

FILES:
	main.cpp, LinkList.h, LinkList.cpp, User.cpp, User.h, MovieChart.h, MovieChart.cpp, makefile, readme.txt

SAMPLE OUTPUT:
	"Please enter a command (Create, Update, View, Login, Logout, or Quit):"

TO RUN:
	make Program1
	./Program1

EXTRA CREDIT:
	N/A

BIBLIOGRAPHY:
	N/A

MISCELLANEOUS:
	N/A
