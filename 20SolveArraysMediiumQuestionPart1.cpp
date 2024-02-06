#include <bits/stdc++.h>

// string twoSum(vector<int>nums,int target)
// {
//     map<int,int>mpp;
//         for(int i=0;i<nums.size();i++)
//         {
//             mpp[nums[i]]=i;
//         }
//         for(int i=0;i<nums.size();i++)
//         {
//            int rem=target-nums[i];
//            if(mpp.find(rem)!=mpp.end()&& mpp[rem]!=i)
//            {
//                return "YES";
//            }
//         }
//         return "NO";
// }
int main()
{
    vector<int>input;
    int n;
    cout<<"Enter No. of terms to enter:\n";
    cin>>n;
    cout<<"Enter Elements:\n";
    for(int i=0;i<n;i++)
    {
        int INPUT;
        cin>>INPUT;
        input.push_back(INPUT);
    }
    // // 2 Sum problem to find if there are two elements , which sum to give target
    // int target;
    // cout<<"Enter Target Sum:\n";
    // cin>>target;
    // twoSum(input,target);
    // return 0;
}