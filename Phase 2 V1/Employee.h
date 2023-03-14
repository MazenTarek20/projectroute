#include "Client.h"

class Employee:public Client
{
	double salary;
public:
	Employee(){
	}
	Employee(int i, string n, string pass, double b,double s) :Client(i, n, pass, b)
	{
		setSalary(s);
	}
	~Employee(){};
	double getSalary()
	{
		return salary;
	}

	void setSalary(double s)
	{
		if (Validation::CheckSalary(s))
			salary = s;
		else
			salary = -1;
	}
	void DisplayInfo()
	{
		Client::DisplayInfo();
		cout << "Salary = " << salary << endl;
	}
};