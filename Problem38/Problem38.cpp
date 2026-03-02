#include <iostream>
#include<string>

using namespace std;

enum IsPrimeOrNotPrime {
    prime=true,notPrime=false
};

int readPositiveNumbers() {
    int posotiveNum=0;
    do
    {
        cout << "Enter a positive number ?\n";
        cin >> posotiveNum;
       
    } while (posotiveNum<=0);
    return posotiveNum;
  
}

 IsPrimeOrNotPrime cheakPrimeOrNotPrime(int posotiveNum) {

     float m = round(posotiveNum / 2);
     for (int i = 2; i <= m; i++) {
         if (posotiveNum % i == 0) {
             return IsPrimeOrNotPrime::notPrime;
         }
         
     }
     return IsPrimeOrNotPrime::prime;
}

 void printResult(int posotiveNum) {

     if (cheakPrimeOrNotPrime(posotiveNum) == IsPrimeOrNotPrime::prime) {
         cout << "The number is prime\n";
     }
     else
     {
         cout << "The number is not prime\n";
     }
 
       
     
    
 }

int main()
{
    printResult(readPositiveNumbers());
}

