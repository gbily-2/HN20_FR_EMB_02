/*************
Test git 

*************/
#include <stdio.h>
#include <stdlib.h>

/*
	function prototypes
*/
void print_list(int *arr,int n);
void increase(int a[],int n);
void decrease(int a[], int n);

int main()
{
	int i;	
	int array[10] = {2,3,9,1,4,6,7,8,0,5};
	decrease(array,10);
	printf("sap xep giam:\n");
	print_list(array,10);
	increase(array,10);
	printf("sap xep tang:\n");
	print_list(array,10);
	/*test 2*/
	printf("I am Br2");
}
/*
	function print array
*/
void print_list(int *arr,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
/*
	function sort array in decrement order
*/
void increase(int a[],int n)
{
	int i,j;
	int temp;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
                a[i]=a[j];
                a[j]=temp; 
			}
		}
	}
}
/*
	function sort array in increment order
*/
void decrease(int a[], int n)
{
	int i,j;
	int temp;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
                a[i]=a[j];
                a[j]=temp; 
			}
		}
	}
}


