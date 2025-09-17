//WAP to find out the average of N numbers read from the users.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of values: ";
    cin >> n;

    double sum = 0, num;

    for (int i = 0; i < n; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> num;
        sum += num;
    }

    double average = sum / n;
    cout << "Average = " << average << endl;

    return 0;
}

//output

//Enter the number of values: 5
//Enter number 1: 1
//Enter number 2: 2
//Enter number 3: 3
//Enter number 4: 4
//Enter number 5: 5
//Average = 3

