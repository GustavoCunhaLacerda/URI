while True:
    try:
        alf = input()
        n = int(input())
        a = [int(x) for x in input().split()]
        for l in a:
            print("{}".format(alf[l-1]), end ='')
        print()
    except EOFError:
        break