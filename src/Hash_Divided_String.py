class Solution:
    def stringHash(self, s: str, k: int) -> str:
        n = len(s)
        num_substrings = n // k
        
        result = ''
        
        for i in range(num_substrings):
            substring = s[i * k:(i + 1) * k]
            
            sum_hash_values = sum(ord(char) - ord('a') for char in substring)
            
            hashed_char_index = sum_hash_values % 26
            
            hashed_char = chr(hashed_char_index + ord('a'))
            
            result += hashed_char
        
        return result