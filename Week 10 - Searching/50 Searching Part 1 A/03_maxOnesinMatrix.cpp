#include <iostream>
using namespace std;

int main(void) {
    int m, n;
    cout << "Enter rows and columns: ";
    cin >> m >> n;
    int arr[m][n];
    cout << "Enter Matrix elements:" << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    int x = 1;
    int row = -1;
    int maxOnes = -1;
    for(int i = 0; i < m; i++) {
        int count = 0;
        int low = 0;
        int high = n - 1;
        int firstId = -1;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(arr[i][mid] == x) {
                if(arr[i][mid - 1] != x) {
                    firstId = mid;
                    break;
                }
                else {
                    high = mid - 1;
                }
            }
            else if(arr[i][mid] < x) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        if(firstId != -1) {
            count = n - firstId;
        }
        if(maxOnes < count) {
            maxOnes = count;
            row = i;
        }
    }
    cout << "Max ones in row " << row << " of amount " << maxOnes;
    return 0;
}