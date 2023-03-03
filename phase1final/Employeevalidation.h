#ifndef EMPLOYEEVALIDATION_H
#define EMPLOYEEVALIDATION_H
#include<iostream>
using namespace std;

class Employeevalidation
{
     public:
        Employeevalidation();
        virtual ~Employeevalidation();
        static bool checkName(string n);
        static bool checkPassword(string p);
        static bool checkSalary(double s);
        static bool checkBalance(double b);
};

#endif // EMPLOYEEVALIDATION_H
