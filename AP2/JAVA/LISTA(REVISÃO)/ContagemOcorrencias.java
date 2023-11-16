public class ContagemOcorrencias {
    public static int contarOcorrencias(int[] array, int numero) {
        int contador = 0;
        for (int elemento : array) {
            if (elemento == numero) {
                contador++;
            }
        }
        return contador;
    }

    public static void main(String[] args) {
        int[] numeros = { 2, 5, 7, 8, 2, 2, 5, 2 };
        int numeroAlvo = 2;
        int ocorrencias = contarOcorrencias(numeros, numeroAlvo);
        System.out.println("O número " + numeroAlvo + " ocorre " + ocorrencias + " vezes.");
    }
}
