unsigned int swapBits(unsigned int n)
    {
    	// Your code here
    	vector<int> v;
    	while(n>0) {
    	    v.push_back(n%2);
    	    n = n>>1;
    	}
    	v.push_back(0);
    	for(int i=0;i<v.size()-1;i+=2) {
    	    swap(v[i],v[i+1]);
    	}
    	unsigned int ans=0;
    	unsigned int bit=1;
    	for(int i=0;i<v.size();i++) {
    	    ans += bit*v[i];
    	    bit *= 2;
    	}
    	return ans;
    }