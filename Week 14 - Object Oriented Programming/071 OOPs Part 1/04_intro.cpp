#include <iostream>
using namespace std;

class Player {
    int health;
    int score;
public:
    void setHealth(int h) {
        health = h;
    }
    void setScore(int s) {
        score = s;
    }
    void display(void) {
        cout << "Health: " << health << endl;
        cout << "Score: " << score << endl;
    }
};

int main(void) {
    Player onurag;
    onurag.setHealth(100);
    onurag.display();
    return 0;
}