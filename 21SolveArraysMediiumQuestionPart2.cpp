#include <bits/stdc++.h>
// void sortColors(vector<int>& nums)
// {
//     int red=0;
//         int white=0;
//         int blue=0;
//         for(int i=0;i<nums.size();i++)
//         {
//             if(nums[i]==0)
//             {
//                 red++;
//             }  
//             if(nums[i]==1)
//             {
//                 white++;
//             }
//             if(nums[i]==2)
//             {
//                 blue++; 
//             }
//         }
//         nums.clear();
//         for(int i=0;i<red;i++)
//         {
//             nums.push_back(0);
//         }
//         for(int i=0;i<white;i++)
//         {
//             nums.push_back(1);
//         }
//         for(int i=0;i<blue;i++)
//         {
//             nums.push_back(2);
//         }
//     cout<<"Sorted result is:\n";
//     for(int i=0;i<nums.size();i++)
//     {
//         cout<<nums[i]<<" ";
//     }
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

    // // Sort array of 0's , 1's and 2's
    // sortColors(input);


    return 0;
}