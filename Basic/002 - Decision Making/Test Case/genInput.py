#!/usr/bin/env python
# -*- coding: utf-8 -*- 


'''
Erro amostral: é a diferença entre o valor estimado pela pesquisa e o verdadeiro valor. 
Digamos que em uma situação existem efetivamente 10% de turistas franceses. 
Se a pesquisa estimar que existem 12% de franceses o erro amostral é de 2% (12%-10%=2%).
Na calculadora você deve indicar qual o erro amostral máximo admitido pela pesquisa. 
Em geral esse valor é definido pelo próprio pesquisador. Freqüentemente o valor definido é 5%.

Nível de confiança: é a probabilidade de que o erro amostral efetivo seja menor do que o erro amostral admitido pela pesquisa. 
Se você definiu um erro amostral de 5%, o nível de confiança indica a probabilidade de que o erro cometido pela pesquisa não exceda 5%. 
Utilizando o exemplo anterior, o nível de confiança é a probabilidade de que a pesquisa estime algo entre 5% e 15% de turistas franceses.
 Dado que na verdade existem 10% de franceses, se a estimativa da pesquisa estiver entre esses 5% e 15%, 
 o erro amostral cometido não será maior que 5%. Freqüentemente o nível de confiança utilizado nas pesquisas é de 95%.

População: é o número de elementos existentes no universo da pesquisa. 
Se a pesquisa é sobre todos os turistas em São Paulo, a população é o número de turistas que visitam a cidade. 
Se o pesquisador não conhece o número exato de elementos no universo, 
ele deve ser cauteloso e indicar um número grande o suficiente para que a população efetiva não seja maior. 
Se o número de elementos do universo está entre 1000 e 1500, o pesquisador deve indicar 1500 para obter uma estimativa segura. 
Se o universo for muito grande ou não houver nenhum informação sobre seu tamanho,
 o campo população na calculadora pode ser deixado em branco.

Percentual máximo: como você está trabalhando com variáveis categóricas,
 provavelmente você está buscando um resultado que indique qual é o percentual de elementos com uma dada característica. 
 Você quer saber, por exemplo, qual é o percentual de franceses no total de turistas que visitam São Paulo. 
 Se você tiver alguma informação que indique que esse percentual certamente não passa de um determinado valor, 
 isso pode ajudar a reduzir o tamanho da amostra necessária para a pesquisa. 
 Se for seguro afirmar que, por exemplo, o percentual de franceses não é maior que 20%, 
 então insira 20% no campo percentual máximo da calculadora. 
 Você deve incluir o percentual máximo somente quando ele é inferior a 50%.

Percentual mínimo: esse valor tem uma interpretação parecida com a do percentual máximo. 
Se você tem uma informação que indica que o percentual de turistas norte americanos é certamente superior a 70%, 
insira 70% no campo percentual mínimo. Você deve incluir o percentual mínimo somente quando ele é superior a 50%.

Fórmula de cálculo

n = (N.Z².p.(1-p)) / (Z².p.(1-p)+ e².(N-1))

Fórmula de cálculo (sin Percentual)

n = (N.Z²) / (Z² + e².(N-1))

Onde:
n - amostra calculada
N - população
Z - variável normal padronizada associada ao nível de confiança = 0.90
p - verdadeira probabilidade do evento
e - erro amostral = 0.05

Source:  http://www.publicacoesdeturismo.com.br/calculoamostral/

'''


def calculateSizePopulation(N):
    e = float(0.05)
    Z = float(0.90)

    n = (N * Z**2) / (Z**2 + e**2 * (N-1))

    return int(n)


def genInput():
    numEnterMin = 1
    numEnterMax = 10

    numMin = 1
    numMax = 100

    n = calculateSizePopulation(numMax)

    print n


if __name__ == '__main__':
    genInput()
