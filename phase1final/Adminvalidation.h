#ifndef ADMINVALIDATION_H
#define ADMINVALIDATION_H
#include<iostream>
using namespace std;

class Adminvalidation
{
    public:
        Adminvalidation();
        virtual ~Adminvalidation();
        static bool checkName(string n);
        static bool checkPassword(string p);
        static bool checkSalary(double s);
        static bool checkBalance(double b);
};

#endif // ADMINVALIDATION_H
