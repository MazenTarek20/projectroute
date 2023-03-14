#include "Admin.h"
#include <fstream>

void static clientdata(Client c)
{
	fstream clients("Clients.txt");
	clients <<"Name = "<< c.getName()<<endl;
	clients <<"ID = "<< c.getID()<<endl;
	clients <<"Password = "<< c.getPass()<<endl;
	clients <<"Balance = "<< c.getBalance()<<endl;
	clients.close();

    clients.open("Clients.txt", ios::in);
	string print;
	while (getline(clients, print))
	{
		cout << print << endl;
	}
	clients.close();
}

void static admindata(Admin a)
{
	fstream admins("Admins.txt");
	admins <<"Name = "<< a.getName() << endl;
	admins <<"ID = "<< a.getID()<<endl;
	admins <<"Password = "<< a.getPass()<<endl;
	admins <<"Salary = "<< a.getSalary() << endl;
	admins <<"Balance = "<< a.getBalance() << endl;
	admins.close();

	admins.open("Admins.txt", ios::in);
	string print;
	while (getline(admins, print))
	{
		cout << print << endl;
	}
	admins.close();
}

void static employeedata(Employee e)
{
	fstream employees("Employees.txt");
	employees <<"Name = "<< e.getName()<<endl;
	employees <<"ID = "<< e.getID()<<endl;
	employees <<"Password = "<< e.getPass()<<endl;
	employees <<"Salary = "<< e.getSalary() << endl;
	employees <<"Balance = "<< e.getBalance()<<endl;
	employees.close();

	employees.open("Employees.txt", ios::in);
	string print;
	while (getline(employees, print))
	{
		cout << print << endl;
	}
	employees.close();
}
