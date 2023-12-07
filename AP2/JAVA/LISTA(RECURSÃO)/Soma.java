class Soma {

    static int soma(int a[], int t) {
       if (t <= 0 ){
        return 0;
       }

       return soma(a, t - 1) + a[t-1];
    }

    public static void main(String[] args) {
        int array[] = { 1, 2, 3, 4, 5};
        System.out.println(soma(array, array.length));

        System.out.println("\n\n");
    }
}
