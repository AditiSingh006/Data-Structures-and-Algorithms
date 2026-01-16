int countSetBits(int n) {
        // code here
        int count = 0;
        if(n==0) return 0;
        int x = log2(n);
        int till_2pow = x*pow(2,x-1);
        int msb = n - pow(2,x) + 1;
        int rem = countSetBits(n-pow(2,x));
        count = till_2pow + msb + rem;
        return count;
    }
