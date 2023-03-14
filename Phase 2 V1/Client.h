#include"Person.h"

class Client :public Person
{

public:
	Client(){}
	Client(int i, string n, string pass, double b) :Person(i, n, pass, b){}
	~Client(){};
	
	void withdraw(double amount)
	{
		if (amount > getBalance())
		{
			cout << "Insufficent funds" << endl;
			return;
		}
		else
			setBalance(getBalance()-amount);
	}

	void transferTo(double amount, Client &recipient)
	{
		if (amount > getBalance())
		{
			cout << "Insufficent funds" << endl;
			return;
		}
		else
			setBalance(getBalance()-amount);
		recipient.setBalance(amount+recipient.getBalance());
		
	}
	void DisplayInfo()
	{
		cout << "Name = " << getName() << endl;
		cout << "ID = " << getID() << endl;
		cout << "Password = " << getPass() << endl;
		cout << "Balance  = " << getBalance() << endl;
	}
};

