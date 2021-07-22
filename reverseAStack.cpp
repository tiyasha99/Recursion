#include <iostream>
#include <stack>
using namespace std;
void insert(stack<int>&s,int ele)
{
  if(s.empty())
  {
    s.push(ele);
    return;
  }
  int temp=s.top();
  s.pop();
  insert(s,ele);
  s.push(temp);
}
void rev(stack<int> &s)
{
  if(s.size()==1)
      return;
  int temp=s.top();
  s.pop();
  rev(s);
  insert(s,temp);
  return;
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
  rev(s);
  while(!s.empty())
  {
    cout<<s.top()<<" ";
    s.pop();
  }
}