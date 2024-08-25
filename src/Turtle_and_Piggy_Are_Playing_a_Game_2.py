t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    
    i = 0
    while i < n: 
        if len(a) > 1:
            if i % 2 == 0: 
                a[0] = max(a[0], a[1])
                a.pop(1)
            else:  
                a[0] = min(a[0], a[1])
                a.pop(1)
        i+=1
    
    print(a[0])