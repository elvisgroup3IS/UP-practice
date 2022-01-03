#include<iostream>
using namespace std;
int sizeNumber(int number)
{
    int count=0;
    while(number!=0)
    {
        count++;
        number/=10;
    }
    return count;
}
void fillArray(int array[],int size,int number)
{
    for(int i=0;i<size;i++)
    {
        array[i]=number%10;
        number/=10;
    }
} 

void reversArray(int array[],int reversarray[],int size)
{
    for(int i=0;i<size;i++)
    {
        reversarray[i]=array[size-1-i];
    }
}
void printArray(int array[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
}

void numberxSecondnumber(int array[],int numberarray[],int secondnumber,int size)
{
    for(int i=0;i<size;i++)
    {
        if(array[i]*secondnumber>9)
        {
            numberarray[i]=(array[i]*secondnumber)/10;
        }else
        {
            numberarray[i]=array[i]*secondnumber;
        }
    }

}
int main()
{
    int number,secondnumber;
    cout<<"Enter number";
    cin>>number;
    do
    {
        cout<<"Enter 1 digit number";
        cin>> secondnumber;
    }while(secondnumber<0 || secondnumber>9);
    int size=sizeNumber(number);
    int numberarray[size];
    int reversarray[size];
    int newarray[size];
    fillArray(numberarray,size,number);
    reversArray(numberarray,reversarray,size);
    numberxSecondnumber(reversarray,newarray,secondnumber,size);
    cout<<"The number is=";
    printArray(newarray,size);

}