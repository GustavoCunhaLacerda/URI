package Java;
import java.util.Scanner;

public class MediasPonderadas {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        float x, y, z, media;
        String str;

        for (int i = 0; i < n; i++) {
            x = input.nextFloat();
            y = input.nextFloat();
            z = input.nextFloat();
            media = (2*x + 3*y + 5*z)/10.0f;

            str = String.format("%.1f", media);
            System.out.println(str);

        }
        input.close();
    }
}