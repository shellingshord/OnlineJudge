#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int *solution_1()
{
	int n;
	scanf("%d",&n);//����һ��n��
	int a[n];
	for (int i=0;i<n;i++)
		scanf("%d",&a[i]);
	int b=1000;int sum=0;int targetfloor=0;
	for (int i=0;i<n;i++)//����ÿһ��
	{
		sum=0;
		for (int j=0;j<n;j++)//����ĳһ�� ���г˿���¥�ݵ���Ŀ 
			sum+=a[j]*abs(j-i); 
		if (b>sum)
			b=sum;
			targetfloor=i;
	}	
	int aa[2];
	aa[0]=b ;
	aa[1]=targetfloor;
	//return (b,targetfloor+1);	
	//return b;	
	return aa;
}




/*int solution_2()
{
	int n;
	int n1,n2,n3;//n1��i�����µ��ˣ�n2��i����ˣ�n3��i�����ϵ��� 
	scanf("%d",&n);//����һ��n��
	int a[n];
	for (int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for (int i=0;i<n;i++)
	{
		
	} 
}
*/





int main(int argc, char *argv[]) 
{	
	
	int cc[2];
	cc= & solution_1(aa);
	//int c=solution_2();
	printf("%d,%d",cc[0],cc[1]);
	//printf("%d",c);
	return 0;
}
