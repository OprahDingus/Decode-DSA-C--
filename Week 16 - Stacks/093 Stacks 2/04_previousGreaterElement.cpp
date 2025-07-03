#include <iostream>
#include <stack>
using namespace std;

int main(void) {
    int arr[] = {3,1,2,7,4,6,2,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int pge[n];

    // for (int i = 0; i < n; i++) {
    //     nge[i] = -1;
    //     for (int j = i + 1; j < n; j++) {
    //         if (arr[j] > arr[i]) {
    //             nge[i] = arr[j];
    //             break;
    //         }
    //     }
    // }

    stack<int> st;
    pge[0] = -1;
    st.push(arr[0]);
    for (int i = 1; i <= n - 1; i++) {
        while (st.size() > 0 && st.top() <= arr[i]) {
            st.pop();
        }
        if (st.size() == 0) {
            pge[i] = -1;
        }
        else {
            pge[i] = st.top();
        }
        st.push(arr[i]);
    }
    for (int i = 0; i < n; i++) {
        cout << pge[i] << " ";
    }
    cout << endl;
}