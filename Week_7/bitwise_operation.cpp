#include <bits/stdc++.h>
using namespace std;

bool check_kth_bit_on_or_off(int n, int k)
{
    return ((n >> k) & 1);
}

void print_on_and_off_bits(int n)
{
    for (int i = 0; i <= 7; i++)
    {
        if(check_kth_bit_on_or_off(n,i))
        {
            cout << 1 << " ";
        }
        else
        {
            cout << 0<< " ";
        }
    }
}

int turn_on_kth_bit(int n, int k)
{
    return (n | ( 1 << k));
}

int turn_off_kth_bit(int n, int k)
{
    return (n&(~(1 << k)));
}

int toggle_kth_bit(int n, int k)
{
    return (n ^ (1 << k));
}

int main()
{
    // cout << check_kth_bit_on_or_off(45,4) << endl;
    // print_on_and_off_bits(45);
    // cout << turn_on_kth_bit(45,4) << endl;
    // cout << turn_off_kth_bit(45,3) << endl;
    cout << toggle_kth_bit(45,4) << endl;


    return 0;
}