#include<iostream>
using namespace std;

class myclass{
	public:
		string model;
		string brand;
		int year;
		myclass(string x,string y,int z){
			brand=x;
			model=y;
			year=z;
		}
		~myclass(){
			cout<<"ddestru";
		}
};

int main(){
	myclass myobj1("hi","hell",43);
	myclass myobj2("ji","gui",42);
	
	cout<<myobj1.brand;
}
