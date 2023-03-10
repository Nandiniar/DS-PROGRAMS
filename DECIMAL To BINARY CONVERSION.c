//DECIMAL TO BINARY CONVERSION
#define size 20
#include<stdio.h>
int top,stack[size];
void initialize(){
top=-1;
}

void push(int n){

top=top+1;
stack[top]=n;



}
void show(){
    int c=top;
    printf("The decimal to binary conversion is \n");
    while(c>=0){
        printf("%d",stack[c]);
        c--;
    }

}

int main(){
    initialize();
    int k;
    printf("Enter the number in decimal\n");
    scanf("%d",&k);
    int a;
    while(k!=0){
       a=k%2;
       k=k/2;
       push(a);
    }
show();

return 0;
}

