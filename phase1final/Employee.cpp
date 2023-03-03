#include "Employee.h"
#include "Employeevalidation.h"
Employee::Employee()
{
    id , balance = 0;
}

Employee::~Employee()
{
    //dtor
}
Employee::Employee(int id , string n , string p , double b){
     setId(id);
     setName(n);
     setPassword(p);
     setBalance(b);
}
void Employee::setName(string n){
     if (Employeevalidation::checkName(n))
        name = n;
}

void Employee::setBalance(double b){
     if (Employeevalidation::checkBalance(b))
        balance = b;
}
void Employee::setPassword(string p){
     if (Employeevalidation::checkPassword(p))
        password = p;
}
void Employee::setId(int i){
        id = i;
}

string Employee::getName(){
        return name;
}
string Employee::getPassword(){
        return password;
}
int Employee::getId(){
        return id;
}
double Employee::getBalance(){
        return balance;
}

void Employee::DisplayInfo(){
     cout << "Name : " << name << endl;
     cout << "ID : " << id << endl;
     cout << "Password : " << password << endl;
     cout << "Balance : " << balance << endl;

}
