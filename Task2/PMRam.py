def gcd(a,b):
    if b==0:
        return a
    else:
        return gcd(b,a%b)
def lcm(a,b):
    return (a*b)//(gcd(a,b))
t = int(input())
result_set = []
for T in range(t):
    n = int(input())
    arr = [int(ele) for ele in input().split()]
    res_found = False
    res = 0
    for i in range(len(arr)):
        for j in range(i+1,len(arr)):
            temp = lcm(arr[i],arr[j])
            if not res_found or temp<res:
                res = temp
                res_found = True
    print(res)