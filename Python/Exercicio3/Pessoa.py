class Pessoa():
    def __init__(self):
        self.__nome = None
        self.__idade = -1
        self.__sexo = None

    def cadastrar(self):
        self.__nome = input('Digite um nome: ')
        while self.__idade < 0:
            try:
                self.__idade = int(input('Digite a idade: '))
            except ValueError:
                print('Idade inválida! Digite uma idade válida.')    
        self.__sexo = input('Digite o sexo (M/F): ').upper()

    def mostrar(self):
        print(str(self.__nome) + '  ' + str(self.__idade) + '  ' + str(self.__sexo))

pessoa1 = Pessoa()

pessoa1.cadastrar()

pessoa1.mostrar()
pessoas = []

list(range(10))

for i in range(3):
    p = Pessoa()
    p.cadastrar()
    pessoas.append(p)
    
for p in pessoas:
  p.mostrar()

for i in range(3):
  pessoas[i].mostrar()
