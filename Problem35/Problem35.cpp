#include <iostream>
#include<string>

using namespace std;


struct PiggyBankContenet {
    int pinnies, nickels, dimes, quarters, dollars;
};

PiggyBankContenet readPiggyBankContent() {

    PiggyBankContenet piggyBankContent;

    cout << "Enter The Pinnies ?\n";
    cin >> piggyBankContent.pinnies;
    cout << "Enter The Nickels ?\n";
    cin >> piggyBankContent.nickels;
    cout << "Enter The Dimes ?\n";
    cin >> piggyBankContent.dimes;
    cout << "Enter The Quarters ?\n";
    cin >> piggyBankContent.quarters;
    cout << "Enter The Dollars ?\n";
    cin >> piggyBankContent.dollars;

    return piggyBankContent;

}

int calculateTotalPennies(PiggyBankContenet piggyBankContent) {

    return piggyBankContent.pinnies * 1 + piggyBankContent.nickels * 5 + piggyBankContent.dimes * 10 + piggyBankContent.quarters * 25 + piggyBankContent.dollars * 100;
    

}

int main()
{
  
    int totalPennies = calculateTotalPennies(readPiggyBankContent());
    
    cout << "Total a Pennies : " << totalPennies <<endl;
    cout << "Total a Dollars : " << (float) totalPennies /100 << endl;


}

