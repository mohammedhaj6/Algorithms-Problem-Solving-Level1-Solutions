#include <iostream>
#include<string>
using namespace std;

int readAge() {
	int age;
	cout << "Enter Your Age ?\n";
	cin >> age;
	return age;
}

bool validateNumberInRange(int number,int from,int to){
	
	return(number >= from && number <= to);

}

void printResult(int age) {
	if (validateNumberInRange(age, 18, 45))
		cout << endl << age << " Is a valid age \n";
	else
		cout<<endl << age << " Is a Invalid age \n";

}

int main()
{
	printResult(readAge());
	

}

