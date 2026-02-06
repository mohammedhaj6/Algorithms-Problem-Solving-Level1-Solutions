#include <iostream>
#include <string>
using namespace std;

struct stInfo
{
	int age;
	bool hasDrivingLicense;

};

stInfo readInfo() {

	stInfo info;
	cout << "Enter Your Age ?" << endl;
	cin >> info.age;
	cout << endl;
	cout << "Are You Have Driving License ?" << endl;
	cin >> info.hasDrivingLicense;
	cout << endl;
	return info;
}

bool isAccepted(stInfo info) {

	return (info.age > 21 && info.hasDrivingLicense);


}

void printResult(stInfo info) {

	if (isAccepted(info))
		cout << endl << "Hired !" << endl;
	else
		cout << endl << "Rejected !" << endl;
}


int main()
{

	printResult(readInfo());



}
