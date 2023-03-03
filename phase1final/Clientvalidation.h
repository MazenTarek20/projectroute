#ifndef CLIENTVALIDATION_H
#define CLIENTVALIDATION_H
#include<string>
#include<iostream>
using namespace std;

class Clientvalidation
{
    public:
	Clientvalidation();
	~Clientvalidation();
	static bool CheckName(string n);
	static bool CheckPass(string p);
	static bool CheckSalary(double s);
	static bool CheckBalance(double b);
};

#endif // CLIENTVALIDATION_H
