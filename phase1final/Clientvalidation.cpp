#include "Clientvalidation.h"

Clientvalidation::Clientvalidation()
{
    //ctor
}

Clientvalidation::~Clientvalidation()
{
    //dtor
}
bool Clientvalidation:: CheckName(string n){
	bool x = false;
	for (int i = 0; i < n.size(); i++)
	{
		if (n[i] < 65 || n[i] > 122)
		{
			cout << "Name can only contain alphabetic chars" << endl;
			return x;
		}
	}
	if (n.size() < 5)
	{
		cout << "Name must be at least 5 letters" << endl;
		return x;
	}
	if (n.size()>20)
	{
		cout << "Name cant be more than 20 letters" << endl;
		return x;
	}
	else
		x = true;
	return x;
}

bool Clientvalidation::CheckPass(string p){
	bool x = false;
	if (p.size() < 8)
	{
		cout << "Password must be at least 8 letters" << endl;
		return x;
	}
	if (p.size()>20)
	{
		cout << "Password cant be more than 20 letters" << endl;
		return x;
	}
	else
		x = true;
	return x;
}

bool Clientvalidation::CheckBalance(double b){
	if (b < 1500)
	{
		cout << "Minimum balance is 1500" << endl;
		return false;
	}
	else
		return true;
}

bool Clientvalidation::CheckSalary(double s){
	if (s < 5000)
	{
		cout << "Minimum Salary is 5000" << endl;
		return false;
	}
	else
		return true;
}
