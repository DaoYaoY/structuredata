//只允许使用+、赋值语句、判断语句和循环有限语句实现两个整数的减法、乘法和除法（整除）运算

#include <stdio.h>


//negtste实现符号转变 
int negate(int a)
{
	int neg=0;
	int d=(a<0?1:-1);
	while(a!=0)
	{
		neg=neg+d;
		a=a+d;
	}
	return neg;
 } 
 
 //abs实现求绝对值 
 int abs(int a)
 {
 	if (a>0)return a;
 	else return negate(a);
  } 
  
//sub实现a-b
int sub(int a,int b)
{
	return a+negate(b);
 } 
 
 //mult实现a*b
 int mult(int a,int b )
 {
 	int result=0;
 	for(int i=abs(a);i>0;i--)
 	{
 		result=result+b; 	  
	 } 
	 
	if(a>0) return result;
	else return negate(result);
  } 
  
//div实现a/b 
int div(int a,int b)
{
	int a1=abs(a);
	int b1=abs(b);
	int product=b1;
	int x=0;
	while(product<=a1){
		product=product+b1;
		x=x+1; 
	}
	if((a<0 && b<0) || (a>0 && b>0))
	{
		return x;
	}
	else return negate(x);
}

int main()
{
	int a=-5,b=3;
	printf("%d-%d=%d\n",a,b,sub(a,b));
	printf("%d*%d=%d\n",a,b,mult(a,b));
	printf("%d/%d=%d\n",a,b,div(a,b));
}
