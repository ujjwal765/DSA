#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void natural(int a)
{
    if(a==0)
    {
        return;
    }
    cout<<a;
    natural(a-1);
}
int main()
{
    int n;
    cin>>n;
    natural(n);
}
