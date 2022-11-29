#include<stdio.h>
#include<string.h>
int main()
{
   char s1[15],s2[15],s3[15];
   scanf("%s%s%s",s1,s2,s3);
   
   if(!strcmp(s1,"vertebrado"))
   {
      if(!strcmp(s2,"ave"))
      {
         if(!strcmp(s3,"carnivoro"))
         {
            printf("aguia");
         }
         else 
         {
            printf("pomba");
         }
         
      }
   
      else if (!strcmp(s2,"mamifero"))
      {
        if(!strcmp(s3,"onivoro"))
         {
            printf("homem");
         }
         else 
         {
            printf("vaca");
         } 
      }
   }  
   
   else if (!strcmp(s1,"invertebrado"))
   {
      if(!strcmp(s2,"inseto"))
      {
         if(!strcmp(s3,"hematofago"))
         {
            printf("pulga");
         }
         else 
         {
            printf("lagarta");
         }
         
      }
      else if (!strcmp(s2,"anelideo"))
      {
        if(!strcmp(s3,"hematofago"))
         {
            printf("sanguessuga");
         }
         else 
         {
            printf("minhoca");
         } 
      
      }
   }
   

}