import java.util.Scanner;

public class teste {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("Digite o seu nome para ser convertido a ABNT:");
        String nome = input.nextLine();

        nome = nome.trim().toLowerCase();

        String partes[] = nome.split("\\s+");

        String abnt = partes[partes.length - 1].toUpperCase() + ", ";

        for (int i = 0; i < partes.length - 1; i++) {
            abnt += Character.toUpperCase(partes[i].charAt(0));

            if (i < partes.length - 2) {
                abnt += ". ";
            }
        }

        System.out.println("Nome em formato ABNT: " + abnt);

        input.close();
        System.out.println("\n\n");
    }
}
