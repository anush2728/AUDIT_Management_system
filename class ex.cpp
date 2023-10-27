#include<iostream>
using namespace std;

class myclass{
	public:
		int mynum;
		string mystring;
};

int main(){
	myclass myobj;
	
	myobj.mynum=15;
	myobj.mystring="hello";
	
	cout<<myobj.mynum<<myobj.mystring;
}
