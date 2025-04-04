#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin >> s1 >> s2;

    int counter = 0, strLn = s1.length();

    for (int i = 0; i < strLn ; i++)
    {
        if(s1[i] != s2[i])
        {
            counter++;
        }
    }
    
    cout << counter << endl;

    return 0;
}