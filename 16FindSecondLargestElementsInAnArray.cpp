#include <bits/stdc++.h>
using namespace std;
// int largest(int* arr,int n)
// {
//     int largest=arr[0];
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]>largest)
//         {
//             largest=arr[i];
//         }
//     }
//     return largest;
// }

// void seclarsecsmall(int* arr,int n)
// {
//     int count=0;
//     map<int,int>mpp;
//     for(int i=0;i<n;i++)
//     {
//         mpp[arr[i]]++;
//     }
//     for(auto it : mpp)
//     {

//         if(count==(mpp.size()-(mpp.size()-1)))
//         {
//             cout<<it.first<<" ";
//         }

//         if(count==(mpp.size()-2))
//         {
//         cout<<it.first;
//         break;
//         }
//         count++;
//     }
// }

// bool ifsorted(int* arr,int n)
// {
//     int small = arr[0];
//     for(int i=1;i<n;i++)
//     {
//         if(arr[i]<small)
//         {
//             return false;
//         }
//         small=arr[i];
//     }
//     return true;
// }

// int removeDuplicates(int* arr, int n) {
//     int pos;
//     for(int i=1;i<n;i++)
//    {
//     if(arr[i-1]==arr[i])
//     {
//         for(int j=i;j<n-1;j++)
//         {
//             arr[j]=arr[(j+1)%n];
//             i--;
//         }
//         arr[n-1]=NULL;
//     }
//    }
//    while(n>0)
//    {
//     if(arr[n]==0)
//     {
//         n--;
//     }
//     else
//     {
//         pos=n;
//         break;
//     }
//    }
//    return (pos+1);
// }

// int removeDuplicates(vector<int> &arr, int n) {
//     int i=0;
//     for(int j=1;j<n;j++)
//     {
//         if(arr[j]!=arr[i])
//         {
//             i++;
//             arr[i]=arr[j];
//         }
//     }
//     return (i+1);
// }
int main()
{
    int n;
    cout << "Enter No. of Elements in array:\n";
    cin >> n;
    int arr[n];
    cout << "Enter Elements in array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Largest element in an array
    // cout<<"Largest Element:\n"<<largest(arr,n);

    // 2nd largest and 2nd smallest element in an array
    // seclarsecsmall(arr,n);

    // Check if array is Sorted
    // cout<<ifsorted(arr,n);

    // To remove Duplicate elements and tell the new size of array.
    // Brute force approch
    // cout<<removeDuplicates(arr,n);

    // To remove Duplicate elements and tell the new size of array.
    // Same question with optimal approch
    // cout<<removeDuplicates(arr,n);

    return 0;
}