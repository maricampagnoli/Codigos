
package exemplo9;


public class Carro {
    
    private double kms;
    private String combustivel;

    public Carro(int kms, String combustivel) {
        this.kms = kms;
        this.combustivel = combustivel;
    }
    
    public void estado(int estado){
        if (estado == 1){
        System.out.println("ligado");
    } else {
            System.out.println("desligado");
        }
    }

    public double getKms() {
        return kms;
    }

    public String getCombustivel() {
        return combustivel;
    }
    
    
    public void imprimeCarro(){
        System.out.println("Código: " + this.getKms() + 
                "\nCombustivel: " + this.getCombustivel());
        
    }
    
    public class motor{
        private int cabeçote;

        public motor(int cabeçote) {
            this.cabeçote = cabeçote;
        }

        public int getCabeçote() {
            return cabeçote;
        }
        
        
        public void imprimeMotor(){
        System.out.println("Numero Cabeçote: " + this.getCabeçote());
        
    }
    }
}
    


