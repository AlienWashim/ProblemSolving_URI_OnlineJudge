package uri.problem.pkg1117;
import java.util.Scanner;


public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        boolean check = false;
        float average = 0;
        int count = 0;
        
        while(!check)
        {
            float x = sc.nextFloat();
            if(x > 10 || x < 0)
            {
                System.out.println("nota invalida");
            }else{
                average = average + x;
                count++;
                if(count == 2)
                {
                    check = true;
                }
            }
        }
        
        System.out.format("media = %.2f\n",(average/2));
    }
}