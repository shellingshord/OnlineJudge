#include<stdio.h>
#include<stack>
#include<string.h>
using namespace std;
stack <int>S;//定义一个堆栈
char str[110];//保存输入的字符串
char ans[110];//保存输出的字符串
int main()
{
	while(scanf("%s",str)!=EOF)//输入字符串 
	{
		int i;
		for(i=0;str[i]!=0 ;i++)//从左到右遍历字符串 
		{
			if (str[i]=='(')//若遇到左括号
			{
			S.push(i);//将其数组下标放入堆栈中
			ans[i]=' ';//暂且将对应的输出字符串位置改为空格 	
			}
			else if(str[i]==')')//若遇到右括号 
			{
				if(S.empty()==false)
				{
					S.pop();
					ans[i]=' ';//该位置输出为空格	
				} 
				else ans[i]='?';//若堆栈为空 则无法找打左括号匹配，输出为？	 
			}
			else ans[i]=' ';	
		}
		
		while (!S.empty())//当字符串遍历完成后，堆栈中的左括号无法匹配
		 
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
 
