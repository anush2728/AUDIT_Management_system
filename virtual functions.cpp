#include<iostream>
using namespace std;

class Batsman{
	public:
		virtual void specialshot(){
			cout<<"specialshot";
		}
};

class kholi:public Batsman{
public:
		void specialshot(){
			cout<<" drive specialshot";
		}
};

class dhoni:public Batsman{
public:
		void specialshot(){
			cout<<" heli specialshot";
		}
};

int main(){
	dhoni myobj1;
	kholi myobj2;
	
	Batsman* batsman1=&myobj1;
	Batsman* batsman2=&myobj2;
	
	batsman1->specialshot();
	batsman2->specialshot();
}
