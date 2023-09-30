
import java.util.Scanner;

public class l4ex09 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Digite o seu nome completo: ");
        String nome = input.nextLine();

        String[] partesDoNome = nome.split("\\s+");
        String primeiro = partesDoNome[0];
        String segundo = partesDoNome[partesDoNome.length - 1].toUpperCase();

        primeiro = primeiro.toLowerCase();
        String inicial = primeiro.substring(0, 1).toUpperCase();
        primeiro = inicial + primeiro.substring(1, primeiro.length());

        System.out.println("Nome formatado: " + primeiro + " " + segundo);

        System.out.print("\n\n");
        input.close();

    }
}