
package exemplo05;

public abstract class Poligono{
    
    private int numerolados;
    
    

    public Poligono(int numerolados) {
        this.numerolados = numerolados;
    }
    
    public abstract double calcularArea();
    
    
} 