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
        print(f"{self._horas}:{self._minutos}:{self._segundos}")

    def Validar_Horario(self) -> bool:

        if(self._horas > 24 or self._minutos > 60 or self._segundos > 60):
            return False
        
        return True
    
    def Calcular_Diferenca_Minutos(h1, h2:Horario) -> int:

        segundos1 = (h1._horas * 3600) + (h1._minutos * 60) + h1._segundos
        segundos2 = (h2._horas * 3600) + (h2._minutos * 60) + h2._segundos

        total = abs(segundos1 - segundos2)

        return total/60
    
    def Adicionar_Minutos(self, minutos:int) -> Horario:
        segundosH = (self._horas * 3600) + (self._minutos *60) + self._segundos
        segundosM = minutos * 60

        total = segundosH + segundosM

        hora = total/3600
        total %= 3600
        minuto = total/60
        segundo = total%60

        return Horario(hora, minuto, segundo)


