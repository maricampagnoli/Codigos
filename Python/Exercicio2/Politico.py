class Politico():
    def __init__(self, nome=None, partido=None, estado=None, funcao=None):
        self.__nome = nome
        self.__partido = partido
        self.__estado = estado
        self.__funcao = funcao
    
    def set_nome(self, nome):
        if type(nome) == str:
            self.__nome = nome

    def get_nome(self):
        return str(self.__nome)

    def apresentacao(self):
        print('Meu nome é ' + self.get_nome())

p1 = Politico()
p1.set_nome('Maria')
p1.apresentacao()

class Prefeito(Politico):
    def __init__(self, nome=None, partido=None, estado=None, funcao=None, municipio=None):
        super().__init__(nome, partido, estado, funcao)
        self.__municipio = municipio

    def set_municipio(self, municipio):
        if type(municipio) == str:
            self.__municipio = municipio

    def get_municipio(self):
        return str(self.__municipio)
    
    def apresentacao(self):
        super().apresentacao()
        print('Sou prefeito(a) de ' + self.get_municipio())

pf1 = Prefeito()
pf1.set_nome('Carlos')
pf1.set_municipio('Trabiju')
pf1.apresentacao()

pf1.__dict__
