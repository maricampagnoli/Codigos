
package exemplo05;


public class Quadrado extends Poligono {
    
    private double tamanholado;

    public Quadrado(double tamanholado, int numerolados) {
        super(numerolados);
        this.tamanholado = tamanholado;
    }
   
    
    @Override
    public double calcularArea(){
        return this.tamanholado * this.tamanholado;
    }

   
    
}
