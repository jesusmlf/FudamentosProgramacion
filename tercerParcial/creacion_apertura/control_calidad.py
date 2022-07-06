# Importando modulos

from http.client import CannotSendRequest
from reprlib import aRepr
import matplotlib.pyplot as plot
import statistics as st
import seaborn as sns
import numpy as np

def cantidad(arreglo):
    n = size(arreglo)
    return n

def rango(arreglo):
    r = max(arreglo) - min(arreglo)
    return r

def clase(cantidad):
    if (cantidad > 50 and cantidad<100):
        clase = 8;

    if (cantidad > 100 and cantidad<250):
        clase = 10;

    if (cantidad > 250):
        clase = 15;
    return clase

def intervalo_clase(rango,clase):
    intervalo = rango/clase
    return intervalo

def limites(arreglo):
    max = max(arreglo)
    min = min(arreglo)

    

def run():
    #Lista vacia
    datos = []

    archivo = open('medidas.csv' , 'r')

    for line in archivo:
        datos.append(float(line))

    archivo.close()

if __name__ == '__main__':
    run()
