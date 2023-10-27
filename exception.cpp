#include<iostream>
using namespace std;
int main(){
	try{
		int age=20;
		if(age>=18){
		cout<<"access grandted";
		}
		else{
			throw(age);
		}

	}
	
catch(...){
	cout<<"access denied";

}
}

