class Horario():

    def __init__(self, horas:int, minutos:int, segundos:int) -> None:
        self._horas:int = horas
        self._minutos:int = minutos
        self._segundos:int = segundos

    @property
    def Horas(self):
        return self._horas
    
    @property
    def Minutos(self):
        return self._minutos
    
    @property
    def Segundos(self):
        return self._segundos
    

    def Exibir_Horario_Formal(self) -> None:
        print(f"{self.Horas}:{self.Minutos}:{self.Segundos}")

    def Validar_Horario(self) -> bool:

        if(self.Horas > 24 or self.Minutos > 60 or self.Segundos > 60):
            return False
        
        return True
    
    def Calcular_Diferenca_Minutos(self, h2:'Horario') -> int:

        segundos1 = (self.Horas * 3600) + (self.Minutos * 60) + self.Segundos
        segundos2 = (h2.Horas * 3600) + (h2.Minutos * 60) + h2.Segundos

        total = abs(segundos1 - segundos2)

        return total/60
    
    def Adicionar_Minutos(self, minutos:int) -> 'Horario':
        segundosH = (self.Horas * 3600) + (self.Minutos *60) + self.Segundos
        segundosM = minutos * 60

        total = segundosH + segundosM

        hora:int = (total//3600)%24
        total %= 3600
        minuto:int = (total//60)%60
        segundo:int = total%60

        return Horario(hora, minuto, segundo)


h = Horario(23, 59, 59)
h.Exibir_Horario_Formal() 
h1 = h.Adicionar_Minutos(3)
h1.Exibir_Horario_Formal()
