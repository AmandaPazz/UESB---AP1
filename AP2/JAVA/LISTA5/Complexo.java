class Complexo {
    private double real;
    private double imaginario;

    Complexo(double real, double imaginario) {
        this.real = real;
        this.imaginario = imaginario;
    }

    void setReal(double real) {
        this.real = real;
    }

    void setImaginario(double imaginario) {
        this.imaginario = imaginario;
    }

    double getReal() {
        return this.real;
    }

    double getImaginario() {
        return this.imaginario;
    }

    Complexo somar(Complexo outro) {
        double somar = this.real + outro.getReal();
        double somai = this.imaginario + outro.getImaginario();
        return new Complexo(somar, somai);
    }

    boolean comparar(Complexo outro) {
        return this.real == outro.getReal() && this.imaginario == outro.getImaginario();
    }

    public static void main(String[] args) {
        Complexo num1 = new Complexo(5, 7);
        Complexo num2 = new Complexo(2, 3);
        Complexo num3 = new Complexo(5, 7);

        System.out.println("NUM1: " + num1.getReal() + " + " + num1.getImaginario() + "i");
        System.out.println("NUM2: " + num2.getReal() + " + " + num2.getImaginario() + "i");
        System.out.println("NUM3: " + num3.getReal() + " + " + num3.getImaginario() + "i");

        System.out.println("\n\n");

        Complexo soma = num1.somar(num2);
        System.out.println("NUM1 + NUM2 = " + soma.getReal() + " + " + soma.getImaginario() + "i");

        if (num1.comparar(num3)) {
            System.out.println("NUM1 e NUM3 são iguais.");
        } else {
            System.out.println("NUM1 e NUM3 são diferentes.");
        }
    }
}
