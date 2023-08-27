#include<bits/stdc++.h>
#define PI acos(-1)

using namespace std;
int main()
{
    double n,D,L,a,b,c;
    double area;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>D>>L;
        a=L/2;
        c=D/2;
        b=sqrt((a*a)-(c*c));
        area=PI*a*b;
        printf("%.3f\n",area);


    }
    return 0;
}
