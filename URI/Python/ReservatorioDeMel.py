pi = 3.14
while True:
    try:
        v = float(input())
        d = float(input())
        h = (4*v)/(pi*d*d)
        area = pi*d*d/4.0
        print("ALTURA = {:.2f}\nAREA = {:.2f}".format(h, area))
    except EOFError:
        break
