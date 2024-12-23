#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string grades[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F","W"};
    srand(time(0));

    cout << "Press Enter 3 times to reveal your future." << endl;
    for (int i = 0; i < 3; i++) {
        cin.get();
    }

    int randomIndex = rand() % 9; 
    cout << "You will get " << grades[randomIndex] << " in this 261102." << endl;

    return 0;
}