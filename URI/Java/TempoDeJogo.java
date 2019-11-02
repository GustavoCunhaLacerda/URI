import java.util.Scanner;
import java.lang.Math;

public class TempoDeJogo {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int ini, fim, dur;
        ini = input.nextInt();
        fim = input.nextInt();
        dur = fim - ini;
        if (dur == 0) {
            dur = 24;
        } else if (dur < 0) {
            dur += 24;
        }
        System.out.println("O JOGO DUROU "+dur+" HORA(S)");
        input.close();
    }
}