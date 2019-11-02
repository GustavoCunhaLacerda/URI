import java.util.Scanner;
import java.lang.Math;

public class Media3 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        float n1, n2, n3, n4, media;
        n1 = input.nextFloat();
        n2 = input.nextFloat();
        n3 = input.nextFloat();
        n4 = input.nextFloat();

        media = (2*n1 + 3*n2 + 4*n3 + n4)/10.0f;
        String str = String.format("%.1f", media);
        System.out.println("Media: " + str);
        
        if (media >= 7.0f) {
            System.out.println("Aluno aprovado.");
        } else if (media < 5.0f) {
            System.out.println("Aluno reprovado.");
        } else if (media >= 5.0f && media <= 6.9f) {
            System.out.println("Aluno em exame.");
            float exame_final = input.nextFloat();
            media += exame_final;
            media /= 2.0f;
            String str2 = String.format("%.1f", exame_final);
            System.out.println("Nota do exame: "+str2);
            if (media >= 5.0f) {
                System.out.println("Aluno aprovado.");
            } else {
                System.out.println("Aluno reprovado.");
            }
            String str3 = String.format("%.1f", media);
            System.out.println("Media final: " + str3);
        }
        input.close();
    }
}