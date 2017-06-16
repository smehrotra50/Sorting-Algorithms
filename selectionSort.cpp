/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Shubham Mehrotra
 *
 * Created on 16 June 2017, 22:12
 */


#include<iostream>
using namespace std;
void selectionSort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int iMin=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[iMin])
                iMin=j;
        }
        int temp=a[i];
        a[i]=a[iMin];
        a[iMin]=temp;
    }
}
int main() 
{
    int a[6]={3,4,2,4,5,1};
    selectionSort(a,6);
    cout<<"Sorted Array:"<<endl;
    for(int i=0;i<6;i++)
        cout<<a[i]<<" ";
    return 0;
}

