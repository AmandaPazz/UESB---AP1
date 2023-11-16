class Media {
    
    public static void main(String[] args) {
        float[] numeros = { 5.5f, 2.0f, 7.3f, 8.1f, 4.9f };
        float media = calcularMedia(numeros);
        System.out.println("A média dos elementos é: " + media);
    }

    static float calcularMedia(float[] array) {
        float soma = 0;
        for (float elemento : array) {
            soma += elemento;
        }
        return soma / array.length;
    }
}
