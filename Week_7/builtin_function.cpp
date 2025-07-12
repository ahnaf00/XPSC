#include <bits/stdc++.h>
using namespace std;

bool check_kth_bit_on_or_off(int n, int k)
{
    return ((n>>k)&1);
}

void print_on_or_off_bits(int n)
{
    for (int i = 0; i <= 7; i++)
    {
        if(check_kth_bit_on_or_off(n,i))
        {
            cout << 1 << " ";
        }
        else
        {
            cout << 0 << " ";
        }
    }
}


int main()
{
    print_on_or_off_bits(11);
    cout << endl;
    cout << __builtin_popcount(11) << endl;
    cout << __lg(11) << endl;
    cout << (1<<__lg(11)) << endl;

    return 0;
}