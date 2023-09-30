
import java.util.Scanner;

public class l4ex05 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Digite uma frase: ");
        String frase = input.nextLine();

        frase = frase.replaceAll("\\s+", " ").trim();

        System.out.print("A frase formatada é: " + frase);

        System.out.print("\n\n");
        input.close();

    }
}