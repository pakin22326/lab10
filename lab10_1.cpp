#include <iostream>
using namespace std;

int main() {
    int count[5] = {0, 0, 0, 0, 0};
    int Student = 1;
    char grade;

    cout << "Please input grade of each student (A-F) or input 0 to exit.\n";

    do {
        cout << "Student [" << Student << "]: ";
        cin >> grade;

        if (grade == '0') {
            break;
        }

        if (grade == 'A') {
            count[0]++;
            Student++;
        }
        else if (grade == 'B') {
            count[1]++;
            Student++;
        }
        else if (grade == 'C') {
            count[2]++;
            Student++;
        }
        else if (grade == 'D') {
            count[3]++;
            Student++;
        }
        else if (grade == 'F') {
            count[4]++;
            Student++;
        }
        else {
            cout << "Wrong input. Please input again.\n";
        }

    } while (true);

    cout << "In total " << Student - 1 << " students.\n";
    cout << "A = " << count[0] << ", ";
    cout << "B = " << count[1] << ", ";
    cout << "C = " << count[2] << ", ";
    cout << "D = " << count[3] << ", ";
    cout << "F = " << count[4] << endl;

    return 0;
}