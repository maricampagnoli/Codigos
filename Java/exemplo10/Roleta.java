
package exemplo10;

import java.util.Random;


public class Roleta extends Jogo{
    
    @Override
    public void jogaJogo(){
        Random rnd = new Random();
        super.setResultado(rnd.nextInt(37)+1);
    }
    
    
    @Override
    public void setResultado(int resultado) {
        System.out.println("Ops, não pode roubar na roleta");
        
    }
    
    @Override
    public void setAposta(int aposta){
        if(aposta>37 || aposta < 1){
            System.out.println("Valor invalido para a roleta");
       }else
            super.setAposta(aposta);
    }

}
    

