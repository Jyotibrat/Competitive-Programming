t = int(input())

for i in range(t):
    r,g,b = map(int, input().split());
    if (r <= g + b) and (g <= r + b) and (b <= r + g):
        print("yes")
    else:
        print("no")
