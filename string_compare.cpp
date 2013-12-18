#include <iostream>
#include <cstdlib>
#include <sstream>
#include <string>

using namespace std;
int main(int argc, char *argv[]){        

	string str1 = "fffffe98d0963d27015c198262d97221";
	string str2 = "fffffe98d0963d27015c198262d97222";
	cout <<"strcmp(str1, str2) = " <<strcmp(str1.c_str(), str2.c_str())<<endl;
}