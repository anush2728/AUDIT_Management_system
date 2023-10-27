#include<iostream>
using namespace std;

class myclass{
	public:
		void myfunc(){
			cout<<"hello";
		}
};

class myclass1{
	public:
		void myfunc2(){
			cout<<"hi ";
		}
};

class otherclass:public myclass,public myclass1{
};

int main(){
	otherclass myobj;
	myobj.myfunc();
	myobj.myfunc2();
	return 0;
}
