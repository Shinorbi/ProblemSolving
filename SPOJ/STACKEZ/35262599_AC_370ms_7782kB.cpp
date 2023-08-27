#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    scanf("%d" ,&t);

    stack<int>st;

    while(t--)
    {
       int x;
        scanf("%d", &x);

        if(x==1)
        {
            scanf("%d", &x);
            st.push(x);
        }
        else if(x==2)
        {
            if(!st.empty())
                st.pop();
        }

        else {
            if(st.empty())
                printf("Empty!\n");

            else
                printf("%d\n",st.top());
        }
    }

    return 0;
}
