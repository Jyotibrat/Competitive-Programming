class Solution {
  public:
    int percentTax(long long income) {
     if (income < 300000) {
            return 0;
        }
        else if (income >= 300000 && income < 700000) {
            return 5;
        }
        else if (income >= 700000 && income < 1000000) {
            return 10;
        }
        else if (income >= 1000000 && income < 1200000) {
            return 15;
        }
        else if (income >= 1200000 && income < 1500000) {
            return 20;
        }
        else {
            return 30;
        }
    }
};