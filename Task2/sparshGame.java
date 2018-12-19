import java.io.*;
import java.util.*;
import java.math.*;

public class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-- > 0){
            int n = in.nextInt();
            int x = in.nextInt();
            double sum = 0.0;
            for(double i=1.0;i<=x;i+=1.0)
            {
                sum = sum + (i*(Math.pow(i/x,n)-Math.pow((i-1)/x,n)));
            }
            System.out.printf("%.4f\n",sum);
        }
    }
}