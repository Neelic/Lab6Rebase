//second_branch commit 3 TAKE FROM MAIN
//main commit 1

//main commit 2

//second_branch commit 3 TAKE FROM THIS
using namespace std;
int main() {
    char op;
    double num1, num2;
    cout << "Enter operator either + or - or * or /: ";
    cin >> op;
    cout << "Enter two operands: ";
    cin >> num2; //second_branch commit 3 TAKE FROM BOTH

    switch (op) {
        case '+':
            cout << num1 + num2;
            break;

        case '-':
            cout << num1 - num2;
            break;

        case '*':
            cout << num1 * num2;
            break;

        case '/':
            cout << num1 / num2;
            break;

        default:
            cout << "Error! operator is not correct";
            break;
    }

    return 0;
}

//second_branch commit 1

//second_branch commit 2