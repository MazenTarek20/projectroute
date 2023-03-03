#include "Admin.h"
#include "Adminvalidation.h"
Admin::Admin()
{
    id , balance = 0;
}

Admin::~Admin()
{
    //dtor
}
Admin::Admin(int id , string n , string p , double b){
     setId(id);
     setName(n);
     setPassword(p);
     setBalance(b);
}
void Admin::setName(string n){
     if (Adminvalidation::checkName(n))
        name = n;
}

void Admin::setBalance(double b){
     if (Adminvalidation::checkBalance(b))
        balance = b;
}
void Admin::setPassword(string p){
     if (Adminvalidation::checkPassword(p))
        password = p;
}
void Admin::setId(int i){
        id = i;
}

string Admin::getName(){
        return name;
}
string Admin::getPassword(){
        return password;
}
int Admin::getId(){
        return id;
}
double Admin::getBalance(){
        return balance;
}

void Admin::DisplayInfo(){
     cout << "Name : " << name << endl;
     cout << "ID : " << id << endl;
     cout << "Password : " << password << endl;
     cout << "Balance : " << balance << endl;

}
