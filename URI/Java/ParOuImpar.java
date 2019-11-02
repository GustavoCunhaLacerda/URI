package Java;
import java.util.Scanner;

public class ParOuImpar {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        for (int i = 0; i < n; i++) {
            int num = input.nextInt();
            if (num == 0) {
                System.out.println("NULL");
            } else {
                if(num%2 == 0){
                    System.out.print("EVEN ");
                } else {
                    System.out.print("ODD ");
                }
                if(num > 0){
                    System.out.print("POSITIVE\n");
                } else {
                    System.out.print("NEGATIVE\n");
                }
            }
        }
        input.close();
    }
}