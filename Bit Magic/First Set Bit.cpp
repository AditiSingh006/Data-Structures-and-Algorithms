nt getFirstSetBit(int n) {
        // code here
        int pos = 1;
        int k = n;
        while(k!=0){
            if(k&1) return pos;
            else{
                k = k>>1;
                pos++;
            }
        }
        return 0;
    }
