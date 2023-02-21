
    int table[256];
    int countSet(int n)
        {
            return table[n & 0xff] + 
            table[(n >> 8) & 0xff] + 
            table[(n >> 16) & 0xff] + 
            table[n >> 24]; 
        }
    void initialize()
    {
          table[0] = 0;
          for (int i = 1; i < 256; i++)
          {
              table[i] = (i & 1) + table[i / 2];
          }
    }
    int countSetBits(int n)
    {
        // Your logic here
        
	// recursive function to count set bits 
	      int count=0;
	      for(int i=1;i<=n;i++)
	      {  initialize();
             count+=countSet(i);
	      }
	      return count;
        
        
        
    }