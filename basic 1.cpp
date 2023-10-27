#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
//int main()
//{
	/*int x=5;//2 or 4 bytes
	char y='d';//1 byte
	double z=7.99;//double is 8 bytes
	                float is 4 bytes
	                float precision is only 6 or 7 decimal while double is 15 digits
	string w="hello";
	bool b=true;// 1byte
	cout<<x<<endl<<y<<endl<<z<<endl<<w<<endl<<b;*/
	
	/*int x,y,z;
	x=y=z=50;
	cout<<x+y+z;*/
	
	/*const int h=50;
	cout<<h;*/
	
	/*bool laptopcostmore=true;
	bool mobilecostmore=false;
	cout<<laptopcostmore<<endl<<mobilecostmore;*/
	
	//ASCII values
	//char a=78 , b=90 , c=89;
//	cout<<a<<b<<c;
	
	/*string k="dell";
    cout<<k;*/
    
    //Arithmetic operator
    /*int x=5;
    --x;
    cout<<x;
    return 0;*/
    
    //Assignment operator
   /* int x=45,y=34,z=78,a=56,b=54,c=90,d=92,e=94,f=32,g=2;
    x+=7;
    y-=6;
    z*=4;
    a/=8;
    b%=3;
    c&=3;
    d|=3;
    e^=3;
    f>>=2;
    g<<=4;
    
    cout<<x<<endl<<y<<endl<<z<<endl<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl<<f<<endl<<g<<endl;*/
    
    //comparison operator
    /*int x=5,y=3;
	cout<<(x==y);
	cout<<(x!=y);
	cout<<(x>y);
	cout<<(x<y);
	cout<<(x>=y);
	cout<<(x<=y);
	return 0;*/
	
	//logical operator
	/*int x=5,y=3;
	cout<<(x>3 && x<10);
	cout<<(x>3 || x<10);
	cout<<(!(x>3 && x<10));
	return 0;*/
	
	//string 
	/*string h="hi";
	string i="string";
	string j=h+" "+i;
	cout<<j;*/
	
	//append function
	/*string h="hi";
	string i="string";
	string j=h.append(i);
	cout<<j;
	cout<<j.length();
	cout<<j[3];*/
	
	//input string and getline function
	/*string j;
	cout<<"enter your name"<<endl;
	getline(cin,j);
	cout<<j;*/
	
	//without using namespace std
	/*std::string j="hi";
	std::cout<<j;*/
	
	
	//maths functions
	/*cout<<max(5,10);
	cout<<min(5,15);*/
	
	//cmath headerfile
	/*cout<<sqrt(64)<<endl;
	cout<<round(9.7)<<endl;
	cout<<log(8)<<endl;
	cout<<exp(89);*/
	
	//boolean
	/*int c=4,d=7;
	cout<<(d>c);*/
	
	//if else statement
	/*int x=9,y=10;
	if(x>y){
		cout<<"x is greater";
	}
	else{
		cout<<"x is lesser ";
	}*/
	
	
	//if elseif else
	/*int x;
	cin>>x;
	if(x>=20){
		cout<<"hello";
	}else if(x>50){
		cout<<"hey";
	}
	else
	{
		cout<<"hi";
	}*/

   //ternary operator
   /*
	int time;
	cin>>time;
	string result=(time<45)? "good":"bad";
	cout<<result;*/
	
	//switch case calculator
	/*int x,y,z;
	cout<<"enter the operation 1.add 2.sub 3.divide 4.remainder";
	cin>>z;
	cout<<"enter the x and y values";
	cin>>x>>y;
	switch(z){
		case 1:
			cout<<"addition value is"<<x+y;
			break;
		case 2:
			cout<<"sub value is"<<x-y;
			break;
		case 3:
			cout<<"divided value is"<<x/y;
			break;
		case 4:
			cout<<"remainder value is"<<x%y;
			break;
		default:
		cout<<"invalid option";
	}*/
	//break statement:used to break the execution of code after the operation is done
	
 
 //while statement
 /*int i=1;
 while (i<10){
 	cout<<i<<"hello"<<endl;
 	i++;
 }*/	
 //while loop loops through the code until specified condition is true	

 
 //do while loop
 /*int i=2;
 do{
 	cout<<i<<endl;
 	i++;
 }while(i>2);*/
 
 //for loop
 /*for(int i=0;i<15;i++){
 	cout<<i<<endl;
 }
 
 //for loop break
 for(int i=0;i<15;i++){
 	if(i==4){
 		break;
	 }
 	cout<<i<<endl;
 	
//for loop continue
for(int i=0;i<15;i++){
 	if(i==4){
 		continue;
	 }
 	cout<<i<<endl;
 }
 }*/
 
 //while loop with break and continue
 /*int i=2;
 while(i<10){
 
 if(i==4){
 	i++;
 	continue;
 }
 cout<<i<<endl;
 i++;}*/
 
 
 //arrays
 
 /*string cars[3]={"volvo","BMW","ford"};
 
 cout<<cars[2]<<endl;

 for(int i=0;i<3;i++){
 	cout<<i<<":"<<cars[i]<<endl;
 }
 
 int number[5]={1,2,3,4,6};
 cout<<sizeof(number)<<endl;//returs the size off the bytes
 //to get size divide by the size of the int
 int length=sizeof(number)/sizeof(int);
 cout<<length;*/
 
 
 //multidimensional array
 /*
 string letters[2][4]={
 {"a","b","c","d"},
 {"e","f","g","h"
 }
 };
 for(int i=0;i<2;i++){
 	for(int j=0;j<4;j++){
 		cout<<letters[i][j]<<endl;
	 }
 }*/
 
