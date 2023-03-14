#include "Validation.h"

class Person
{
	int id;
	string name, password;
	double balance;

public:
	Person::Person()
	{
		id, balance = 0;
	}

	Person::~Person(){}

	Person::Person(int i, string n, string pass, double b)
	{
		setID(i);
		setName(n);
		setPass(pass);
		setBalance(b);
	}

	void setName(string n)
	{
		if (Validation::CheckName(n))
			name = n;
	}

	void setBalance(double b)
	{
		if (Validation::CheckBalance(b))
			balance = b;
		else
			balance = -1;
	}

	void setPass(string pass)
	{
		if (Validation::CheckPass(pass))
			password = pass;
	}

	void setID(int i)
	{
		id = i;
	}

	string getName()
	{
		return name;
	}

	string getPass()
	{
		return password;
	}

	int getID()
	{
		return id;
	}

	double getBalance()
	{
		return balance;
	}
};

