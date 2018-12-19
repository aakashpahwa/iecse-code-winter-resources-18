t = int(input())
for T in range(t):
    n = int(input())
    hm = [0]*100001
    arr = [int(ele) for ele in input().split()]
    odd = 0
    even = 0
    for ele in arr:
        if hm[ele]==0:
            hm[ele] = 1
            if ele%2==0:
                even+=1
            else:
                odd+=1
    if odd==0:
        print("0")
    else:
        print(pow(2,even+odd-1,1000000007))