//3 dimensional
 /*string letters[2][2][2]={
 {
 {"a","b"},
   {"c","d"}
 },
 {
 {"e","f"},
     { "g","h"}
 }
};
for(int i=0;i<2;i++){
 	for(int j=0;j<4;j++){
 		for(int k=0;k<2;k++){
		 
 		cout<<letters[i][j][k]<<endl;
	 }
 }
}*/

//structure

/*struct{
	int num;
	string mstring;
}mstructure;

mstructure.num=1;
mstructure.mstring="hello";

cout<<mstructure.num<<endl;
cout<<mstructure.mstring<<endl;

//one structure two cars
struct{
	string brand;
	string model;
	int year;
}mycar1,mycar2;

//1structure
mycar1.brand="audi";
mycar1.model="a6";
mycar1.year=1999;
//2structure
mycar2.brand="bmw";
mycar2.model="x6";
mycar2.year=2000;

cout<<mycar1.brand<<" "<<mycar1.model<<" "<<mycar1.year<<endl;
cout<<mycar2.brand<<" "<<mycar2.model<<" "<<mycar2.year<<endl;
*/
//named structures
//declare struct and then int main

/*struct car{
	string brand;
	string model;
	int year;
};
int main(){
	car car1;
	car1.brand="audi";
	car1.model="a6";
	car1.year=1999;
	
	
	car car2;
	car2.brand="bmw";
	car2.model="x5";
	car2.year=2000;
	
	cout<<car1.brand<<" "<<car1.model<<" "<<car1.year<<endl;
    cout<<car2.brand<<" "<<car2.model<<" "<<car2.year<<endl; 
}*/

//refernces

/*string food="burger";
string &item=food;

cout<<food<<endl;
cout<<item<<endl;

//memory address

cout<<&food<<endl;
*/

//pointers

/*string food="burger";
string* ptr=&food;

cout<<food<<endl; //outputs burger
cout<<&food<<endl;//outputs memory address of the food
cout<<ptr<<endl;//pointer outputs memory address

//get memoryaddress and value(dereferencing)

cout<<*ptr<<endl;

//modifying pointers(will also change the value of the original variable)
*ptr="hamburger";
cout<<*ptr<<endl;
cout<<food<<endl;*/
/*
	return 0;
}


void afunct(){
	cout<<"hello";*/
/*void afunct(string fname="look"){
	cout<<fname<<"hello";
}	
int main(){
	afunct();
	afunct("hi");
	afunct("does");
	afunct("do");*/
/*int afunct(int x){
	return 5+x;
}	
int x;
int main(){
cin>>x;
cout<<afunct(x);
}*/

/*/swapping numbers
/void swapnums(int &x , int &y){
	int z=x;
	x=y;
	y=z;
}

int main(){
	int fnum=10;
	int snum=20;
	
	cout<<"before swap";
	cout<<fnum<<snum;
	swapnums(fnum,snum);
	cout<<"after swap";
	cout<<fnum<<snum;
}*/
/*void afunct(int mynum[5]){
	for(int i=0;i<5;i++){
		cout<<mynum[i];
	}
}
int main(){
	int mynum[5]={1,2,3,4,5};
	afunct(mynum);
	return 0;
}*/


//function overloading

//normal func

/*int plusfunint(int x , int y){
	return x+y;
	
}	
double plusfundouble(double x,double y)
{
	return x+y;
}
int main(){
	int a,b;
	double c,d;
	cin>>a>>b;
	int mynum1=plusfunint(a,b);
	cin>>c>>d;
	double mynum2=plusfundouble(c,d);
	cout<<mynum1<<endl;
	cout<<mynum2;
}*/	

//function overloading
	

