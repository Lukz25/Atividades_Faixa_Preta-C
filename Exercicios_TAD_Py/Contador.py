class Contador():

    def __init__(self, limite:int) -> None:
        self.Valor:int = 0
        self.Limite:int = limite

    def Incrementar(self) -> bool:
        if(self.Valor == self.Limite):
            return False
        
        self.Valor += 1
        return True

    def Decrementar(self) -> bool:
        if(self.Valor == 0):
            return False
        
        self.Valor -=1
        return True

    def Reiniciar(self) -> None:
        self.Valor = 0

    def Obter_Valor(self) -> int:
        return self.Valor
    
    def Definir_Valor(self, valor:int) -> bool:
        if(valor >= 0 and valor <= self.Limite):
            self.Valor = valor
            return True
        
        else:
            return False
        


contador = Contador(10)

for i in range(11):
    if(contador.Incrementar()):
        print(contador.Obter_Valor())
    
    else:
        print("Limite Máximo atingido")
    
    
