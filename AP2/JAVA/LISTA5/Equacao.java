
public class Equacao {
    private int a;
    private int b;
    private int c;

    Equacao(int c1, int c2, int c3) {
        this.a = c1;
        this.b = c2;
        this.c = c3;
    }

    String calcular() {
        double delta = Math.pow(b, 2) - 4 * a * c;

        if (delta < 0) {
            return "A OPERAÇÃO NÃO POSSÍVEL";
        }

        else if (delta == 0) {
            double calculo = -b / 2 * a;
            return "O VALOR DA ESQUAÇÃO É " + calculo;
        } else {
            double calculo1 = (-b + Math.sqrt(delta)) / 2 * a;
            double calculo2 = (-b - Math.sqrt(delta)) / 2 * a;
            return "O VALOR DA ESQUAÇÃO É " + calculo1 + " e " + calculo2;
        }
    }

    public static void main(String[] args) {
        Equacao eq = new Equacao(1, 1, -6);

        System.out.println(eq.calcular());
    }
}
