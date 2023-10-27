#include<iostream>
using namespace std;

void myfunc(string me, int age){
	cout<<me<<age<<endl;;
}
int main()
{
	myfunc("hello",45);
	myfunc("hi",89);
	return 0;
}
