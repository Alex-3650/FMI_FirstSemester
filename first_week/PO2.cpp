
#include <iostream>
using namespace std;

void printPyramid(int rows) {
    for (int r = 0; r < rows; r++) {

        for (int i = rows-r-1; i > 0; i--) {
            cout << " ";
        }
        for (int j = 0; j < r*2+1; j++) {
            cout << "*" ;
        }
        cout << endl;
    }
}
int main(int argc, char *argv[]) {
    int rows;
    cin >> rows;
    printPyramid(rows);

}




