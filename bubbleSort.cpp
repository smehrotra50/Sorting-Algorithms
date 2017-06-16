/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Shubham Mehrotra
 *
 * Created on 16 June 2017, 22:36
 */

#include<iostream>
using namespace std;
void bubbleSort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int flag=0;
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
}
int main() 
{
    int a[6]={3,4,2,4,5,1};
    bubbleSort(a,6);
    cout<<"Sorted Array:"<<endl;
    for(int i=0;i<6;i++)
        cout<<a[i]<<" ";
    return 0;
}

