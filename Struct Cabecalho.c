#include <stdio.h>
#include <stdlib.h>

//Estrutura do cabeçalho de arquivo BMP (14 Bytes)
struct BMP_File_Header
{
    char Type[2];
    char Size[4];
    char Reser1[2];
    char Reser2[2];
    int OffSetBits[4];
};

int main()
{
    struct BMP_File_Header Bf; //Declarando Estrutura Bf

    //Atribuindo informações do arquivo
    Bf.Type[0] = 'B';
    Bf.Type[1] = 'M';
    Bf.Size = #tamanho;
    Bf.Reser1[0] = 0;
    Bf.Reser1[1] = 0;
    Bf.Reser2[0] = 0;
    Bf.Reser2[1] = 0;
    Bf.OffSetBits = 54; //Offset
}
