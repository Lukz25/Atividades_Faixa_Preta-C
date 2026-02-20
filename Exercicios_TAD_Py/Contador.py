class Contador():

    def __init__(self, limite):
        self.Valor = 0
        self.Limite = limite

    def Incrementar(self):
        if(self.Valor == self.Limite):
            raise ValueError("Limite máximo atingido.")
        
        self.Valor += 1

    def Decrementar(self):
        if(self.Valor == 0):
            raise ValueError("Limite mínimo atingido.")
        
        self.Valor -=1

    def Reiniciar(self):
        self.Valor = 0

    def Obter_Valor(self):
        return self.Valor
    
    def Definir_Valor(self, valor):
        if(valor >= 0 and valor <= self.Limite):
            self.Valor = valor
        
        else:
            raise ValueError("Valor inválido.")
        


contador = Contador(10)

try: 
    for i in range(11):
        contador.Incrementar()
        print(contador.Obter_Valor())
    
    

except ValueError as erro:
    print(erro)