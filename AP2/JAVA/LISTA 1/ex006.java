import java.util.Scanner;

public class ex006 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Digite a medida em metros: ");
        double metros = input.nextDouble();

        double centi = metros * 100;
        double mili = metros * 1000;

        System.out.print("Centímetros:" + centi + "\nMilímetros: " + mili);
        System.out.print("\n\n");

        input.close();
    }
}
