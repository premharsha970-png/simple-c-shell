#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
char command[100];
int main(int argc,char **argv)
{
printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
printf("welcome to my shell\n");
char buffer[256];
while(1)
{
printf("%s>",getcwd(buffer,256));
fgets(command,100,stdin);
if(strcmp(command,"exit\n")==0)
{
break;
}
else if (strcmp(command,"home\n")==0)
{
chdir("/home");
}
}
return 0;
}

