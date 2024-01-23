#include <bits/stdc++.h>
// void leftRotateby1(vector<int> &arr, int k)
// {
//     k=k%n;
//     int temp=arr[0];
//     for (int i = 0; i < arr.size(); i++)
//     {
//         arr[i] = arr[(i + k) % arr.size()];
//     }
//     arr[arr.size()-1]=temp;
//     cout<<"Rotated array is:"<<endl;
//     for(int i=0;i<arr.size();i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

// void leftRotatebyk(vector<int> &nums, int k)
// {
//     k=k%nums.size();
//     int temp[k];
//      for(int i=0;i<k;i++)
//      {
//         temp[i]=nums[i];
//      }
//     for (int i = 0; i < (nums.size()-k); i++)
//     {
//         nums[i] = nums[(i + k) % nums.size()];
//     }
//     for(int i=1;i<=k;i++)
//     {
//         nums[nums.size()-i]=temp[k-i];
//     }
//     cout<<"Rotated array is:"<<endl;
//     for(int i=0;i<nums.size();i++)
//     {
//         cout<<nums[i]<<" ";
//     }
// }

// void moveOtoend(vector<int>& v)
// {
//     vector<int>ans;
//     int count=0;
//     for(int i=0;i<v.size();i++)
//     {
//         if(v[i]!=0)
//         {
//             ans.push_back(v[i]);
//         }
//         else
//         {
//             count++;
//         }
//     }
//     for(int i=0;i<count;i++)
//     {
//         ans.push_back(0);
//     }
//     for(int i=0;i<v.size();i++)
//     {
//         cout<<ans[i]<<" ";
//     }
// }

// int linearSearch(int n, int num, vector<int> &arr)
// {
//     // Write your code here.
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]==num)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// void unionarray(vector<int>v1,vector<int>v2,int n1,int n2)
// {
//     map<int,int>mpp;
//     for(int i=0;i<n1;i++)
//     {
//         mpp[v1[i]]++;
//     }
//     for(int i=0;i<n2;i++)
//     {
//         mpp[v2[i]]++;
//     }
//     for(auto it:mpp)
//     {
//         cout<<it.first<<" ";
//     }
// }
// The above code was O(nlogn) TC.
// vector<int> sortedUnionArray(vector<int>& a,vector<int>& b)
// {
//     int n1 = a.size();
//     int n2 = b.size();
//     int i=0;
//     int j=0;
//     vector<int> unionArr;
//     while(i<n1 && j<n2)
//     {
//         if(a[i] <= b[j])
//         {
//             if(unionArr.size()==0 || unionArr.back()!= a[i])
//             {
//                 unionArr.push_back(a[i]);
//             }
//             i++;
//         }
//         else
//         {
//             if(unionArr.size()==0 || unionArr.back()!= b[j])
//             {
//                 unionArr.push_back(b[j]);
//             }
//             j++;
//         }
//     }
//     while(j<n2)
//     {
//         if(unionArr.size()==0 || unionArr.back()!= b[j])
//             {
//                 unionArr.push_back(b[j]);
//             }
//             j++;
//     }
//     while(i<n1)
//     {
//         if(unionArr.size()==0 || unionArr.back()!= a[i])
//             {
//                 unionArr.push_back(a[i]);
//             }
//             i++;
//     }
//     return unionArr;
// }
// // The TC for this code is O(n1+n2)

// vector<int> intersecarray(vector<int> &a, vector<int> &b)
// {
//     int i=0;
//     int j=0;
//     int count =-1;
//     vector<int>ans;
//     while(i<a.size() && j<=b.size())
//     {
//          if(j==b.size())
//             {
//                 j=count;  
// 				i++;
//             }
//         if(a[i]!=b[j])
//         {
//             j++;
//         }
//         else
//         {
//             ans.push_back(a[i]);   
// 			i++; 
//             count=j+1;
//             j=count;
//         }
//     }
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i];
//     }
//     return ans;
// }
int main()
{
    int n;
    cout << "Enter no. of terms\n";
    cin >> n;
    vector<int> v;
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        v.push_back(input);
    }

    // Left Rotate the array by one Place
    // int k=1
    // leftRotateby1(v, k);

    // Left Rotate the array by k Place
    // int k;
    // cout << "Enter no. place to rotate by:\n";
    // cin >> k;
    // leftRotatebyk(v, k);

    // Move Zeros to End
    // moveOtoend(v);

    // Linear search to return first occurence of num
    // int num;
    // cout<<"Enter NUM to be searched"<<endl;
    // cin>>num;
    // cout<<linearSearch(n,num,v);

    // Union of two sorted arrays
    // int n2;
    // cout << "Enter no. of terms in second array\n";
    // cin >> n2;
    // vector<int> v2;
    // cout << "Enter elements in second array:\n";
    // for (int i = 0; i < n2; i++)
    // {
    //     int input;
    //     cin >> input;
    //     v2.push_back(input);
    // }
    // unionarray(v,v2,n,n2);
    // sortedUnionArray(v,v2);

    // // Intersection of two sorted arrays
    // int n2;
    // cout << "Enter no. of terms in second array\n";
    // cin >> n2;
    // vector<int> v2;
    // cout << "Enter elements in second array:\n";
    // for (int i = 0; i < n2; i++)
    // {
    //     int input;
    //     cin >> input;
    //     v2.push_back(input);
    // }
    // intersecarray(v, v2);
    return 0;
}