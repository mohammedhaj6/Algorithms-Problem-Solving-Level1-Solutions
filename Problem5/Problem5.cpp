#include <iostream>
#include <string>
using namespace std;

struct stInfo
{
	int age;
	bool hasDrivingLicense;
	bool hasRecommendation;

};

stInfo readInfo() {

	stInfo info;
	cout << "Enter Your Age ?" << endl;
	cin >> info.age;
	cout << endl;
	cout << "Do You Have Driver License ?" << endl;
	cin >> info.hasDrivingLicense;
	cout << endl;
	cout << "Do You Have recommendation ?" << endl;
	cin >> info.hasRecommendation;
	cout << endl;
	return info;
}

bool isAccepted(stInfo info) {

	if (info.hasRecommendation)
		return true;
	else
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
