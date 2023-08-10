#include <iostream>
#include <string>
using namespace std;

const int NUM_SUBJECTS = 5;

// Function to calculate the average grade
char calculateGrade(double average) {
    if (average >= 90)
        return 'A';
    else if (average >= 80)
        return 'B';
    else if (average >= 70)
        return 'C';
    else if (average >= 60)
        return 'D';
    else
        return 'F';
}

int main() {
    string studentName;
    double marks[NUM_SUBJECTS];
    double totalMarks = 0.0;

    cout << "***** Student Grading System *****" << endl;
    cout << "Enter student's name: ";
    getline(cin, studentName);

    // Input marks for each subject
    cout << "Enter marks for " << NUM_SUBJECTS << " subjects:" << endl;
    for (int i = 0; i < NUM_SUBJECTS; ++i) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        totalMarks += marks[i];
    }

    // Calculate the average marks
    double averageMarks = totalMarks / NUM_SUBJECTS;

    // Calculate the grade
    char grade = calculateGrade(averageMarks);

    // Display the result
    cout << "\n***** Result *****" << endl;
    cout << "Student Name: " << studentName << endl;
    cout << "Average Marks: " << averageMarks << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
