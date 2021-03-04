#include <stdio.h>
#include <string.h>
int main ()
{
    int i,j=0;
    char m[200],n[200];
    scanf ("%s",m);
    for (i=0;i<strlen(m);i++)
    {
        if (m[i]!=m[i+1])
        {
            n[j]=m[i];
            j++;
        }

    }
    printf ("%s",n);
return 0;
}
