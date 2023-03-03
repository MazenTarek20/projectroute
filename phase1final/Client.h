#ifndef CLIENT_H
#define CLIENT_H
#include"Clientvalidation.h"
#include<string>
#include<iostream>
using namespace std;

class Client
{
    int id;
	string name, password;
	double balance;

public:
	Client();
	Client(int i, string n, string pass, double b);
	~Client();
	void setName(string n);
	void setPass(string pass);
	void setBalance(double b);
	void setID(int i);
	string getName();
	string getPass();
	int getID();
	double getBalance();
	void deposit(double amount);
	void withdraw(double amount);
	void transferTo(double amount, Client &recipient);
	void checkBalance();
	void DisplayInfo();
};

#endif // CLIENT_H
