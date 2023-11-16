public class Linhas{
    public static void main(String[] args) {
        int[][] matriz = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };

        for (int[] linha : matriz) {
            int somaLinha = 0;
            for (int num : linha) {
                somaLinha += num;
            }
            System.out.println("A soma dos elementos da linha é: " + somaLinha);
        }
    }
}
