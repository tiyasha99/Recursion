#include <iostream>
#include <stack>
using namespace std;
void solve(stack<int> &s, int k)
{
  if(k==1)
  {
    s.pop();
    return;
  }
  int temp=s.top();
  s.pop();
  solve(s,k-1);
  s.push(temp);
  return;
}
stack<int> midDel(stack<int> s, int size)
{
  if(s.empty())
      return s;
  int k=(size/2)+1;
  solve(s,k);
  return s;
}
int main()
{
  stack<int> s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);
  int size=s.size();
  s=midDel(s,size);
  while(!s.empty())
  {
    cout<<s.top()<<" ";
    s.pop();
  }
}
