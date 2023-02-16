int countSetBits(int n)
    {
        // Your logic here
        int count=0;
        for(int i=1;i<=n;i++)
        {  int res=0;
           int k=i; 
           while(k>0)
           {
               k=k&(k-1);
               count++;
           }
        }
        return count;
    }