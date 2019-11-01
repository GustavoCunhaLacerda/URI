# from sys import stdin, stdout 
# def main():
#     n = int(stdin.readline())
#     x = [int(p) for p in stdin.readline().split()]
    
#     stdout.write(str(x.count(n)) + '\n')


# if __name__ == "__main__": 
#     main()

n = int(input())
x = [int(p) for p in input().split()]
print(x.count(n))