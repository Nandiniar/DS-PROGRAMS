//PROGRAM FOR PREFIX EVALUATION
#include<stdio.h>
#include<string.h>
#define size 252
struct stack{
int data[25];
int top;
}s;
int push(int n){
if(s.top==size-1)
   return 0;
   s.data[++s.top]=n;
   }
   int pop(){
   if(s.top==-1)
    return 0;
   return s.data[s.top--];
   }
int calc(int a,int b,char symbol){
switch(symbol){
case '+':
    return a+b;
 case '-':
    return a-b;
case '*':
    return a*b;
case '/':
    return a/b;
case '%':
    return a%b;
}

}
int main(){
char prefix[50];
int i=0;
int num;
s.top=-1;
//- + 2 3 9
printf("Enter prefix expression\n");
gets(prefix);
strrev(prefix);
while(prefix[i]!='\0'){
    if(prefix[i]!=' ')
        {
    char symbol=prefix[i];
    int num;
    if(symbol>='0'&& symbol<='9')
    push(symbol-'0');
    else{
        int b=pop();
        int a=pop();
        num=calc(b,a,symbol);
    push(num);
    }
        }
    i++;
}
printf("Ans=%d",pop());


return 0;
}
