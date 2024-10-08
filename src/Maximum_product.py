from typing import List

class Solution:
    def maximumProduct(self, n: int, arr: List[int], l: int, r: int) -> int:
        subarray_1 = arr[l-1:r]
        subarray_2 = arr[:l-1] + arr[r:]
        
        max_1 = max(subarray_1)
        min_1 = min(subarray_1)
        
        max_2 = max(subarray_2)
        min_2 = min(subarray_2)
        
        product_1 = max_1 * max_2
        product_2 = max_1 * min_2
        product_3 = min_1 * max_2
        product_4 = min_1 * min_2
        
        return max(product_1, product_2, product_3, product_4)
