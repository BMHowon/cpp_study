#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Student {
    string Name;
    int Year, Month, Day;
};

bool compare(const Student &a, const Student &b) {
    if(a.Year != b.Year)
        return a.Year < b.Year;
    if(a.Month != b.Month) 
        return a.Month < b.Month;
    return a.Day < b.Day;
}

int main() {

    int N;
    cin >> N;

    vector<Student> students(N);

    for(int i = 0; i < N; i++) {
        cin >> students[i].Name >> students[i].Day >> students[i].Month >> students[i].Year;
    }

    sort(students.begin(), students.end(), compare);

    cout << students.back().Name << "\n" << students.front().Name;


    return 0;
}