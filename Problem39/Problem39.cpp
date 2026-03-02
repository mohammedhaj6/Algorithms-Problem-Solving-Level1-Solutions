#include <iostream>
#include<string>

using namespace std;


void readATotalBillAndCashPaid(int &totalBill,int &cashPaid) {
    cout << "Enter a total bill ?\n";
    cin >> totalBill;

    cout << "Enter a cash paid ?\n";
    cin >>cashPaid;

}

int calculatePaidBack(int totalBill,int cashPaid) {
    return cashPaid - totalBill;
}

void printResult(int paidCash) {
    cout<<endl << "Result = "<<paidCash<<endl;
}
int main()
{
    int totalBill =0, cashPaid=0;
    readATotalBillAndCashPaid(totalBill,cashPaid);
    printResult(calculatePaidBack(totalBill,cashPaid));


}
