#include <iostream>
using namespace std;

// void printPath(int SR, int SC, int ER, int EC, string s) {
//     if((SR > ER) || (SC > EC)) {
//         return;
//     }
//     if((SR == ER) && (SC == EC)) {
//         cout << endl << s;
//         return;
//     }
//     printPath(SR, SC + 1, ER, EC, s + 'R');
//     printPath(SR + 1, SC, ER, EC, s + 'D');
// }

int maze(int startRow, int startColumn, int endRow, int endColumn) {
    if((startRow > endRow) || (startColumn > endColumn)) {
        return 0;
    }
    if((startRow == endRow) && (startColumn == endColumn)) {
        return 1;
    }
    int rightWays = maze(startRow, startColumn + 1, endRow, endColumn);
    int downWays = maze(startRow + 1, startColumn, endRow, endColumn);
    int totalWays = rightWays + downWays;
    return totalWays;
}

int main(void) {
    int SR, SC, ER, EC;
    cout << "Enter Starting Row and Starting Column: ";
    cin >> SR >> SC;
    cout << "Enter Ending Row and Ending Column: ";
    cin >> ER >> EC;
    cout << "Total ways out: " << maze(SR, SC, ER, EC);
    // printPath(SR, SC, ER, EC, "");
    return 0;
}