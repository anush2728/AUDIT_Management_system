#include<iostream>
using namespace std;

void myfunc(string fname="dfd"){
	cout<<fname<<endl;
}

int main(){
	myfunc("hi");
	myfunc("hello");
	myfunc();
	return 0;
}
