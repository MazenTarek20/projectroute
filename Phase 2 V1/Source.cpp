#include"Data Source.h"

void main()
{
	//fstream file("testfile.txt");
	//file << "Hello" << endl;
	//file << "This is a test" << endl;
	//file.close();
	//file.open("testfile.txt", ios::in);
	//string print;
	//while (getline(file, print))
	//{
	//	cout << print << endl;
	//}
	//file.close();

	Admin a(123, "ahmed", "12345678", 10000, 5000);
	Admin a1(123, "mohamed", "12345789", 10000, 5000);
	a.withdraw(1000);
	a.transferTo(2000, a1);
	admindata(a);
	cout << "---------------------------------" << endl;
	admindata(a1);
	
}