#include <bits/stdc++.h>
using namespace std;

int main()
{
    /**
     *  SET
     * sorted
     * unique
     */

    int n;
    cin >> n;
    set<int> s;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    // access value with iterator

    /*
    auto it = s.begin();
    it++;
    cout << *it << endl;
    
    for (auto v : s)
    {
        cout << v << " ";
    }


    auto it = s.find(60);
 
    if(it != s.end())
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
    
        s.erase(6);
    
        for (auto x : s)
        {
            cout << x << " ";
        }
        cout << endl;
        cout << s.count(9) << endl;
    */

    /*
    
    lower_bound seaches for the elemnt and if found, returns the iterator of the element otherwise returns the immidiate higher value iterator
    
    int N;
    cin >> N;
    auto it = s.lower_bound(N);

    if(it==s.end())
    {
        cout << "END" << endl;
    }
    else
    {
        cout << *it << endl;
    }
    */

    /*
        strictly returns the upper value itertaor even if the element exists 
        int N;
        cin >> N;
        auto it = s.upper_bound(N);
     
        if(it==s.end())
        {
            cout << "END" << endl;
        }
        else
        {
            cout << *it << endl;
        }
    */

    




    return 0;
}

/*
6
2 9 6 2 9 4
*/