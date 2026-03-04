#include <iostream>
#include<string>

using namespace std;

void readALoanAmountAndMonthlyPayment(int& loanAmount, int& totalMonths) {
	cout << "Enter A Loan Amount ?\n";
	cin >> loanAmount;
	cout << "How Many Months You Need To Settle The Lean ?\n";
	cin >> totalMonths;
}
int calculateMonthlyPayment(int loanAmount, int totalMonths) {
	return loanAmount / totalMonths;
}
int main()
{
	int loanAmount, totalMonths;
	readALoanAmountAndMonthlyPayment(loanAmount, totalMonths);
	cout << endl << calculateMonthlyPayment(loanAmount, totalMonths) << endl;
}

