package LISTA4;

import java.util.Scanner;

public class l4ex03 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Digite uma frase: ");
        String frase = input.nextLine();

        if (palindromo(frase)) {
            System.out.print("A palavra é um palímdromo.");
        } else {
            System.out.print("A palavra não é um palímdromo.");
        }

        System.out.print("\n\n");
        input.close();

    }

    public static boolean palindromo(String a) {
        a = a.toLowerCase();
        int left = 0;
        int right = a.length() - 1;

        while (left < right) {
            if (a.charAt(left) != a.charAt(right)) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
}