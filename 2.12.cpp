#include <iostream>
using namespace std;
//һ���¼�
struct Node
{
    int starttime;
    int endtime;
    int flag;
};
int main()
{
    Node node[30];
    int num;
    cin>>num;
    for(int i=0;i<num;i++)//����ÿ����Ŀ�Ŀ�ʼʱ��ͽ�ֹʱ�� 
    {
        cin>>node[i].starttime;
        cin>>node[i].endtime;
        node[i].flag=0;
    }
    int endif;
    cin>>endif;
    //�ж��Ƿ��β��0Ϊ��׼
    if(endif!=0)
    {
        cout<<"ERROR"<<endl;
        return false;
    }

    if(endif==0)//�������Ϊ0 
    {
        //��ȥ�����ļ��ϣ����������¼���3 7 ��һ����2 8��ô��ȥ2 8����¼�
        for(int i=0;i<num-1;i++)
        {
            for(int j=i+1;j<num;j++)
            {
                if((node[i].starttime>=node[j].starttime)&&(node[i].endtime<=node[j].endtime))
                {
                    node[j].flag=1;
                }
            }

        }
        int total[24];//��ʾ24��ʱ��
        int sum=0;
        for(int k=0;k<num;k++)
        {
            int flag=0;
            if(node[k].flag==0)
            {
                for(int w=node[k].starttime+1;w<node[k].endtime;w++)
                {
                   if(total[w]==100)
                   {
                       flag=-1;
                   }
                }
                if(flag==0)
                {
                     for(int w=node[k].starttime+1;w<node[k].endtime;w++)
                     {
                         total[w]=100;
                     }
                     //cout<<"k="<<k<<endl;
                     sum++;
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
