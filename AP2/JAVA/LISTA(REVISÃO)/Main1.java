import java.util.ArrayList;
import java.util.List;

class Universidade {
    private String nome;
    private List<Departamento> departamentos;

    public Universidade(String nome) {
        this.nome = nome;
        this.departamentos = new ArrayList<>();
    }

    public void adicionarDepartamento(Departamento depto) {
        departamentos.add(depto);
    }

    public List<Departamento> obterDepartamentos() {
        return departamentos;
    }
    public String obterNome (){
        return this.nome;
    }
}

class Departamento {
    private String nome;
    private List<Professor> professores;

    public Departamento(String nome) {
        this.nome = nome;
        this.professores = new ArrayList<>();
    }

    public void adicionarProfessor(Professor prof) {
        professores.add(prof);
    }

    public List<Professor> obterProfessores() {
        return professores;
    }
    public String obterNome (){
        return this.nome;
    }
}

class Professor {
    private String nome;
    private Departamento departamento;

    public Professor(String nome) {
        this.nome = nome;
    }

    public void vincularDepartamento(Departamento depto) {
        this.departamento = depto;
    }

    public Departamento obterDepartamento() {
        return departamento;
    }
    public String obterNome (){
        return this.nome;
    }
}

public class Main1 {
    public static void main(String[] args) {
        Universidade universidade = new Universidade("Minha Universidade");

        Departamento departamento1 = new Departamento("Departamento de Informática");
        Departamento departamento2 = new Departamento("Departamento de Matemática");

        Professor professor1 = new Professor("João");
        Professor professor2 = new Professor("Maria");

        professor1.vincularDepartamento(departamento1);
        professor2.vincularDepartamento(departamento2);

        departamento1.adicionarProfessor(professor2);
        departamento2.adicionarProfessor(professor1);

        universidade.adicionarDepartamento(departamento1);
        universidade.adicionarDepartamento(departamento2);

        // Exemplo de como acessar os dados:
        System.out.println("UNIVERSIDADE: " + universidade.obterNome());
        List<Departamento> departamentosDaUniversidade = universidade.obterDepartamentos();
        for (Departamento depto : departamentosDaUniversidade) {
            System.out.println("Departamento: " + depto.obterNome());
            System.out.println("Professores:");

            List<Professor> professoresDoDepartamento = depto.obterProfessores();
            for (Professor prof : professoresDoDepartamento) {
                System.out.println("- " + prof.obterNome());
                System.out.println("   Vinculado ao departamento: " + prof.obterDepartamento().obterNome());
            }
            System.out.println();
        }
}
}
