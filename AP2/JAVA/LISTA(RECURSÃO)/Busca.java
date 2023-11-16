class Busca {

    static int buscar(int a[], int ch, int i, int f) {
        if (f >= i) {
            int meio = (f + i) / 2;

            if (a[meio] == ch){
                return meio+1;
            }
            if (a[meio] > ch) {
                return buscar(a, ch, i, meio - 1);
            }

            return buscar(a, ch, meio + 1, f);

        }

        return -1;

    }

    public static void main(String[] args) {
        int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        int alvo = 11;
        System.out.println(buscar(array, alvo, 0, array.length-1));

        System.out.println("\n\n");
    }
}
