#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
    vector<int> v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(3);
    v.push_back(1);
    v.push_back(7);
    int x = 1;
    int idx = -1;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i] == x)
        {
            idx = i;
            break;
        }
    }
    cout << idx;
    return 0;
}