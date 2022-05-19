
package exemplo10;

import java.util.Random;


public class Dado extends Jogo{
    
    @Override
    public void jogaJogo(){
        Random rnd = new Random();
        super.setResultado(rnd.nextInt(6)+1);
    }
    
    
    @Override
    public void setResultado(int resultado) {
        System.out.println("Ops, não pode roubar no dado");
        
    }
    
    @Override
    public void setAposta(int aposta){
        if(aposta>6 || aposta < 1){
            System.out.println("Valor invalido para o dado");
       }else
            super.setAposta(aposta);
    }

}
