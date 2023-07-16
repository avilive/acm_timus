#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
int k,n,input;
int cc(0),prev_count(0);
cin>>k>>n;
 for (;cin>>input;) {
        cc=max(prev_count+input - k,0);
        prev_count=cc;
    }
cout<<prev_count<<endl;
}
