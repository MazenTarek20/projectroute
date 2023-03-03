#include "Adminvalidation.h"

Adminvalidation::Adminvalidation()
{
    //ctor
}

Adminvalidation::~Adminvalidation()
{
    //dtor
}
bool Adminvalidation::checkName(string n){
      bool x = false;
       for (int i = 0; i < n.size(); i++){
            if (n[i] < 65 || n[i] > 122){
                  cout << "Name can only contain alphabetic characters" << endl;
              return x;
            }
         }
         if (n.size() < 5){
            cout << "Name must contain at least 5 letters" << endl;
          return x;
         }
         if (n.size() > 20){
            cout << "Name must contain at max 20 letters" << endl;
          return x;
         }
         else {
            x = true;
         }
         return x;
}

bool Adminvalidation::checkPassword(string p){
      bool x = false;
         if (p.size() < 8){
            cout << "Password must contain at least 8 letters" << endl;
          return x;
         }
         if (p.size() > 20){
            cout << "Password must contain at max 20 letters" << endl;
          return x;
         }
         else {
            x = true;
         }
         return x;
}
bool Adminvalidation::checkSalary(double s){
    if (s < 5000){
        cout << "Minimum salary is 5000" << endl;
        return false;
    }
      return true;
}
bool Adminvalidation::checkBalance(double b){
  return true;
}
