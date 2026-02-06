#include <iostream>
#include <string>
using namespace std;


string readName() {
	string name;
	cout << "Enter Your Name ?" << endl;
	getline(cin, name);
	cout << endl;
	return name;
}

void printName(string name) {
	cout << "Your Name Is: " << name << endl;
}

int main()
{

	printName(readName());

}
