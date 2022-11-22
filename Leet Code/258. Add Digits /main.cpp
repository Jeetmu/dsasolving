class Solution {
public:
    int addDigits(int num) {
      int sum = 0;
      int x = 0;
      int y = 0;
      //check case
      if(num % 10 == num){
          return num;
      }
      while(1){
          x = num % 10;
          y = num / 10;
        num = x + y;
        if(num < 10){
            break;
        }
      }
      return num;  
    }
};