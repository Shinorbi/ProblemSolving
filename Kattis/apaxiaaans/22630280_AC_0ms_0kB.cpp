#include<bits/stdc++.h>
using namespace std;


int main(void) {
	string a;
    while(cin >> a){
    	string b;
    	char end;
    	b += a[0];
    	end = b[0];
    	for(int i = 1; i < a.length(); ++i)
    	{
    		if(a[i] != end)
    		{
    			b += a[i];
    			end = a[i];
    		}
    	}
    	cout<< b <<endl;
    }
    return 0;
}
