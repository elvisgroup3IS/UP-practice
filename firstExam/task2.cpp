#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
using namespace std;
void fillarray(int array[],int size)
{
    for(int i=0;i<size;i++)
    {
      
       array[i]=rand()%6+1;
    }
} 

void printArray(int array[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
} 
int  howTimesDigitExistinNumber(int array[],int size,int number)
{
    int count=0;
    for(int j=0;j<size;j++)
    {
        if(array[j]==number)
        count++;
    }
    return count;
}

int howMeniTry(int array[],int size)
{
    int count=0;
    int consistentlyCounter=0;
    int howtryes=0;
    do{
        count=0;
        fillarray(array,size);
        howtryes++;
        cout<<endl;
        printArray(array,size);
        for(int i=0;i<size;i++)
        {
            count=howTimesDigitExistinNumber(array,size,array[i]);
            if(count>=3){
                consistentlyCounter++; 
                break;
            }
        }  
        if(count<3)
        {
            consistentlyCounter=0;
        }
    }while(consistentlyCounter<3);
    return howtryes;
}

int main()
{
    srand (time(NULL));
    int size=5;
    int array[size];
    cout<<howMeniTry(array,size);
   
}