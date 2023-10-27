#include<iostream>
using namespace std;
int main(){
	string firstname="john";
	string lastname="doe";
	string fullname=firstname.append(lastname);
	cout<<fullname;
	cout<<fullname.length();
	cout<<fullname.size();
	cout<<fullname[2];
}
