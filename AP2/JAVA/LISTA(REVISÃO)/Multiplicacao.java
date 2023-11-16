public class Multiplicacao {
    public static void main(String[] args) {
        int[][] matrizA = { { 1, 2 }, { 3, 4 } };
        int[][] matrizB = { { 5, 6 }, { 7, 8 } };

        int linhasA = matrizA.length;
        int colunasB = matrizB[0].length;
        int[][] resultado = new int[linhasA][colunasB];

        for (int i = 0; i < linhasA; i++) {
            for (int j = 0; j < colunasB; j++) {
                for (int k = 0; k < matrizB.length; k++) {
                    resultado[i][j] += matrizA[i][k] * matrizB[k][j];
                }
            }
        }

        for (int[] linha : resultado) {
            for (int num : linha) {
                System.out.print(num + " ");
            }
            System.out.println();
        }
    }
}
