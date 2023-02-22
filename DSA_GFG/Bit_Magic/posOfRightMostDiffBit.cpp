int posOfRightMostDiffBit(int m, int n)
    {
        int x= m^n;
        int count=0;
        for(int i=1;i<=x;i=i*2)
        {
            if(i&x)
            {
                return count+1;
            }
            else 
            count++;
            
        }
        return -1;
    }