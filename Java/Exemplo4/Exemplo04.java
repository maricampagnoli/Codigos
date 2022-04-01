package exemplo04;

public class Exemplo04 {

    public static void main(String[] args) {
        /*
        Pessoa
            Pessoa física
                Aluno
                Visitante
                Convidado
            Pessoa jurídica
        */
        
        Aluno a1 = new Aluno("Carlos");
        a1.setRg("1111111");
        a1.setRa(202212345);
        
        Visitante v1 = new Visitante("Maria", "222222");
        Convidado c1 = new Convidado("Vanessa", "333333");
        
        a1.mostrar();
        v1.mostrar();
        c1.mostrar();
                
    }
    
}
