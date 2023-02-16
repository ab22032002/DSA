unsigned int getFirstSetBit(int n)
    {
        // Your code here
        int count=0;
        for(int i=1;i<=n;i=i*2)
        {
            if((i&n)==i)
              return count+1;
            else
              count++;
        }
        return count;
    }