/*int plusfun(int x , int y){
	return x+y;
	
}	
double plusfun(double x,double y)
{
	return x+y;
}
int main(){
	int a,b;
	double c,d;
	cin>>a>>b;
	int mynum1=plusfun(a,b);
	cin>>c>>d;
	double mynum2=plusfun(c,d);
	cout<<mynum1<<endl;
	cout<<mynum2;
}*/

//recursion

/*int sum(int a)
{
	if(a>0){
		return a + sum(a-1);
	}
	else{
		return 0;
	}
	
}
int main(){
	int result=sum(5);
	cout<<result;
}*/

//class
/*class myclass{
	public:
		int mynum;
		string mystring;
};
int main(){
	myclass myobj;
	myobj.mynum=20;
	myobj.mystring="helloe";
	
	cout<<myobj.mynum<<endl;
	cout<<myobj.mystring<<endl;
}*/

//multiple class
/*class car{
	public:
		string name;
		string model;
		int year;
};

int main(){
	car obj1;
	obj1.model="A6";
	obj1.name="audi";
	obj1.year=2000;
	
	car obj2;
	obj2.name="bmw";
	obj2.model="x3";
	obj2.year=2001;
	
	cout<<obj1.model<<" "<<obj1.name<<" "<<obj1.year<<" "<<endl;
	cout<<obj2.model<<" "<<obj2.name<<" "<<obj2.year<<" "<<endl;
}*/

//defining functions inside class

/*class myclass{
	public:
		void myfunc(){
			cout<<"hello world";
		}
};

int main(){
	myclass myobj;
	myobj.myfunc();
	return 0;
}*/


// defining outside the class
/*class myclass{
	public:
		void myfunc();
};

void myclass::myfunc(){
	cout<<"heloo";
}

int main(){
	myclass myobj;
	myobj.myfunc();
}*/

//user

/*class mycar{
	public:
		int detail(int maxspeed);
		string hel(string name);
};

int mycar::detail(int maxspeed){
	return maxspeed;
}
string mycar::hel(string name){
	return name;
}

int main(){
	mycar myobj;
	cout<<myobj.detail(200);
	cout<<myobj.hel("hello");
	
}*/

//constructor

/*class myclass{
	public:
		myclass(){
			cout<<"hell";
		}
};

int main(){
	myclass myobj;
	return 0;
}

//declaring and defining constructor inside

/*class car{
	public:
		string model;
		string brand;
		int year;
		car(string x,string y,int z){
			brand =x;
			model= y;
			year= z;
		}
};

int main(){
	car carobj1("bmw","x7",2000);
	car carobj2("audi","a6",2020);
	
	cout<<carobj1.brand<<" "<<carobj1.model<<" "<<carobj1.year<<endl;
	cout<<carobj2.brand<<" "<<carobj2.model<<" "<<carobj2.year<<endl;
}*/

//definig constructor outside

/*class car{
	public:
		string model;
		string brand;
		int year;
		car(string x,string y,int z);
};

car::car(string x, string y,int z){
	model=x;
	brand=y;
	year=z;
}

string a,b,d,e;
int c,f;
int main(){
	cout<<"enter the model";
	cin>>a;
	cout<<"enter the brand";
	cin>>b;
	cout<<"enter the year";
	cin>>c;
	car carobj1(a,b,c);
	cout<<"enter the model";
	cin>>d;
	cout<<"enter the brand";
	cin>>e;
	cout<<"enter the year";
	cin>>f;
	car carobj2(d,e,f);
	
	cout<<carobj1.brand<<" "<<carobj1.model<<" "<<carobj1.year<<" "<<endl;
	cout<<carobj2.brand<<" "<<carobj2.model<<" "<<carobj2.year<<" "<<endl;
}
*/

//access specifier
//gives error because private cannoot be accessed
/*class myclass{
	public:
		int y;
	private:
		int z;
};

int main(){
	myclass myobj;
	myobj.y=45;
	myobj.z=50;
	return 0;
}*/

//accessing private class use encapsulation that is use get and set methods
//encapsulation ensures better control of data because you cna change the one part of the ccode 
//without affecting the other parts

/*
class employee{
	private:
		int salary;
	public:
		void setsalary(int s){
		
		salary=s;}
		int getsalary(){
			return salary;
		}
};

int main(){
	employee myobj;
	myobj.setsalary(75000);//get 
	cout<<myobj.getsalary();//set
	return 0;
}*/

//inheritance
//inheritng a class from parent class
/*class vehicle{
	public:
		string model="mustang";
		
};

class car:public vehicle{
	public:
		string brand="ford";

};

int main()
{
	car mycar;
	cout<<mycar.brand+" "+mycar.model;
}*/

