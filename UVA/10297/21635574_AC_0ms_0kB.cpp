#include<bits/stdc++.h>
#define pi acos(-1)
using namespace std;
int main()
{
    double V,D,d;
    while(cin>>D>>V)
    {
        d=cbrt((D*D*D)-((6*V)/pi));
        if(D==0 && V==0)
        {
            printf(" ");
        }
        else{
            printf("%.3f\n",d);
        }
    }
    return 0;
}
