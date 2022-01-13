#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int even(int n,int n1)
{
    if(n>n1)
    return 0;
    cout<<n<<" ";
    return even(n+2,n1);

}
int main()
{
    int n=2,n1;
    cin>>n1;
    even(n,n1);
}
