import java.util.*;
class Solution{
    static long modulo = 1000000007;
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        int odd,even;
        int T = in.nextInt();
        int N,temp;
        long product = 1;
        boolean arr[];
        for(int i=1;i<=T;i++)
        {
            arr = new boolean[100001];
            odd = 0;even = 0;
            product = 1;
            N = in.nextInt();
            for(int j=0;j<N;j++)
            {
                temp = in.nextInt();
                if(arr[temp]==false)
                {
                    arr[temp] = true;
                    if(temp%2==0)
                        even++;
                    else
                        odd++;
                }
            }
            if(odd==0)
                System.out.println("0");
            else
            {
                for(int j=1;j<=(even+odd-1);j++)
                    product = (product*2)%modulo;
                System.out.println(product);
            }
        }
    }
}