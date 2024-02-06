//============================================================================
// Name        : 21465_Pract9.cpp
// Author      : Chaitanya Paraskar
// Roll No.    : 21465
// Aim         : In any language program mostly syntax error occurs due to unbalancing delimiter such as(), {}, [].
//               Write C++ program using stack to check whether given expression is well parenthesized or not.
//============================================================================

#include <iostream>
using namespace std;

class StackOp
{
private:
    char stack[10];

public:
    void checkPara()
    {
        char exp[10], ch;
        int flag = 0;
        int top = -1;
        cout << "Enter the expression to check " << endl;
        cin >> exp;

        for (int i = 0; exp[i] != '\0'; i++)
        {
            if (exp[i] == '{' || exp[i] == '[' || exp[i] == '(')
            {
                top++;
                stack[top] = exp[i];
            }
            else if (exp[i] == '}' || exp[i] == ']' || exp[i] == ')')
            {
                ch = stack[top];
                top--;

                switch (exp[i])
                {
                case '}':
                    if (ch != '{')
                    {
                        flag = 1;
                    }
                    break;

                case ')':

                    if (ch != '(')
                    {
                        flag = 1;
                    }
                    break;

                case ']':

                    if (ch != '[')
                    {
                        flag = 1;
                    }
                    break;
                }

                if (flag == 1)
                {
                    break;
                }
            }
            else
            {
                // continue for character
            }
        }

        if (top != -1 && flag == 1)
        {
            cout << "The given expression is not well paranthesized " << endl;
        }
        else
        {
            cout << "The given expression is well parathesized " << endl;
        }
    }
};

int main()
{
    StackOp obj;
    obj.checkPara();

    return 0;
}

/**

Output:

$ g++ Pract9.cpp -o out && ./out
Enter the expression to check
({{[a+b)]}
The given expression is not well paranthesized

$ g++ Pract9.cpp -o out && ./out
Enter the expression to check
[{(a+b)}]
The given expression is well parathesized

*/