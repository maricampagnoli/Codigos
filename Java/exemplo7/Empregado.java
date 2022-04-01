
package exemplo7;


public class Empregado {
    
    //atributo de classe
    private static int proxCodigo = 100;
    private static final String empresa = "Fatec Campinas";
    
    //atributos de instancia
    private int codigo;
    private String nome;
    private String departamento;
    private float salario;

    public Empregado(String nome, String departamento) {
        this.codigo = proxCodigo++;
        this.nome = nome;
        this.departamento = departamento;
    }

    public void setSalario(float salario) {
        this.salario = salario;
    }
    
    
    
    public int getCodigo() {
        return codigo;
    }

    public String getNome() {
        return nome;
    }

    public String getDepartamento() {
        return departamento;
    }

    public float getSalario() {
        return salario;
    }
    
    
    
    
    public void imprimeEmpregado(){
        System.out.println("Código: " + this.getCodigo() + 
                "\nNome: " + this.getNome() + 
                "\nDepartamento: " + this.getDepartamento() + 
                "\nSalário: " + this.getSalario());
        
    }
    
    //metodo de classe
    public static void imprimeEmpregadoClasse(Empregado e){
        System.out.println("Código: " + e.getCodigo() + 
                "\tNome: " + e.getNome() + 
                "\tDepartamento: " + e.getDepartamento() + 
                "\tSalário: " + e.getSalario());
    }
    
    public static void imprimeEmpresa(){
            System.out.println(empresa);
    }
    
    
}
