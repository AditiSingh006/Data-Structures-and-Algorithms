int digitsInFactorial(int n) {
        // code here
        if(n==0||n==1) return 1;
        double k = 0;
        for(int i=2; i<=n; i++){
             k = k + log10(i);
        }
        return floor(k)+1;
    }
