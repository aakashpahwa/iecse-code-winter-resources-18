t = int(input())
for T in range(t):
    p , q = [int(ele) for ele in input().split()]
    x = (3*p - 4*q)
    if x<=0:
        print("0")
    else:
        print(x)