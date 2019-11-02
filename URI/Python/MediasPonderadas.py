n = int(input())
res = []
for i in range(n):
    v= list(map(float, input().split()))
    media = 2*v[0] + 3*v[1] + 5*v[2]
    media/= 10
    res.append(media)

for i in res:
    print("{0:0.1f}".format(i))
