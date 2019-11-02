import java.util.Scanner;
import java.lang.Math;

public class PositivosEMedia {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        float num, media = 0;
        int pos = 0;
        for (int i = 0; i < 6; i++) {
            num = input.nextFloat();
            if (num > 0) {
                pos++;
                media+=num;
            }
        }
        System.out.println(pos+" valores positivos");
        System.out.println(String.format("%.1f", media/pos));
        input.close();
    }
}