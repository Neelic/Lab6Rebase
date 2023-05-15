#include <iostream> 
//main commit 1
using namespace std;
int main() {
    char op;
    double num1, num2;
    cout << "Enter operator either + or - or * or /: ";
    cin >> op;
    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch (op) {
        case '+':
            cout << num2 + num1 + num2 - num1; //first_branch commit 2 TAKE FROM BOTH
            break;

        case '-':
            cout << num2 + num1; //first_branch commit 2 TAKE FROM MAIN
            break;

        case '*':
            cout << num1 * num2;
            break;

        case '/':
            cout << num1 / num2;
            break;

        default:
            cout << "INCORRECT!"; //first_branch commit 2 TAKE FROM THIS
            break;
    }

    return 0;
    //first_branch commit 1
}