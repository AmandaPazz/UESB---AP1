import java.util.Scanner;

public class l2ex06 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Digite sua nota: ");
        double nota = input.nextDouble();

        if (nota >= 7){
            System.out.print("Você está aprovado.");
        }
        else{
            System.out.print("Você não foi aprovado");

        }

        System.out.print("\n\n");
        input.close();
    }
}
