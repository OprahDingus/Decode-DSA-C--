#include <iostream>
#include <string>
using namespace std;

class Player {
public:
    int score;
    int health;
    string name;
    void showHealth(void) {
        cout << "Remaining health: " << health << endl;
    }
};

int main(void) {
    Player onurag;
    onurag.score = 450;
    onurag.health = 80;
    onurag.name = "onurag";
    cout << onurag.score << endl;
    cout << onurag.name << endl;
    cout << onurag.health << endl;
    return 0;
}