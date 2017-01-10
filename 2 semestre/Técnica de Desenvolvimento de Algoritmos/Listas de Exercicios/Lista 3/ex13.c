#include <stdio.h>

main()
{
    printf("Media de varios alunos e da turma\n\n");

    //vars
    float mediaTurma=0, mediaAluno, maiorMedia, menorMedia, alunos=0;

    //Entrada
    printf("\n\nInsira a media do aluno: ");
    scanf("%f", &mediaAluno);

    while( mediaAluno >= 0 )
    {
        alunos++;

        mediaTurma += mediaAluno;

        //Entrada
        printf("\n\nInsira a media do aluno: ");
        scanf("%f", &mediaAluno);


    }

    //Processamento
    mediaTurma /= alunos;

    //Saída
    printf("\n\nMedia da Turma: %.2f", mediaTurma);




}
