#include <iostream>
#include<string>

using namespace std;


enum OperationType {

	add = '+', subtract = '-', multiply = '*', divide = '/'

};


 void  readNumbers(float &num1,float &num2) {

	 cout << "Enter The Number 1 ?\n";
	 cin>> num1;
	 cout << "Enter The Number 2 ?\n";
	 cin >> num2;
	 
}

 OperationType readOperationType() {
	 char operationType = '+';
	 cout << "Enter Operation Type ( + , - , * , / ) ? \n";
	 cin >> operationType;
	 cout << "--------------------------------\n";
	 return  (OperationType) operationType ;
 }

 float calculate(float num1,float num2,OperationType operationType) {

	 switch (operationType)
	 {
	 case OperationType::add:
		 return num1 + num2;

	 case OperationType::divide:
		 if (num2 == 0)
		 {
			 cout << "Error: Division by zero!\n";
			 return 0;
		 }
		 return num1 / num2;

	 case OperationType::multiply:
		 return num1 * num2;

	 case OperationType::subtract:
		 return num1 - num2;

	 default:
		 return num1 + num2;  
	 }
 }

int main()
{
	float num1, num2;
	readNumbers(num1,num2);
	cout <<endl <<"Result = " << calculate(num1, num2, readOperationType()) << endl;

}

