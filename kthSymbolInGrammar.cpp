#include <iostream>
#include <cmath>

using namespace std;
int solve(int n,int k){
  if(n==1 && k==1)
      return 0;
  int mid= pow(2,n-1)/2;
  if(k<=mid)
    return solve(n-1,k);
  else
    return !solve(n-1,k-mid);
}
int main()
{
  int n=4;
  int k=3;
  int ans=solve(n,k);
  cout<<ans;
}