#include <stdio.h>
#include <stdlib.h>

// Não sabia fazer, fui acompanhando pela net, porem mesmo assim n consegui (ex resolvido no crtl c/ crtl v, my bad douglas)

   typedef struct
    {
        char nome[50];
        long altura;
        float peso;
        int cpf;
        char sexo;
    } imc;

int main()
    {
    imc imcs[50];
    	int code;
	int op,i=0,j=0,IMC,h,DIM=0,teste;
	char H,M;
            INICIO:
            printf(" PROGRAMA IMC ");
            printf("\n\n Deseja cadastrar pessoa? | < 1 > SIM | < 2 >  NAO |\n");
            scanf("%i",&op);
            switch (op)
            {
            case 1: {goto CADASTRAR;}
            case 2: {goto SAIR;}
            }
            for (;;i++)
                    {
                    REFAZ: system("cls");
                    printf("\n\n Deseja continuar cadastros? | < 1 > |");
                    printf("\n Consultar?                  | < 2 > |");
                    printf("\n SAIR                        | < 3 > |\n");
                    scanf("%i",&op);
                    switch (op){
                    case 1:{goto CADASTRAR;}
                    case 2:{goto CONSULTAR;}
                    case 3:{goto SAIR;}}

            CADASTRAR: i=i+1;DIM=i;

                    printf("\nNOME: ",i);     
					scanf(" %s",&imcs[i].nome);
                    printf("\nALTURA(Centimetros): ",i);   
					scanf(" %ld",&imcs[i].altura);
                    printf("\n PESO: ",i);     
					scanf(" %f",&imcs[i].peso);
                    printf("\nCPF: ",i);      
					scanf(" %i",&imcs[i].cpf);
            CONSULTAR:
                    printf("\nSEXO: ",i);
                    printf("\n1 - HOMEM\n2 - MULHER ");
                    scanf("%i",&op);
                    switch (op)
                        {
                        case 1:
                        goto CONSULTARH;
                        case 2:
                        goto CONSULTARM;
                        }
                    system("cls");
                    for (j=1;j<=DIM;j++){
                    printf("\n Codigo %i: - %i",j,imcs[j].cpf);}
                    goto REFAZ;}

            CONSULTARH:
                    printf("\n Digite o CPF para calcular o IMC\t");
                    scanf("%i",&code);
                    for (j=1;j<=DIM;j++){
                    if (code==imcs[j].cpf)
                        {
                        h=((imcs[i].altura/100)^2);
                        IMC=imcs[j].peso/h;
                        if (IMC<20.7)                 {goto ABAIXO;}
                        if ((IMC>20.8)&&(IMC <26.4))  {goto NORMAL;}
                        if ((IMC >26.5)&&(IMC<27.8))  {goto ACIMA;}
                        if ((IMC >27.9)&&(IMC<31.1))  {goto SOBREPESO;}
                        if (IMC >31,1)                {goto OBESO;}
                        goto INICIO;
                        }
                    if (code!=imcs[j].cpf)
                        {
                        printf("\n >> CPF INVALIDO! <<");
                        getch();
                        system("cls");
                        goto CONSULTARH;}}
            CONSULTARM:
                    printf("\n Digite o CPF para calcular o IMC\t");
                    scanf("%i",&code);
                    for (j=1;j<=DIM;j++){
                    if (code==imcs[j].cpf)
                        {
                        h=((imcs[i].altura/100)^2);
                        IMC=imcs[j].peso/h;
                        if (IMC<19.1)                 {goto ABAIXO;}
                        if ((IMC>19.1)&&(IMC <=25.8))  {goto NORMAL;}
                        if ((IMC >25.8)&&(IMC<=27.3))  {goto ACIMA;}
                        if ((IMC >27.3)&&(IMC<=32.2))  {goto SOBREPESO;}
                        if (IMC >32.2)                {goto OBESO;}
                        goto INICIO;
                        }
                    if (code!=imcs[i].cpf)
                        {
                        printf("\n >> CPF INVALIDO! <<");
                        getch();
                        system("cls");
                        goto CONSULTARM;}}
            ABAIXO: printf("\n O IMC eh: %.2f",imcs[j].peso/h);
                    printf("\n ABAIXO DO PESO");
                    getch();
                    goto REFAZ;
            NORMAL: printf("\n O IMC eh: %.2f",imcs[j].peso/h);
                    printf("\n PESO NORMAL");
                    getch();
                    goto REFAZ;
            ACIMA:  printf("\n O IMC eh: %.2f",imcs[j].peso/h);
                    printf("\n ACIMA DO PESO");
                    getch();
                    goto REFAZ;
            SOBREPESO: printf("\n O IMC eh: %.2f",imcs[j].peso/h);
                       printf("\n ATENÇÃO SOBREPESO!!");
                    getch();
                    goto REFAZ;
            OBESO: printf("\n O IMC eh: %.2f",imcs[j].peso/h);
                    printf("\n CUIDADO, RISCO DE INFARTO");
                    getch();
                    goto REFAZ;
            SAIR: return 0;
}
