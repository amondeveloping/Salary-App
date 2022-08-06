#include <iostream>
using namespace std;

int main()
{
	float annualSalary;
	cout << "Enter your annual salary ";
	cin >> annualSalary;
	float monthlySalary = annualSalary / 12;
	cout << "Your monthly salary will be " << monthlySalary << endl;
	cout << "Which means your bi-weekly pay will be " << monthlySalary / 2;


	system("pause>0");
}


