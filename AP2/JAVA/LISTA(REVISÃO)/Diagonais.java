public class Diagonais {
    public static void main(String[] args) {
        int[][] matriz = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
        int tamanho = matriz.length;
        int somaDiagonalPrincipal = 0;
        int somaDiagonalSecundaria = 0;

        for (int i = 0; i < tamanho; i++) {
            somaDiagonalPrincipal += matriz[i][i];
            somaDiagonalSecundaria += matriz[i][tamanho - 1 - i];
        }

        System.out.println("A soma da diagonal principal é: " + somaDiagonalPrincipal);
        System.out.println("A soma da diagonal secundária é: " + somaDiagonalSecundaria);
    }
}
