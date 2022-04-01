
package exemplo05;


public class TrianguloRetangulo extends Triangulo implements Retangulo{
    
    private double catetoAdj;
    private double catetoOp;

    public TrianguloRetangulo(double base, double altura, int numerolados) {
        super(base, altura, numerolados);
    }

    @Override
    public void setCatetos(double catetoAdj, double catetoOp) {
        this.catetoAdj = catetoAdj;
        this.catetoOp = catetoOp;
    }

    @Override
    public double calcularHipotenusa() {
        return Math.hypot(this.catetoAdj, this.catetoOp);
    }


    
    
    
    
}
