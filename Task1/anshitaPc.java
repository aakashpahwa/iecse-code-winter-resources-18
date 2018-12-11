import java.util.*;
public class Solution{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            int n = in.nextInt();
            int x = in.nextInt();
            char ch = in.next().charAt(0);
            int ret = 0;
            boolean exists[] = new boolean[26];
            for(int i=0;i<n;i++){
                String str =  in.next() + in.nextLine();
                if(exists[str.charAt(4)-'a']==true || exists[str.charAt(8)-'a']==true)
                    ret++;
                if((i+1)==x)
                    exists[ch-'a'] = true;
            }
            System.out.println(ret);
        }
    }
}