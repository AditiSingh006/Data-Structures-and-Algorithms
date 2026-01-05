int exactly3Divisors(int n) {
        // code here
        int count = 0;
        if(n<2) return count;
        for(int i=2; i*i<=n; i++){
            if(isprime(i)) count++;
        }
        return count;
    }
    bool isprime(int n){
        for(int i=2; i*i<= n; i++){
            if(n%i==0) return false;
        }
        return true;
    }
