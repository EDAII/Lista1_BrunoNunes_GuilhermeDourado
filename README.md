# Lista1_BrunoNunes_GuilhermeDourado

## Descrição

Esse programa tem o intuito de mostrar o numero de vezes que os laços são pecorridos dependendo do tipo de busca selecionado. Comparando então, a eficiencia do algoritmo nas desejadas ocasiões.

O programa seguinte contém 3 tipos de buscas
 - busca sequencial (com sentinela)
 - busca binária
 - busca por interpolação
 
Sendo assim, os vetores gerados estão com os elementos fixados nesse modelo:
  
    Dois vetores de 30 elementos, onde estão configurados como embaralhado e uniforme.
    embaralhado[30] = {2,3,4,6,8,15,37,43,55,57,69,73,78,89,90,94,97,115,145,189,210,341,343,456,432,563,654,789,812};
    uniforme[30] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    
Depois de selecionar a opção do menu, o usuario tem que colocar um dos elementos acima para acionar a busca.
No display, aparecerá o numero de vezes que a função pecorreu o laços e a posição relativa do vetor buscado.

## Como rodar

O programa é compilado no sistema Linux, onde por commando tem:
    
     g++ busca.cpp -o bin
     
O executável sera o arquivo bin, para executa-lo:

     ./bin
     
