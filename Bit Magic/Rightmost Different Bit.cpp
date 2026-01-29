int posOfRightMostDiffBit(int m, int n) {
        //  code here
        int p = m^n;
        int pos = 1;
        while(p){
            if(p&1) return pos;
            p = p >> 1;
            pos++;
        }
        return -1;
    }
