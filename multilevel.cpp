#include<iostream>
using namespace std;

class myclass{
	public:
		void myfunc(){
			cout<<"hi";
		}
};

class class1:public myclass{
	public :
     void myfunc1(){
	
	cout<<"hello";}
};

class class2:public class1
{
	public:
	void myfunc2(){
	
	cout<<"jfsf";}
};

int main(){
	class2 myobj;
	myobj.myfunc();
	myobj.myfunc1();
	myobj.myfunc2();
	return 0;
}
