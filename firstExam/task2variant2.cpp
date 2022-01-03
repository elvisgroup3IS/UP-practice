#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
using namespace std;
void fillarray(int array[],int size)
{
     srand (time(NULL));
    for(int i=0;i<size;i++)
    {
      
       array[i]=rand()%6+1;
    }
} 
int howTimeTheDigitExistinNumber(int array[],int size,int number) 
{
    int count=0;
    for(int j=0;j<size;j++)
    {
        if(array[j]==number)
        count++;
    }
    return count;
}

void printArray(int array[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;

}

bool isTheDigitExistinNumber(int array[],int size, int number)
{
    for(int j=0;j<size;j++)
    {
        if(array[j]==number)
        return true;
    }
    return false;
}
void deleteElement(int array[],int size, int number)
{
    for(int j=0;j<size;j++)
    {
        if(array[j]==number)
        array[j]=0;
    }
}

int howMeniTry(int array[],int size)
{
    int arrayy[6]={1,2,3,4,5,6};
    srand (time(NULL));
    int count=0;
    int stop=0;
    int howtry=0;
    do{
        count=0;
        for(int i=0;i<size;i++)
        {
        array[i]=rand()%6+1;
        }
        howtry++;
        for(int i=0;i<size;i++)
        {
            count=howTimeTheDigitExistinNumber(array,size,array[i]);

            if(count>=3 && isTheDigitExistinNumber(arrayy,6,array[i])){
                stop++;
                printArray(array,size);
                deleteElement(arrayy,6,array[i]);
                break;
            }
        }
        if(stop==6)
        stop++;
    }while(stop<=6);
    
    return howtry;
}

int main()
{
    int size=5;
    int array[size];
    cout<<howMeniTry(array,size);
}