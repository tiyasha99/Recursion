#include <iostream>
#include <stack>
using namespace std;
void insert(stack <int> &v,int temp)
{
	if(v.size()==0 || v.top()<=temp)
	{
		v.push(temp);
		return;
	}
	int val=v.top();
	v.pop();
	insert(v,temp);
	v.push(val);
	return;
}
void sort(stack <int> &v)
{
	if(v.size()==1)
		return;
	int temp=v.top();
	v.pop();
	sort(v);
	insert(v,temp);
}

int main()
{
	stack<int> v;
	stack <int> ans;
	v.push(1);
	v.push(5);
	v.push(0);
	v.push(2);
	sort(v);
	while(!v.empty())
	{
		cout<<v.top()<<" ";
    v.pop();
	}
	
}
