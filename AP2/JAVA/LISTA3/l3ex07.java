import java.util.Scanner;

public class l3ex07 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Digite um número para verificar se ele é primo ou não: ");
        int num = input.nextInt();

        boolean primo = false;

        for (int i = 2; i <= num/2; i++){
            if (num % i == 0){
                primo = false;
            }
            else{
               primo = true; 
            }
        }

        if (primo){
            System.out.print("O número é primo.");
        }
        else if (num == 2 || num == 1 || num == 3){
            System.out.print("O número é primo.");
        }
        else{
            System.out.print("O número não é primo.");
        }
        

        System.out.print("\n\n");
        input.close();
    }
}