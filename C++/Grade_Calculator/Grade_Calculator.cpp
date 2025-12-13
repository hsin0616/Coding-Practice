#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <limits>   // for numeric_limits
using namespace std;

int main() {
    ifstream inFile("students.csv");
    if (!inFile.is_open()) {
        cout << "Error: cannot open students.csv\n";
        return 1;
    }

    string line;
    int count = 0;          // # of total students
    int passCount = 0;      // # of pass
    double total = 0.0;     // total score
    int maxScore = -1;      // highest score
    string maxName;         // student of the highest score

    const int PASS_SCORE = 60;

    while (getline(inFile, line)) {
        if (line.empty()) continue;
        stringstream ss(line);
        string name;
        int score;
        getline(ss, name, ',');
        ss >> score;

        count++;
        total += score;

        if (score >= PASS_SCORE) {
            passCount++;
        }

        if (score > maxScore) {
            maxScore = score;
            maxName = name;
        }
    }

    inFile.close();

    if (count == 0) {
        cout << "No data in file.\n";
        return 0;
    }

    double average = total / count;

    cout << "Total students : " << count << endl;
    cout << "Average score  : " << average << endl;
    cout << "Highest score  : " << maxScore
         << " ( " << maxName << " )" << endl;
    cout << "Pass students  : " << passCount << endl;

    return 0;
}
