#include <stdio.h>   
#include <string.h>   
int main()
{
    char str1[101],str2[101];
    scanf("%s %s",&str1,&str2);
    int len1=strlen(str1),len2=strlen(str2);
    for(int i=0; i<len1; i++) {
        if(str1[i]>='A' && str1[i]<='Z'){
            str1[i]=str1[i]+32;
        }
    }
    for(int J=0; J<len2; J++) {
        if(str2[J]>='A' && str2[J]<='Z'){
            str2[J]=str2[J]+32;
        }
    }
    int ans=strcmp(str1,str2);
    printf("%d\n",ans);
    return 0;
}  
