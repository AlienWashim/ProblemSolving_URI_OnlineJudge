package uri.problem.pkg1161;

import java.util.Scanner;
import static jdk.nashorn.internal.parser.TokenType.EOF;

public class Main {
    public static int sum_factorial(int n){
        int sum_fact = 1;
        for(int i = 1; i <= n; i++)
        {
            sum_fact = sum_fact*i;
        }
        return sum_fact;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int M = sc.nextInt();
        int N = sc.nextInt();
        while(((M != EOF) && (N != EOF)))
        {
            
            if( ((M >= 0) && (M <= 20)) && ((N >= 0) && (N <= 20)))
            {
                System.out.println((sum_factorial(M))+(sum_factorial(N)));
            }
            Scanner input = new Scanner(System.in);
            M = input.nextInt();
            N = input.nextInt();
        }
    }
}