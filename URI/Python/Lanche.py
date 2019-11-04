infos = [int(x) for x in input().split()]
traduor = {
    1 : 4.0,
    2 : 4.5,
    3 : 5.0,
    4 : 2.0,
    5 : 1.5 
}
print("Total: R$ {:.2f}".format(traduor[infos[0]]*infos[1]))