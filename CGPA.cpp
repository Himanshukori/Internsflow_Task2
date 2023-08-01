#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float max, obt;
    char exit;
    float cgpa;
    while (1)
    {
        cout << "Enter the obtained marks: ";
        cin >> obt;
        if (obt < 0)
        {
            cout << "Invalid Obtained Marks." << endl;
            continue;
        }
        cout << "Enter the maximum marks: ";
        cin >> max;
        if (max < obt)
        {
            cout << "Invalid Maximum marks." << endl;
            continue;
        }
        cgpa = (obt / max) * 10;
        cout << "The CGPA for given data is:";
        cout << fixed << setprecision(2) << cgpa << endl;
        cout << "Do you want to exit(Y/N):";
        cin >> exit;
        if (exit == 'Y' || exit == 'y')
            break;
        else
            continue;
    }
    return 0;
}