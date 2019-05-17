//ֻ����ʹ��+����ֵ��䡢�ж�����ѭ���������ʵ�����������ļ������˷��ͳ���������������

#include <stdio.h>


//negtsteʵ�ַ���ת�� 
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
 
 //absʵ�������ֵ 
 int abs(int a)
 {
 	if (a>0)return a;
 	else return negate(a);
  } 
  
//subʵ��a-b
int sub(int a,int b)
{
	return a+negate(b);
 } 
 
 //multʵ��a*b
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
  
//divʵ��a/b 
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
