#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int age;
cout<<"enter your age"<<"\n";
cin>>age;
if(age<0||age>100)
cout<<"your certificate is fake,The true fact is still missing";
else
cout<<"your are illegible for a passport!";
getch();
}