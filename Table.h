/** @file Table.h */
#include <iostream>
#include <cstdlib>
#include <fstream> // for file I/O 
#include <stdio.h>
#include <string.h>
#include <map>
#include <list>

using namespace std;

const int MAX_LIST = 100;

class Table{
public:
   Table();
   void tableInsert(char* k, char* v1,  char* v2,  char* v3);  
   void traverseTable();
   void tableDelete(char* k);
   void tableRetrieve(char* k);
private:
	map<int, std::list<string> > mapMovie;

};