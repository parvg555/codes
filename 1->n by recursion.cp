
// the header is not reading
#include<bit/stdc++.h>
#define pi 3.14159265359
long piter;
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
//i have fixed your error on line 50
// some problem with the definition
#define endl
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

void print(int n)
{
    if(n==1)
    {cout<<1<<" ";return;}
    
    print(n-1);
    cout<<n<<" ";
}
// Main function 
int main()
{
    print(7);
    
    
    return 0;
}
