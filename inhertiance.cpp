#include<iostream>
using namespace std;

class employee{
	private:
		int salary;
	public:
		void setsalary(int s){
			salary=s;
		}
		int getsalary(){
			return salary;
		}
};

int main(){
	employee myobj;
	myobj.setsalary(43234);
	cout<<myobj.getsalary();
}
