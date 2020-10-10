
#include <bits/stdc++.h>
using namespace std;
int main()
{
     int a[1000],dp[1000];
     int x;
     cin>>x;
     for(int i=0;i<x;i++)
         cin>>a[i];
     dp[0]=a[0];
          for(int i=1;i<x;i++)
         if(dp[i-1]>0)
             dp[i]=dp[i-1]+a[i];
         else dp[i]=a[i];int max=dp[0];
         for(int i=1;i<x;i++)
             if(max<dp[i])
                 max=dp[i];cout<<max;




}



