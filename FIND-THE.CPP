#include<iostream.h>
#include<conio.h>
void main()
{
int x,y;
x=2;
y=3;
clrscr();
cout<<x<<"equal to"<<y<<":"<<(x==y)<<"\n";
cout<<x<<"greater than"<<y<<":"<<(x>y)<<"\n";
cout<<x<<"less than"<<y<<":"<<(x<y)<<"\n";
cout<<x<<"greater than or equal to"<<y<<":"<<(x>=y)<<"\n";
cout<<x<<"less than or equal to"<<y<<":"<<(x<=y)<<"\n";
cout<<x<<"not equal to "<<y<<":"<<(x!=y);
getch();
}