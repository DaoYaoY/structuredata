//ÿ��̨�׶�Ӧһ���Ǹ��������������Ӧ����һ�����������ߵ�̨����
//����4,2,2,1,0,2����false��2,1,3,1,1,0����true
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
//	printf("b:%d\n",Jump(b,m,0));//���b:0 
	int a[]={2,1,3,1,1,0},n=6;	
	n=6;
	printf("a:%d\n",Jump(a,n,0));//���a:1 

}
