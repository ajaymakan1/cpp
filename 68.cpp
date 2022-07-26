#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int findsum(int num)
{    int sum = 0 , r;
    if (num > 26)
    {
        while (num != 0)
        {
            r = num % 10;
            sum = sum + r;
            num = num / 10;
        }
        return findsum(sum);
    }
    else
    {
        return num+64;
    }
}

int main()
{
    int num, sum = 0, r;
    cin >> num;
    if(num>26){
    while (num != 0)
    {
        r = num % 10;
        sum = sum + r;
        num = num / 10;
    }
    }
    else{
        cout<<char(num + 64)<<endl;
    }
if (sum>26)
    {int t;
    t = findsum(sum)+64;
    cout << char(t) << endl;}
    return 0;
}