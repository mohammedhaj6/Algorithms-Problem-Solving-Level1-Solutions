#include <iostream>
#include<string>
using namespace std;

int readNumber() {
    int num;
    cout << "Enter Your Number ?\n";
    cin >> num;
    return num;
 }

float getHalfOfNumber(int num) {

    return (float)num/2;

}

void printHalfOfNumber(int num) {
    string result = "Half Of " +  to_string(num)+ " Is " + to_string( getHalfOfNumber(num));
    cout<< endl << result << endl;
}





int main()
{
    printHalfOfNumber(readNumber());


}

