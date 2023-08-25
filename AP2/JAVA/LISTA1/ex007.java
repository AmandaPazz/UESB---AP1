import java.util.Scanner;
import java.text.DecimalFormat;

public class ex007 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        DecimalFormat casas = new DecimalFormat("#.##");

        System.out.print("Digite a distância pecorrida: ");
        double distancia = input.nextDouble();

        System.out.print("Digite valocidade média: ");
        double velocidade = input.nextDouble();

        double tempo = distancia / velocidade;

        System.out.print("O tempo estimado de viagem é: " + casas.format(tempo) + " hora(s).");


        System.out.print("\n\n");
        input.close();

    }
}
