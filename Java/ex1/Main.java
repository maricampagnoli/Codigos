class Main {
  public static void main(String[] args) {

    Caneta c1 = new Caneta();
    c1.modelo = "BIC";
    c1.cor = "azul";
    c1.ponta = 0.5f;

    c1.tampar();
    c1.rabiscar();
    c1.status();

    Caneta c2 = new Caneta();
    c2.modelo = "STABILLO";
    c2.cor = "vermelha";
    c2.ponta = 0.7f;

    c2.destampar();
    c2.rabiscar();
    c2.status();
    
  }
}
