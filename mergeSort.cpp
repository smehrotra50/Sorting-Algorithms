/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Shubham Mehrotra
 *
 * Created on 18 June 2017, 00:11
 */

#include<iostream>
using namespace std;
void merge(int l[],int r[],int a[],int nl,int rl)
{
    
    int i=0,j=0,k=0;
    while(i<nl && j<rl)
    {
        if(l[i]<=r[j])
        {
            a[k]=l[i];
            i++;
        }
        else
        {
            a[k]=r[j];
            j++;
        }
        k++;
    }
    while(i<nl)
    {
        a[k]=l[i];
            i++;
            k++;
    }
    while(j<rl)
    {
         a[k]=r[j];
            j++;
            k++;
    }
}
void mergeSort(int a[],int n)
{
   
   if(n<2)
       return;
   int mid=n/2;
   int left[mid];
   int right[n-mid];
   for(int i=0;i<mid;i++)
       left[i]=a[i];
   for(int i=mid;i<n;i++)
       right[i-mid]=a[i];
   mergeSort(left,mid);
   mergeSort(right,n-mid);
   merge(left,right,a,mid,n-mid);
}
int main()
{
    int a[8]={2,3,1,7,8,5,4,6};
    int n=sizeof(a)/sizeof(a[0]);
    mergeSort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

