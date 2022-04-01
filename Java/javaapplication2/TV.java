
package javaapplication2;
    
public class TV {
    //atributos
    private int polegadas;
    private int volume;
    private int canal;
    private boolean ligada;
    
    public TV(){
        polegadas = 65;
        ligada = true;
        volume = 7;
        canal = 2;
        
    }
    
    public void mostrarTV(){
        System.out.println("Volume = " + volume + 
                  "\nCanal = " + canal);
    }


}
