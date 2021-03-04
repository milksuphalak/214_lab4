#include<stdio.h>
int main()
{
    int n,a[4]= {1,0,0,0},m;
    scanf("%d",&n);
    char s[n][50];
    for(int i=0; i<n; i++)
    {
        scanf("%s",s[i]);
        for(int j=0; s[i][j]!='\0'; j++)
        {
            switch (s[i][j])
            {
            case 'A':
                m=a[1];
                a[1]=a[2];
                a[2]=m;
                break;
            case 'B':
                m=a[0];
                a[0]=a[3];
                a[3]=m;
                break;
            case 'C':
                m=a[0];
                a[0]=a[2];
                a[2]=m;
                m=a[1];
                a[1]=a[3];
                a[3]=m;
                break;
            case 'D':
                m=a[0];
                a[0]=a[1];
                a[1]=m;
                m=a[3];
                a[3]=a[2];
                a[2]=m;
                break;
            case 'E':
                m=a[0];
                a[0]=a[3];
                a[3]=m;
                m=a[1];
                a[1]=a[2];
                a[2]=m;
                break;
            }
        }

    }
    return 0;
}
