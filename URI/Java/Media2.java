import java.util.Scanner;

public class Media2 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double a, b, c;
        a = input.nextFloat();
        b = input.nextFloat();
        c = input.nextFloat();
        double produto = (2f*a + 3f*b + 5f*c) / 10.0f;
        String prod = String.format("%.1f", produto);
        System.out.println("MEDIA = " + prod);
        input.close();
    }
}