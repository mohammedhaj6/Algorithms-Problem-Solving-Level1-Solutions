#include <iostream>
#include<string>
using namespace std;

struct stInfo {

	string firstName;
	string lastName;

};

stInfo readFullName() {
	stInfo info;

	cout << "Enter Your First Name ?\n";
	cin >> info.firstName;
	cout << "Enter Your Last Name ?\n";
	cin >> info.lastName;
	cout << endl;
	return info;
}
string getFullName(stInfo info) {
	string fullName = info.firstName+" "+ info.lastName;
	return fullName;
}

void printFullName(string fullName) {
	cout << "Your Full Name Is : " << fullName << endl;
}

int main()
{
  
	printFullName(getFullName(readFullName()));


}

