//每个台阶对应一个非负整数，这个数对应着下一次你最多可以走的台阶数
//例如4,2,2,1,0,2返回false；2,1,3,1,1,0返回true
#include <stdio.h> 

bool Jump(int a[],int n,int position)
{
	int steps=a[position];
	if(position==n-1 && steps==0)
	{
		return true;
	}
	else if(position>n-1)
	{
		return false;
	}
	else if(position>n-1 && steps==0)
		{
			return false;
		}
	else
		{
			Jump(a,n,position+steps);
		}
}

int main()
{
//	int b[]={4,2,2,1,0,2},m=6;
//	printf("b:%d\n",Jump(b,m,0));//输出b:0 
	int a[]={2,1,3,1,1,0},n=6;	
	n=6;
	printf("a:%d\n",Jump(a,n,0));//输出a:1 

}
