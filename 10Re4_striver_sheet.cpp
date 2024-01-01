#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// reverse an array
// void reverse(int arr[],int e,int s=0)
// {
//     if(e<=s)
//     {
//         return;
//     }
//     swap(arr[e-1],arr[s]);
//     return reverse(arr,e-1,s+1);
// }
            // another way to reverse an array
            // void reverse2(int i,int arr[],int n)
            // {
            //     if(i>=n/2)
            //     {
            //         return;
            //     }
            //     swap(arr[i],arr[n-i-1]);
            //     reverse2(i+1,arr,n);
            // }
// Check if a string is Palindrome
// bool palin(string &s,int i=0)
// {
//     if (i>=s.size()/2)
//     {
//         return true;
//     }
//     if(s[i]!=s[s.size()-i-1])
//     {
//         return false;
//     }
//     return palin(s,i+1);
// }            
int main()
{
    int n=7,i=0;
    int arr[7]={1,2,3,4,5,6,7};
    string a;
    cin>>a;
    // reverse(arr,n);
    // reverse2(i,arr,n);
    // cout<<palin(a);
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    return 0;
}