#include<bits/stdc++.h>
using namespace std;

int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    int count1=0,count2=-1,n=N;
    if(n==0) return 0;
    while(n%2!=1)
    {
      n=n>>1;
    }
    while(n!=0)
    {
      if(n%2==1)
      {
        n=n>>1;
        if(count1>count2)
        count2=count1;
        count1=0;
      }
      else
      {
        count1++;
        n=n>>1;
      }

    }
    return count2;
}

int main()
{
  int n;
  cin>>n;
  cout<<solution(n);

  return 0;
}
