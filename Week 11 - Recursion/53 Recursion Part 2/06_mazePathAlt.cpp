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

int maze(int Row, int Column) {
    if((Row < 1) || (Column < 1)) {
        return 0;
    }
    if((Row == 1) && (Column == 1)) {
        return 1;
    }
    int rightWays = maze(Row, Column - 1);
    int downWays = maze(Row - 1, Column);
    int totalWays = rightWays + downWays;
    return totalWays;
}

int main(void) {
    int Row, Column;
    cout << "Enter Rows and Columns: ";
    cin >> Row >> Column;
    cout << "Total ways out: " << maze(Row, Column);
    // printPath(SR, SC, ER, EC, "");
    return 0;
}