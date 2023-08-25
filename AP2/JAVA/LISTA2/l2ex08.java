import java.util.Scanner;

public class l2ex08 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Digite o primeiro lado: ");
        int a = input.nextInt();

        System.out.print("Digite o segundo lado: ");
        int b = input.nextInt();

        System.out.print("Digite o terceiro lado: ");
        int c = input.nextInt();

        if (a == b && b == c){
            System.out.print("O triângulo é equilátero");
        }
        else if (a == b || b == c || a == c ){
            System.out.print("O triângulo é isóceles");
        }
        else{
            System.out.print("O triângulo é escaleno");
        }


        System.out.print("\n\n");
        input.close();
    }
}