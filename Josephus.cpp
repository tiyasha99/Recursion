#include <iostream>
#include <vector>
using namespace std;
void solve(vector<int> v, int k,int index)
{
  if(v.size()==1)
  {
    cout<<v[0];
    return;
  }
  index=(index+k)%v.size();
  v.erase(v.begin()+index);
  solve(v,k,index);
  return;
}
int main()
{
  int n,k,index=0;
  cin>>n;
  cin>>k;
  vector<int> v(n);
  for(int i=0;i<n;i++)
  {
    v[i]=i+1;
  }
  k--;
  solve(v,k,index);
}