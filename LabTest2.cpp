#include <iostream>
#include <iomanip>
using namespace std;
const int MAX = 5;

struct student {
    int ID;
    char name[20];
    int mark1, mark2, mark3;
    int totMark;
};

void toMarkSort(student[]);

int main()
{
    student s[MAX];
    for (int i = 0; i < MAX; i++)
    {
        cout << "Enter information for student_" << i + 1 << endl;
        cin >> s[i].ID;
        cin >> s[i].name;
        cin >> s[i].mark1;
        cin >> s[i].mark2;
        cin >> s[i].mark3;
        s[i].totMark = s[i].mark1 + s[i].mark2 + s[i].mark3;
    }
    toMarkSort(s);
    return 0;
}

void toMarkSort(student ss[])
{
    for (int i = 0; i < MAX - 1; i++)
    {
        for (int j = i + 1; j < MAX; j++)
        {
            if (ss[i].totMark < ss[j].totMark)
            {
                student temp = ss[i];
                ss[i] = ss[j];
                ss[j] = temp;
            }
        }
    }
    cout << "Student ID" << setw(15) << "Student Name"<< setw(15) << "Subject 1" << setw(15)
        << "Subject 2" << setw(15)  << "Subject 3" << setw(15) << "Total Mark" << endl;
    for (int i = 0; i < MAX; i++)
    {
        cout<< ss[i].ID << setw(15) << ss[i].name << setw(15) << ss[i].mark1 << setw(15)
            << ss[i].mark2 << setw(15) << ss[i].mark3 << setw(15) << ss[i].totMark << endl;
    }
}
