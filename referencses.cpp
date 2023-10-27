#include<iostream>
using namespace std;
int main(){
	string food="pizza";
	string &meal=food;
	cout<<&meal;
	cout<<&food;
}
