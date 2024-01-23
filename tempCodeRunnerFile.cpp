vector<int> intersecarray(vector<int> &a, vector<int> &b)
{
    int i=0;
    int j=0;
    int count =-1;
    vector<int>ans;
    while(i<a.size() && j<=b.size())
    {
         if(j==b.size())
            {
                j=count;  
				i++;
            }
        if(a[i]!=b[j])
        {
            j++;
        }
        else
        {
            ans.push_back(a[i]);   
			i++; 
            count=j+1;
            j=count;
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
    return ans;
}