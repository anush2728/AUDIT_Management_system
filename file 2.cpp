#include<iostream>
#include<fstream>

int main(){

using namespace std;

string mytext;

ifstream myreadfile("helo.txt");

while(getline(myreadfile,mytext)){
	cout<<mytext;
}

myreadfile.close();}
