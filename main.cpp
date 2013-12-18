#include <iostream>
#include <cstdlib>
#include <fstream>
#include <stdio.h>
#include <sstream>
#include <string>
#include <iomanip>
#include "Table.h"  // header file

using namespace std;

int main(int argc, char *argv[]){        

    // ################### file IO ###################
    ifstream fin(argv[1], ifstream::in );

    // ################### file parse ###################
	string movie_id, movie_title, release_date, IMDb_URL, genres;
    string line;
	char str[20];
    // ################### init insert ###################
	Table t;
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
   		cout << endl << endl << setw(45) << "MAIN MENU" << endl << endl;
		cout << setw(20) << "1. " << "Movie Insert" << endl;
		cout << setw(20) << "2. " << "Movie Remove" << endl;
		cout << setw(20) << "3. " << "Movie Retrieve" << endl;
		cout << setw(20) << "4. " << "Movie Traverse" << endl;
		cout << setw(20) << "5. " << "Exit" << endl;
		cout << endl << "Enter the NUMBER of your choice: ";

		cin >> act; 
		switch(act){ 
			case 1: 
				cout <<"Enter an movie id: ";
				getchar();getline(cin, movie_id);
				cout <<"Enter an movie title: ";
				getline(cin, movie_title);
				cout <<"Enter an release date: ";
				getline(cin, release_date);
				cout <<"Enter an IMDb URL: ";
				getline(cin, IMDb_URL);		
				t.tableInsert(movie_id, movie_title, release_date, IMDb_URL);
				cout << endl << endl << setw(45) << "INSERTING A MOVIE..." << endl << endl;
                break; 
        	case 2: 
				cout <<"Enter an movie id: ";
				getchar();getline(cin, movie_id);
				t.tableDelete(movie_id);
				cout << endl << endl << setw(45) << "DELETING A MOVIE..." << endl << endl;
                break;
        	case 3: 
				cout <<"Enter an movie id: ";
				getchar();getline(cin, movie_id);
				cout << endl << endl << setw(45) << "SEARCHING A MOVIE..." << endl << endl;
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
	   		default:
	   			cout << endl << "Please select a number between 1 and 5: ";
       } 
   }

   return 0;
}