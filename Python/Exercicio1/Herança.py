class Porta:
  # atributos de classe
  cor = 'amarelo'

  # construtor
  def __init__(self, status, id_numero): 
    # atributos de instância
    self.status = status
    self.id_numero = id_numero

  def abrir(self):
    self.status = 'aberta'

  def fechar(self):
    self.status = 'fechada'

  def mostrar(self):
    print(self.status)

  @classmethod
  def knock(cls): 
    print('knock knock!')

  @classmethod
  def pintar(cls, cor):
    cls.cor = cor

p1 = Porta('fechada', 100)
p2 = Porta('aberta', 200)

print(p1.__dict__)
print(p2.__dict__)

class PortaSeguranca(Porta):
  cor = 'cinza'
  locked = True

  def abrir(self):
    if not self.locked:
      self.status = 'aberta'

p3 = PortaSeguranca('fechada', 300)

print(p3.__dict__)

PortaSeguranca.__dict__

p3.abrir()

print(p3.__dict__)

p3.locked = False

print(p3.__dict__)

p3.abrir()

print(p3.__dict__)

print(p3.locked)
print(PortaSeguranca.locked)

p4 = PortaSeguranca('fechada', 400)

p4.__dict__

p4.abrir()

p4.__dict__

class PortaSeguranca(Porta):
  cor = 'cinza'
  
  def __init__(self, status, id_numero):
    super().__init__(status, id_numero)
    self.locked = True

  def abrir(self):
    if not self.locked:
      super().abrir()

p3 = PortaSeguranca('fechada', 303)

p3.__dict__

p3.mostrar()

p3.abrir()
p3.mostrar()

p3.locked = False
p3.abrir()
p3.mostrar()
