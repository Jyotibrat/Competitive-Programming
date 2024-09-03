#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <set>
#include <algorithm> 
#include <cmath>     

using namespace std;

class Solution {
public:
    long long countGoodIntegers(int n, int k) {
        long long count_for_good_number = 0;
        vector<int> list_for_palindromes;

        for (int number = static_cast<int>(pow(10, n - 1)); number < static_cast<int>(pow(10, n)); ++number) {
            unordered_map<char, int> check_for_palindrome;
            string number_str = to_string(number);
            
            for (char c : number_str) {
                check_for_palindrome[c]++;
            }

            bool flag = true;
            int count_for_odd = 0;

            for (auto& pair : check_for_palindrome) {
                if (pair.second % 2 != 0) {
                    count_for_odd++;
                    if (count_for_odd > 1) {
                        flag = false;
                        break;
                    }
                }
            }

            if (flag) {
                list_for_palindromes.push_back(number);
            }
        }

        for (int number : list_for_palindromes) {
            string number_str = to_string(number);
            sort(number_str.begin(), number_str.end());

            set<int> combinations;

            do {
                int perm_num = stoi(number_str);
                combinations.insert(perm_num);
            } while (next_permutation(number_str.begin(), number_str.end()));

            for (int num : combinations) {
                if (isPalindrome(num) && to_string(num).size() == n) {
                    if (num % k == 0) {
                        count_for_good_number++;
                        break;
                    }
                }
            }
        }

        return count_for_good_number;
    }

private:
    bool isPalindrome(int num) {
        string num_str = to_string(num);
        int left = 0, right = num_str.size() - 1;
        
        while (left < right) {
            if (num_str[left] != num_str[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
