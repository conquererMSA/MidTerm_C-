#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    int id;
    char name[101];
    char section;
    int marks;
};

int main() {
    int testCase;
    cin >> testCase;
    while (testCase--) {
        Student students[3];
        for (int i = 0; i < 3; ++i) {
            cin >> students[i].id >> students[i].name >> students[i].section >> students[i].marks;
        }

        int maxIndex = 0;
        for (int i = 1; i < 3; ++i) {
            if (students[i].marks > students[maxIndex].marks || 
                (students[i].marks == students[maxIndex].marks && students[i].id < students[maxIndex].id)) {
                maxIndex = i;
            }
        }
        cout << students[maxIndex].id << " " << students[maxIndex].name << " " << students[maxIndex].section << " " << students[maxIndex].marks << "\n";
    }

    return 0;
}

