Data de entrega: 08/10

O projeto consiste na implementação de técnicas de compressão sem perdas aplicadas a imagens. Mais especificamente, devem ser empregadas de modo combinado a codificação por diferenças e codificação de Huffman.
Este trabalho é composto de três etapas principais: desenvolvimento de um compressor, desenvolvimento do respectivo descompressor e análise dos resultados. Cada uma dessas fases é detalhada a seguir.

1. Compressor
Nesta etapa, é fornecido como entrada um arquivo de imagem no formato BMP, sem compressão, com 24 bits para cor. Então, aplica-se a codificação por diferenças e codificação de Huffman. Por fim, os códigos binários resultantes são gravados em arquivo.

2. Descompressor
Esta etapa consiste em fazer o procedimento inverso à fase anterior. Deve-se receber como entrada o arquivo codificado e realizar a decodificação de Huffman e das diferenças, obtendo-se novamente a imagem BMP original.

3. Análise dos Resultados
Utilize pelo menos 5 imagens para testes, com dimensões mínimas de 160x120 pixels, e informe:
> - Tamanho do arquivo original;

> - Tamanho do arquivo comprimido;

> - Taxa de compressão.
Discuta os resultados obtidos, considerando-se as características das técnicas de compressão utilizadas. Justifique também o método escolhido para tratar os dados na implementação das diferenças.