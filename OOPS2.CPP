///Program to implement a class using 2 member functions.////
#include<iostream.h>
#include<conio.h>
class student                   //Here student is name of the class
{
public:                         //Access Specifier
char a[20];
int b;
void getdata (void);            //function declaration inside class
void displaydata (void);        //function declaration insid class
};

void student :: getdata (void)  //function calling where '::' is scope resolution operator
{
cout<<"enter your name:" <<endl;
cin>>a;
cout<<"enter your age:" <<endl;
cin>>b;
}
void student :: displaydata (void)  //function calling
{
cout<<"so, your name is: "<<a<<endl;
cout<<" your age is"<<b<<endl;
}
void main()
{
clrscr();
student x;                         //cteating objec(x) for class(student)
x.getdata();                       //function Invoking using dot operator
x.displaydata();
getch();
}