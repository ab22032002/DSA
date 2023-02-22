int countBitsFlip(int a, int b){
        
        int res =0;
        int k=a^b;
        while(k>0)
        {
            k=k&(k-1);
            res=res+1;
        }
        return res;
    }