//multilevel inheritance
//derivng a class from already derived classs
/*class myclass{
	public:
		void afunc(){
			cout<<"hello msi";
		}
};

class mychild: public myclass{
};
class grandchild: public mychild{
};
int main(){
	grandchild myobj;
	myobj.afunc();
	return 0;
}*/

//multiple inheritance

// 2 classes inherited to one class
/*lass myclass{
	public:
		void afunc(){
			cout<<"get me the function";
		}
};

class myclass1{
	public:
		void afunc1(){
			cout<<"first";
		}
};

class myclass2:public myclass,public myclass1{
};

int main(){
	myclass2 myobj;
	myobj.afunc();
	myobj.afunc1();
	return 0;
	
}*/


//inheritance is used to derive from protected class

/*class employee{
	protected:
		int salary;
};

class programmer:public employee{
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
	programmer myobj;
	myobj.setsalary(50000);
	myobj.bonus=20000;
	cout<<myobj.getsalary()<<endl;
	cout<<myobj.bonus<<endl;
	return 0;
}*/

//polymorphism
//accessing one class to two classes
/*class animal{
	public:
		void animalsound(){
			cout<<"animal sound are given below"<<endl;
		}
};

class pig:public animal{
	public:
		void animalsound(){
			cout<<"pig sounds weeee"<<endl;
		}
};
class cat:public animal{
	public:
		void animalsound(){
			cout<<"cat sounds meow"<<endl;
		}
};
int main(){
	animal myanimal;
	pig mypig;
	cat mycat;
	
	myanimal.animalsound();
	mypig.animalsound();
	mycat.animalsound();
	return 0;
}*/

//files
//ofstream :creates and writes files
//ifstream :read files
/*int main(){
	ofstream myfile("filename.txt");
	myfile<<"files are created hellooooooo goooo";
	myfile.close();
}*/

//exceptions
//try : the try statement allows you to define a block of code to be tested for errors while it 
//is being executes

//throw : throws an exception when a problem is detected,which let us create a custom error
//catch : statement allows you to define a block of code to be executed if error occurs in the try block
/*int main(){

try{
	int age=15;
	if (age>=18)	{
	cout<<"granted access";
}
else{
	throw(age);
}}
  catch(int mynum){
	cout<<"access denied";
	cout<<"age is"<<mynum;
}
return 0;
}*/

//stack using linked list
struct Node{
	int data;
	struct Node *next;
};
struct Node* top= NULL;
void push(int val){                   // to use malloc use stdlib.h header
	struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
    newnode->data=val;
    newnode->next=top;
    top=newnode;
}
void pop(){
	if(top==NULL)
	cout<<"stack underflow"<<endl;
	else{
		cout<<"the popped element is "<<top->data<<endl;
		top=top->next;
	}
}
void display(){
	struct Node* ptr;
	if(top=NULL)
	cout<<"stack is empty";
	else{
		ptr=top;
		cout<<"stack elements are";
		while(ptr!=NULL){
			cout<<ptr->data<<" ";
			ptr=ptr->next;
		}
	}
}

int main(){
	int ch,val;
	cout<<"1.push"<<endl;
	cout<<"2.pop"<<endl;
	cout<<"3.display"<<endl;
	cout<<"4.exit"<<endl;
do{
	cout<<"enter choice"<<endl;
	cin>>ch;
	switch(ch){
		case 1:{
			cout<<"enter the value to push"<<endl;
			cin>>val;
			push(val);
			break;
		}
	    case 2:{
	    	pop();
			break;
		}
		case 3:{
			display();
			break;
		}
		case 4:{
			cout<<"exit"<<endl;
			break;
		}
		default:{
			cout<<"invalid choice";
			break;
		}
	}
}while(ch!=4);
return 0;
}

//template 

/*template <class T>
class calculator{
	private:
		T num1, num2;
	public:
		calculator(T n1, T n2){
			num1=n1;
			num2=n2;
		}
	void displayresult(){
		cout<<"numbers"<<num1<<"and"<<num2<<" "<<endl;
		cout<<num1<<"+"<<num2<<" = "<<add()<<endl;
		cout<<num1<<"-"<<num2<<" = "<<subtract()<<endl;
		cout<<num1<<"*"<<num2<<" = "<<multiply()<<endl;
		cout<<num1<<"/"<<num2<<" = "<<divide()<<endl;
	}
	
	T add(){
		return num1 + num2;
	}
		T subtract(){
		return num1 - num2;
	}
		T divide(){
		return num1 / num2;
	}
		T multiply(){
		return num1 * num2;
	}
};

int main(){
	calculator<int> intcalc(2,1);
	calculator<float> floatcal(2.2,5.6);
	
	cout<<"int results"<<endl;
	intcalc.displayresult();
	cout<<"float result";
	floatcal.displayresult();
	return 0;
}*/


