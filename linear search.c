#include<stdio.h>
int linear_search(int a[],int n,int key)
{
                            	int i,flag=0;
                            	for(i=0;i<n;i++){
                                         	if(a[i]==key){
                                                        	flag++;
                                                        	break;
                                         	}
                            	}
                            	if(flag==1)
                            	return i+1;
                            	else
                            	return -1;
}
int main()
{
                            	int a[20],pos,i,key,n;
                            	printf("Nandini Arora \n");
                                   printf("2100320120116\n");
                            	printf("enter size of the array\n");
                            	scanf("%d",&n);
                            	printf("enter elements of the array\n");
                            	for(i=0;i<n;i++){
                                         	scanf("%d",&a[i]);
                            	}
                            	printf("enter element to find\n");
                            	scanf("%d",&key);
                            	pos=linear_search(a,n,key);
                            	if(pos==-1)
                            	printf("element not found");
                            	else
                            	printf("found at %d",pos);
}

