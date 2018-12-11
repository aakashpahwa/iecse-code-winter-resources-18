import java.io.*;
import java.util.*;

public class Solution {
    public static int getPrevious(int i,int n){
        if(i==0)
            return n-1;
        else
            return i-1;
    }
    public static int eval(int p,int q,int n,String str){
        if(p==q)
            return 0;
        p = (p + 1)%n;
        int ret = 0;
        for(int j=p;j!=q;j=(j+1)%n){
            if(str.charAt(j)!=str.charAt(getPrevious(j,n)))
                ret++;
        }
        if(str.charAt(q)!=str.charAt(getPrevious(q,n)))
            ret++;
        return ret;
    }
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-- > 0){
            int n = in.nextInt();
            int k = in.nextInt();
            String str = in.next();
            for(int i=0;i<k;i++){
                int p = in.nextInt();
                int q = in.nextInt();
                System.out.println(Math.min(eval(p-1,q-1,n,str),eval(q-1,p-1,n,str)));
            }
        }
    }
}