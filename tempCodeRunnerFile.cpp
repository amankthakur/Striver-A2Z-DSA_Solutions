 0;
         int j = 0;
         int sum = 0;
         int maxlength = 0;
         while (i < a.size())
         {
             sum += a[i];
             if (sum == k)
             {
                 maxlength = max(maxlength, i - j + 1);
             }
             if (sum > k)
             {
                 sum = sum - a[j];
                 j = j + 1;
                 if (sum == k)
                 {
                     maxlength = max(maxlength, i - j + 1);
                 }
             }
             i++;
         }
         return 