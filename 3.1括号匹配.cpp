#include<stdio.h>
#include<stack>
#include<string.h>
using namespace std;
stack <int>S;//����һ����ջ
char str[110];//����������ַ���
char ans[110];//����������ַ���
int main()
{
	while(scanf("%s",str)!=EOF)//�����ַ��� 
	{
		int i;
		for(i=0;str[i]!=0 ;i++)//�����ұ����ַ��� 
		{
			if (str[i]=='(')//������������
			{
			S.push(i);//���������±�����ջ��
			ans[i]=' ';//���ҽ���Ӧ������ַ���λ�ø�Ϊ�ո� 	
			}
			else if(str[i]==')')//������������ 
			{
				if(S.empty()==false)
				{
					S.pop();
					ans[i]=' ';//��λ�����Ϊ�ո�	
				} 
				else ans[i]='?';//����ջΪ�� ���޷��Ҵ�������ƥ�䣬���Ϊ��	 
			}
			else ans[i]=' ';	
		}
		
		while (!S.empty())//���ַ���������ɺ󣬶�ջ�е��������޷�ƥ��
		 
		{
			ans[S.top()]='$';
			S.pop();
		}
		ans[i]=0;
		puts(str);
		puts(ans);
	}
	return 0;
}
 
