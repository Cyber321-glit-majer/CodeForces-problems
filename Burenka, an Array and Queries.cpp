#include<bits/stdc++.h>
#define ll int
using namespace std;


bool gcd(ll a,ll b)
{
     if ( __gcd(a, b) == 1)
        return 1;
    else
        return 0;      
}
int main()
{
   ll n,m,c,q;
   cin>>n>>m>>c>>q;
   ll a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
  
   while(q--)
   {
       ll cnt=0;
       ll l,r;
   
      ll p=1;
       cin>>l>>r;
       for(int i=l-1;i<r;i++)
       {
           p=p*a[i];
       }
      
       for(int i=1;i<=c;i++)
       {
          
            if(gcd(p,i))
           {
               cnt++;
           } 
       }
       
         cout<<cnt<<endl; 
   } 

   
    return 0;
}
