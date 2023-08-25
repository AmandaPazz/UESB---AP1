import java.util.Scanner;

public class l2ex07 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Digite a cordenada x: ");
        int x = input.nextInt();
        
        System.out.print("Digite a cordenada y: ");
        int y = input.nextInt();

        if (x > 0){
            if (y > 0){
                System.out.print("O ponto está no primeiro quadrante.");
            }
            else if ( y < 0){
                System.out.print("O ponto está no quarto quadrante.");
            }
        }
        else if (x < 0){
            if (y > 0){
                System.out.print("O ponto está no segundo quadrante.");
            }
            else if ( y < 0){
                System.out.print("O ponto está no terceiro quadrante.");
            }
        }
        else{
           System.out.print("O ponto está na origem."); 
        }



        System.out.print("\n\n");
        input.close();
    }
}