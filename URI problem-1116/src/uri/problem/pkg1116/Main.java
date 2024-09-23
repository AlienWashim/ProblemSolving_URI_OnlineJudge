package uri.problem.pkg1116;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int N = sc.nextInt();
        for(int i = 0; i < N; i++)
        {
            int x = sc.nextInt();
            float y = sc.nextFloat();
            if(y == 0)
            {
                System.out.println("divisao impossivel");
            }
            else{
                System.out.println(x/y);
            }
        }
    }
    
}
