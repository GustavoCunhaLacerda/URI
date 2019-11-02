import java.util.Scanner;
import java.lang.Math;

public class TempoDeJogoComMinutos {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int inicioH, inicioM, fimH, fimM, durH = 0, durM = 0;
        inicioH = input.nextInt();
        inicioM = input.nextInt();
        fimH = input.nextInt();
        fimM = input.nextInt();

        if (inicioH == fimH && inicioM == fimM)
        {
            durH = 24;
        }
        
        while (inicioH != fimH && inicioM != fimM)
        {
            inicioH++;
            durH++;

            if (inicioH == 24)
            {
                inicioH = 0;
            }
        }
        durM = fimM - inicioM;
        if (durM < 0)
        {
            durH--;
            durM += 60;
        }
        
        System.out.println("O JOGO DUROU "+durH+" HORA(S) E "+durM+" MINUTO(S)");

        input.close();
    }
}