unsigned int swapBits(unsigned int n)
    {
    	int even_bits=0xAAAAAAAA;
    	even_bits=n&even_bits;
    	int odd_bits=0X55555555;
    	odd_bits=n&odd_bits;
    	even_bits>>=1;
    	odd_bits<<=1;
    	return even_bits|odd_bits;
    }