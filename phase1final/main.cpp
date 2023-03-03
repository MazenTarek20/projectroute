#include <iostream>
#include <string>
#include "Employee.h"
#include "Admin.h"
#include "Client.h"
using namespace std;

int main()
{
    Employee e(123 , "mazen_tarek" , "maz12345" , 500.5);
    e.DisplayInfo();
    cout << endl;
    Admin a(235 , "haitham_merzek" , "Hai234" , 455.5);
    a.DisplayInfo();
    cout << endl;
    Client c(123,"ahmed_ali","12345",5000);
	c.DisplayInfo();
    return 0;
}
