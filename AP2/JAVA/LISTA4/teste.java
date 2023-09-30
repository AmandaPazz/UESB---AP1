import java.util.Scanner;

public class teste {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("Digite o seu nome para ser convertido a ABNT:");
        String nome = input.nextLine();

        nome = nome.trim().toLowerCase();

        String partes[] = nome.split("\\s+");
        
        String abnt = partes[partes.length - 1].toUpperCase() + ", ";

        for (int i = 0; i < partes.length - 1; i++){
            char inicial += partes.length

        }




        System.out.print("\n\n");
        input.close();
    }
}
