//递归求解一个数组a[0..n-1]中的最大最小元素

#include <stdio.h>

typedef int T;

void MaxMin(T a[],int l,int r,T& max,T& min)
{
	int m;
	T lmax,lmin,rmax,rmin;
	if(l==r)
	{
		max=a[l];
		min=a[l];
		return;
	}
	
	else if(l+1==r)
	{
		max=a[l]>a[r]?a[l]:a[r];
		min=a[l]>a[r]?a[r]:a[l];
		return;
	}
	else
	{
		m=(l+r)/2;
		MaxMin(a,0,m,lmax,lmin);
		MaxMin(a,m+1,r,rmax,rmin);
		max=lmax>rmax?lmax:rmax;
		min=lmin<rmin?lmin:rmin;
		return;  
	}
 } 
 
 int main()
 {
 	T a[]={2,5,8,3,1,8,1,6,4};
 	int n=9;
 	T max,min;
 	MaxMin(a,0,n-1,max,min);
 	printf("Max=%d,Min=%d\n",max,min);
 	return 0;
 }
