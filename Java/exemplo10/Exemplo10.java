
package exemplo10;


public class Exemplo10 {

    
    public static void main(String[] args) {
        
//        Dado d1 = new Dado();
//        d1.setAposta(42);
//        d1.setResultado(5);
//        d1.jogaJogo();
//        d1.mostraResultado();
        
        Roleta r1 = new Roleta();
        r1.setAposta(20);
        //r1.setResultado();
        r1.jogaJogo();
        r1.mostraResultado();
    
    }
    
}
