// #include<bits/stdc++.h>
// using namespace std;
// void merge(int arr[],int low,int mid,int high)
// {
//     vector<int>v;
//     int left=low;
//     int right=mid+1;
//     while(left<=mid && right<=high)
//     {
//      if(arr[left]<=arr[right])
//      {
//         v.push_back(arr[left]);
//         left++;
//      }   
//      else
//      {
//         v.push_back(arr[right]);
//         right++;
//      }
//     }
//     // in case while cond id true and theres still values left in left or right array it will be pushed back
//     while(left<=mid)
//     {
//         v.push_back(arr[left]);
//         left++;
//     }
//     while(right<=high)
//     {
//         v.push_back(arr[right]);
//         right++;
//     }
//     for(int i=low;i<=high;i++)
//     {
//         arr[i]=v[i-low];
//     }
// }
// void mergeSort(int arr[],int low,int high)
// {
//     if(low >= high)
//     {
//         return;
//     }
//     int mid=((low+high)/2);
//     mergeSort(arr,low,mid);
//     mergeSort(arr,mid+1,high);
//     merge(arr,low,mid,high);
// }
// int main()
// {
//     int n;
//     cout<<"Enter no. of terms to enter in an array\n";
//     cin>>n;
//     int arr[n];
//     cout<<"enter elements in array \n";
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     // Merge Sort 
//     mergeSort(arr,0,n-1);
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }