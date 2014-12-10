#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,i;
    int xuanshou[4]={};                   //保存三位选手的得分
    string a;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(int j=1;j<4;j++)             //判断每位选手的得分情况
        {
            cin>>a;
            switch(a[0])
            {
            case 'r':
                xuanshou[j]+=10;
                break;
            case 'w':
                xuanshou[j]-=10;
                break;
            case 'g':
                break;
            }
        }
    }
    int max1=1;                   //找出得分第一多的选手
    for(i=1;i<4;i++)
        if(xuanshou[i]>xuanshou[max1])
            max1=i;
    cout<<'('<<max1<<','<<xuanshou[max1]<<')';
    int max2;                    //找出得分第二多的选手
    for(i=1;i<4;i++)
        if(i!=max1)
        {
            max2=i;
            break;
        }
    for(i=1;i<4;i++)
    {
        if(i==max1)
            continue;
        if(xuanshou[i]>xuanshou[max2])
            max2=i;
    }
    if(xuanshou[max2]!=xuanshou[max1])
        cout<<endl;
    cout<<'('<<max2<<','<<xuanshou[max2]<<')';
    int max3=1;                  ///剩余的选手即为最后一名选手
    for(i=1;i<4;i++)
        if(i!=max1&&i!=max2)
        {
            max3=i;
            break;
        }
    if(xuanshou[max3]!=xuanshou[max2])
        cout<<endl;
    cout<<'('<<max3<<','<<xuanshou[max3]<<')'<<endl;
    return 0;
}
