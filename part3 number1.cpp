//
//
//
//
//

#include <iostream>

using namespace std;

int main ()
{
	float gas, miles, distance;
	cout << "Number of gallons of gas the car can hold : \n";
	cin >> gas;
	cout << "How far can the car travel on a full tank ? \n";
	cin >> miles;
	distance = miles/gas;
	cout << distance << " miles per gallon of gas"<<endl;
	
	return 0;
}
