#include <iostream>

using namespace std;
int selectionsort(int a[],int n){//27 28 39 58 48
for(int i=0;i<n;i++)//012
{
    int t=i;
    for(int j=i+1;j<n;j++)//34
    {
        if(a[j]<a[t])//58<48 39<48
        {
            t=j;//t=27 t=28  t=39
        }

    }
    swap(a[t],a[i]);
}
}

int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
selectionsort(a,n);
for(int i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
}
