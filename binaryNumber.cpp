#include <iostream>
using namespace std;
void binum(int n,string op,int one,int zero){
  if(n==0)
  {
    cout<<op<<endl;
    return;
  }
  string op1=op;
  string op2=op;
  if(one!=zero)
  {
    op1.push_back('0');
    zero++;
    binum(n-1,op1,one,zero);
  }
  op2.push_back('1');
  one++;
  binum(n-1,op2,one,zero);
  return;
}
int main()
{
  int n;
  int one=0;
  int zero=0;
  cin>>n;
  string op="1";
  n--;
  one++;
  binum(n,op,one,zero);
}