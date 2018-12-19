t = int(input())
for T in range(t):
    n , x = [int(ele) for ele in input().split()]
    s = 0.0
    i = 1.0
    while i<=x:
        s+=(i*(pow(i/x,n)-pow((i-1)/x,n)))
        i+=1.0
    print("%.4f"%(s,))