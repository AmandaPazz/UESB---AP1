
import java.util.Scanner;

public class l4ex04 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Digite uma frase: ");
        String frase = input.nextLine();

        int contador = 0;

        for (int i = 0; i <= frase.length() - 1; i++) {
            if (frase.charAt(i) == 'a' || frase.charAt(i) == 'e' || frase.charAt(i) == 'i' || frase.charAt(i) == 'o' ||
                    frase.charAt(i) == 'u') {
                contador++;
            }
        }

        System.out.print("A frase possui " + contador + " vogais.");

        System.out.print("\n\n");
        input.close();

    }
}