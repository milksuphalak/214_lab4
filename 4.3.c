#include <stdio.h>
#include <string.h>
int main ()
{
    int i,j=1;
    char m[200],n[200];
    scanf ("%s",m);
    n[0]=m[0];
    for (i=0;i<strlen(m);i++)
    {
        if (m[i]=='\0')
            break;
        if (m[i]!=m[i+1])
        {
            n[j]=m[i+1];
            j++;
        }
    }
    printf ("%s",n);
return 0;
}
