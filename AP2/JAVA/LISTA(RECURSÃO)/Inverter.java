import java.util.Scanner;

class Inverter {

    public static String calcular(String str) {
        if (str.isEmpty()) {
            return str;
        } else {
            return calcular(str.substring(1)) + str.charAt(0);
        }
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String frase = input.nextLine();

        System.out.println(calcular(frase));

        System.out.println("\n\n");
        input.close();
    }

}