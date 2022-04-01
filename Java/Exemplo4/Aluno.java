package exemplo4;



public class Aluno extends PessoaFisica {
    
    private int ra;
    
    public Aluno(String nome) {
        super(nome);
    }
    
    public Aluno(String nome, String rg) {
        super(nome, rg);
    }
    
    public Aluno(String nome, String rg, int ra) {
        super(nome, rg);
        this.ra = ra;
    }

    public int getRa() {
        return ra;
    }

    public void setRa(int ra) {
        this.ra = ra;
    }
    
    @Override
    public void mostrar() {
        System.out.println("Nome: " + this.getNome() + 
                "\tRG: " + this.getRg() +
                "\tRA: " + this.getRa());
    }
    
}
