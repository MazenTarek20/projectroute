#include "Client.h"

Client::Client()
{
    id, balance = 0;
}

Client::~Client()
{
    //dtor
}
Client::Client(int i, string n, string pass, double b){
	setID(i);
	setName(n);
	setPass(pass);
	setBalance(b);
}

void Client::setName(string n){
	if (Clientvalidation::CheckName(n))
		name = n;
}

void Client::setBalance(double b){
	if (Clientvalidation::CheckBalance(b))
	balance = b;
}

void Client::setPass(string pass){
	if (Clientvalidation::CheckPass(pass))
	password = pass;
}

void Client::setID(int i){
	id = i;
}
string Client::getName(){
	return name;
}

string Client::getPass(){
	return password;
}

int Client::getID(){
	return id;
}
double Client::getBalance(){
	return balance;
}

void Client::deposit(double amount){
	balance += amount;
}

void Client::withdraw(double amount){
	if (amount > balance)
	{
		cout << "Insufficent funds" << endl;
		return;
	}
	else
		balance -= amount;
}

void Client::transferTo(double amount, Client &recipient){
	if (amount > balance)
	{
		cout << "Insufficent funds" << endl;
		return;
	}
	else
		balance -= amount;
	cout << "Balance is now = " << endl;
	recipient.balance += amount;
	cout << "Recicipent balance is now = " <<recipient.balance<< endl;
}

void Client::checkBalance(){
	cout << "Balance = " << balance << endl;
}

void Client::DisplayInfo(){
	cout << "Name = " << name << endl;
	cout << "ID = " << id << endl;
	cout << "Password = " << password << endl;
	cout << "Balance  = " << balance << endl;
}
