public class Magica {
    public static void main(String[] args) {
        int[][] matriz = { { 2, 7, 6 }, { 9, 5, 1 }, { 4, 3, 8 } };
        int tamanho = matriz.length;
        int somaReferencia = 0;

        // Calcular a soma de referência (soma da primeira linha)
        for (int num : matriz[0]) {
            somaReferencia += num;
        }

        boolean ehMagica = true;

        // Verificar soma das linhas
        for (int i = 1; i < tamanho; i++) {
            int somaLinha = 0;
            for (int num : matriz[i]) {
                somaLinha += num;
            }
            if (somaLinha != somaReferencia) {
                ehMagica = false;
                break;
            }
        }

        // Verificar soma das colunas
        if (ehMagica) {
            for (int j = 0; j < tamanho; j++) {
                int somaColuna = 0;
                for (int i = 0; i < tamanho; i++) {
                    somaColuna += matriz[i][j];
                }
                if (somaColuna != somaReferencia) {
                    ehMagica = false;
                    break;
                }
            }
        }

        // Verificar soma das diagonais
        if (ehMagica) {
            int somaDiagonalPrincipal = 0;
            int somaDiagonalSecundaria = 0;
            for (int i = 0; i < tamanho; i++) {
                somaDiagonalPrincipal += matriz[i][i];
                somaDiagonalSecundaria += matriz[i][tamanho - 1 - i];
            }
            if (somaDiagonalPrincipal != somaReferencia || somaDiagonalSecundaria != somaReferencia) {
                ehMagica = false;
            }
        }

        if (ehMagica) {
            System.out.println("A matriz é uma matriz mágica!");
        } else {
            System.out.println("A matriz não é uma matriz mágica.");
        }
    }
}
