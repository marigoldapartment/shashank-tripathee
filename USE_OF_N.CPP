 #include<iostream.h>
 #include<conio.h>
 int main()
 {
 clrscr();
 int scheck;
 cout<<"enter security check option(0 -> NO or 1->yes)";
 cin>>scheck;
 if (!scheck)
 cout<<"plese be in queue for security check!";
 else
 cout<<"plese proceess for the hall ticket";
 getch();
 }