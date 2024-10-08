from typing import List

class Solution:
    def __init__(self):
        self.graph = []
        self.values = []
        self.memo = []

    def dfs(self, node: int, parent: int) -> int:
        if self.memo[node] != -1:
            return self.memo[node]
        
        max_length = 1  

        for neighbor in self.graph[node]:
            if neighbor != parent and self.values[neighbor - 1] > self.values[node - 1]:
                max_length = max(max_length, 1 + self.dfs(neighbor, node))
        
        self.memo[node] = max_length
        return max_length

    def longestIncreasingPath(self, n: int, edges: List[List[int]], values: List[int]) -> int:
        self.values = values
        self.graph = [[] for _ in range(n + 1)]
        self.memo = [-1] * (n + 1)
        
        for u, v in edges:
            self.graph[u].append(v)
            self.graph[v].append(u)
        
        longest_path = 0
        for i in range(1, n + 1):
            longest_path = max(longest_path, self.dfs(i, -1))  
        
        return longest_path
