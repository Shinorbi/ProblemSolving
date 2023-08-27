#include<bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main()
{
  double l,w,h,p,q,theta,alpha,sigma;
  double area ,v;
  while(cin>>l>>w>>h>>theta)
  {
      alpha=(PI/180)*theta;
      p=l*tan(alpha);
      if(h>p)
      {
          area=(l*h)-(.5*l*p);
      }



      else{

            sigma=(PI/180)*(90-theta);
            q=h*tan(sigma);
            area=.5*h*q;

      }
      v=area*w;
      printf("%.3f mL\n",v);

  }
  return 0;
}
