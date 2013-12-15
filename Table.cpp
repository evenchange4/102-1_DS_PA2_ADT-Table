#include "Table.h"  // header file
#include <sstream>
#include <list>
#include <map>

Table::Table()
{
}  // end default constructor

void Table::tableInsert(char* k, char* v1,  char* v2,  char* v3)
{
    // std::stringstream ss(k);
    // int i;
    // ss >> i;

    mapMovie[k].push_back(v1);  
    mapMovie[k].push_back(v2);  
    mapMovie[k].push_back(v3);  

}  // end tableInsert

void Table::traverseTable()
{
    map<int, list<string> >::iterator it; 
    list<string>::iterator ii;

    for(it=mapMovie.begin(); it!=mapMovie.end(); ++it){ 

        cout<<(*it).first<<" { ";
        for(ii = (*it).second.begin(); ii!=(*it).second.end(); ++ii){
            cout<<(*ii)<<", ";
        }
        cout << " }" << endl;                   
    }
}

void Table::tableDelete(char* k){
    std::stringstream ss(k);
    int i;
    ss >> i;
    mapMovie.erase(i);  
}

void Table::tableRetrieve(char* k){
    std::stringstream ss(k);
    int i;
    ss >> i;

    map<int, list<string> >::iterator it; 
    list<string>::iterator ii;
    it = mapMovie.find(i);
    for(ii = (*it).second.begin(); ii!=(*it).second.end(); ++ii){
        cout<<(*ii)<<", ";
    }
}