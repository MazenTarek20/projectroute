#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>
using namespace std;

class Employee
{
    int id;
    string name , password;
    double balance;
    public:
        Employee();
        Employee(int id , string n , string p , double b);
        ~Employee();
        void setName(string n);
        void setPassword(string p);
        void setBalance(double b);
        void setId(int id);
        string getName();
        string getPassword();
        int getId();
        double getBalance();

        void DisplayInfo();
    protected:

    private:
};

#endif // EMPLOYEE_H
