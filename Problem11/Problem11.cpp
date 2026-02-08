#include <iostream>
#include<string>

using namespace std;

enum enPassOrFail
{
	pass = 1,
    fail = 0,
};

void readMarks(int &mark1,int &mark2 ,int &mark3) {

	cout << "Enter Your mark 1 ?\n";
	cin >> mark1;
	cout << "Enter Your mark 2 ?\n";
	cin >> mark2;
	cout << "Enter Your mark 3 ?\n";
	cin >> mark3;
}

int sumMarks(int mark1, int mark2, int mark3) {

	return  mark1 + mark2 + mark3;

}

int getAverageOfMarks(int mark1 , int mark2,int mark3) {
	
	return sumMarks(mark1,mark2,mark3)/3;

}

enPassOrFail cheakAverageIfPassOrFail(int avg) {
	if (avg >= 50)
		return enPassOrFail::pass;
	else
		return enPassOrFail::fail;
}

void printResult( int avg) {
	if (cheakAverageIfPassOrFail(avg)==enPassOrFail::pass)
		cout <<endl<< avg << " >> Pass !\n";
	else
		cout <<endl<< avg << " >> Fail !\n";
	
}




int main()
{
	int mark1, mark2, mark3;
	readMarks(mark1, mark2, mark3);
	printResult(getAverageOfMarks(mark1, mark2, mark3));

	
}

