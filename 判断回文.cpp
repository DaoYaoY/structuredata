//����aba��abccba�ǻ��ģ�abc��abcd���ǻ��ģ��ݹ�ʵ�ֻ����ж�
//�����һλ���һλ��ͬ���ж���Ӧlow-1y��high-1�Ƿ���ֱͬ��low>=high�ǻ��ķ���true��֮false

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
	printf("%s%s����\n",a,(Cycle(a,0,n-1)?"��":"����"));
 } 
