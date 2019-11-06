i = 0
j = 1
m = 0

while i<=2.0:
    if i == 0 or i ==1:
        print("I={:.0f} J={:.0f}".format(i, j))
    elif i>1.9:
        print("I={:.0f} J={:.0f}".format(i, j))
    else:
        print("I={:.1f} J={:.1f}".format(i, j))

    j+=1
    m+=1
    if m ==3:
        m = 0
        i+=0.2
        j-=3
        j+=0.2