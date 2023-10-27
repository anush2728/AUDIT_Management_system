#include<iostream>
using namespace std;
int findpower(int base,int power)
{
	if(power==0)
	return 1;
	else 
	return(base * findpower(base,power-1));
}
int main(){
	int base;
	int power;
	cin>>base;
	cin>>power;
	cout<<findpower(base,power);
	return 0;
}
