x = input()
if x[0] == '-':
    x = float(x)
    print("{:.4E}".format(x))
else:
    x = float(x)
    print("+{:.4E}".format(x))
