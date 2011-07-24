#include <stdio.h>
#include <unistd.h>
int main(int argc,char *argv[],char *envp[])
{
 int i = 0;
 if (argv[0]!= "me" )
{ 
    printf("me not called as me\n"); 
    if( argv[0]=="notme")
    {
    printf("not me!\n");
    return 0;
    }
    if (argv[0] == "meagain\n")
    {
        printf("me again\n");
        return 0;
    }
} 
 printf("there are %i args \n",argc);
 for (i = 0; i < argc; i++)
 {
     printf("%s\n",argv[i]);
 }
printf("The environment is as follows:\n");
int a = 0;
while (envp[a] != NULL)
    printf("\t%s\n", envp[a++]);
return 0;
}

