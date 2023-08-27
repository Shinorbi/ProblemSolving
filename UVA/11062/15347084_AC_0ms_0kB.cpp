
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j = 0;
    map<string, char> word;
    char ch, str[200];
    while(ch = getchar())
    {
        if(ch == EOF)   break;
        if(ch >= 'A' && ch <= 'Z')
            ch = ch - 'A' + 'a';
        if(ch >= 'a' && ch <= 'z')
        {
            str[j++] = ch;
        }
        else if (ch!='-')
        {
            str[j++] = '\0';
            if(j > 1)
            {
                word[str] = 1;
            }
            j = 0;
        }
        else{
            ch=getchar();
            if (ch!='\n'){
                str[j++]='-';
                if(ch>='A' && ch<='Z')
                    ch=ch- 'A'+ 'a';
                str[j++]=ch;
            }
        }

    }
    for(map<string, char>::iterator i = word.begin(); i != word.end(); i++)
        puts(i->first.c_str());
    return 0;
}