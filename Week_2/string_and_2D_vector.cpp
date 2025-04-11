#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*

    int n;
    cin >> n;

    string s;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        s.push_back(c);
    }
    
    

    cout << s << endl;

    s.pop_back();


    cout << s << endl;
    cout << s.front() << " " << s.back() <<endl;
    
    */

    string s;
    cin >> s;
    int counter = 0;
    // cout << s.substr(0,3) << endl;

    for (int i = 0; i < s.size(); i++)
    {
        string s1 = s.substr(i,4);
        if(s1 == "abir")
        {
            counter++;
        }
    }

    cout << counter << endl;
    





    return 0;
}