#include<stdio.h>
int binary_search(int a[],int n,int key)
{
                            	int low=0,high=n-1,mid;
                            	do{
                                         	mid=(low+high)/2;
                                         	if(key==a[mid])
                                         	return mid;
                                         	else
                                         	if(key<a[mid])
                                         	high=mid-1;
                                         	else
                                         	low=mid+1;
                            	}while(low<=high);

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
                                         	scanf("%d",&a[i]);}
                            	printf("enter element to find\n");
                            	scanf("%d",&key);
                            	pos=binary_search(a,n,key);
                            	if(pos==-1)
                            	printf("element not found");
                            	else
                            	printf("found at %d",pos);
                            	return 0;
}

