class Aluno {
    private String nome;
    private int matricula;
    private double nota1;
    private double nota2;
    private double nota3;

    Aluno(String nome, int matricula, double n1, double n2, double n3){
        this.nome = nome;
        this.matricula = matricula;
        this.nota1 = n1;
        this.nota2 = n2;
        this.nota3 = n3;
    }

    double media(){
        return (this.nota1 + this.nota2 + this.nota3)/3;
    }

    String getNome(){
        return this.nome;
    }

    int getMatricula(){
        return this.matricula;
    }

    public static void main(String[] args) {
        Aluno amanda = new Aluno("Amanda Paz", 202310143, 10, 10,10);
        System.out.println("ALUNA: " + amanda.getNome()+ " DE MATRÍCULA " + amanda.getMatricula());
        System.out.println("A SUA MÉDIA FOI: " + amanda.media());
    }
}


