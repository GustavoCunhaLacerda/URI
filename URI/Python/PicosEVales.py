n = int(input())
v = [int(x) for x in input().split()]
pad = 1
for i in range(1, n-1):
    if (v[i] <= v[i-1] and v[i] >= v[i+1]):
        pad = 0
    if (v[i] >= v[i-1] and v[i] <= v[i+1]):
        pad = 0
if (n == 2 and v[1] == v[0]):
    pad = 0

print(pad)