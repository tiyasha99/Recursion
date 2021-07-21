#include <iostream>
#include <vector>
using namespace std;
void insert(vector <int> &v,int temp)
{
	if(v.size()==0 || v[v.size()-1]<=temp)
	{
		v.push_back(temp);
		return;
	}
	int val=v[v.size()-1];
	v.pop_back();
	insert(v,temp);
	v.push_back(val);
	return;
}
void sort(vector <int> &v)
{
	if(v.size()==1)
		return;
	int temp=v[v.size()-1];
	v.pop_back();
	sort(v);
	insert(v,temp);
}

int main()
{
	vector<int> v;
	vector <int> ans;
	v.push_back(1);
	v.push_back(5);
	v.push_back(0);
	v.push_back(2);
	sort(v);
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	
}
