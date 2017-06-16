/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Shubham Mehrotra
 *
 * Created on 16 June 2017, 23:32
 */

#include<iostream>
using namespace std;
void insertionSort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int value=a[i];
        int hole=i;
        while(hole>0 && a[hole-1]>value)
        {
            a[hole]=a[hole-1];
            hole=hole-1;
        }
        a[hole]=value;
    }
}
int main() 
{
    int a[6]={3,9,2,4,5,1};
    insertionSort(a,6);
    cout<<"Sorted Array:"<<endl;
    for(int i=0;i<6;i++)
        cout<<a[i]<<" ";
    return 0;
}

