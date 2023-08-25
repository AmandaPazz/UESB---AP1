import java.util.Scanner;

public class l2ex05 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Digite uma letra: ");
        char caractere = input.next().charAt(0);

        if (Character.isLetter(caractere)) {
            if (Vogal(caractere)) {
                System.out.print("A letra é uma vogal.");
            } else {
                System.out.print("A letra é uma consoante");
            }
        }
        else{
            System.out.print("Esse não é um caractere válido.");
        }

        System.out.print("\n\n");
        input.close();
    }

    public static boolean Vogal(char c) {
        c = Character.toLowerCase(c);

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            return true;
        } else {
            return false;
        }
    }

}
