#include<stdio.h>
#include<string.h>
int main()
{
    char word1[101],word2[101];
    scanf("%s %s",word1,word2);
    int check=0,len1=strlen(word1),len2=strlen(word2);
    if(len1!=len2){
        printf("NO\n");
    }
    else{
        for(int i=0,j=len1-1;i<len1;i++,j--) {
            if(word1[i]!=word2[j]){
                printf("NO\n");
                check=1;
                break;
            }
        }
        if(check==0){
            printf("YES\n");
        }
    }
    return 0;
}