//including libs
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/wait.h>
char command[100];
#define color_green "\x1b[32m"
#define reset_color "\x1b[0m"
#define bold "\x1b[1m"
#define MAX_ARGS 10
int main()
{
//a simple visual design for more appealing look
printf("%s======================================================\n%s",color_green,reset_color);
printf("%swelcome to my shell%s\n",color_green,reset_color);
    char buffer[256];
//the permanent loop that keeps taking input
    while(1){
    printf("\n%s> ",getcwd(buffer,256));
fgets(command,100,stdin);
command[strcspn(command,"\n")]=0;
// tokenizing input 
 int i=0;
    char *token[MAX_ARGS];
     token[0]=strtok(command," \n\r");
while(token[i]!=NULL && i < MAX_ARGS -1)
{i++;
    token[i]=strtok(NULL," \n\r");
    
} token[i]=NULL;       
//builtin commands
    if(strcmp(command,"exit")==0){
        exit(0);}
    else if(strcmp(token[0],"cd")==0)
{
    if(token[1]==NULL)
    {
    printf("please enter a directory");
        continue;
    }

if(chdir(token[1])!=0){
    printf("directory not found");
continue;}
continue;
}
else if (token[0]==NULL)
{
continue;
}

//executing system commands      
pid_t pid = fork();
if(pid==0)
{
    execvp(token[0],token);
    printf("command not found %s", token[0]);
    exit(1);
}
else if(pid>0)
{
wait(NULL);
}
}
}
