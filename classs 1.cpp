#include<iostream>
using namespace std;
class myclass{
	public:
		void mymethod();
};

void myclass::mymethod(){
	cout<<"hi";
}
int main(){
	myclass myobj;
	myobj.mymethod();}
