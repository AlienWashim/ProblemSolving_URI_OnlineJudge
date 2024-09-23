
import java.util.Scanner;


public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        boolean check = false;
        
        while(!check)
        {
            int x = sc.nextInt();
            int y = sc.nextInt();
            
            if(x == y)
            {
                check = true;
            }else if(x > y){
                System.out.println("Decrescente");
            }else{
                System.out.println("Crescente");
            }
        }  
    }
}
