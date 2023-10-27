#include<iostream>
#include<math.h>
using namespace std;

/*int main(){
	int a,b,c,det,r1,r2,i,r;
	cout<<"enter coefficient a,b,c:";
	cin>>a>>b>>c;
	det=(b*b)-(4*a*c);
	if(det>=0){
		r1=(-b+sqrt(det))/2*a;
		r2=(-b-sqrt(det))/2*a;
		cout<<"square roots are:"<<r1<<" "<<r2;
	}
	else{
		r=-b/(2*a);
		i=sqrt(-det)/(2*a);
		cout<<"square roots are "<<r<<"+"<<i<<"i"<<r<<"-"<<i<<"i";
		return 0;
	}
}*/

/*void function(int x,int y=20){
	cout<<"value of x:"<<x;
	cout<<"value of y:"<<y;
	cout<<"sum of x and y"<<x+y;
}
int main(){
	int x,y;
	cout<<"enter the two  x and y:";
	cin>>x>>y;
	cout<<"values and sum:(without defualt arguments)";
	function(x,y);
	cout<<"values and sum:(with default arguments)";
	function(x);
	return 0;
	
}*/

/*class complex{
	int a,b,c;
	public:
		complex(int a1,int b1){
			a=a1;
			b=b1;
		}
		void operator ++(){
			a=++a;
			b=++b;
		}
		void operator --(){
			a=--a;
			b=--b;
		}
		void display(){
			cout<<a<<"+"<<b<<"i"<<endl;
		}
};
int main()
{
	complex obj(20,15);
	++obj;
	cout<<"increment complex number";
	obj.display();
	--obj;
	cout<<"decrement complex number";
	obj.display();
	return 0;
	
}*/


//binary operator
/*class complex{
	int a,b;
	public:
		
	void getdata(){
		cout<<"enter the value of complex numbers a,b:";
		cin>>a>>b;
	}	
	complex operator+(complex ob){
		complex t;
		t.a=a+ob.a;
		t.b=b+ob.b;
		return (t);
	}
	complex operator-(complex ob){
		complex t;
		t.a=a-ob.a;
		t.b=b-ob.b;
		return (t);
	}
	void display(){
		cout<<a<<"+"<<b<<"i"<<endl;
	}
	
};

int main(){
	complex obj1,obj2,result,result1;
	obj1.getdata();
	obj2.getdata();
	
	result=obj1+obj2;
	result1=obj1-obj2;
	
	cout<<"input values";
	
	obj1.display();
	obj2.display();
	
	cout<<"resuult";
	
	result.display();
	result1.display();
}*/

//paramaterized constructor
/*class car{
	public:
		string brand;
		string model;
		int year;
		car(string x,string y,int z){
			brand = x;
			model = y;
			year = z;
		}
};
int main(){
	car carobj1("bmw","x7",1999);
	car carobj2("audi","97",2999);
	
	cout<<carobj1.brand<<" "<<carobj1.model<<" "<<carobj1.year<<endl;
	cout<<carobj2.brand<<" "<<carobj2.model<<" "<<carobj2.year<<endl;
	
}*/

//destructor

/*class employee{
	public:
		employee(){
			cout<<"constructor invoked"<<endl;
		}
		~employee(){
			cout<<"destructor invoked"<<endl;
		}
};

int main(){
	employee obj1;
	employee obj2;
}*/


//friend function
class box{
	private:
		int length;
	public:
		box():length(0){
		}
		friend int printlength(box);
};

int printlength(box b)
{
	b.length +=10;
	return b.length;
}
int main(){
	box b;
	cout<<"length of the box"<<printlength(b)<<endl;
	return 0;
}*/

//friend class add two members of different classes
class classB;
class classA{
	public:
		classA():numA(12){
		}
		
	private:
		int numA;
		friend int add(classA,classB);
};

class classB{
	public:
		classB():numB(1){
		}
	private:
		int numB;
		friend int add(classA,classB);
};

int add(classA objectA,classB objectB){
	return(objectA.numA+objectB.numB);
}
int main(){
	classA objectA;
	classB objectB;
	cout<<"sum"<<add(objectA,objectB);
}

//matrix multiplication

class matrixmul{
	private:
		int arr1[10][10],arr2[10][10],arr3[20][20];
		int i,j,k,r1,r2,c1,c2;
	public:
		void input(){
			cout<<"enter the rows and columns:"<<endl;
			cin>>r1>>c1;
			cout<<"enter the rows and columns for matrix 2:"<<endl;
			cin>>r2>>c2;
			cout<<"enter the values for matrix 1";
			for(i=0;i<r1;i++){
				for(j=0;j<c1;j++){
					cin>>arr1[i][j];
					
				}
			}
		    cout<<"enter the value for matrix 2";
		    for(i=0;i<r2;i++){
		    	for(j=0;j<c2;j++){
		    		cin>>arr2[i][j];
				}
			}
		}
	void show(){
		cout<<"matrix 1";
			for(i=0;i<r1;i++){
				for(j=0;j<c1;j++){
					cout<<arr1[i][j];
					
				}
			}
		    cout<<"matrix 2";
		    for(i=0;i<r2;i++){
		    	for(j=0;j<c2;j++){
		    		cout<<arr2[i][j];
				}
			}
		
	}
	void multiplication(){
		if(c1=r2){
			for(i=0;i<r1;i++){
				for(j=0;j<r2;j++){
					arr3[i][j]=0;
					for(k=0;k<c1;k++){
					arr3[i][j]+=arr1[i][j]*arr2[k][j];
				}
			}
			
		}}
	else
	
	cout<<"rows and columns do not match:";
	}
	void output(){
	cout<<"resultant matrix"<<endl;
	if(c1=r2){
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				cout<<arr3[i][j]<<" ";
			}
		}
	}
	
}
};

int main(){
	matrixmul m;
	m.input();
	m.show();
	m.multiplication();
	m.output();
	return 0;
}*/
