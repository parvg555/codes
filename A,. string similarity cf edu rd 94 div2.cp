  #include<bits/stdc++.h>
  #define pi 3.14159265359
  #define ll long long
  #define wh(t) int t;cin>>t; while(t--)
  #define speed  ios::sync_with_stdio(0); cin.tie(0);
  #define endl "\n"
  #define f(i,a,b) for(int i=a;i<b;i++)
  using namespace std;
  #include<string.h>

  //aditya ranaut- phoenix_aditya

  void solve()
  {
      ll n;
      cin>>n;
      
      string s;
      cin>>s;
    
    // string definition not working
      string s2="";
      
      int i=0;
      
      for(char c: s)
      {
          if(i%2==0)
              s2+=c;
          i++;
      }
      
      cout<<s2<<endl;
      
  }



  int main()
  {
    // this speed is not working
      speed
      wh(t)
       {solve();}
      
      return 0;
  }
