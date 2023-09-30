import java.util.Scanner;

public class l4ex01 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Digite uma frase: ");
        String frase = input.nextLine();

        int tamanho = frase.length();

        System.out.print("A string possui " + tamanho + " caracteres.");

        System.out.print("\n\n");
        input.close();

    }
}