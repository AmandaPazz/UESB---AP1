import java.util.Scanner;

public class l3ex08 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int cont = 0;
        int acum = 0;
        int num;

        do{
            System.out.print("Adicione um número para calcular a média (pressione 0 para sair): ");
            num = input.nextInt();

            if (num == 0){
                break;
            }

            acum += num;
            cont++;

            

        }while(num != 0);
        
        double media = (double) acum / (double) cont;

        System.out.print("A média dos valores é " + media);

    

        System.out.print("\n\n");
        input.close();
    }
}