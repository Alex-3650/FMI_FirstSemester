
#include <iostream>
using namespace std;

int main() {

    int a,b;
    cout << "Input:\n";
    cin >> a >> b;

    if (a <10 || b<10) {
        cout << "Numbers should be greater than or equal to 10" << endl;
        return 0;
    }
    int  firstTwoDigits=a%100;
    int secondTwoDigits=b%100;
    int newlyFormedNumber=(firstTwoDigits * 100) + secondTwoDigits;

    cout << "Output:\n";
    cout << newlyFormedNumber;

    return 0;
}