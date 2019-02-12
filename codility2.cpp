#include<bits/stdc++.h>
using namespace std;

inline int gint()
{
  char ch=getchar_unlocked();
  /*
  bool flag=0;
  if(ch=='-')
  {
    flag=1;
    ch=getchar_unlocked();
  }
  */
  while(ch<'0' || ch>'9')
  ch=getchar_unlocked();

  int x=0;
  while(ch>='0'&&ch<='9')
  {
    x=x*10+ch-48;
    ch=getchar_unlocked();
  }
  /*
  if(flag==1)
  return -x;

  else return x;
  */
  return x;
}

inline void pint(int c)
{
  if(c<0)
  {
    putchar_unlocked('-');
    c=-c;
  }

  char ch[10];
  short int i=0;
  do
  {
    ch[i++]=(c%10)+48;
    c=c/10;
  }while(c);
  while(i--)
  {
    putchar_unlocked(ch[i]);
  }
  putchar_unlocked(' ');
}

int main()
{
  int n,t=0,x;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    x=gint();
    t=x^t;
  }
  pint(t);
  int x45=INT_MAX;

  return 0;
}
