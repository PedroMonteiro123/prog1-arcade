#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <locale.h>


int a,b,L,L2; 
void gotoxy(int x,int y){
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
int main(){
    ///menu/
    int opcao;
    do{
        inicio:
        opcao=0;
        L=2;L2=2;b=2;
        system("cls");
        system("color 4f");
        printf("\n\n      1 - PERGUNTA E RESPOSTA \n      2 - COBRA NA CAIXA  \n      3 - GOUSMAS WAR \n      4 - SAIR\n");
        do{
            gotoxy(1,L);
            printf("-->");
            gotoxy(10,6);
            if(kbhit){a=getch();}
            if(a == 80 && b < 5){L2=L;L++;b++;}/seta p/baixo/
            if(a == 72 && b > 2){L2=L;L--;b--;}/*seta p/cima */
            if(L!=L2){gotoxy(1,L2);printf("   ");L2=L;}
            if(a == 13){opcao=b-1;}
        }while(opcao == 0);
        
		switch (opcao){
            case 1:
            	{
                system("cls");
                
                char resp,inicio;
char cert='s';
char nome[40];
int medio=0,facil=0,dificil=0,cont=0,nivel;
int certo_1=0,errado_1=0,contp_1=1,totp_1=1;
int certo_2=0,errado_2=0,contp_2=1,totp_2=1;
int certo_3=0,errado_3=0,contp_3=1,totp_3=1;

printf (" JOGO PERGUNTAS E RESPOSTAS, VAMOS TESTAR OS CONHECIMENTOS \n");
printf ("\nInforme o nome do participante e em seguida pressione \"enter\".\n\n");
printf ("\nNOME DO PARTICIPANTE: ");
gets(nome);
system("cls");
printf ("\nSEJA BEM VINDO \"%s\"\n",nome);
printf ("-------------------------------------------------------------------------------\n");
printf ("Este e um jogo divertido de perguntas e respostas. O jogador devera escolher\n");
printf ("dentre as 4 alternativas apenas uma e em seguida pressionar \"enter\".\n\n");
printf ("O jogo possui 3 niveis de dificuldade:\n\n");
printf ("Nivel facil   - Cada resposta certa valera 2 pontos\n");
printf ("Nivel medio   - Cada resposta certa valera 4 pontos\n");
printf ("Nivel dificil - Cada resposta certa valera 6 pontos\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Boa sorte e bom jogo\n\n");
printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");
dificuldade:
printf ("-----------------------------\n");
printf ("|	NIVEIS DE DIFICULDADE	|\n");
printf ("-----------------------------\n");
printf ("|  1 - NIVEL FACIL			|\n");
printf ("|  2 - NIVEL MEDIO			|\n");
printf ("|  3 - NIVEL DIFICIL		  |\n");
printf ("-----------------------------\n");
printf ("DESEJA JOGAR EM QUAL NIVEL? \n");
scanf ("%d",&nivel);
system("cls");
switch (nivel)
{
case 1 :
{
system("cls");
time_t tempo;struct tm *data;time(&tempo);
data = localtime(&tempo);
printf(" nivel facil\n");
printf ("AS PERGUNSTAS DE NIVEL \"FACIL\" VALEM 1 PONTO CADA\n\n");

getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");
printf ("--------------------------------\n");
printf ("|  Pergunta n. %.2d - Nivel Facil  |\n",contp_1++);
printf ("--------------------------------\n\n");
printf ("QUANTO SAO 5+5?\n");
printf ("A) 5\n");
printf (" B) 7\n");
printf ("C) 10\n");
printf ("D) 2\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='c')||(resp='C'))
{
printf ("Resposta correta\n");
certo_1++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"c\"\n");
errado_1++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system("cls");
printf ("--------------------------------\n");
printf ("|  Pergunta n. %.2d - Nivel Facil  |\n",contp_1++);
printf ("--------------------------------\n\n");
printf ("O QUE ESTA ESCRITO NA BANDEIRA DO BRASIL?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) ORDEM E REGRESSO\n");
printf (" B) ORDEM E RETROCESSO\n");
printf ("C) ORDEM E PROGRESSO\n");
printf ("D) PROGRESSO E ORDEM\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='c')||(resp=='C'))
{
printf ("Resposta correta\n");
certo_1++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"c\"\n");
errado_1++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system("cls");
printf ("--------------------------------\n");
printf ("|  Pergunta n. %.2d - Nivel Facil  |\n",contp_1++);
printf ("--------------------------------\n\n");
printf ("QUAL O SIGNIFICADO DA PALAVRA INGLESA 'HORSE'?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) CASA\n");
printf (" B) CAVALO\n");
printf ("C) ELEFANTE\n");
printf ("D) HIPOPÓTAMO\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='b')||(resp=='B'))
{
printf ("Resposta correta\n");
certo_1++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"B\"\n");
errado_1++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system("cls");
printf ("--------------------------------\n");
printf ("|  Pergunta n. %.2d - Nivel Facil  |\n",contp_1++);
printf ("--------------------------------\n\n");
printf ("COMO E CONHECIDO O INVENTOR DO AVIAO?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) SANTOS DUMONT\n");
printf (" B) SANTOS DUMORRO\n");
printf ("C) SANTOS DRUMOM\n");
printf ("D) SANTOS SILVA\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='a')||(resp=='A'))
{
printf ("Resposta correta\n");
certo_1++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"A\"\n");
errado_1++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system("cls");
printf ("--------------------------------\n");
printf ("|  Pergunta n. %.2d - Nivel Facil  |\n",contp_1++);
printf ("--------------------------------\n\n");
printf ("QUAL DOS ITENS ABAIXO NAO E UMA FRUTA?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) LARANJA\n");
printf (" B) MANGA\n");
printf ("C) QUIABO\n");
printf ("D) BANANA\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='c')||(resp=='C'))
{
printf ("Resposta correta\n");
certo_1++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"C\"\n");
errado_1++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system("cls");
printf ("--------------------------------\n");
printf ("|  Pergunta n. %.2d - Nivel Facil  |\n",contp_1++);
printf ("--------------------------------\n\n");
printf ("QUAL E O SATELITE NATURAL DA TERRA?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) SPUTNICK\n");
printf (" B) RUBLE\n");
printf ("C) SOYUS\n");
printf ("D) LUA\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='d')||(resp=='D'))
{
printf ("Resposta correta\n");
certo_1++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"D\"\n");
errado_1++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system("cls");
printf ("--------------------------------\n");
printf ("|  Pergunta n. %.2d - Nivel Facil  |\n",contp_1++);
printf ("--------------------------------\n\n");
printf ("QUAL DOS ESTADOS ABAIXO NAO POSSUI PRAIAS?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) RIO DE JANEIRO\n");
printf (" B) CEARA\n");
printf ("C) GOIAS\n");
printf ("D) SAO PAULO\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='c')||(resp=='C'))
{
printf ("Resposta correta\n");
certo_1++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"C\"\n");
errado_1++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system("cls");
printf ("--------------------------------\n");
printf ("|  Pergunta n. %.2d - Nivel Facil  |\n",contp_1++);
printf ("--------------------------------\n\n");
printf ("QUAL O SIGNIFICADO DA SILGLA ONU?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) ORGANIZACAO NACIONAL UNICA\n");
printf (" B) ORDEN NACIONAL UNICA\n");
printf ("C) ORGANIZACAO DAS NACOES UNIDAS\n");
printf ("D) NENHUMA DAS ALTERNATIVAS\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='c')||(resp=='C'))
{
printf ("Resposta correta\n");
certo_1++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"C\"\n");
errado_1++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");
printf ("As pergunstas deste nivel terminaram.\n");
printf ("Deseja jogar em outro nivel (s/n)? ");
scanf ("%s",&resp);
if ((resp=='s')||(resp=='S'))
{
system ("cls");
totp_1=contp_1;
contp_1=1;
goto dificuldade;
}
break;
}  

/Inicio do nível médiio/

case 2:
{
system("cls");
printf("nivel medio\n");
printf ("			  AS PERGUNSTAS DE NIVEL \"MEDIO\" VALEM 2 PONTOS CADA\n\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");
printf ("--------------------------------\n");
printf ("|  Pergunta n. %.2d - Nivel Medio  |\n",contp_2++);
printf ("--------------------------------\n\n");
printf ("QUANTOS ESTADOS POSSUI O BRASIL?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) 20 ESTADOS\n");
printf (" B) 25 ESTADOS\n");
printf ("C) 27 ESTADOS\n");
printf ("D) 30 ESTADOS\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='c')||(resp=='C'))
{
printf ("Resposta correta\n");
certo_2++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"C\"\n");
errado_2++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system("cls");
printf ("--------------------------------\n");
printf ("|  Pergunta n. %.2d - Nivel Medio  |\n",contp_2++);
printf ("--------------------------------\n\n");
printf ("QUAL O NOME DA ESCALA QUE MEDE A MAGNITUDE DOS TERREMOTOS?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) ESCALA RICHMOR\n");
printf (" B) ESCALA SISMICA\n");
printf ("C) ESCALA TERMICA\n");
printf ("D) ESCALA RICHTER\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='d')||(resp=='D'))
{
printf ("Resposta correta\n");
certo_2++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"D\"\n");
errado_2++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system("cls");
printf ("--------------------------------\n");
printf ("|  Pergunta n. %.2d - Nivel Medio  |\n",contp_2++);
printf ("--------------------------------\n\n");
printf ("QUAL E A CAPITAL DE BRASILIA?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) BRASIL\n");
printf (" B) DISTRITO NACIONAL\n");
printf ("C) DISTRITO FEDERAL\n");
printf ("D) PLANO PILOTO\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='c')||(resp=='C'))
{
printf ("Resposta correta\n");
certo_2++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"C\"\n");
errado_2++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system("cls");
printf ("--------------------------------\n");
printf ("|  Pergunta n. %.2d - Nivel Medio  |\n",contp_2++);
printf ("--------------------------------\n\n");
printf ("O ESTADO DE PERNAMBUCO ESTA LOCALIZADO EM QUAL REGIAO BRASILEIRA?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) REGIAO NORTE\n");
printf (" B) REGIAO CENTOESTEO\n");
printf ("C) REGIAO SUDESTE\n");
printf ("D) REGIAO NORDESTE\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='d')||(resp=='D'))
{
printf ("Resposta correta\n");
certo_2++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"D\"\n");
errado_2++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system("cls");
printf ("--------------------------------\n");
printf ("|  Pergunta n. %.2d - Nivel Medio  |\n",contp_2++);
printf ("--------------------------------\n\n");
printf ("QUAL E O NOME CIENTIFICO DA CANA-DE-ACUCAR?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) CACHACA\n");
printf (" B) RAPADURA\n");
printf ("C) INFLORESCENCIA\n");
printf ("D) SACCHARUM OFFICINARUM\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='d')||(resp=='D'))
{
printf ("Resposta correta\n");
certo_2++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"D\"\n");
errado_2++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system("cls");
printf ("--------------------------------\n");
printf ("|  Pergunta n. %.2d - Nivel Medio  |\n",contp_2++);
printf ("--------------------------------\n\n");
printf ("COMO E CONHECIDO O INVENTOR DA LAMPADA ELETRICA?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) THOMAS JEFFERSON\n");
printf (" B) THOMAS DE AQUINO\n");
printf ("C) THOMAS EDISOM\n");
printf ("D) THOMAS SWAM\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='c')||(resp=='C'))
{
printf ("Resposta correta\n");
certo_2++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"C\"\n");
errado_2++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system("cls");
printf ("--------------------------------\n");
printf ("|  Pergunta n. %.2d - Nivel Medio  |\n",contp_2++);
printf ("--------------------------------\n\n");
printf ("QUAL DOS ITENS ABAIXO NAO E UMA LINGUAGEM DE PROGRAMACAO?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) COBOL\n");
printf (" B) BASIC\n");
printf ("C) SMALLTALK\n");
printf ("D) PREVIEW\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='d')||(resp=='D'))
{
printf ("Resposta correta\n");
certo_2++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"D\"\n");
errado_2++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system("cls");
printf ("--------------------------------\n");
printf ("|  Pergunta n. %.2d - Nivel Medio  |\n",contp_2++);
printf ("--------------------------------\n\n");
printf ("QUAL OCEANO BANHA A COSTA BRASILEIRA?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) OCEANO PACIFICO\n");
printf (" B) OCEANO ATLANTICO\n");
printf ("C) OCEANO GLACIAL ARTICO\n");
printf ("D) OCEANO MERIDIONAL\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='b')||(resp=='B'))
{
printf ("Resposta correta\n");
certo_2++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"B\"\n");
errado_2++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");
printf ("As pergunstas deste nivel terminaram.\n");
printf ("Deseja jogar em outro nivel (s/n)? ");
scanf ("%s",&resp);
if ((resp=='s')||(resp=='S'))
{
system ("cls");
totp_2=contp_2;
contp_2=1;
goto dificuldade;
}
break;
}

/* Inicio do nível difícil */

case 3 :
{
system("CLS");
printf ("nivel dificil\n");
printf ("			AS PERGUNSTAS DE NIVEL \"DIFICIL\" VALEM 6 PONTOS CADA\n\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");
printf ("----------------------------------\n");
printf ("|  Pergunta n. %.2d - Nivel Dificil  |\n",contp_3++);
printf ("----------------------------------\n\n");
printf ("O QUE E UM ATOMO?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) MENOR PORCAO EM QUE PODE SER DIVIDIDO UM ELEMENTO QUIMICO\n");
printf (" B) BOLHAS QUE SAEM DA AGUA QUANDO ELA ENTRA EM EBULICAO\n");
printf ("C) EXPLOSIVO\n");
printf ("D) MAIOR PORCAO EM QUE PODE SER DIVIDIDO UM ELEMENTO QUIMICO\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='a')||(resp=='A'))
{
printf ("Resposta correta\n");
certo_3++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"A\"\n");
errado_3++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");
printf ("----------------------------------\n");
printf ("|  Pergunta n. %.2d - Nivel Dificil  |\n",contp_3++);
printf ("----------------------------------\n\n");
printf ("QUEM FOI O COMPOSITOR DA MUSICA DO HINO NACIONAL BRASILEIRO?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) MACHADO DE ASSIS\n");
printf (" B) DOM PEDRO I\n");
printf ("C) JOAQUIM OSORIO DUQUE ESTRADA\n");
printf ("D) FRANCISCO MANOEL DA SILVA\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='c')||(resp=='C'))
{
printf ("Resposta correta\n");
certo_3++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"C\"\n");
errado_3++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");
printf ("----------------------------------\n");
printf ("|  Pergunta n. %.2d - Nivel Dificil  |\n",contp_3++);
printf ("----------------------------------\n\n");
printf ("NOME DO MORRO EM QUE SE ENCONTRA A ESTATUA DO CRISTO REDENTOR?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) MORRO DO PAO DE ACUCAR\n");
printf (" B) MORRO DO CORCOVADO\n");
printf ("C) MORRO DA GUANABARA\n");
printf ("D) MORRO DO REDENTOR\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='a')||(resp=='A'))
{
printf ("Resposta correta\n");
certo_3++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"A\"\n");
errado_3++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");
printf ("----------------------------------\n");
printf ("|  Pergunta n. %.2d - Nivel Dificil  |\n",contp_3++);
printf ("----------------------------------\n\n");
printf ("QUAL E O SIGNIFICADO DA PALAVRA MISCIGENACAO?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) PESSOA INGENUA\n");
printf (" B) MISTURA DE VARIADAS COMPILACOES LITERARIAS\n");
printf ("C) CRUZAMENTO INTER-RACIAL\n");
printf ("D) DOENCA QUE ATINGE A PELE\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='c')||(resp=='C'))
{
printf ("Resposta correta\n");
certo_3++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"C\"\n");
errado_3++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");
printf ("----------------------------------\n");
printf ("|  Pergunta n. %.2d - Nivel Dificil  |\n",contp_3++);
printf ("----------------------------------\n\n");
printf ("EM QUE ANO FOI ASSINADA A LEI AUREA QUE ABOLIU A ESCRAVATURA NO BRASIL?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) 1888\n");
printf (" B) 1988\n");
printf ("C) 1788\n");
printf ("D) 1500\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='a')||(resp=='A'))
{
printf ("Resposta correta\n");
certo_3++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"A\"\n");
errado_3++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");
printf ("----------------------------------\n");
printf ("|  Pergunta n. %.2d - Nivel Dificil  |\n",contp_3++);
printf ("----------------------------------\n\n");
printf ("COMO E CHAMADA UMA PESSOA QUE ESCREVE COM AS DUAS MAOS?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) DESTRO\n");
printf (" B) AMBIDESTRO\n");
printf ("C) CANHOTO\n");
printf ("D) ADESTRADO\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='b')||(resp=='B'))
{
printf ("Resposta correta\n");
certo_3++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"B\"\n");
errado_3++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");
printf ("----------------------------------\n");
printf ("|  Pergunta n. %.2d - Nivel Dificil  |\n",contp_3++);
printf ("----------------------------------\n\n");
printf ("NOME QUE RECEBE A GUERRA PELA CORRIDA ARMAMENTISTA E TECNOLOGICA?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) GUERRA MUNDIAL\n");
printf (" B) GUERRA FRIA\n");
printf ("C) GUERRA CIVIL\n");
printf ("D) GUERRA TOTAL\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='b')||(resp=='B'))
{
printf ("Resposta correta\n");
certo_3++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"B\"\n");
errado_3++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");
printf ("As pergunstas deste nivel terminaram.\n");
printf ("Deseja jogar em outro nivel (s/n)? ");
scanf ("%s",&resp);
if ((resp=='s')||(resp=='S'))
{
system ("cls");
totp_3=contp_3;
contp_3=1;
goto dificuldade;
}
break;
}
default : printf ("Nivel invalido\n");
{
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");
goto dificuldade;
}

}/fechamento do 1º swhith/

system("cls");
printf ("================ RESULTADOS DO JOGO =================\n");
printf ("Participante: %s\n",nome);
printf ("Perguntas respondidas: %d\n",totp_1-1+contp_1-1+totp_2-1+contp_2-1+totp_3-1+contp_3-1);
printf ("Total de acertos.....: %d\n",certo_1+certo_2+certo_3);
printf ("Total de erros.......: %d\n",errado_1+errado_2+errado_3);
printf ("Pontuacao total......: %d\n\n",(certo_1*2)+(certo_2*4)+(certo_3*6));
printf ("--------------------- NIVEL FACIL -------------------\n");
printf ("Perguntas respondidas: %d\n",contp_1-1+totp_1-1);
printf ("Acertos..: %d\n",certo_1);
printf ("Erros....: %d\n",errado_1);
printf ("Pontuacao: %d\n\n",certo_1*2);
printf ("-------------------- NIVEL MEDIO --------------------\n");
printf ("Perguntas respondidas: %d\n",contp_2-1+totp_2-1);
printf ("Acertos..: %d\n",certo_2);
printf ("Erros....: %d\n",errado_2);
printf ("Pontuacao: %d\n\n",certo_2*4);
printf ("------------------- NIVEL DIFICIL -------------------\n");
printf ("Perguntas respondidas: %d\n",contp_3-1+totp_3-1);
printf ("Acertos..: %d\n",certo_3);
printf ("Erros....: %d\n",errado_3);
printf ("Pontuacao: %d\n",certo_3*6);
getchar();
getchar();
}
                break;
                {
            case 2:
            system("cls");
               
            char campominado[5][5],cminado[5][5];
    int linha,coluna,resp,i,j,k,flag=0,cobras,nivel,jogada;
    printf ("\nInforme o nome do participante e em seguida pressione \"enter\".\n\n");
    printf ("\nNOME DO PARTICIPANTE 1 : ");
    char name [40];
    gets(name);
    printf ("\nNOME DO PARTICIPANTE 2 : ");
    gets(name);
    printf("\n\n\n Você e seu colega de trabalho estavam explorando a tumba do faraó Neebe quando entraram em uma grande sala com escrituras na parede. ");
	printf("\Enquanto inspecionavam as escrituras, vocês acidentalmente pressionaram um botão escondido que lacrou as portas, prendendo-os lá dentro.");
    printf("\n\n\n\nEsse é um jogo de sorte, onde ganha o jogador que descobrir a caixa que contém o botão e perde aquele que descobrir a caixa com a cobra.");
    printf(" Cada jogador deve informar seu primeiro nome e o computador escolherá aleatoriamente quem começa abrindo a primeira caixa. O jogador escolhido deve ");
	printf("escolher uma das cinco caixas e o computador informará se há uma cobra, o botão ou nada dentro. Depois disso, a caixa escolhida não pode mais ser escolhida.");
    printf("\n\n---------------------COBRA NA CAIXA ---------------------");///Criação do menu/
    printf("\n\nEscolha um nível de dificuldade:\n\n(1) - EASY \n(2) - HARD \n(3) - VERY DIFFICULT : \n\n     -%c ",16);
    do{
        scanf("%d",&nivel);
    }while(nivel <1 || nivel > 3);
    for(i=0;i<5;i++)///criação do tabuleiro que aparece na tela/
        for(j=0;j<5;j++)
            campominado[i][j]=0;

    if(nivel==1){
        printf("\n\nNeste nivel ha 5 pitons no tabuleiro,boa sorte!     tecle ");
    cobras = 5;
    }
    else{
        if(nivel==2){
            printf("\n\nNeste nivel ha 12 cascaveis no tabuleiro,boa sorte!     tecle ");
          cobras = 12;
        }
        else{
            printf("\n\nNeste nivel ha 24 taipans-ocidentais no tabuleiro,boa sorte!     tecle enter  ");
          cobras = 24;
        }
    }

    for(linha=0;linha<cobras;linha++)
        campominado[rand()%5][rand()%5] = '*';
    getch();
    system("cls");
    printf("\n\n                  Colunas\n             0   1   2   3   4\n");
    printf("Linha 0 ->    |   |   |   |   \n");
    printf("            ---+---+---+---+---\n");
    printf("Linha 1 ->    |   |   |   |   \n");
    printf("            ---+---+---+---+---\n");
    printf("Linha 2 ->    |   |   |   |   \n");
    printf("            ---+---+---+---+---\n");
    printf("Linha 3 ->    |   |   |   |   \n");
    printf("            ---+---+---+---+---\n");
    printf("Linha 4 ->    |   |   |   |   \n");
    for(jogada=1;jogada<4;jogada++){/* laço para controlar o nº de jogadas */
        do{
            gotoxy(5,15);
            printf("                                            \n");
            printf("                                              ");
            gotoxy(5,15);
            printf("Informa a linha que voce quer jogar: ");
            scanf("%d",&linha);
            printf("     Informe a coluna que voce quer jogar: ");
            scanf("%d",&coluna);
        }while((linha<0||linha>4) || (coluna<0||coluna>4));
        if(campominado[linha][coluna]==''){/ condição se marcar o espaço que está a mina, o jogo acaba */
            printf("\n\n voce pisou na cobra e ela te picou, procure um medico imediatamente");
            printf("\n\n       GAME OVER");
            flag=1;
            char op;
            do {      
         printf("Digite algo\n  1 - continuar jogando \n  2 - voltar para o menu \n  3 - sair \n");

         scanf(" %c", &op);

         switch(op) {
               case '1'://char campominado[5][5],cminado[5][5];
                   printf("Escolheu continuar jogando\n");
                   break; 
               case '2': ////menu/
                   printf("Escolheu opção voltar para o menu\n");
                   break;
               case '3'://sair
                   printf("Escolheu opção sair \n");  
                   break;
               default:
                   printf("Escolheu uma opção inválida\n");
                   break;
         }
    } while (op != '0');

    return 0;
           
          
            break;
        }
         else{
         campominado[linha][coluna]='X';/* condição se marcar um espaço sem mina, vai aparecer o X no tabuleiro */
        }
        for(i=0;i<5;i++){                /* quantidade de linhas */
            k=13;                        /* primeira posição */
            for(j=0;j<5;j++){            /* quantidade de colunas */
                if(campominado[i][j] !='')/ verifica se nessa posição não eh mina */
                {
                    gotoxy(k,i*2+4);      /* coloca o cursor nessa posição */
                    printf("%c",campominado[i][j]);/* imprime o que está nessa posição */
                }
                k+=4;                     /* vai para a proxima posição no desenho na tela */
            }
        }
        
    }
    gotoxy(0,22);
    if(flag==0)printf("    Parabéns,  Você Venceu . . . !\n");
    printf("\n          Finalizar . . . !\n\n");
    getch();
    return 0;
}
                break;
            case 3:
               {
int escolha;
	while(1){
	system("cls || clear");
	Sleep(1);
	printf(" STORYLINE: Nas distantes terras de Lima, as pessoas costumam capturar criaturas melosas chamadas gousmas para batalhar, semelhante ao jogo pokemon. E voce acabou capturando duas dessas criaturas para lutar contra outro treinador\n\n");
	Sleep(2000);
	printf("REGRAS DO COMBATE:\n -> Durante o combate, cada treinador inicia com duas Gousmas em campo, ambas com o nivel de furia igual a 1.\n No primeiro round voce pode escolher uma Gousma para atacar, todo o nivel de furia da gousma escolhida e transferido para a Gousma atacada.\n-> Quando a Gousma atacada alcanca um nivel de furia maior que 5, ela morre.\n");
	printf("\n-> Entretanto essa criatura monstruosa eh feita de slime, isso permite que durante o combate uma Gousma possa se dividir em duas,\ntransferindo uma quantidade  de furia para a nova gousma. Por exemplo, se uma unica Gousma em campo tem 3\nde furia, pode ser dividida em outra Gousma passando 1 de furia para a nova gousma,que ficara com 2 de furia e outra\ncom 1 de furia. \n\nO limite maximo de Gousmas em campo e de dois para cada treinador.\nSe um jogador tem todas as Gousmas derrotadas, ele perde o jogo.\n ");
	Sleep(6000);
	printf("\nVamos para batalha?\n\n1 - Sim   2 - Nao\n\n: ");
	scanf("%d", &escolha);
	if(escolha == 1){
		system("cls||clear");
		//p1 = player 1
		//p2 = player 2
	int p1_left = 1, p1_right = 1, p2_left = 1, p2_right = 1;   //p2_left ou right é literalmente o numero do player junto com a posiçao do movimento no qual vai ser realizado
    int turno, atacante, alvo, raiva_1, raiva_2, movimento, transf;

    //comando ultilizado para sortear quem vai primeiro
    srand(time(NULL));
    turno = rand() % 2 + 1;
    Sleep(1);
    printf("VAMOS AO DUELO!!!!!\n");
    Sleep(2);
    printf("Treinador 1 = [Gousma 1]: %d, [Gousma 2]: %d\n X\n", p1_left, p1_right);
    printf("Treinador 2 = [Gousma 3]: %d, [Gousma 4]: %d\n", p2_left, p2_right);


//LOOPING DURANTE SOS TURNOS JUNTO COM SUAS CONDIÇÕES: se tal movimento nao condizer com o comando vai printar a mensagem de movimento invalido
    do{

        printf("\ntreinador %d, sua vez. \n\n", turno);
        Sleep(1);
        printf("Voce gostaria de atacar ou dividir? \n[1] para atacar, [2] para se dividir): ");
        scanf("%i", &movimento);

        if (movimento == 1){
        printf("Insira o atacante: ");
        scanf("%i", &atacante);
        printf("Insira o alvo: ");
        scanf("%i", &alvo);

if (turno == 1){
	if (atacante == 1 && p1_left !=0) {
        raiva_1 = p1_left;
        }
	else if (atacante == 2 && p1_right !=0)
		{
        raiva_1 = p1_right;
        }
	else {
		printf("Movimento invalido, por favor tente novamente");
		Sleep(2);
		system("cls||clear");
		printf("Treinador 1 ((1)Gousma 1: %d, (2)Gousma 2: %d)\n", p1_left, p1_right);
        printf("Treinador 2 ((3)Gousma 1: %d, (4)Gousma 2: %d)\n", p2_left, p2_right);
		continue;
			}
	 if (alvo == 3 &&  p2_left!= 0) {
            p2_left += raiva_1;
        } else if (alvo == 4 && p2_right !=0) {
            p2_right += raiva_1;}
        else{
        printf("Movimento invalido, por favor tente novamente");
        Sleep(2);
		system("cls||clear");
		printf("Treinador 1 ((1)Gousma 1: %d, (2)Gousma 2: %d)\n", p1_left, p1_right);
        printf("Treinador 2 ((3)Gousma 1: %d, (4)Gousma 2: %d)\n", p2_left, p2_right);
		continue;
		}
		}


if (turno == 2){
	if (atacante == 3 && p2_left !=0) {
        raiva_2 = p2_left;
    }
	else if (atacante == 4 && p2_right !=0) {
        raiva_2 = p2_right;}
	else {
		printf("Movimento invalido, por favor tente novamente");
		Sleep(2);
		system("cls||clear");
		printf("Treinador 1 ((1)Gousma 1: %d, (2)Gousma 2: %d)\n", p1_left, p1_right);
        printf("Treinador 2 ((3)Gousma 1: %d, (4)Gousma 2: %d)\n", p2_left, p2_right);
		continue;
			}
	 if (alvo == 1 && p1_left !=0) {
            p1_left += raiva_2;
        } else if (alvo == 2 && p1_right !=0) {
            p1_right += raiva_2;}
        else{
        printf("Movimento invalido, por favor tente novamente");
		Sleep(2);
		system("cls||clear");
		printf("Treinador 1 ((1)Gousma 1: %d, (2)Gousma 2: %d)\n", p1_left, p1_right);
        printf("Treinador 2 ((3)Gousma 1: %d, (4)Gousma 2: %d)\n", p2_left, p2_right);
		continue;
		}
		}
	}
	else if (movimento == 2){
		if ((turno == 1 && (p1_left !=0 && p1_right !=0)) || (turno == 2 && (p2_left !=0 && p2_right !=0))){
		printf("Movimento invalido! Nenhum de seus Gousmas foi derrotado!");
		Sleep(3);
		system("cls||clear");
		printf("Treinador 1 ((1)Gousma 1: %d, (2)Gousma 2: %d)\n", p1_left, p1_right);
        printf("Treinador 2 ((3)Gousma 1: %d, (4)Gousma 2: %d)\n", p2_left, p2_right);
		continue;
		}
		else if (turno == 1 && (p1_left ==0 || p1_right ==0)){
		printf("Quanto de furia voce gostaria de transferir?");
		scanf("%i", &transf);
			if (transf>= p1_left && transf>=p1_right){
				printf("Movimento invalido, por favor tente novamente");
				Sleep(2);
				system("cls||clear");
				printf("Treinador 1 ((1)Gousma 1: %d, (2)Gousma 2: %d)\n", p1_left, p1_right);
        		printf("Treinador 2 ((3)Gousma 1: %d, (4)Gousma 2: %d)\n", p2_left, p2_right);
				continue;
			}
			else if(p1_left > 0) {
				p1_left = p1_left - transf;
				p1_right = transf;
			}
			else if(p1_right > 0) {
				p1_right = p1_right - transf;
				p1_left = transf;
			}

		}
		else if (turno == 2 && (p2_left == 0 || p2_right == 0)){
		printf("Quanto de furia voce gostaria de transferir?");
		scanf("%i", &transf);
			if (transf >= p2_left && transf>=p2_right){
				printf("Movimento invalido, por favor tente novamente");
				Sleep(2);
				system("cls||clear");
				printf("Treinador 1 ((1)Gousma 1: %d, (2)Gousma 2: %d)\n", p1_left, p1_right);
        		printf("Treinador 2 ((3)Gousma 1: %d, (4)Gousma 2: %d)\n", p2_left, p2_right);
				continue;
			}
			else if(p2_left > 0) {
				p2_left = p2_left - transf;
				p2_right = transf;
			}
			else if(p1_right > 0) {
				p2_right = p2_right - transf;
				p2_left = transf;}
			}
	}
	else{
	printf("Movimento invalido, por favor tente novamente");
	Sleep(2);
	system("cls||clear");
	printf("Treinador 1 ((1)Gousma 1: %d, (2)Gousma 2: %d)\n", p1_left, p1_right);
    printf("Treinador 2 ((3)Gousma 1: %d, (4)Gousma 2: %d)\n", p2_left, p2_right);
	continue;
	}

		if (p1_left>= 5){
			p1_left = 0;
		}
		if (p1_right>= 5){
			p1_right = 0;
		}
		if (p2_left>= 5){
			p2_left = 0;
		}
		if (p2_right>= 5){
			p2_right= 0;
		}


        if (p1_left == 0 && p1_right == 0) {
            printf("Todas as Gousmas do Treinador 1 foram derrotadas!\nTreinador 2 venceu!!\n");
            break;
        }
        if (p2_left ==0 && p2_right == 0) {
            printf("Todas as Gousmas do Treinador 2 foram derrotadas!\nTreinador 1 venceu!!\n");
            break;

        }

    	system("cls||clear");
    	turno = turno == 1 ? 2 : 1;
        printf("Treinador 1 ((1)Gousma 1: %d, (2)Gousma 2: %d)\n", p1_left, p1_right);
        printf("Treinador 2 ((3)Gousma 1: %d, (4)Gousma 2: %d)\n", p2_left, p2_right);
    } while (1);
	}

	}
	return 0;

}



                break;
            case 4:
                system("cls");
                printf("voce pediu para sair, prencione qualquer tecla para continuar\n");
                break;
            default:
                printf("voce deve escolher uma opcao valida\n");
                printf("Precione qualquer tecla para voltar ao menu\n");
                system("pause");
                goto inicio;
        }
    }while(opcao!=4);
    return 0;
}