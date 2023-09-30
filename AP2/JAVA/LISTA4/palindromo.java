import java.util.Scanner;

public class palindromo {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("Digite uma palavra pra verificar se é palíndromo: ");
        String nome = input.nextLine();

        int left = 0;
        int right = nome.length() - 1;

        while (left < right) {
            if (nome.charAt(left) != nome.charAt(right)) {
                System.out.print("A palavra NÃO é um palíndromo.");
                break;
            }

            left++;
            right--;

        }

        System.out.print("A palavra é SIM um palíndromo.");

        input.close();
        System.out.print("\n\n");
    }
}