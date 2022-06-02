class Numero():
    MULTIPLIER = 100

    def __init__(self, x, y):
        self.x = x
        self.y = y

    def soma(self):
        return self.x + self.y

    @classmethod
    def multiplica(cls, a):
        return cls.MULTIPLIER * a

    @property
    def valor(self):
        return (self.x, self.y)

Numero.__dict__

Numero.multiplica(2)

n1 = Numero(10, 5)
n2 = Numero(3, 8)

print(n1.x)
print(n2.x)

print(n1.MULTIPLIER)
print(n2.MULTIPLIER)

print(n1.soma())
print(n2.soma())

print(n1.valor)
print(n2.valor)
