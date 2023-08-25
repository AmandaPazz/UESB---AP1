import java.util.Scanner;
import java.text.DecimalFormat;

public class ex010 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        DecimalFormat casas = new DecimalFormat("#.##");

        System.out.print("Digite a distância pecorrida: ");
        double distancia = input.nextDouble();

        System.out.print("Digite o tempo decorrido: ");
        double tempo = input.nextDouble();

        double velocidade = distancia / tempo;

        System.out.print("A velocidade média é: " + casas.format(velocidade) + "km/s");

        System.out.print("\n\n");
        input.close();

    }
}
