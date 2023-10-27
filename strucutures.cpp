#include<iostream>
using namespace std;
int main(){
	

struct{ 
	string model;
	string brand;
	int year;
}mycar1,mycar2;

mycar1.model="hi";
mycar1.brand="hello";
mycar1.year=1999;

mycar2.model="dfi";
mycar2.brand="lo";
mycar2.year=1999;

cout<<mycar1.model<<" "<<mycar1.brand<<" "<<mycar1.year<<endl;
cout<<mycar2.model<<" "<<mycar2.brand<<" "<<mycar2.year<<endl;}
