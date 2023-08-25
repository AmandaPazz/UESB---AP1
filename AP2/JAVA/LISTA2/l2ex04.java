import java.util.Scanner;

public class l2ex04 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Qual é a sua idade? ");
        int idade = input.nextInt();

        if (idade > 0 && idade <= 14){
            System.out.print("Você é uma criança");
        }
        else if (idade > 14 && idade <= 19) {
            System.out.print("Você é um adolescente");
        }
        else if (idade > 19 && idade <= 60) {
            System.out.print("Você é um adulto");
        }
        else if (idade > 60) {
            System.out.print("Você é um idoso");
        }
        else if (idade <= 0){
            System.out.print("Essa idade não é válida.");
        }

        System.out.print("\n\n");
        input.close();
    }
}