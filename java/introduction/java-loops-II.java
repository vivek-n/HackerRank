import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            
            int sum;
            int pow = 1;
            
            sum = a + (pow * b);
            
            System.out.print(sum + " ");
            
            for(int j=2; j<=n; j++){
                pow *= 2;
                
                sum += (pow * b);
                
                System.out.print(sum + " ");
            }
            
            System.out.println("");
        }
        in.close();
    }
}
