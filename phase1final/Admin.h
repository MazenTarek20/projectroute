#ifndef ADMIN_H
#define ADMIN_H
#include<iostream>
using namespace std;


class Admin
{
    int id;
    string name , password;
    double balance;
    public:
        Admin();
        Admin(int id , string n , string p , double b);
        ~Admin();
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

#endif // ADMIN_H
