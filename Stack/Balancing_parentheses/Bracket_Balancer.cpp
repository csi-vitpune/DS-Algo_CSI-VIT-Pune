
#include<bits/stdc++.h>
using namespace std;

string isBalanced(string s) 
{
    stack<char> stk;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            stk.push(s[i]);
        
        if((s[i] == ')' && stk.top() == '(') || (s[i] == '}' && stk.top() == '{') || (s[i] == ']' && stk.top() == '['))
            stk.pop();
    }

    if(stk.empty() == true)
        return("YES");
    else
        return("NO");

}


int main()
{
    string ans;
    ans = isBalanced("[({[()})]");

    cout << ans << endl;

    return 0;
}