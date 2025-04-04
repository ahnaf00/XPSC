#include <bits/stdc++.h>
using namespace std;

int numLength(int num)
{
    if(num == 0)
    {
        return 1;
    }
    
    int counter = 0;

    while(num)
    {
        num = num / 10;
        counter++;
    }

    return counter;
}

int main()
{
    int num;
    cin >> num;

    for (int i = 0; i < 4-numLength(num); i++)
    {
        cout << 0;
    }
    cout << num << endl;
    
    return 0;
}