#include <sstream>
#include <list>
#include <map>
#include <iomanip>
#include "Table.h"  // header file

Table::Table()
{
}

void Table::tableInsert(string k, string v1,  string v2,  string v3)
{
    map<string, list<string> >::iterator it; 
    list<string>::iterator ii;
    it = mapMovie.find(k);

    if ( it == mapMovie.end() ) {
        mapMovie[k].push_back(v1);  
        mapMovie[k].push_back(v2);  
        mapMovie[k].push_back(v3);  

    } else {
        cout << endl << "This movie is already in the Table. "<< endl;
    }
}

void Table::traverseTable()
{
    map<string, list<string> >::iterator it; 
    list<string>::iterator ii;

    for(it=mapMovie.begin(); it!=mapMovie.end(); ++it){ 

        cout<<(*it).first<<" { ";
        for(ii = (*it).second.begin(); ii!=(*it).second.end(); ++ii){
            cout<<(*ii)<<", ";
        }
        cout << " }" << endl;                   
    }
}

void Table::tableDelete(string k){
    map<string, list<string> >::iterator it; 
    list<string>::iterator ii;
    it = mapMovie.find(k);

    if ( it == mapMovie.end() ) {
        cout << endl << "This movie is not found in the Table. "<< endl;
    } else {
        cout << endl << "Remove ";
        for(ii = (*it).second.begin(); ii!=(*it).second.end(); ++ii){
            cout<<(*ii)<<" ,";
        }
        mapMovie.erase(k);
    }
}

void Table::tableRetrieve(string k){
    map<string, list<string> >::iterator it; 
    list<string>::iterator ii;
    it = mapMovie.find(k);

    if ( it == mapMovie.end() ) {
        cout << "not found \n";
        cout << endl << "This movie is not found in the Table. "<< endl;

    } else {
        for(ii = (*it).second.begin(); ii!=(*it).second.end(); ++ii){
            cout<<(*ii)<<" ,";
        }
    }
}