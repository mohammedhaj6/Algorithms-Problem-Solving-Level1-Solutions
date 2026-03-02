#include <iostream>
using namespace std;

struct TaskDuration {
    int dayes, hours, minutes, seconds;
};

int readTaskDuration() {
    int totalSeconds;
    cout << "Enter The Number Of Seconds ? \n";
    cin >> totalSeconds;
    return totalSeconds;
}

TaskDuration calculateTheTaskDurationFromSeconds(int totalSeconds) {

    TaskDuration taskDuration;

    taskDuration.dayes = totalSeconds / 86400;
    totalSeconds = totalSeconds % 86400;

    taskDuration.hours = totalSeconds / 3600;
    totalSeconds = totalSeconds % 3600;

    taskDuration.minutes = totalSeconds / 60;
    taskDuration.seconds = totalSeconds % 60;

    return taskDuration;
}

void printResult(TaskDuration taskDuration) {
    cout << endl
        << taskDuration.dayes << " : "
        << taskDuration.hours << " : "
        << taskDuration.minutes << " : "
        << taskDuration.seconds << endl;
}

int main()
{
    printResult(calculateTheTaskDurationFromSeconds(readTaskDuration()));
}