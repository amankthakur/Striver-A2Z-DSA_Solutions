#include <bits/stdc++.h>

// // Brute Force
// int subarraypos(vector<int> &a, int k)
// {
//     int length = 0;
//     int n = a.size();
//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0;
//         for (int j = i; j < n; j++)
//         {
//             sum += a[j];
//             if (sum == k)
//             {
//                 length = max(length, j - i + 1);
//             }
//         }
//     }
//     return length;
// }
// // Better Solution
// int subarraypos(vector<int> &a, int k)
// {
//     map<int,int>prefixsum;
//     int maxlength=0;
//     int sum=0;
//     for(int i=0;i<a.size();i++)
//     {
//         sum+=a[i];
//         if(sum==k)
//         {
//             maxlength=max(maxlength,i+1);
//         }
//         int rem=sum-k;
//         if(prefixsum.find(rem)!=prefixsum.end())
//         {
//             int length=i-prefixsum[rem];
//             maxlength=max(maxlength,length);
//         }
//         if(prefixsum.find(sum)==prefixsum.end())
//         {
//             prefixsum[sum]=i;
//         }
//     }
//     return maxlength;
// }
// // Optimal Solution
int subarraypos(vector<int> &a, int k)
{
        //  int i = 0;
        //  int j = 0;
        //  int sum = 0;
        //  int maxlength = 0;
        //  while (i < a.size())
        //  {
        //      sum += a[i];
        //      if (sum == k)
        //      {
        //          maxlength = max(maxlength, i - j + 1);
        //      }
        //      if (sum > k)
        //      {
        //          sum = sum - a[j];
        //          j = j + 1;
        //          if (sum == k)
        //          {
        //              maxlength = max(maxlength, i - j + 1);
        //          }
        //      }
        //      i++;
        //  }
        //  return maxlength;

// another way
    // int i=0,j=0;
    // long long sum =a[0];
    // int maxlength=0;
    // int n=a.size();
    // while(i<n)
    // {
    //     while(j<=i&&sum>k)
    //     {
    //         sum-=a[j];
    //         j++;
    //     }
    //     if(sum == k)
    //     {
    //         maxlength=max(maxlength,i-j+1);
    //     }
    //     i++;
    //     if(i<n)
    //     {
    //         sum+=a[i];
    //     }
    // }     
    // return maxlength;
}

int main()
{
    // vector<int> a;
    // int n;
    // cout << "Enter No. of terms in array:\n";
    // cin >> n;
    // cout << "Enter elements in array:\n";
    // for (int i = 0; i < n; i++)
    // {
    //     int input;
    //     cin >> input;
    //     a.push_back(input);
    // }
    // // To find Longest Subarray With Sum K(+Ve & -ve)
    // int Sum;
    // cout << "Enter the given sum:\n";
    // cin >> Sum;
    // cout << "Size of longest subarray is :\n";
    // cout << subarraypos(a, Sum);
    // return 0;
}