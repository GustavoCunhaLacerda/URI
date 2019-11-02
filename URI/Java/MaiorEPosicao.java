package Java;
import java.util.Scanner;

public class MaiorEPosicao {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num, maior =-1, ind = -1;
        for (int i = 0; i < 100; i++) {
            num = input.nextInt();
            if (num>maior) {
                maior = num;
                ind = i+1;
            }
        }
        System.out.println(maior);
        System.out.println(ind);

        input.close();
    }
}