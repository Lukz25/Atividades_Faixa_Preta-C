class Contador():

    def __init__(self, limite:int) -> None:
        self._valor:int = 0
        self._limite:int = limite

    @property
    def Valor(self):
        return self._valor
    
    @Valor.setter
    def Valor(self, valor:int) -> bool:
        if(valor >= 0 and valor <= self._limite):
            self._valor = valor
            return True
        
        else:
            return False
    
    @property
    def Limite(self):
        return self._limite


    def Incrementar(self) -> bool:
        if(self._valor == self.Limite):
            return False
        
        self.Valor += 1
        return True

    def Decrementar(self) -> bool:
        if(self._valor == 0):
            return False
        
        self._valor -=1
        return True

    def Reiniciar(self) -> None:
        self._valor = 0

   
        


contador = Contador(10)

for i in range(11):
    if(contador.Incrementar()):
        print(contador.Valor)
    
    else:
        print("Limite Máximo atingido")
    
contador.Valor = 3
print(contador.Valor)  
