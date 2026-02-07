#include <iostream>
#include<string>

using namespace std;

void readNumbers(int &num1,int &num2,int &num3) {
   
    cout << "Enter The Number 1 ?" << endl;
    cin >> num1;
    cout << "Enter The Number 2 ?" << endl;
    cin >> num2;
    cout << "Enter The Number 3 ?" << endl;
    cin >> num3;
   
}

int sumNumbers(int num1,int num2,int num3) {

    return  num1 + num2 + num3;

}

void printResult(int sum) {
    cout << "Your Sum :" << sum;
}

int main()
{
    int num1, num2, num3;
    readNumbers(num1, num2, num3);
    int result = sumNumbers(num1,num2,num3);
    printResult(result);
}

