#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string name;
    float price;
    int noOfPages;
    int countBook(int p) {
        if(price < p) {
            return 1;
        }
        else {
            return 0;
        }
    }
    bool isBookPresent(string book) {
        if(name == book) {
            return true;
        }
        else {
            return false;
        }
    }
};

int main(void) {
    Book harryPotter;
    harryPotter.name = "Harry Potter";
    harryPotter.noOfPages = 156;
    harryPotter.price = 350.50;
    cout << harryPotter.countBook(500) << endl;
    cout << harryPotter.isBookPresent("Harry Potter") << endl;
    return 0;
}