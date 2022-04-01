
package exemplo05;

public class Exemplo05 {

  
    public static void main(String[] args) {
        Quadrado q1 = new Quadrado(7.4, 4);
        System.out.println("Area do Quadrado - " + 
                q1.calcularArea());
        
        Triangulo t1 = new Triangulo(12, 3.9, 3);
        System.out.println("Area do Triangulo - " +
                t1.calcularArea());
        
        TrianguloRetangulo tr1 = new TrianguloRetangulo(12, 5, 3);
        tr1.setCatetos(12, 5);
        System.out.println("Area do Triangulo Retangulo - " +
                tr1.calcularArea() +
                "\nHipotenusa - " +
                tr1.calcularHipotenusa());
        
    }
    
}
