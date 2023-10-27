#include<iostream>
using namespace std;

class employee{
	protected:
		int salary;
};

class employee1:public employee{
	public:
		int bonus;
		void setsalary(int s){
			salary=s;
		}
		int getsalary(){
			return salary;
		}
}; 

int main(){
	employee1 myobj;
	myobj.setsalary(4893);
	myobj.bonus=83423;
	cout<<"salary"<<myobj.getsalary()<<myobj.bonus;
}
