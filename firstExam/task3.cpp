#include<iostream>
using namespace std;
void fillArray(int array[],int size)
{
    for(int i=0;i<size;i++)
    {
       cin>>array[i];
    }
} 
void printArray(int array[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
}
int howInverseHaveTheArray(int array[],int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        for(int j=1;j<size;j++)
        {
            if(array[i]>array[j] && i<j)
            count++;
        }
    }return count;
} 
int main()
{
    int n;
    do{
        cout<<"enter n";
        cin>>n;
    }while(n>1000);
    int array[n];
    fillArray(array,n);
    cout<<howInverseHaveTheArray(array,n);
}