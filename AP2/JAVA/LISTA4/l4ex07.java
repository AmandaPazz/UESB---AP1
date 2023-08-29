package LISTA4;

import java.util.Scanner;

public class l4ex07 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Digite uma frase: ");
        String frase = input.nextLine();

        System.out.print("\n\nA frase vai do índice 1 até o " + frase.length() + "\n\n\n");

        System.out.print("Do índice: ");
        int ind1 = input.nextInt();

        System.out.print("até o índice: ");
        int ind2 = input.nextInt();

        String str = " \b";

        for (int i = ind2 - 1; i >= ind1 - 1; i--) {
            str = str + frase.charAt(i);
        }

        System.out.print("A frase invertida desse índice é: " + str);

        System.out.print("\n\n");
        input.close();

    }
}