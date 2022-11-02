#include <stdio.h>
#include <string.h>

int main()
{
    int n,t,i=0,j;
    scanf("%d %d",&n,&t);
    char temp,queue[n];
    scanf("%s",queue);
    for (j=0;j<t;j++){
        while (i<strlen(queue)){
            if (queue[i]=='B' && queue[i+1]=='G')
            {
                temp=queue[i+1];
                queue[i+1]=queue[i];
                queue[i]=temp;
                i+=2;
            }
            else{
                i++;
            }
        }
        i = 0;
    }
    printf("%s", queue);
}