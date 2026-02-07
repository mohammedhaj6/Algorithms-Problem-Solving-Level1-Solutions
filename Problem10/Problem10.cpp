#include <iostream>
#include<string>

using namespace std;

void readMarks(int& mark1, int& mark2, int& mark3) {

    cout << "Enter The mark 1 ?" << endl;
    cin >> mark1;
    cout << "Enter The mark 2 ?" << endl;
    cin >> mark2;
    cout << "Enter The mark 3 ?" << endl;
    cin >> mark3;

}

int calculateAverage(int mark1, int mark2, int mark3) {

    return  (mark1 + mark2 + mark3)/3;

}

void printResult(int avg) {
    cout << "Your Average :" << avg;
}

int main()
{
    int mark1, mark2, mark3;
    readMarks(mark1, mark2, mark3);
    int result = calculateAverage(mark1, mark2, mark3);
    printResult(result);
}

