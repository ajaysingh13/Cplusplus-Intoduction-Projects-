#include <iostream> 

using namespace std;

int main() {

cout << "This program remembers the maximum positive integer value entered. Tell the program to stop with 0 when you are done." << endl;

int x, max, i, y;

max = 0;

i = 1;

    while(i == 1){
        cout << "enter a number: ";
        cin >> x; 

        if(x > max){
            max = x;
        }
        else{
            x = x;
        }

        cout << "the max is: " << max << endl;

        cout << "continue?(1 for yes, 0 for no) ";
        cin >> i;

        if(i == 0){
            cout << "the max is: " << max << endl;
        }

    }

    return 1;
}