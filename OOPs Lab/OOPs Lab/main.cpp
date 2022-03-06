#include <iostream>
using namespace std;

int compare(int arr[],int s,int key,int i,int j,int *c)
{
    
    int middle=(i+j)/2;
    
    if(arr[middle]==key)
        return middle;
    else if(key>arr[middle])
    {
        return compare(arr,s,key,i=middle+1,j,&(*c=*c+1));
    }
    else if(key<arr[middle])
    {
        return compare(arr,s,key,i,middle-1,&(*c=*c+1));
    }
    
    return -1;
}
int main()
{
    int s,key,count=1;
    cout<<"enter the size of array";
    cin>>s;
    int arr[s];
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the key to be searched";
    cin>>key;
    int i=0; int j=s-1;
    cout<<compare(arr,s,key,i,j,&count)<<endl;
    cout<<count;
}
