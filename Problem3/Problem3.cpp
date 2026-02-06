#include <iostream>
#include <string>
using namespace std;

enum enNumberType { Odd = 1, Even = 2 };

int readNumber() {
    int num;
    cout << "Enter The Number ?" << endl;
    cin >> num;
    cout << endl;
    return num;

}

enNumberType checkNumberType(int num) {

    if (num % 2 == 0)
        return enNumberType::Even;
    else
        return enNumberType::Odd;


}

void printNumberType(enNumberType numberType) {

    if (numberType == enNumberType::Even)
        cout << endl << "The Number Is Even" << endl;
    else
        cout << endl << "The Number Is Odd" << endl;

}

int main()
{

    printNumberType(checkNumberType(readNumber()));
}



