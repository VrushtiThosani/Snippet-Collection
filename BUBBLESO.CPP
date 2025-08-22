#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n=5, a[5], temp;
	clrscr();
	for(i=0; i<n; i++)
	{
		printf("Enter elements : ");
		scanf("%d",&a[i]);
	}
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-1; j++)
		{
			if(a[j]>a[j+1])
			{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			}
		}
	}
	printf("\n Sorted list is : ");
	for(i=0; i<n; i++)
	{
		printf("\n %d\n ",a[i]);
	}
	getch();
	return 0;
}