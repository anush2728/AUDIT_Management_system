#include<iostream>
#include<fstream>
using namespace std;
int main(){
	
	ofstream myfile("helo.txt");
	
	myfile<<"this is the file ";
	
	myfile.close();
}
