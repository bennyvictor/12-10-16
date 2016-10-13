//
//
//
//
//

#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	int priceA = 15;
	int priceB = 12;
	int priceC = 9;
	
	float classA, classB, classC, sold;
	
	cout << "How many tickets were sold for class A ? \n";
	cin >> classA;
	
	cout << "How many tickets were sold for class B ? \n";
	cin >> classB;
	
	cout << "How many tickets were sold for class C ? \n";
	cin >> classC;
	
	sold = (classA*priceA)+(classB*priceB)+(classC*priceC);
	
	cout << setprecision (2) << fixed;
	
	cout << "Income generated from ticket sales : $";
	cout << sold;
	
	
	return 0;
}
