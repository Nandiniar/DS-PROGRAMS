//TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT IN STACK
#define size 20
#include<stdio.h>
int top,stack[size];
void initialize(){
return top==-1;
}
void push(int r){
top=top+1;
stack[top]=r;
}
int show(){

if(top==-1){
    printf("Empty");
    return 0 ;
}
else{
        int m=0;
    int i=top;
    while(i!=0){
        //printf("The elements are %d\n",stack[i]);
    m=m*10+stack[i];
        i=i-1;
    }
    return m;
}
}
void pop(){
if(top==-1){
    printf("Empty\n");
 return 0;
}
else{
    int a=stack[top];
    top=top-1;
    return a;
}
}
int main(){
    initialize();
    int n,a,m,h,e;
    printf("Enter the number which you want to check\n");
    scanf("%d",&n);
    int k=n;
    m=0;
    while(n!=0){
        a=n%10;
        n=n/10;
      m=m*10+a;

    }
  while(m!=0){
    h=m%10;
    m=m/10;
    push(h);
  }
int s=show();
if(s==k){
    printf("The number is palindrome\n");
}
else{
    printf("The number is not palindrome\n");
}
    return 0;
}
