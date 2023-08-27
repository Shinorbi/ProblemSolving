#include<cstdio>
#include<cstring>
char s[5020];
int main(){
	scanf("%s",s);
	int len=strlen(s),a=0,b=0,c=0;
	int p=0;
	while(s[p]=='a') a++,p++;
	while(s[p]=='b') b++,p++;
	while(s[p]=='c') c++,p++;
	if(a+b+c<len or (c!=a and c!=b) or a==0 or b==0) puts("NO");
	else puts("YES");
	return 0;
} 