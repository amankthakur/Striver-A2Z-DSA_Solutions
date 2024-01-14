// #include<bits/stdc++.h>
// int P(vector<int>& v,int low,int high)
// {
//     int pivot=v[low];
//     int i=low;
//     int j=high;
//     while(i<j)
//     {
//         while (v[i]<= pivot && i<=high-1)
//         {
//             i++;
//         }
//         while(v[j]>pivot && j>=low+1)
//         {
//             j--;
//         }
//         if(i<j)
//         {
//             swap(v[i],v[j]);
//         }
//     }
//     swap(v[low],v[high]);
//     return j;
// }
// void Qs(vector<int>& v,int low,int high)
// {
//     if(low<high)
//     {
//         int partition=P(v,low,high);
//         Qs(v,low,partition-1);
//         Qs(v,partition+1,high);
//     }
// }
// int main()
// {
//     int n,input=0;
//     cout<<"Enter No. of elements\n";
//     cin>>n;
//     vector<int>v(n);
//     int low=0,high=v.size()-1;
//     cout<<"Enter elements:\n";
//     for(int i=0;i<n;i++)
//     {
//         cin>>input;
//         v.push_back(input);
//     }
//     Qs(v,low,high);
  
//     return 0;
// }