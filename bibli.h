#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<fstream>
#include <ctype.h>
using namespace std; 
struct tabela{
	string token ;
	string lexema;
	string valor;
	int linha;
	int coluna;
	int ind;
}Tab[100000];

struct tabela2{
	string token1;
	string lexema1;
	string valor1;
	int linha1;
	int coluna1;
	int ind1;
}Tab2[10000];
typedef struct tabela T;


/*variaveis de Daniel*/

int linhaIn=0;
int contadorIn=0;

int labelPos=0;

int guardalinhawhile=0;
int  quantidadeIf=0;
int  quantidadeWhile=0;
int quantidadeElse=0;
int quantidadeRepeat=0;

int posVetorRe=0;
int vetorRe[5];

string codigoCopia[10000];

ofstream arquivoIn;
ofstream arquivoFn;




/*variaveis de Daniel*/

/*funcoes de Daniel*/

void expressao(int a);
void condicional(int a);
void condicionalElse (int a);
void while2 (int a);
void repeat2 (int a);
void until2(int a);
void all2(int a);

/*funcoes de Daniel*/

int indiceT=0;
int indiceT22=0;
int j=0;

int bs=1,bs2=0,ress,ress2;
int linha11=1,coluna11=0;
int ii11 =0;
int pos=0;
int expp1=0,expp2=0,expp3=0;
int cotA=0;
bool achaS;
string codigo[10000]; // do lectura;
string ssd[1000]; //para o all;
int iie=0;
int bs1=1,bs21=0,iie1=0;
string ssd1[1000]; // para a expressao ari;

int bs3=1, bs22=0, iie2=0;// para o atribuição;
string ssd2[1000]; // para o atribuição;

 int bs4=1,bs24=0,iie4=0;
string ssd4[1000]; // para a expressao ari2;

int ress3,ress33; // para a expresaso ari;
const int totalT = 34;


string Reservada[totalT];

string Variaveis[1000];
string Variaveis2[1000];
string GuardId[1000];
string guardI[1000],guardR[1000],guardS[1000],identifica[1000];
string fd,fd2,fd44,fd66,fd77;// guard o valor para ver se é um numero real atribuido a um inteiro;
string guardSS[1000]; // guarda o string na atribuição ;
int indiceSS=0 , indiceII=0 , indiceRR=0; // estao sendo usados na atribuição
int indiceV=0;
int indiceV2;
int totToken;
int contID=0;
int indiceD=0;
int indiceN=0;
int vetH[1000];
int vvv2 , vv6 , vv7 ,aux03=0 , aux04=0 , aux05=0;// usado na atribuição;
int indH=0,jk=0,dg=0,contS=0,contI=0; // jk e dg é para o erro sematico de tipos incomp
bool vf,fg,vvg;
bool veriR,veriS,veriI;
bool gh,vif=false; // vif para verificar no  if ;
bool ii,rr,ss;
void Total();
void func();

void CodigoIntermediario();
void menu();
void espaco(char reec[50]);
void expressaoAri2();
void expressaoAri();
void testAll();
void testIf();
void atribuicao();
void testRepeat();
void testWhile();
void comando(int Rest);
string follow(int lc);
void bloco();
void testeVa();
void testProgram();
void preenchetoken();
int buscatoken(string tokenentrada);
bool procuraID(string toki);
bool procuraNum(string token);
void meroo(int codEroo, string tok,int linn, int coluun);
void lectura();

void interator();


