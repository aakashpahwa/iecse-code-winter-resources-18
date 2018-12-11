import java.io.*;
import java.util.*;

public class Solution {
    public static int gcd(int a, int b){ 
        if (a == 0) 
            return b; 
        return gcd(b%a, a); 
    }
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-- > 0){
            String str = in.next();
            int chars[] = new int[26];
            for(int i=0;i<str.length();i++)
                chars[str.charAt(i)-'a']++;
            int ret = 0;
            for(int i=0;i<26;i++)
                for(int j=i+1;j<26;j++){
                    if(chars[i]==0 && chars[j]==0)
                        continue;
                    if(gcd(chars[i],chars[j])==1)
                        ret++;
                }
            System.out.println(ret);
        }
    }
}