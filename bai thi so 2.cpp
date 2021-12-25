#include <stdio.h>

void nhapmang(int a[],int&n)

{printf("Nhap so phan tu :");
scanf("%d",&n);
for(int i=0;i<n;i++)
{printf(" phan tu arr[%d]:");
scanf("%d,&a[i]");
}

}
int xuatmang(int a[]int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
void daonguoc(int a[],int n)
{
	for(int i=0;i<=n/2;i++)
	{
		int temp =a[i];
		a[i]=a[n-1-i];
	}
}

