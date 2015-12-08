#include <bits/stdc++.h>
using namespace std;

class CheckFunction
{
  public:
  int newFunction(string code)
  {
    int i;
    int ret=0;

    for(i=0;i<code.size();i++)
      if( code[i] == '0' )
        ret += 6;
      else if( code[i] == '1' )
        ret += 2;
      else if( code[i] == '2' || code[i] == '3' )
        ret += 5;
      else if( code[i] == '4' )
        ret += 4;
      else if( code[i] == '5' )
        ret += 5;
      else if( code[i] == '6' || code[i] == '9' )
        ret += 6;
      else if( code[i] == '7' )
        ret += 3;
      else if( code[i] == '8' )
        ret += 7;

    return ret;
  }
};
