#include <iostream>
# include  <cmath>
using namespace std;
int main() {
    //Define variables
    string operation;
    double number1, number2;

    // get user input
    cout << "Enter first Number: ";
    cin >> number1;
    cout << "Enter operation (+, - , *, /): ";
    cin >> operation;
    cout << "Enter second Number: ";
    cin >> number2;

    //if else checking entered operation
    if (operation == "+") {
       cout << number1 + number2;
    } else if (operation == "-") {
      cout << number1 - number2;
    } else if  (operation == "*") {
        cout << number1 * number2;
    }else if (operation == "/") {
        cout << number1 / number2;
    }else {
        cout << "Not a recognized operation!";
    }
    return 0;
}
