#include <iostream>
using namespace std;

int main(void) {
    char c = 'h';
    char str[] = {'a', 'b', 'c', 'd', 'e'};
    for(int i = 0; i < 5; i++) {
        cout << str[i] << " ";
    }
    cout << "My name is Onurag" << endl;
    cout << "abc\ndef" << endl;
    cout << "abc\tdef" << endl;
    char ch = '\0';
    cout << (int)ch << endl;
    char star[5] = {'a', 'b', 'c', 'd', 'e'};
    cout << (int) (star[5]) << endl;

    char string1[] = {'a', 'b', 'c', 'd', 'e'};
    cout << string1 << endl;
    
    char string2[] = {'a', 'b', '\0', 'c', 'd', 'e'};
    cout << string2 << endl;
    return 0;
}