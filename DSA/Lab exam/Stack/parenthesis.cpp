#include <iostream>
#include <stack>
using namespace std;
#define maxSize 5

bool check(string expression)
{
    stack<char> temp;
    for (int i = 0; i < expression.length(); i++)
    {
        if (expression[i] == '{' || expression[i] == '(' || expression[i] == '[')
        {
            temp.push(expression[i]);
        }
        else if (expression[i] == '}' || expression[i] == ')' || expression[i] == ']')
        {
            if (temp.empty())
            {
                return false;
            }
            else
            {
                temp.pop();
            }
        }
    }
    if (temp.empty())
    {
        return true;
    }
    return false;
}

int main()
{
    string expression = "{}435{{{dsafsdfa}[]}}";
    if (check(expression))
    {
        cout << "Balanced";
    }
    else
        cout << "Not balanced";
    return 0;
}