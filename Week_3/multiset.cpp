#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    multiset<int> ml;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        ml.insert(x);
    }
    
    /**
     * 
     * sorted
     * duplicate value
     * 
     * it erases all the occurrence of that number
     ml.erase(6); // O(logn)
     ml.erase(9); // O(logn+k) k is the frequency of the number

     */


    /*
        but when erases the iterator it does not erase the all occurrence of that number
    */

    auto it = ml.find(9);
    ml.erase(it);
    // O(logn+logn)

    for(auto x : ml)
    {
        cout << x <<  " ";
    }

    cout << endl;

    /*
        O(logn)
        O(logn+k) number of occurrence of that number
    */
    cout << ml.count(9) << endl;

    return 0;
}


/*
8
2 9 6 9 9 2 9 4
*/