#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
    vector<int> v;
    for (int i = 0; i < v.size(); i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << " ";
    }
    return 0;
}