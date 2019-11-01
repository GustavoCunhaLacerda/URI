import java.util.Scanner;

public class OMaior {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a, b, c, maior;
        
        a = input.nextInt();
        b = input.nextInt();
        c = input.nextInt();
        
        maior = (a+b+java.lang.Math.abs(a-b))/2;
        maior = (maior+c+java.lang.Math.abs(maior-c))/2;

        System.out.println(maior + " eh o maior");
        input.close();
    }
}