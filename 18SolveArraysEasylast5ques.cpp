#include <bits/stdc++.h>
// int missingNumber(vector<int> &nums)
// {
//     if (nums.size() == 1)
//     {
//         if (nums.back() == 0)
//         {
//             return 1;
//         }
//         if (nums.back() == 1)
//         {
//             return 0;
//         }
//     }
//     sort(nums.begin(), nums.end());
//     int high = nums.back();
//     if (nums[0] != 0)
//     {
//         return 0;
//     }
//     for (int i = 1; i <= high; i++)
//     {
//         if (nums[i] != i)
//         {
//             return i;
//         }
//     }
//     return (high + 1);
// }

// int findMaxConsecutiveOnes(vector<int> &nums)
// {
//     int high = 0;
//     int count = 0;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (nums[i] == 1)
//         {
//             count++;
//             if (count > high)
//             {
//                 high = count;
//             }
//         }
//         else if (nums[i] == 0)
//         {
//             if (count > high)
//             {
//                 high = count;
//             }
//             count = 0;
//         }
//     }
//     return high;
// }

// int getSingleElement(vector<int> &arr){
//     int xxorr=0;
//     for(auto it:arr)
//     {
//         xxorr=xxorr^it;
//     }
//     return xxorr;
// }

int main()
{
    vector<int> input;
    int n;
    cout << "Enter no. of terms in Input\n";
    cin >> n;
    cout << "Enter inputs in array\n";
    for (int i = 0; i < n; i++)
    {
        int inputs;
        cin >> inputs;
        input.push_back(inputs);
    }

    // Finding missing number in an array.
    // cout << missingNumber(input);

    //  Maximum No. of Consecutive 1
    // cout << findMaxConsecutiveOnes(input);

    // finding the single element
    // cout<<getSingleElement(input);

    return 0;
}