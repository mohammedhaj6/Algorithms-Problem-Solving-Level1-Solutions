#include <iostream>
#include<string>

using namespace std;

struct TaskDuration {
	int dayes,hours,minutes,seconds;
};

TaskDuration readTaskDuration() {
	TaskDuration taskDuration;
	cout << "Enter The Number Of Days ?\n";
	cin >> taskDuration.dayes;
	cout << "Enter The Number Of Hours ?\n";
	cin >> taskDuration.hours;
	cout << "Enter The Number Of Minutes ?\n";
	cin >> taskDuration.minutes;
	cout << "Enter The Number Of Seconds ?\n";
	cin >> taskDuration.seconds;
	return taskDuration;

}

float calculateTheTaskDurationInSeconds(TaskDuration taskDuration) {
	return (float)(taskDuration.dayes * 24 * 60 * 60)+(taskDuration.hours*60*60)+(taskDuration.minutes*60)+(taskDuration.seconds);
}

 void printResult(float taskDurationInSeconds) {

	 cout << endl << "The Result : " << taskDurationInSeconds << " Seconds\n";

}


int main()
{
	
	
	printResult(calculateTheTaskDurationInSeconds(readTaskDuration()));


}

