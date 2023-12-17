#include <iostream>
#include <vector>
#include "student.h"
#include "session1.h"
#include "session2.h"
using namespace std;

int main() {

    int session1Grades1[] = { 8, 6, 6, 8 };
     AfterSession1 student1("Darya", 2, 2, session1Grades1);

    int session1Grades2[] = { 7, 7, 8, 5 };
     AfterSession1 student2("Marya", 2, 2, session1Grades2);

   

    int session2Grades1[] = { 10, 9, 9, 10, 10 };
     AfterSession2 student3("Veronica", 1, 2, session1Grades1, session2Grades1);

    int session2Grades2[] = { 8, 8, 9, 10, 7 };
     AfterSession2 student4("Nastya", 1, 2, session1Grades2, session2Grades2);

   
    Student* students[4] = { &student1, &student2, &student3, &student4};

    double total = 0;

    for (int i = 0; i < 4; i++) {
        total += (students[i]-> Average());
    }

    double totalAverage1 = total / 4;

    cout << totalAverage1 << endl;



    total = 0;
    int counter = 0;
    for (int i = 0; i < 2; i++) {
        if (students[i]->getGroup() == 2) {
            counter += 1;
            total += (students[i]->Average());
        }
    }
    if (counter != 0) cout << "2nd group total average after first session: " << total / counter << endl;

    total = 0;
    counter = 0;
    for (int i = 2; i < 4; i++) {
        if (students[i]->getGroup() == 2) {
            counter += 1;
            total += (students[i]->Average());
        }
    }
    if (counter != 0) cout << "2nd group total average after second session: " << total / counter << endl;
    cout << student4;
    return 0;
}
