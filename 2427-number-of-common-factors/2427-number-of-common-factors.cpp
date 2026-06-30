class Solution {
public:
    int commonFactors(int a, int b) {
        int factors = 0;

        if( a == b){
            for(int i=1; i<=a; i++){
                if(a % i == 0){
                    factors += 1;
                }
            }
        }
        else{
            for(int i=1; i <= min(a,b); i++){
                if(a % i == 0 && b % i == 0){
                    factors += 1;
                }
            }
        }
        return factors;
    }
};