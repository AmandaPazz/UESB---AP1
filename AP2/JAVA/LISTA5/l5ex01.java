public class l5ex01{
    public static void main (String [] args){
        pessoa pessoa1 = new pessoa();
        pessoa pessoa2 = new pessoa();
        pessoa pessoa3 = new pessoa();
        pessoa pessoa4 = new pessoa();
        pessoa pessoa5 = new pessoa();

        System.out.println(pessoa1.getIdade());
        System.out.println(pessoa1.getNome());

        pessoa2.setNome("Amanda");
        pessoa2.setIdade(18);
        
        pessoa3.setNome("Athena Prada Kobain");
        pessoa3.setIdade(19);

        System.out.println(pessoa3.getIdade());
        System.out.println(pessoa3.getNome());

        pessoa4.setNome("Apollo Prada Kobain");
        pessoa5.setIdade(20);
        
        System.out.println(pessoa5.getIdade());
        System.out.println(pessoa4.getNome());

        
    }
}