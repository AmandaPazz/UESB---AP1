
import java.util.Scanner;

public class l4ex02 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Digite uma frase: ");
        String frase = input.nextLine();
        String reversa = "";

        for (int i = frase.length() - 1; i >= 0; i--) {

            reversa = reversa + frase.charAt(i);
        }

        System.out.print("A string reversa é: " + reversa);

        System.out.print("\n\n");
        input.close();

    }
}