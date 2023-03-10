//REVERSE THE STRING USING STACK
#define size 20
#include<stdio.h>
#include<string.h>
char stack[size];
int top;
void initialize(){
return top==-1;

}
void push(char a){
if(top==size-1){
    printf("Empty stack\n");
    return ;
}
else{
    top=top+1;
    stack[top]=a;
}
}
void show(){
if(top==-1){
    printf("Empty\n");
}
else{
    int r=top;
    while(r!=-1){
        printf("%c",stack[r]);
        r=r-1;
    }
}
}
int main(){
    initialize();
    char k[100];
    int i;
printf("Enter the string\n");
gets(k);
for(i=0;k[i]!='\0';i++){
    push(k[i]);
}
printf("The reverse of string is :");
show();
return 0;

}

