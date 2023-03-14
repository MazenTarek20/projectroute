#include "Employee.h"

class Admin :public Client
{
	double salary;
public:
	Admin(){
	}
	Admin(int i, string n, string pass, double b, double s) :Client(i, n, pass, b)
	{
		setSalary(s);
	}
	~Admin(){};
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