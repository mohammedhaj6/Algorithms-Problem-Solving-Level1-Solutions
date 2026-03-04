#include <iostream>  
#include <string>     

using namespace std;




//////// Problem49&50







int readATMPIN() {
    int ATMPIN;
    cout << "Enter The ATM PIN Code ?\n";
    cin >> ATMPIN;
    return ATMPIN;
}

void  cheakPINCode() {
    int ATMPIN,counter=1;
    do {
         ATMPIN = readATMPIN();
        if (ATMPIN == 1234) {
            cout << endl << "You Balance IS: 7500\n"; 
            system("color 2F");
        }
        else {
            counter++;
            if (counter > 3) {
                cout<<endl << "Your Acount Is Locked!\n";
                break;
            }


            cout << endl << "Wrong PIN\n";
            
            system("color 4F");
           

        }
    } while (ATMPIN != 1234);

}

int main()
{
    cheakPINCode();
}

