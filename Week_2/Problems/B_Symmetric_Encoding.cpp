#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        set<char> str;

        for (char cc : s)
        {
            str.insert(cc);
        }
        vector<char> arr;

        for(auto x : str)
        {
            arr.push_back(x);
        }


        map<char,char> ch;
        int ln = arr.size();

        for (int i = 0; i < ln; i++)
        {
            ch[arr[i]] = arr[ln-i-1];
        }
        
        string s2="";
        for(char c : s)
        {
            s2+=ch[c];
        }

        cout << s2 << endl;

    }


    
    

    return 0;
}

// c => s
// d => r
// e => o
// f => f
// o => e
// r => d
// s => c