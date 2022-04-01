/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package exemplo05;

/**
 *
 * @author mariana.barbosa5
 */
public class Triangulo extends Poligono {
    
    private double base;
    private double altura;

    public Triangulo(double base, double altura, int numerolados) {
        super(numerolados);
        this.base = base;
        this.altura = altura;
    }
    
    @Override
    public double calcularArea(){
        return (this.base * this.altura) / 2;
    }
    
}
