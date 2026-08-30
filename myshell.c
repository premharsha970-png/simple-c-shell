#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
int shell_exit();
int home();
char command[100];
int main(int argc,char **argv)
{
printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
printf("welcome to my shell\n");
char buffer[256];
struct new{
    char name[20];
    int (*func)();
};  
struct new builtin[]={
    {"exit\n", shell_exit},
    {"home\n", home}
};
while(1)
{
printf("\n%s>",getcwd(buffer,256));
fgets(command,100,stdin);
for(int i=0;i<3;i++){
    if(strcmp(command,builtin[i].name)==0){
        builtin[i].func();}

}
}
return 0;
}

int shell_exit()
{
 exit(0);
}

int home()
{
    chdir("/home");
} 

 
