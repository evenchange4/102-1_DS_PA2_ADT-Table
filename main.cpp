#include "Table.h"  // header file
#include <iostream>
#include <cstdlib>
#include <fstream>  // for file I/O 
#include <stdio.h>
#include <string.h>
#include <sstream>

using namespace std;

int main(){        
    // ################### file IO ###################
    ifstream fin("u.item", ifstream::in );

    // ################### file parse ###################
	char *movie_id;
	char *movie_title;
	char *release_date;
	char *IMDb_URL;
	char *genres;
	char m;
    string line;
	char str[20];
	Table t;
    // ################### init insert ###################
	while(getline(fin, line)){
		strcpy(str, line.c_str());

		movie_id     = strtok(str,  "|");
		movie_title  = strtok(NULL, "|");
		release_date = strtok(NULL, "|");
		IMDb_URL     = strtok(NULL, "|");
		genres       = strtok(NULL, "\n");

		t.tableInsert(movie_id, movie_title, release_date, IMDb_URL);
	} 
    fin.close();

	int act;

	while(1){
		cout <<"\n Actions: 1. Movie Insert 2. Movie Remove 3. Movie Retrieve 4. Movie Traverse 5. Exit \n" << endl;  
		cout << " Enter your action: "<< endl;         
		cin >> act; 
		switch(act){ 
			case 1: 
				cout <<"Enter an movie id: ";
				cin >> movie_id;
				cout <<"Enter an movie title: ";
				cin >> movie_title;
				cout <<"Enter an release date: ";
				cin >> release_date;
				cout <<"Enter an IMDb URL: ";
				cin >> IMDb_URL;		
				t.tableInsert(movie_id, movie_title, release_date, IMDb_URL);
                break; 
        	case 2: 
				cout <<"Enter an movie id: ";
				cin >> movie_id;
				t.tableDelete(movie_id);
                break;
        	case 3: 
				cout <<"Enter an movie id: ";
				cin >> movie_id;
				t.tableRetrieve(movie_id);
                break;
        	case 4: 
       			t.traverseTable();
            	break;   
        	case 5: 
			    cout << endl << endl << "Quitting..." << endl << endl;
				cout << endl << endl << "Goodbye. Press the [ENTER] key to exit. ";
			    cin.ignore();
			    cin.get();
	   			return 0;
       } 
   }

   return 0;
}