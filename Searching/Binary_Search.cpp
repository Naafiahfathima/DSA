#include <iostream>
using namespace std;

void bin(int a[],int num){
    int mid,low=0,high=9,flag=0;
    for(mid=(low+high)/2;low<=high;mid=(low+high)/2){
        if(a[mid]==num){
            cout<<"The num is at position"<<mid<<" in the array";
            flag=1;
            break;
        }
        if(a[mid]>num){
        high=mid-1;
        flag=1;
        }
        else{
            low=mid+1;
            flag=1;
        }
        if(flag==0){
            cout<<"Not found";
        }
    }
}
int main()
{ 
    int a[10]={1,5,4,43,77,56,32,76,87,90};
    int num;
    cout<<"Enter number to search:";
    cin>>num;
    bin(a,num);
}