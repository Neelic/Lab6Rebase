//main commit 6
//main commit 1

//main commit 2

//main commit 3

//main commit 4
using namespace std;
//main commit 7
int main() {
    char op;
    double num1, num2;
    cout << "Enter operator either + or - or * or /: ";
    cin >> op;
    cout << "Enter two operands: ";
    cin >> num1; //main commit 6

    switch (op) {
        case '+':
            printf(num1 + num2); //main commit 5
            break;

        case '-':
            printf(num1 - num2); //main commit 5
            break;

        case '*':
            cout << num1 * num2;
            break;

        case '/':
            cout << num1 / num2;
            break;

        default:
            printf("Error! operator is not correct"); //main commit 5
            break;
    }

    return 0;
}