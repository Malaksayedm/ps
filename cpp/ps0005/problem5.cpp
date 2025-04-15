#include <iostream>
using namespace std;
int main ()
{
    // prompting user for 2 operands and an operator 1.5/2
    double operand1, operand2, result;
    char operator_6;
    cout << "Enter the first operand" << endl;
    cin >> operand1;
    cout << "Enter the second operand" << endl;
    cin >> operand2;
    cout << "Enter the operator(+,-,%,*,/) " << endl;
    cin >> operator_6;

    // checking user inputs and processing 2.5/4
    switch (operator_6)
    {
        case '+':
            result = operand1 + operand2;
            break;
        
        case '-':
            result = operand1 - operand2;
            break;
        
        case '%':
        {
            if (operand2 != 0 && operand1 == (int)operand1 && operand2 == (int)operand2)
                result = (int)operand1 % (int)operand2;
            else
            {
                cout << "Error\n" << endl;
                return 4;
            }
        } // 0.5/1
        break;
        
        case '*':
            result = operand1 * operand2;
            break;
        
        case '/':
        {
            if (operand2 != 0)
                result = operand1 / operand2;
            else {
                if (operand1 == 0)
                {
                    cout << "Infinite number of solutions: (0 / 0) is Undefined Quantity." << endl;
                    return 3;
                }
                else
                {
                    cout << "Math Error: cannot divide by 0." << endl;
                    return 2;
                }
            } // 0.5/1
        }
        break;
      
        default:
        {
            cout << "Invalid operator\n" << endl;
            return 1;
        } // 1/1
    } // 0.5/1

    // printing the result if all data is valid 1/1
    cout << "Result=\n" << result << endl;
    return 0;
}
// good work 👍 7/10
