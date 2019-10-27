num = [int(x) for x in input().split()]
a = num[0]
b = num[1]

r = a%b
if r < 0:
    if b<0:
        r -= b
    else:
        r += b
q = (a-r)//b
print("{} {}".format(q, r))