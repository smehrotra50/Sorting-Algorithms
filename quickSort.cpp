/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Shubham Mehrotra
 *
 * Created on 18 June 2017, 02:19
 */

#include<iostream>
#include <cstdlib>
using namespace std;

int part(int a[],int start,int end)
{
    int pivot=a[end];
    int pIndex=start;
    for(int i=start;i<end;i++)
    {
        if(a[i]<=pivot)
        {
            
            int temp1=a[i];
            a[i]=a[pIndex];
            a[pIndex]=temp1;
            pIndex++;
        }
     }
    int temp2=a[pIndex];
    a[pIndex]=a[end];
    a[end]=temp2;
    return pIndex;
}
int randompart(int a[],int start,int end)
{
    int range = end - start + 1;
    int pIndex = rand() % range + start;
    
    int temp3=a[pIndex];
    a[pIndex]=a[end];
    a[end]=temp3;
    return part(a,start,end);
}
void quickSort(int a[],int start,int end)
{
    if(start<end)
    {
        int pIndex=randompart(a,start,end);
        quickSort(a,start,pIndex-1);
        quickSort(a,pIndex+1,end);
    }
}
int main()
{
    int a[8]={8,7,6,5,3,4,1,2};
    int n=sizeof(a)/sizeof(a[0]);
    quickSort(a,0,n-1);
    cout<<"Sorted List:"<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}

