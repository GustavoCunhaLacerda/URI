import java.util.Scanner;
import java.lang.Math;

public class ParesEntreCincoNumeros {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num, count = 0;
        for (int i = 0; i < 5; i++) {
            num = input.nextInt();
            if (num%2 == 0) {
                count++;
            }
        }
        System.out.println(count+" valores pares");
        input.close();
    }
}