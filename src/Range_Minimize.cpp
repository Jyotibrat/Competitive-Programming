#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){

        int t, temp;
        cin >> t;
        vector<int> Array(t);  
        for(int i = 0; i < t; i++){
            cin >> Array[i];  
        }
        
        int result = 10000;  
        int diff;

        for(int i = 0; i < t; i++){
            for(int l = i + 1; l < t; l++){  
                vector<int> copy_Array(Array);  
                copy_Array.erase(copy_Array.begin() + l);  
                copy_Array.erase(copy_Array.begin() + i);  

                int minimum = *min_element(copy_Array.begin(), copy_Array.end());
                int maximum = *max_element(copy_Array.begin(), copy_Array.end());
                diff = maximum - minimum;
                
                result = min(diff, result);  
            }
        }

        cout << result << endl;
    }
    
    return 0;
}
