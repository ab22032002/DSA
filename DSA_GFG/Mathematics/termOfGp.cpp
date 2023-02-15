double termOfGP(int A,int B,int N)
    {
        double a=A;
        double b=B;
        double rat = b/a;
        return A*pow(rat,N-1);
    }