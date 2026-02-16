int maxConsecutiveOnes(int n) {
        // code here
        int k = n;
        int count = 0;
        int maxi = 0;
        while(k){
            if(k&1){
                count++;
            }
            else{
                count = 0;
            }
            maxi = max(maxi, count);
            k = k>>1;
        }
        return maxi;
    }
