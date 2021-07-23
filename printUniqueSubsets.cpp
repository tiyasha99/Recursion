#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve(string ip,string op,vector<string> &v)
{
  if(ip.length()==0)
  {
    if(find(v.begin(),v.end(),op)==v.end())
        v.push_back(op);
    return;
  }
  string op1=op;
  string op2=op;
  op2.push_back(ip[0]);
  ip.erase(ip.begin()+0);
  solve(ip,op1,v);
  solve(ip,op2,v);
  return;
}
int main()
{
  string ip;
  cin>>ip;
  string op="";
  vector<string> v;
  solve(ip,op,v);
  for(int i=0;i<v.size();i++)
  {
    cout<<v[i]<<" ";
  }
}