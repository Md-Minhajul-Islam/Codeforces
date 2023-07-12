// Q: https://codeforces.com/problemset/problem/742/A
#include <bits/stdc++.h>
using namespace std;
int binaryExpo(int n)
{
    int result = 1;
    int power = n;
    int base = 8; // thus we have to find the last number we don't need 
                  // the whole number (1378) we just use the last digit.
    int mod = 10; // To extract the last digit we'll mod by 10.
    while (power)
    {
        if (power % 2 == 1)
        {
            result = (result * base) % mod;
            power--;
        }
        else
        {
            base = (base * base) % mod;
            power /= 2;
        }
    }
    return result;
}
int main()
{
    int n;
    cin >> n;
    cout << binaryExpo(n);
    return 0;
}