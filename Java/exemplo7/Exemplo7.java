/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package exemplo7;

/**
 *
 * @author mariana.barbosa5
 */
public class Exemplo7 {


    public static void main(String[] args) {
        
        Empregado.imprimeEmpresa();
        
        Empregado e1 = new Empregado("Maria", "Vendas");
        Empregado e2 = new Empregado("Jose", "Vendas");
        Empregado e3 = new Empregado("Ana", "Compras");
        
        e1.setSalario(3500);
        e2.setSalario(2500);
        e3.setSalario(2100);
        
        //e1.imprimeEmpregado();
       // e2.imprimeEmpregado();
       // e3.imprimeEmpregado();
        
        Empregado.imprimeEmpregadoClasse(e1);
        Empregado.imprimeEmpregadoClasse(e2);
        Empregado.imprimeEmpregadoClasse(e3);
    }
    
}
