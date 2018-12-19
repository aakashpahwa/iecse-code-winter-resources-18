import java.io.*;
import java.util.*;

public class Solution {
    public static long gcd(long a,long b){
        if(a==0)
            return b;
        else
            return gcd(b%a,a);
    }
    public static long lcm(long a,long b){
        return (a*b)/gcd(a,b);
    }
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-- > 0){
            int n = in.nextInt();
            int arr[] = new int[n];
            for(int i=0;i<n;i++)
                arr[i] = in.nextInt();
            boolean found = false;
            long res = 0;
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    long temp = lcm(arr[i],arr[j]);
                    if(!found || temp<res){
                        res = temp;
                        found = true;
                    }
                }
            }
            System.out.println(res);
        }
    }
}