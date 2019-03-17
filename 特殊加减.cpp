#include <stdio.h>

int add(int a,int b)  //求a+b的值
	{
		int result = a;
		for(int i=0;i<b;++i)
		{
			++result;

		}
		return result; 
} 

int decone(int n)  //求N-1
{
	int tmp=0;
	int result=0;
	for (int i=0;i<n;++i)
	{
		result=tmp;
		++tmp;
	}
	  return result;
} 

int sub(int a,int b)  //求a-b;a>=b
{
	int result=a;
	for(int i=0;i<b;++i)
	{
		result=decone(result);
		
	 } 
	 return result;
} 

int mult(int a,int b)  //求a*b 
{
	int result=0;
	for(int i=0;i<a;++i)
	{
		for(int j=0;j<b;++j)
		{
			++result;
		}
	}
	return result;
}

int main()
{
	int a=6,b=3;
	printf("%d+%d=%d\n",a,b,add(a,b));
	printf("%d-%d=%d\n",a,b,sub(a,b));
	printf("%d*%d=%d\n",a,b,mult(a,b));
	return 0;
}




