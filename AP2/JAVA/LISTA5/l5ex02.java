public class l5ex02 {

    public static void main(String[] args) {
        Livro daisy = new Livro();

        daisy.setAutor("Taylor Jekins Reid");
        daisy.setTitulo("Daisy Jones and The Six");
        daisy.setPaginas(300);

        System.out.printf("%-30s: %-50s\n", "TÍTULO DA OBRA", daisy.getTitulo());
        System.out.printf("%-30s: %-50s\n", "AUTOR DA OBRA", daisy.getAutor());
        System.out.printf("%-30s: %-50d\n", "NÚMERO DE PÁGINAS DA OBRA", daisy.getPaginas());

        System.out.println("\n\n");
    
    }
}
