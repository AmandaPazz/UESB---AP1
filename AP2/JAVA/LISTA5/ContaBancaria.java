import java.util.Scanner;

class ContaBancaria {
    private double saldo;

    ContaBancaria(double saldo) {
        this.saldo = saldo;
    }

    void depositar(double depositar) {
        this.saldo += depositar;
    }

    void sacar(double sacar) {
        this.saldo -= sacar;
    }

    double getValor() {
        return this.saldo;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        while (true) {
            System.out.println("QUANTO VOCÊ TEM NA SUA CONTA?");
            double valor = input.nextDouble();
            ContaBancaria rico = new ContaBancaria(valor);

            int i = 1;

            while (i == 1) {

                System.out.println("\n\nAPERTE O NÚMERO DA OPERAÇÃO QUE DESEAJA REALIZAR: ");
                System.out.println("1 - DEPOSITAR");
                System.out.println("2 - SACAR");
                System.out.println("3 - VERIFICAR SALDO");

                int opcao = input.nextInt();

                switch (opcao) {
                    case 1:
                        System.out.println("\n\nDiGITE O VALOR QUE DESEJA DEPOSITAR: ");
                        double d = input.nextDouble();
                        rico.depositar(d);
                        System.out.println("SEU SALDO AGORA É DE: " + rico.getValor());
                        System.out.println("\n**************************************");
                        break;

                    case 2:
                        System.out.println("\n\nDiGITE O VALOR QUE DESEJA SACAR: ");
                        double s = input.nextDouble();
                        rico.sacar(s);
                        System.out.println("SEU SALDO AGORA É DE: " + rico.getValor());
                        System.out.println("\n**************************************");
                        break;

                    case 3:
                        System.out.println("SEU SALDO É DE: " + rico.getValor());
                        System.out.println("\n**************************************");
                        break;

                    default:
                        i = 0;
                        System.out.println("\n");
                        break;

                }
            }
            input.close();
        }

    }

}
