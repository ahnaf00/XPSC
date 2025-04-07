#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    deque<int> dq = {1,2,3,4,5,6};

    dq.push_front(12);
    dq.push_front(13);

    dq.pop_front();
    dq.pop_back();

    for(auto v : dq)
    {
        cout << v << " "; 
    }

    cout << endl;
    
    cout << dq.front() << endl;
    cout << dq.back() << endl;

    return 0;
}