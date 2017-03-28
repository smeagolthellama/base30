#include <iostream>
#include <cstdlib>
#ifdef _linux_
#include "itoa.hpp"
#endif

using namespace std;

int main()
{
    char yn;
    char str[255];
    char* e;
    cout<<"from 30(y) or to 30(n)?\n";
    cin>>yn;
    cin>>str;
    if(yn=='y'){
        cout<<strtol(str,&e,30);
    }else{
        int n=atoi(str);
        cout<<itoa(n,str,30);

    }
    return 0;
}
