#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    deque<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int sum1=0,sum2=0,who=1;

    while (!nums.empty())
    {
        int left = nums.front(),right=nums.back(),mx = max(left,right);
        if(who%2!=0)
        {
            sum1+=mx;
        }
        else
        {
            sum2+=mx;
        }

        if(mx == left)
        {
            nums.pop_front();
        }
        else
        {
            nums.pop_back();
        }
        who++;
    }

    cout << sum1 << " " << sum2 << endl;



    return 0;
}