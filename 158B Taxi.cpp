#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;

  while(t--)
  {
      string str;
      cin>>str;
      int s=0,arr[4];
      int i;
      //char ch = '1';
      for(i = 1; i <= 4; i++)
      {
            if(str[i]=='0')
               arr[i] = 10;
            else
               arr[i] = str[i] - '0';
      }


      s =abs(arr[1]- 1 ) + abs(arr[1]-arr[0]) + abs(arr[2]-arr[1]) + abs(arr[3]-arr[2]);


      cout>>s+4 >>endl;
  }
}
