p1 = [float(x) for x in input().split()]
p2 = [float(x) for x in input().split()]
dist = ( (p1[0]-p2[0])*(p1[0]-p2[0]) + (p1[1]-p2[1])*(p1[1]-p2[1]) )**(1/2) 
print("{:.4f}".format(dist))