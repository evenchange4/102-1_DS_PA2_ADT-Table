/** @file Table.h */
#include <iostream>
#include <cstdlib>
#include <fstream> // for file I/O 
#include <stdio.h>
#include <string.h>
#include <map>
#include <list>

using namespace std;

class Table
{
public:
   Table();
   void tableInsert(string k, string v1,  string v2,  string v3);  
   void traverseTable();
   void tableDelete(string k);
   void tableRetrieve(string k);
private:
	map<string, std::list<string> > mapMovie;
};