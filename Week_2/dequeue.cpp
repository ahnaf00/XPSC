#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    deque<int> dq = {1,2,3,4,5,6};

    // O(1)
    dq.push_front(12);
    dq.push_front(13);

    // O(1)
    dq.pop_front();
    dq.pop_back();

    for(auto v : dq)
    {
        cout << v << " "; 
    }

    cout << endl;
    
    // O(1)
    cout << dq.front() << endl;
    cout << dq.back() << endl;

    return 0;
}