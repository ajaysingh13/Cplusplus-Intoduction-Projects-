#include <iostream> 

using namespace std;

int main() {

    int x, i;

   
    cout << "This program prints all the even numbers up to a selected integer." << endl; 

    

    cout << "Choose a number to increment to: ";
    
    cin >> x;

    for(i = 2; i <= x; i = i + 2) {
        cout << i << endl;
    }

    return 1;
}