public class l5ex03 {
    public static void main(String[] args) {
        carro ferrari = new carro();

        ferrari.setMarca("Ferrari");
        ferrari.setModel("F40");
        ferrari.setaAno(1940);

        System.out.printf("%-30s: %-50s\n", "MARCA DO CARRO: ", ferrari.getMarca());
        System.out.printf("%-30s: %-50s\n", "MODELO DO CARRO: ", ferrari.getModelo());
        System.out.printf("%-30s: %-50d\n", "ANO DE FABRICAÇÃO DO CARRO: ", ferrari.getAno());

        System.out.println("\n\n");
    }
}
