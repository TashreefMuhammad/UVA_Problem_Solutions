#include <stdio.h>
#include <string.h>

int main(void)
{
    int l,i;
    char s[10];
    i=0;
    while(1)
    {
        scanf("%s",&s);
        if(!strcmp(s,"*"))
            break;
        else if(!strcmp(s,"Hajj"))
            printf("Case %d: Hajj-e-Akbar\n",i+1);
        else
            printf("Case %d: Hajj-e-Asghar\n",i+1);
        i++;
    }
    return 0;
}
