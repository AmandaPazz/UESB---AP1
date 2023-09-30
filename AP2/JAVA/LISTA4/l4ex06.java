
import java.util.Scanner;

public class l4ex06 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Digite uma frase: ");
        String frase = input.nextLine();

        System.out.print("Digite o caractere que deseja analisar: ");
        char letra = input.next().charAt(0);

        int cont = 0;

        for (int i = 0; i <= frase.length() - 1; i++) {
            if (frase.charAt(i) == letra) {
                cont++;
            }
        }

        System.out.print("O número de vezes que a letra " + letra + " aparece é " + cont);

        System.out.print("\n\n");
        input.close();

    }
}