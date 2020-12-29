		#include<iostream.h>
		#include<conio.h>
		int main()
		{
		clrscr();
		int m,h,d;
		cout<<"enter the minutes";
		cin>>m;
		h=m/60;
		d=m%60;
		cout<<"hours"<<"\t"<<h<<"\n"<<"minutes"<<"\t"<<d;
		getch();
		}