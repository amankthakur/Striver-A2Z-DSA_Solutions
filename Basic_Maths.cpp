#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // Naive way
    // int count=0;
    // while (n>0)
    // {
    //     count++;
    //     int lastdigit=n%10;
    //     n=n/10;
    // }
    // cout<<count;

    // better way
    // int cnt=(int)(log10(n)+1);
    // cout<<cnt;
    // return 0;

    // reverse
    // int revnum=0;
    // while(n>0)
    // {
    //     int ld=n%10;
    //     revnum=(revnum*10)+ld;
    //     n=n/10;
    // }
    // cout<<revnum;

    // palindrome
    // int revnum=0;
    // int dN=n;
    // while(n>0)
    // {
    //     int ld=n%10;
    //     revnum=(revnum*10)+ld;
    //     n=n/10;
    // }
    // if(revnum==dN)
    // {
    //     cout<<"palindrome";
    // }
    // else
    // {
    //     cout<<"not palindrome";
    // }
    // return 0;

    // Armstrong
    //     int sum=0;
    //     int dN=n;
    //     while(n>0)
    //     {
    //      int digits=n%10;
    //      sum=sum + pow(digits,3);
    //      n=n/10;
    //     }
    //    if (dN==sum)
    //    {
    //     cout<<" Armstrong no.";
    //    }
    //    else
    //    {
    //     cout<<"Not an Armstrong no.";
    //    }
    //    return 0;

    // all divisors
    // vector<int>ans;
    // for(int i=1;i<=sqrt(n);i++)
    // {
    //     if(n%i==0)
    //     {
    //        ans.push_back(i);
    //     }
    // }
    //  for(auto it=ans.end()-1;it>=ans.begin();it--)
    // {
    //     if((n/ *(it))!=*(it))
    //     {
    //         ans.push_back(n/ *(it));
    //     }
    // }
    // for(auto it=ans.begin();it!=ans.end();it++)
    // {
    //     cout<<*(it)<<endl;
    // }
    // return 0;

    // prime no.
    // int count = 0;
    // for (int i = 2; i < 10; i++)
    // {
    //     if(n==1)
    //     {
    //         cout<<"true";
    //         return 0;
    //     }
    //     if(i==n)
    //     {
    //         break;
    //     }
    //     if ((n % i == 0))
    //     {
    //         count++;
    //         if (count > 0)
    //         {
    //             cout << "false";
    //             return 0;
    //         }
    //     }
    // }
    // cout<<"true";
    // return 0;

    // GCD/HCF
    // int n2;
    // cin>>n2;
    // int res=min(n,n2);
    // while(res>0)
    // {
    //     if(n%res==0 && n2%res==0)
    //     {
    //         cout<<res;
    //         break;
    //     }
    //     res--;
    // }
    // return 0;

        //   using eculidean algo
        //  int n2;
        //  cin>>n2;
        //  while (n!=n2)
        //  {
        //     if(n>n2)
        //     {
        //         n=n-n2;
        //     }
        //     else
        //     {
        //         n2=n2-n;
        //     }
        //  }
        //  cout<<n;
        //  return 0;
}
