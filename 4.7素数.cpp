#include<stdio.h>
int prime[10000];//����ɸ�õ����� 
int primeSize;//���������ĸ��� 
bool mark[10001]; //��mark[x]Ϊtrue�����ʾ����x�Ѿ�����ǳƷ�����
void init()
{
	for(int i=1;i<=10000;i++)
	{
		mark[i]=false;
	}//��ʼ��������������û�б���� 
	primeSize=0;//��������Ϊ0
	for (int i=2;i<=10000;i++)
		{
			if(mark[i]==true) continue;//���������Ѿ�����ǣ�������
			prime[primeSize++]=i;//�������µõ�һ������
			for(int j=i*i;j<=10000;j+=i)//�����������б�����ǳɷ����� 
			{
				mark[j]=true; 
			} 
		}
} 
int main()
{
	init();
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		bool isOutput=false;//��ʾ�Ƿ�����˷��ϵ�����
		for(int i=0;i<primeSize;i++)
		{
			if(prime[i]<n&&prime[i]%10==1)
			{
				if(isOutput==false)
				{
					isOutput=true;
					printf("%d",prime[i]);	
				}	
				else printf(" %d",prime[i]);
			}	
		} 
		if(isOutput==false)
		{
			printf("-1\n");//���-1������ 
		}
		else printf("\n"); 
	}
	return 0;
}


