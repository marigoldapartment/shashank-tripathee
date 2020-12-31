#include<iostream.h>
#include<conio.h>
class Employee
{
private:
int Salary;
public:
void SetSalary(int s)
{
Salary=s;
}
int getSalary()
{
return Salary;
}
};
int main()
{                                                             

Employee MyObj;
MyObj.SetSalary(5000);
cout<<MyObj.getSalary();
getch();
clrscr();
}
