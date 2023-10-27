#include<iostream>
using namespace std;

int findpower(int base, int power){
	if(power==0){
		return 1;
	}
	else {
		return (base* findpower(base,power-1));
	}
}
int main(){
     cout<<findpower(2,3);
	
}
