import java.util.Scanner;

public class abnt {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("Digite o seu nome para ser convertido a ABNT:");
        String nome = input.nextLine();

        nome = nome.trim().replaceAll("\\s+", " ");
        String partes [] = nome.split("\\s+");

        String abnt = "";

        if (partes.length == 1){
            nome = nome.toUpperCase();
            abnt += nome + ".";
        }
        else{
            abnt += partes[partes.length - 1].toUpperCase() + ", ";
            for (int i = 0; i <= partes.length - 2; i++){
                abnt += partes[i].toUpperCase().charAt(0) + ". ";
            }
        }


        System.out.print("\n\n" + abnt);

        System.out.print("\n\n");
        input.close();
    }
}
