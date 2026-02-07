#include <iostream>
#include<string>

using namespace std;

enum enPassFail{pass=1,fail=2};

int readMark() {
	int mark;
	cout << "Enter Your Mark ?\n";
	cin >> mark;
	return mark;
}

enPassFail cheakMark(int mark) {
	if (mark >= 50)
		return enPassFail::pass;
	else
		return enPassFail::fail;
}

void printResult(int mark) {
	if (cheakMark(mark) == enPassFail::pass)
		cout << "You Passed !" << endl;
	else
		cout << "You Failed !" << endl;
}

int main()
{
	printResult(readMark());
}

