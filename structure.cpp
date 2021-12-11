#include<iostream>
using namespace std;
	struct employee
	{
		string name;
		int salary;
		int bonus;
		float total_salary;
	};
int main()
{
	employee e1;
	cout<<"enter the name of employee :"<<endl;
	cin>>e1.name;
	cout<<"enter the salary of employee :"<<endl;
	cin>>e1.salary;
	cout<<"enter the bonus of employee :"<<endl;
	cin>>e1.bonus;
	

	
		cout<<"name of employee is : "<<e1.name<<endl;
		cout<<"salary of employee is : "<<e1.salary<<endl;
		cout<<"bonus of employee is : "<<e1.bonus<<endl;
		cout<<"total salary of employee is : "<<e1.salary+e1.bonus<<endl;
	
	
}
