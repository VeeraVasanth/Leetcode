class Solution {
public:
    int countDigits(int num) {
        int c=0,digit=0,d=num;
        while(num>0){
          digit=num%10;
          num=num/10; 
          if(d%digit==0){
            c++;
          } 

        }
        return c;
    }
};