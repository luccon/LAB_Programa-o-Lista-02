
#include <stdio.h>

void esconderBits(unsigned char vetor[], unsigned char X, unsigned char Y) {
    // Verifica se Y é menor que 5
    if (Y < 5) {
        printf("Y não pode ser menor que 5.\n");
        return;
    }

    // Imprime o vetor original
    printf("Vetor original:\n");
    for (int i = 0; i < 10; i++) {
        printf("%u ", vetor[i]);
    }
    printf("\n");

    // Esconde os bits de X nos bits menos significativos dos elementos anteriores e posteriores a Y
    for (int i = -4; i <= 4; i++) {
        if (i != 0) { // Ignora o próprio Y
            int pos = Y + i;
            if (pos >= 0 && pos < 10) {
                vetor[pos] = (vetor[pos] & 0xFE) | ((X >> (i + 4)) & 0x01); // Define o bit menos significativo
            }
        }
    }

    // Imprime o vetor modificado
    printf("Vetor modificado:\n");
    for (int i = 0; i < 10; i++) {
        printf("%u ", vetor[i]);
    }
    printf("\n");
}

int main() {
    unsigned char vetor[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    unsigned char X, Y;

    // Recebe os valores de X e Y
    printf("Digite um valor para X (unsigned char): ");
    scanf("%hhu", &X);
    printf("Digite um valor para Y (unsigned char) (Y >= 5): ");
    scanf("%hhu", &Y);

    // Chama a função para esconder os bits
    esconderBits(vetor, X, Y);

    return 0;
}
