package LISTA4;

import java.util.Scanner;

public class l4ex08 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Digite uma frase: ");
        String frase = input.nextLine();

        System.out.println("\nPalavras individuais na frase:");

        String[] palavras = frase.split("\\s+");

        for (int i = 0; i <= palavras.length - 1; i++) {
            System.out.println("\n" + palavras[i]);
        }

        System.out.print("\n\n");
        input.close();

    }
}