#include<bits/stdc++.h>
using namespace std;
void swap(int arr[],int x,int y)
{
    int temp;
    temp=arr[x];
    arr[x]=arr[y];
    arr[y]=temp;
    return ;
}
int main()
{
    int t,n,i,swapcount=0;
    int arr[100000];
    cin>>t;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=n-1;i>=0;i--)
    {
        if(arr[i]!=i+1)
        {
            if(((i-1)>=0) && arr[i-1]==(i+1))
            {
                swapcount++;
                swap(arr,i,i-1);
            }
            else if(((i-2)>=0) && arr[i-2]==(i+1))
            {
                swapcount+=2;
                swap(arr,i-2,i-1);
                swap(arr,i-1,i);
            }
            else
            {
                cout<<"Too chaotic"<<endl;
            }
        }
    }
    cout<<swapcount;
    return 0;
}
