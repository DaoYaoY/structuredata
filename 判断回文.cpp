//例如aba、abccba是回文，abc、abcd则不是回文，递归实现回文判断
//当最后一位与第一位相同则判断相应low-1y与high-1是否相同直到low>=high是回文返回true反之false

#include <stdio.h>

bool Cycle(char a[],int low,int high)
{
	if(low>=high)
	{
		return true;
	}
	else if(low<high)
	{
		if(a[low]!=a[high]){
			return false;
		}
		else{
			return (a[low]==a[high] && Cycle(a,low+1,high-1)); 
		} 
		
	}
}
int main()
{
	char a[]="abbac";
	int n=sizeof(a);
	printf("%s%s回文\n",a,(Cycle(a,0,n-1)?"是":"不是"));
 } 
