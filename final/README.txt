------------------ Compilador ----------------------

Rafael Colombo Miranda - 2412381

O trabalho foi desenvolvido imaginando um dialeto pirata. Dessa forma, os tokens padrões foram substituídos conforme a seguir:

    "->" = (=)

    "Remar" = (while)

    "Navegar" = (for)

    "Vendaval" = (if)

    "Ouro" = (int)

    "Calmaria" = (Else)

    "GritarProMar" = (printf)

    "Espia" = (scanf)

    "abrirmapa" = "("

    "fecharmapa" = ")"
    
    "PularDoNavio" = "BREAK"

Além disso, a seguinte regra foi utilizada para tratar comentários:

\$.* { /* Comentário */ }

------------------ Testes Realizados ----------------------

Foram realizados testes com estruturas como if, declarações de variáveis, while, for e if-else, demonstrando coerência na construção da linguagem. Os programas solicitados no enunciado foram desenvolvidos e testados, e algumas lógicas adicionais foram criadas exclusivamente para testes e exemplos (enumerados entre 1 a 10).

O arquivo "teste" foi utilizado como arquivo de entrada para passar os códigos de exemplo e realizar possíveis testes em sala de aula.

------------------ Bugs Encontrados ----------------------

Foram identificados alguns bugs que não puderam ser corrigidos a tempo. Entre eles:

    1 - Falha no Salvamento de Símbolos na Tabela:

        Ocorre quando as variáveis não são declaradas na seguinte ordem:

        Int variavel;
        variavel = 0;

        Comentário: Não é possível declarar e atribuir um valor à variável na mesma linha. É necessário declarar a variável primeiro e, em seguida, atribuir o valor. Caso essa ordem não seja respeitada, a função responsável por buscar o endereço da variável (getendereco) retornará %r-1, indicando que a variável não foi encontrada ou não foi declarada corretamente.

    2 - Problema com Formatação:
 
        Ao utilizar tabulação (espaçamento de linha), o código encontra um erro:

        ERRO LÉXICO: CARACTER ' 	 ' INVÁLIDO

        Comentário: O lexer tenta tokenizar o espaço vazio, resultando em um erro léxico.

    3 - Erro de Syntax (declaração):

	Comentário: Erros na elaboração ou falta da declaração de uma variável geram um erro na tabela de simbolos, acarretando na falha da busca e retornando r-1. 
	
-----------------------------------------------------------------------



