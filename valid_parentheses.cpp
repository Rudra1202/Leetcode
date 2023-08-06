#include <bits/stdc++.h>
using namespace std;
#define int long long
bool isValid(string s)
{
    stack<char> stack;
    for (auto it : s)
    {
        if (stack.empty())
            stack.push(it);
        else
        {
            cout << stack.top() << endl;
            if (it == ')')
            {
                if (stack.top() == '(')
                    stack.pop();
                else
                    return 0;
            }
            else if (it == '}')
            {
                if (stack.top() == '{')
                    stack.pop();
                else
                    return 0;
            }
            else if (it == ']')
            {
                if (stack.top() == '[')
                    stack.pop();
                else
                    return 0;
            }
            else stack.push(it);
        }
    }
    if (stack.empty())
        return 1;
    else
        return 0;
}
int32_t main()
{
    string s = "[";
    cout << ((isValid(s)) ? "true" : "false") << endl;
    return 0;
}