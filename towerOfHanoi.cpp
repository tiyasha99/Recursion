#include <iostream>
using namespace std;
void solve(int n,int s, int d,int h)
{
  
  if(n==1)
  {
    cout<<"Moving plate "<<n<<" from "<<s<<" to "<<d<<endl;
    return;
  }
    
  solve(n-1,s,h,d);
  cout<<"Moving plate "<<n<<" from "<<s<<" to "<<d<<endl;
  
  solve(n-1,h,d,s);
}
int main()
{
  int s,d,n,h;
  n=3;
  s=1;
  h=2;
  d=3;
  solve(n,s,d,h);
  
}