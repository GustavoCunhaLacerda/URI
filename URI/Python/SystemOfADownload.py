musics = {
    0 : "PROXYCITY",
    1 : "P.Y.N.G.",
    2 : "DNSUEY!",
    3 : "SERVERS",
    4 : "HOST!",
    5 : "CRIPTONIZE",
    6 : "OFFLINE DAY",
    7 : "SALT",
    8 : "ANSWER!",
    9 : "RAR?",
    10: "WIFI ANTENNAS"
}
n = int(input())
for i in range(n):
    inf = [int(x) for x in input().split()]
    print("{}".format(musics[inf[0]+inf[1]]))