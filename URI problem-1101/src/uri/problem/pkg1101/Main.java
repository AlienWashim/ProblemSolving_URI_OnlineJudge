package uri.problem.pkg1101;

import java.util.Scanner;


public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        boolean check = false;
        int sum = 0;
        
        while(!check)
        {
            int x = sc.nextInt();
            int y = sc.nextInt();
            
            if(x <= 0 || y <= 0)
            {
                check = true;
            }else if(x >= y){
                for(int i = y; i <= x;i++){
                    sum = sum+i;
                    System.out.print(i+" ");
                }
            }else{
                for(int i = x; i <= y;i++){
                    sum = sum+i;
                    System.out.print(i+" ");
                }
            }
            if(sum != 0)
            {
                System.out.println("sum="+sum);
            }
            sum = 0;
        }  
    }
}
