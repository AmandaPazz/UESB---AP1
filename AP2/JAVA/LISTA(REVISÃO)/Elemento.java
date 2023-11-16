public class Elemento {
    public static void main(String[] args) {
        int[] array = { 3, 7, 2, 9, 1, 5 };
        int menor = array[0];
        int maior = array[0];

        for (int num : array) {
            if (num < menor) {
                menor = num;
            }
            if (num > maior) {
                maior = num;
            }
        }

        System.out.println("O menor elemento é: " + menor);
        System.out.println("O maior elemento é: " + maior);
    }
}
