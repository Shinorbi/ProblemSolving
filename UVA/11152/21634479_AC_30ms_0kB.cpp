#include<bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main()

{
    double a,b,c;
    double sunflowers=0,violets=0,roses=0,s=0,area=0,cr=0;


    while(cin>>a>>b>>c)
{
     s=((a+b+c)/2);
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    roses=PI*(area/s)*(area/s);
    violets=area-roses;
    cr=(a*b*c)/(4*area);
    sunflowers=(PI*cr*cr)-area;

    printf("%.4f %.4f %.4f\n",sunflowers,violets,roses);
    }

     return 0;
}
