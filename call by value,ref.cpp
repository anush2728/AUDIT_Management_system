#include<iostream>
using namespace std;

void swapnum1(int x , int y){
	int z=x;
	x=y;
	y=z;
}

void swapnum2(int &x , int &y){
	int z=x;
	x=y;
	y=z;
}

int main(){
	int firstnum=10;
	int secondnum=20;
	
	cout<<"call by value";
	cout<<"before swap"<<endl<<firstnum<<secondnum;
	
	swapnum1(firstnum,secondnum);
	
	cout<<"After swap"<<endl<<firstnum<<secondnum;
	
		cout<<"call by reference";
	cout<<"before swap"<<endl<<firstnum<<secondnum;
	
	swapnum2(firstnum,secondnum);
	
	cout<<"After swap"<<endl<<firstnum<<secondnum;

}
