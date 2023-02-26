
#include "bibli.h"
#include <cctype>
#include <algorithm>
#include <windows.h>
#include <vector>

using namespace std;  
 
int main(){
	system("cls"); 


     menu(); 
     
	system("pause");
	return 0;
}

void preenchetoken(){
	
	Reservada[1] = "begin";
	Reservada[2] = "end";
	Reservada[3] = "if"; 
	Reservada[4] = "then";
	Reservada[5] = "else";
	Reservada[6] = "while";
	Reservada[7] = "do";
	Reservada[8] = "until";
	Reservada[9] = "repeat";
	Reservada[10] = "integer";
	Reservada[11] = "real";
	Reservada[12] = "all";
	Reservada[13] = "and";
	Reservada[14] = "or";
	Reservada[15] = "string";
	Reservada[16] = "program";
	

	Reservada[17] = "<";
	Reservada[18] = ">";
	Reservada[19] = "<=";
	Reservada[20] = ">=";
	Reservada[21] = "=";
	Reservada[22] = "<>";
	
	Reservada[23] = "+";
	Reservada[24] = "-";
	Reservada[25] = "*";
	Reservada[26] = "/";

	Reservada[27] = "or";
	Reservada[28] = "and";
	
	Reservada[29] = ".";
	Reservada[30] = ",";
	Reservada[31] = ";";
	Reservada[32] = "(";
	Reservada[33] = ")";
	Reservada[34] = ":=";
	
}
	
void convert(string letter)
{
    for (int i = 0; i < letter.length(); i++)
    {
        char x = letter.at(i);
        cout << int(x) << endl;
        
    }
}
void espaco(char reec[50]){
	
	FILE *arquvivo;
	FILE *arquivo3;
	char aux[10000],aux2[10000];
	char c;
	int i=0;
	int cont2=0; // contador do aux2;
	bool po = false;
	char armazena[10000];
	char armazena2[10000];
	int indice1;
	int coluna44 =0, rrt=0,rrt2=0;
	char t;
	int aae=0;
	int jt=0;
	
	int cont=0; // conta os brancos;
	int coluna55=0;
	int pegaz;

	
	arquvivo = fopen(reec,"rt"); // caso de erro coloca arq2;
	
	do{
		c=fgetc(arquvivo);
	
	
			aux[i] = c;
			i++;
	//cout << c;		
		
	}while(c!= EOF);
	fclose(arquvivo);
	
	for(int a =0 ; a < i ; a++){
	  // printf("%c", aux[a])	;
	   
	   if(aux[a] == ';' ){
	   	aux2[cont2] = ' ' ;
	   	cont2++;
	   	aux2[cont2] = ';' ;
	   	cont2++;
	   	aux2[cont2] = ' ';
	   	cont2++;
	   	cont++;
	   	cont++;
	   }else if(aux[a] == '.'){
	   	
	   	if(aux[a-1]!= '0' && aux[a-1]!= '1' &&  aux[a-1]!='2' && aux[a-1]!='3' && aux[a-1]!='4' && aux[a-1]!='5' 
		   && aux[a-1]!='6' && aux[a-1]!='7' && aux[a-1]!='8' && aux[a-1]!='9' && aux[a+1] != '0' 
		   && aux[a+1] != '1' && aux[a+1] != '2' && aux[a+1] != '3' && aux[a+1] != '4' && aux[a+1] != '5'
		   && aux[a+1] != '6' && aux[a+1] != '7' && aux[a+1] != '8' && aux[a+1] != '9' ){
		   		aux2[cont2] = ' ' ;
	   	cont2++;
	   	aux2[cont2] = '.' ;
	   	cont2++;
	   	aux2[cont2] = ' ';
	   	cont2++;
	   	cont++;
	   	cont++;
		   }else if( aux[a-1] == '0' || aux[a-1] == '1' ||  aux[a-1]=='2' || aux[a-1]=='3' || aux[a-1]=='4' || aux[a-1]=='5' 
		   || aux[a-1]=='6' || aux[a-1]=='7' || aux[a-1]=='8' || aux[a-1]=='9' || aux[a+1] == '0' 
		   || aux[a+1] == '1' || aux[a+1] == '2' || aux[a+1] == '3' || aux[a+1] == '4' || aux[a+1] == '5'
		   || aux[a+1] == '6' || aux[a+1] == '7' || aux[a+1] == '8' || aux[a+1] == '9'){
		   	aux2[cont2] = '.';
		   	cont2++;
		   }
	   
	   }else if(aux[a]== '='){ // teste
	   	
	   	 if(aux[a-1] != ':' && aux[a-1] != '<' && aux[a-1]!= '>' ){
	   	 	
	    aux2[cont2] = ' ' ;
	   	cont2++;
	   	aux2[cont2] = '=' ;
	   	cont2++;
	   	aux2[cont2] = ' ';
	   	cont2++;
	   	cont++;
	   	cont++;
	   	
			}else if ( aux[a-1] == ':' || aux[a-1] == '<' || aux[a-1] == '>'){
		
		aux2[cont2] = '=' ;
	   	cont2++;
	   	aux2[cont2] = ' ';
	   	cont2++;
	   	cont++;
	   	
			}
		
	   }else if(aux[a] == '<'){  // teste
	   	
	   	    if(aux[a+1] != '>' && aux[a+1] != '='){
	   	    	aux2[cont2] = ' ' ;
	   	cont2++;
	   	aux2[cont2] = '<' ;
	   	cont2++;
	   	aux2[cont2] = ' ';
	   	cont2++;
	   	cont++;
	   	cont++;
			   }else if(aux[a+1] == '>' || aux[a+1] == '=' ){
		aux2[cont2] = ' ' ;
	   	cont2++;
	   	aux2[cont2] = '<';
	   	cont2++;
	   	cont++;
			   }
	   }else if(aux[a] == '>'){  // teste
	   	
	   	if(aux[a-1] != '<' && aux[a+1] !='='){
	   	aux2[cont2] = ' ' ;
	   	cont2++;
	   	aux2[cont2] = '>' ;
	   	cont2++;
	   	aux2[cont2] = ' ';
	   	cont2++;
	   	cont++;
	   	cont++;
	    }else if(aux[a-1] == '<' ){
	    aux2[cont2] = '>' ;
	   	cont2++;
	   	aux2[cont2] = ' ';
	   	cont2++;
	   	cont++;	
		}else if(aux[a+1] == '='){
		aux2[cont2] = ' ' ;
	   	cont2++;
	   	aux2[cont2] = '>';
	   	cont2++;
	   	cont++;
		}
	   	
	   }else if(aux[a] == ':'){  // teste
	   	
	   	if(aux[a+1] == '='){
	   	aux2[cont2] = ' ' ;
	   	cont2++;
	   	aux2[cont2] = ':';
	   	cont2++;
	   	cont++;
		   }
	   	
	   }else if(aux[a] == ','){
	   		aux2[cont2] = ' ' ;
	   	cont2++;
	   	aux2[cont2] = ',' ;
	   	cont2++;
	   	aux2[cont2] = ' ';
	   	cont2++;
	   	cont++;
	   	cont++;
	   }else if(aux[a] == '('){
	   		aux2[cont2] = ' ' ;
	   	cont2++;
	   	aux2[cont2] = '(' ;
	   	cont2++;
	   	aux2[cont2] = ' ';
	   	cont2++;
	   	cont++;
	   	cont++;
	   }else if(aux[a] == ')'){
	   		aux2[cont2] = ' ' ;
	   	cont2++;
	   	aux2[cont2] = ')' ;
	   	cont2++;
	   	aux2[cont2] = ' ';
	   	cont2++;
	   	cont++;
	   	cont++;
	   }else if(aux[a] == '+'){
	   	aux2[cont2] = ' ' ;
	   	cont2++;
	   	aux2[cont2] = '+' ;
	   	cont2++;
	   	aux2[cont2] = ' ';
	   	cont2++;
	   	cont++;
	   	cont++;
	   }else if(aux[a] == '-'){
	   		aux2[cont2] = ' ' ;
	   	cont2++;
	   	aux2[cont2] = '-' ;
	   	cont2++;
	   	aux2[cont2] = ' ';
	   	cont2++;
	   	cont++;
	   	cont++;
	   }else if (aux[a] == '*'){
	   		aux2[cont2] = ' ' ;
	   	cont2++;
	   	aux2[cont2] = '*' ;
	   	cont2++;
	   	aux2[cont2] = ' ';
	   	cont2++;
	   	cont++;
	   	cont++;
	   }else if(aux[a] == '/'){
	   		aux2[cont2] = ' ' ;
	   	cont2++;
	   	aux2[cont2] = '/' ;
	   	cont2++;
	   	aux2[cont2] = ' ';
	   	cont2++;
	   	cont++;
	   	cont++;
	   }else {
	   	aux2[cont2] = aux[a];
	   	cont2++;
	   }
	   
	   cont++;
	}
	
	printf("\n-------------------------------------\n");
	arquvivo = fopen("arq2.txt","wt");
	for(int z=0; z < cont-1 ; z++){
		printf("%c",aux2[z]);
		fputc(aux2[z],arquvivo);
	
	}
	fclose(arquvivo);
	
	arquvivo = fopen("arq2.txt","rt");	

do{
		c=fgetc(arquvivo);
		armazena[jt] = c;
		
		if(c== '\n'){
			rrt2++;
		}
		jt++;
		
}while(c!= EOF);
fclose(arquvivo);



for(int z=0 ; z < jt ; z++){
  coluna44++;
   if(armazena[z] == '{' ){
   	
   	indice1 = z ;
   	indice1++;
   	po = true;
    
     
 	
   }
   
   if(armazena[z] == '}'){
   	pegaz=z;
   	  if(armazena[pegaz + 1] == '}' || armazena[pegaz + 2] == '}' || armazena[pegaz + 3]== '}' 
		 || armazena[pegaz + 4 ]== '}' || armazena[pegaz + 5]== '}'  || armazena[pegaz + 6]== '}'){
   	  	meroo(13,"}",rrt,coluna55);
		 }
   }
   	 
   if(armazena[z] =='\n'){
   	rrt++;
   	coluna55 =0;
   }
   coluna55++;
   if(po == true){
  
   	if(armazena[indice1] != '}' ){
  
   		armazena[indice1] = ' ' ;
   		indice1++;
   		
   		  if(armazena[indice1] == EOF){
	   	
	   		//printf("\n linha %d\n coluna %d\n",rrt,coluna);
	   		meroo(12,"Eof" , rrt2,1);
	   }
	   
	   } 
	  
	   
   } 
 
    
   
}



for(int b=0; b < jt ; b++){
	
	if(armazena[b] == '{' || armazena[b] == '}'){
		armazena[b] = ' ' ;
	}
	//printf("%c", armazena[b]);
}


	arquivo3 = fopen("arq3.txt","wt");
	for(int t=0; t < jt-1 ; t++){
		//printf("%c",armazena[t]);
		fputc(armazena[t],arquivo3);
	
	}
	fclose(arquivo3);
	
}

void func(){
	
	
	
	
	//cout << vet[3] << endl;
	
	string cp11;
	
//	cp = vet[0];
	


	 
	 FILE *file11;
	int cont11=0,delta=0;
	int i33,contt11=0;
	int contaD=0;
	int zzt=0;
	char novo[30];
	char teste[30];
	
	
//	int vet[100];
	char c11,x44;
	
	
	//char xx[Var.length()];

	
		
		 
	/*	for ( ii = 0; ii < Var.length(); ii++) {
    //	 cout << ii << endl;
          xx[ii] = Var.at(ii);
         // cout << xx[ii] << endl;
          }*/


	file11=fopen("arq3.txt","r");
	
	//printf ("digite o nome que tu quer achar:\n");
	//scanf ("%s",teste);
		
		for (i33=0;i33<30;i33++){
			novo[i33]=' ';
		}
		
		//printf("%c",novo);
		i33=0;
		c11 = fgetc(file11);
		
		 do {		
			coluna11++;
		//	printf("%d ",coluna);
		
			if ((c11 =='\n' ) || (c11 == EOF) ){
		 	
				//	cout << strlen(xx) << endl;
				
				if (codigo[pos].length()>1){
					
					char xx[codigo[pos].length()];
					char nova2[codigo[pos].length()];
					
					for ( ii11 = 0; ii11 < codigo[pos].length(); ii11++) {
    					//	 cout << ii << endl;
          				xx[ii11] = codigo[pos].at(ii11);
         				// cout << xx[ii] << endl;
          			}
					  
					 
          			for(ii11=0; ii11<codigo[pos].length();ii11++){
          				nova2[ii11]=novo[ii11];
				  	}
				  	ii11=0;
				  	
				  	//cout << vet[pos] << endl;
					if (strncmp(xx,nova2,codigo[pos].length())==0){
						Tab[zzt].linha = linha11;
						Tab[zzt].coluna =coluna11-codigo[pos].length();
						zzt++;
						//printf("entre string\n");	
						//cont++;
						//cout <<  vet[pos].length() << endl;
						contaD++;
						//cout <<  codigo[pos] << endl;
						//printf("linha: %d, Coluna: %d \n",linha11,coluna11-codigo[pos].length());
						pos++;
						//printf("pos que ira rodar: %d\n",pos);
					}	  
						
				}else{
					
					char xx;
					char nova2;
					xx= codigo[pos].at(0);
					nova2 =novo[0];
					
					//cout << vet[pos] << endl;	
					if (xx==nova2){
						//printf("entre char\n");	
						contaD++;
						Tab[zzt].linha = linha11;
						Tab[zzt].coluna =coluna11-codigo[pos].length();
						zzt++;
						//cout <<  codigo[pos] << endl;
						//printf("linha: %d, Coluna: %d \n",linha11,coluna11-codigo[pos].length());
						pos++;
						
					}
				}
				
          			
          			
				
				ii11=0;
				  	
          			//printf ("%c",nova2);
          			
					
					
					coluna11=0;
					linha11++;
					
					for (i33=0;i33<30;i33++){
						novo[i33]=' ';
					}
					
					i33=0;
			
			}else if ((c11 ==' ' )|| (c11 == EOF) || (c11 == '\t')){
				
				//cout << strlen(xx) << endl;
				if(codigo[pos].length()>1){
					
					char xx1[codigo[pos].length()];
					char nova22[codigo[pos].length()];
				
					for ( ii11 = 0; ii11 < codigo[pos].length(); ii11++) {
    				
						//	 cout << ii << endl;
          				xx1[ii11] = codigo[pos].at(ii11);
         				// cout << xx[ii] << endl;
          			}
          			
          			for(ii11=0; ii11<codigo[pos].length();ii11++){
          			
					  nova22[ii11]=novo[ii11];
					}
				  
					ii11=0;
					
					//cout << vet[pos] << endl;					
					if (strncmp(xx1,nova22,codigo[pos].length())==0){
						Tab[zzt].linha = linha11;
						Tab[zzt].coluna =coluna11-codigo[pos].length();
						zzt++;
						contaD++;
						//printf ("espaco string\n");	
						cont11++;
						//cout <<  vet[pos].length() << endl;
					//	cout <<  codigo[pos] << endl;
					//	printf("linha: %d, Coluna: %d \n",linha11,coluna11-codigo[pos].length());
						pos++;
						//printf("pos que ira rodar: %d\n",pos);
						
					}
          			
					  	
				}else{
					
					char xx1;
					char nova22;
					
					nova22=novo[0];
					xx1=codigo[pos].at(0);
					
					//cout << vet[pos] << endl;
					if (xx1==nova22){
						Tab[zzt].linha = linha11;
						Tab[zzt].coluna =coluna11-codigo[pos].length();
						zzt++;
							contaD++;
						//printf ("espaco char\n");	
					//	cout <<  codigo[pos] << endl;
						//printf("linha: %d, Coluna: %d \n",linha11,coluna11-codigo[pos].length());
						pos++;	
					}
					
					
				}
				
          			
          		
				  
				i33=0;
				//printf ("oi");
											

					
					for (i33=0;i33<30;i33++){
						novo[i33]=' ';
					}	
					
					i33=0;
					
			}else{
				
				novo[i33]=c11;
			
				
				//printf ("%d ",strlen(nova2));
				//printf ("%d ",strlen(teste));
				//printf("%s \n",nova2);
				
				i33++;
				delta=0;
				
			} 

	//	printf("%c",c);			
		c11 = fgetc(file11);
				contt11++;	
		}while (pos < j-1 );
	
	fclose(file11);
//	cout << contaD << endl;
	
	
}

void menu(){
		int df;
		
	
		//memset(Tab2, 0, sizeof(Tab2));
	do{
		cout << "digite 1 para ler  o arquivo e 0 para Sair  ";
		cin >> df;
		
		if (df == 0){
			exit(0);
		}
		if(df == 1){
			
			
			/*variavel daniel*/
				
				linhaIn=0;
				contadorIn=0;
				
				labelPos=0;
				
				guardalinhawhile=0;
				posVetorRe=0;
				vetorRe[0]=0;
				vetorRe[1]=0;
				vetorRe[2]=0;
				vetorRe[3]=0;
				vetorRe[4]=0;
	 		    
	 		    
				quantidadeIf=0;
				quantidadeWhile=0;
				quantidadeElse=0;
				quantidadeRepeat=0;
				
				
			/*variavel daniel*/	
			
			memset(Tab, 0, sizeof(Tab));
			 indiceT=0;
 indiceT22=0;
 j=0;

 bs=1,bs2=0;
 linha11=1,coluna11=0;
 ii11 =0;
 pos=0;
 expp1=0,expp2=0,expp3=0;
 cotA=0;
 iie=0;
 bs1=1,bs21=0,iie1=0;


 bs3=1, bs22=0, iie2=0;// para o atribuição;


  bs4=1,bs24=0,iie4=0;

 indiceSS=0 , indiceII=0 , indiceRR=0; // estao sendo usados na atribuição
 indiceV=0;
 contID=0;
 indiceD=0;
 indiceN=0;
 aux03=0 , aux04=0 , aux05=0;// usado na atribuição;
 indH=0,jk=0,dg=0,contS=0,contI=0; // jk e dg é para o erro sematico de tipos incomp
			lectura();
		}
		
	}while(df!=0);
	

}

void CodigoIntermediario(){
	int contIn=0;
 
	
	bool ativoIf=false;
	bool ativoWhile=false;
	bool ativoElse=false;
	bool ativoRepeat=false;
	
	bool printaLabel=false;
	
	while(contadorIn<j-1){
		
		if(codigo[contadorIn] == ":=" ){//expressao
			
			if (codigo[contadorIn] ==":=" && (ativoIf == true || ativoWhile == true || ativoElse==true || ativoRepeat==true )){
				
				printaLabel = true;
			}
				
			expressao(contadorIn);
		}
		
		if (codigo[contadorIn] == "all"){//all
			
			if (codigo[contadorIn] =="all" && (ativoIf == true || ativoWhile == true || ativoElse==true || ativoRepeat==true )){
				
				printaLabel = true;
			}
			
			all2(contadorIn);
		}
		
		if (quantidadeIf == 0 and ativoIf == true  and printaLabel == true){
				
				linhaIn++;
				cout << linhaIn<< "  :  " << "label" << labelPos-1 << endl;
				arquivoIn <<linhaIn<< " : " << " label" << labelPos-1 << endl;
				
				arquivoFn <<"LABEL"<<labelPos-1<<endl;
				ativoIf=false;
				printaLabel=false;
		}
		
		if (quantidadeElse == 0 and ativoElse == true  and printaLabel == true){
				
				//linhaIn++;
				//cout << linhaIn<< "  =  " << "label" << labelPos-1 << endl;
				
				ativoElse=false;
				printaLabel=false;
		}
		
		if (quantidadeWhile == 0 and  ativoWhile == true  and printaLabel == true){
				
				linhaIn++;
				cout << linhaIn<< "  :  " << "label" << labelPos-1 << endl;
				arquivoIn << linhaIn<< " : "  << "label" << labelPos-1 << endl;
				
				arquivoFn <<"LABEL"<<labelPos-1<<endl;
				
				ativoWhile=false;
				printaLabel=false;
		}
		
		if (quantidadeRepeat == 0 and ativoRepeat == true  and printaLabel == true){
			
			ativoRepeat=false;
			printaLabel=false;
		}
		
		if (codigo[contadorIn] == "if"){
			
				
			ativoIf=true;
			ativoWhile=false;
			ativoElse=false;
			ativoRepeat=false;
			
			condicional(contadorIn);
			
		
		
		}//logicaif
		
		/**************** LOGICA ELSE ***********/////////
		if (codigo[contadorIn] == "else"){
			
			ativoElse=true;
			ativoWhile=false;
			ativoIf-false;
			ativoRepeat=false;
			
			condicionalElse (contadorIn);
		}//logica else
		
		/**************** FIM  LOGICA ELSE ***********/////////
		/*************** LOGICA WHILE  ****************/
		if (codigo[contadorIn]== "while"){
			
			ativoIf=false;
			ativoWhile=true;
			ativoElse=false;
			ativoRepeat=false;
			
			while2(contadorIn);
			
		}//logica while
		
		/*************** FIM LOGICA WHILE  ****************/
		
		/***************** CHAMADA REPEAT******************/
		if (codigo[contadorIn]== "repeat"){	
			
			ativoRepeat=true;
			ativoIf=false;
			ativoWhile=false;
			ativoElse=false;
			
			repeat2(contadorIn);
		}
		
		/*****************FIM  CHAMADA REPEAT******************/
		
		/***************** CHAMADA UNTIL **********************/
		if (codigo[contadorIn] == "until"){
			
			until2(contadorIn);
		}
		
		/****************** LOGICA DOS ENDS **************////////////
		if (codigo[contadorIn]=="end" && ((contadorIn != j-3) && (contadorIn != j-5))){
	
			int auxEnd =contadorIn;
			
			voltar:
			while (codigo[auxEnd] != "if" && codigo[auxEnd] != "while" && codigo[auxEnd] != "else" && codigo[auxEnd] != "repeat"){
			 		
					 auxEnd--;
			 }
			 
	/******************** LOGICA END IF *********************////////
			if (codigo [auxEnd] == "if" && quantidadeIf>0){
				
				linhaIn++;
				cout << linhaIn<< " :" << "label " << labelPos-1 << endl;
				arquivoIn << linhaIn<< " : " << " label " << labelPos-1 << endl;
				arquivoFn <<"LABEL"<<labelPos-1<<endl;
				quantidadeIf--;
				ativoIf=false;
							 	
			}else if (codigo [auxEnd] == "if" && quantidadeIf==0){
				
				auxEnd--;
				goto voltar;
			}
			
			
			/******************** LOGICA END ELSE *********************////////		
			if (codigo[auxEnd] == "else" && quantidadeElse >0){
				
				quantidadeElse--;
				ativoElse=false;
				
			}else if (codigo[auxEnd] == "else" && quantidadeElse ==0){
				
				auxEnd--;
				goto voltar;
			} 
			
			/******************** LOGICA END WHILE *********************////////
			if (codigo[auxEnd] == "while" && quantidadeWhile>0){
				
				linhaIn++;
				labelPos--;
				cout << linhaIn<< " :" << " goto" << guardalinhawhile << endl;
				arquivoIn << linhaIn<< " : " << " goto " << guardalinhawhile << endl;
				
				linhaIn++;
				cout << linhaIn << " :" << " label" << labelPos << endl;
				arquivoIn << linhaIn<< " : " << " label " << labelPos << endl;
				
				arquivoFn <<"LABEL"<<labelPos-1<<endl;
				
				quantidadeWhile--;
				ativoWhile=false;
			
			}else if(codigo[auxEnd] == "while" && quantidadeWhile==0){
				
				auxEnd--;
				goto voltar;				
			}
			/******************** FIM LOGICA END WHILE *********************////////
			
			/******************** LOGICA END REPEAT *********************////////
			if (codigo[auxEnd] == "repeat" && quantidadeRepeat>0){
				
				quantidadeRepeat--;
				ativoRepeat=false;
				
			}else if(codigo[auxEnd] == "repeat" && quantidadeRepeat==0){
				
				auxEnd--;
				goto voltar;
			}
		
		}
		
		contadorIn++;
		
	}
		
}//finalcodigointermediario

void condicional(int a){
	
	string vetorExp[50];
	int b=a;
	int c=0;
	int quanPare=0;
	int primeiroPa=0;
	int ultimoPa;
	bool temEnd = false;

	primeiroPa=0;
		
	while(codigo[b+1] != ";"){
	
		vetorExp[c] = codigo[b+1];
		b++;
		c++;
	
	}//final codigo[b+1] != ";"
	//contadorIn=b+1;
	ultimoPa=b;
	
	int contCond=0;
	int posOp[10];
	int quantOp=0;
	int posEO[10];
	int quantEO=0;
	
	while (vetorExp[contCond] != "then"){
		
		if (vetorExp[contCond]== ">" || vetorExp[contCond]== "<" || vetorExp[contCond]== ">=" || 
		vetorExp[contCond]== "<=" || vetorExp[contCond] == "=" || vetorExp[contCond] =="<>"){
			
			posOp[quantOp]=contCond;
			quantOp++;	
		}//final if de todos operadores
		
		if (vetorExp[contCond]== "or" || vetorExp[contCond]== "and"){
			
			posEO[quantEO]=contCond;
			quantEO++;
			
		}//vetorExp[contCond]== "or" || vetorExp[contCond]== "and"
		
		contCond++;
	}//vetorExp[contCond] != "then"
	
	if (vetorExp[contCond+1] == "begin"){
		
		temEnd=true;
		quantidadeIf++;
		
		
	}else{
		
		temEnd=false;
		
	}
	
	int finalT =contCond;
	
	
		
	if (quantEO== 0){
	
		linhaIn++;
		cout<<linhaIn << " :"<< " temp1 :=" <<" " <<vetorExp[posOp[0]-1] <<" " << " "<< vetorExp[posOp[0]] << " "<< vetorExp[posOp[0]+1] << endl;
		arquivoIn<<linhaIn << " :"<< " temp1 :=" <<" " <<vetorExp[posOp[0]-1] <<" "<< vetorExp[posOp[0]] << " "<< vetorExp[posOp[0]+1] << endl;		
		arquivoFn << "COPY" <<" "<< vetorExp[posOp[0]+1] << " TEMP1 "<<"\n"<< vetorExp[posOp[0]] <<" "<< vetorExp[posOp[0]-1]<<" TEMP1" << endl;
		
		linhaIn++;
		cout<<linhaIn << " :" << "if not temp1 goto label"<< labelPos <<endl;
		arquivoIn<<linhaIn << " : " << "if not temp1 goto label"<< labelPos <<endl;
		arquivoFn <<"COPY NOT TEMP1"<< endl;
		arquivoFn <<"CMP TEMP1"<<endl;
		arquivoFn <<"JNZ LABEL"<<labelPos <<endl;
		labelPos++;
		
		if (temEnd==true){
			//linhaIn++;
			//cout << "Begin" << endl;	
		}
		
		
	}//quantEO== 0
	
	if (quantEO ==1){
	
		linhaIn++;
		cout<<linhaIn << " :"<< " temp1 :=" << " "<<vetorExp[posOp[0]-1] <<" " << vetorExp[posOp[0]] << " "<< vetorExp[posOp[0]+1] << endl;
			
		arquivoIn<<linhaIn << " :"<< " temp1 :=" <<" "<<vetorExp[posOp[0]-1] <<" " << vetorExp[posOp[0]] << " "<< vetorExp[posOp[0]+1] << endl;
			
		arquivoFn << "COPY" <<" "<< vetorExp[posOp[0]+1] << " TEMP1 "<<"\n"<< vetorExp[posOp[0]] << " "<< vetorExp[posOp[0]-1] <<" TEMP1"<< endl;
		
		linhaIn++;
		cout<<linhaIn << " :"<< " temp2 :=" << vetorExp[posOp[1]-1]  << vetorExp[posOp[1]] << vetorExp[posOp[1]+1] << endl;
		arquivoIn<<linhaIn << " :" << " temp2 :=" << " "<<vetorExp[posOp[1]-1] <<" " << vetorExp[posOp[1]] <<" "<< vetorExp[posOp[1]+1] << endl;
		
		arquivoFn << "COPY" <<" "<< vetorExp[posOp[1]+1] << " TEMP2 "<<"\n"<< vetorExp[posOp[1]] <<" "<< vetorExp[posOp[1]-1] <<" TEMP2"<< endl;
		
		linhaIn++;
		cout<<linhaIn << " :"<< " temp1 := temp1" <<" "<< vetorExp[posEO[0]]  << " temp2" << endl;
		
		arquivoIn<<linhaIn << " :"<< " temp1 := temp1" <<" "<< vetorExp[posEO[0]]  << " temp2" << endl;
		
		arquivoFn << vetorExp[posEO[0]] <<" "<< " TEMP2" << " TEMP1"<<endl;
	
		
				
		linhaIn++;
		cout<<linhaIn << " :" << "if not temp1 goto label"<<labelPos <<endl;
		arquivoIn<<linhaIn << " :" << " if not temp1 goto label"<<labelPos <<endl;
		
		arquivoFn << "COPY NOT TEMP1" << endl;
		arquivoFn << "CMP TEMP1" << endl;
		arquivoFn << "JNZ LABEL"<<labelPos<<endl;
		labelPos++;
		
		

		
	}//quantEO ==1
	
	int indiceTemp=1;
	contCond=0;
	
	if (quantEO >= 2){
		
		int chave1=1;
		int chave2=0;
		int posTemp=1;
		int ultimoTemp=3;
		int parede=0;
		int valor =2;
		
		while (vetorExp[contCond] != "then"){
		 
		 	if (chave1 <= valor ){
		 		
				 	
				if (vetorExp[contCond]== ">" || vetorExp[contCond]== "<" || vetorExp[contCond]== ">=" || 
				vetorExp[contCond]== "<=" || vetorExp[contCond] == "=" || vetorExp[contCond] =="<>"){
					
					if (chave1==2){
						valor--;
					}
					linhaIn++;
					cout<< linhaIn << " :" << " temp" << posTemp << " := " << vetorExp[contCond-1 ] <<" " << vetorExp[contCond] <<" " << vetorExp[contCond+1] << endl;
					arquivoIn<< linhaIn << " :" << " temp" << posTemp << " := " << vetorExp[contCond-1 ] <<" " << vetorExp[contCond] <<" " << vetorExp[contCond+1] << endl;					
					
					arquivoFn << "COPY" << vetorExp[contCond+1] << " TEMP"<<posTemp<<"\n"<< vetorExp[contCond] <<" "<<  vetorExp[contCond-1] <<" TEMP"<<posTemp<< endl;
					//vetorExp[contCond-1] = "Temp"+std::to_string(posTemp);
					//vetorExp[contCond+1] = "Temp"+std::to_string(posTemp);
					vetorExp[contCond] = "Temp"+std::to_string(posTemp);
					quantOp--;
					
					contCond=0;				
				
				
					/*for (int iM =0; iM< finalT; iM++){
						
						if (vetorExp[iM] == "Temp"+std::to_string(ultimoTemp)){
						
							vetorExp[iM] = "Temp"+std::to_string(posTemp);
						
						}	
					}*/
													
					if(posTemp< 2){
						
						ultimoTemp=posTemp;
						posTemp++;
				
					}else{
						
						ultimoTemp=posTemp;
						posTemp =1;
				
					}
				
					chave1++;
						
				}//final tipos de operadores
		
			}  
			
			if (chave1>valor|| quantOp==0  ){
		 	
				int proxDir =0;
		 		int proxEsq =0;
		 		int porta= 0;
		 	
		 	
 		 	
 		 		//if (quantOp ==0){
 		 		
				//	  quantOp++;
			  	//}
			  
		   		if (vetorExp[contCond]== "or" || vetorExp[contCond]== "and"){
				
					chave1=1;
					int atual = contCond;
					quantEO--;
					porta=0;
				
					while (porta == 0  ){
					
						if (vetorExp[contCond] == "Temp1" || vetorExp[contCond] == "Temp2" || vetorExp[contCond] == "Temp3"){
						
							proxDir=contCond;
							porta=1;
						}
					
						contCond++;
					}
				
					contCond=atual;
					porta=0;
					
					while (porta == 0  ){
					
						if (vetorExp[contCond] == "Temp1" || vetorExp[contCond] == "Temp2" || vetorExp[contCond] == "Temp3"){
						
							proxEsq=contCond;
							porta=1;
						}
					
						contCond--;
					}
				
					linhaIn++;
					cout<< linhaIn << " :" << "temp1 := " <<  " " << vetorExp[proxEsq] <<" " <<  vetorExp[atual] <<" " <<  vetorExp[proxDir] << endl;
					arquivoIn<< linhaIn << " : " << "temp1 := " <<  " " << vetorExp[proxEsq] <<" " <<  vetorExp[atual] <<" " <<  vetorExp[proxDir] << endl;
					
					arquivoFn << vetorExp[atual]<<" "<<"TEMP2 TEMP1"<<endl;
					vetorExp[proxEsq]="Temp"+std::to_string(posTemp);
					vetorExp[proxDir]="Temp"+std::to_string(posTemp);
					vetorExp[atual]="Temp"+std::to_string(posTemp);
				
					if(posTemp< 2){
						
						ultimoTemp=posTemp;
						posTemp++;
				
					}else{
						
						ultimoTemp=posTemp;
						posTemp =1;
				
					}
				
				
					if (quantOp==0 && parede==0){
					
						//linhaIn++;
						//cout<<linhaIn << "  =  " << "if not temp"<< ultimoTemp <<" goto" <<endl;
					
						//linhaIn++;
						//cout<<linhaIn << "  =  " <<"Begin"<< endl;
				
						//parede++;
					
					
						if (quantOp==0){
					
							quantOp++;
						}
					
		
					}
				
					
					contCond=0;
				
				}
			
			}
		
				

		
			
			contCond++;	
			
		}
		
		linhaIn++;
		cout<<linhaIn << " : " << " if not temp1 goto label"<< labelPos <<endl;
		arquivoIn<<linhaIn << " : " << " if not temp1 goto label"<<labelPos <<endl;
		
		
		arquivoFn <<" COPY NOT TEMP1"<<endl;
		arquivoFn  <<"CMP TEMP1"<<endl;
		arquivoFn <<"JNZ LABEL"<<labelPos<<endl;
		labelPos++;
		
		
		
		
	} 

	
}//finalcondicinal

void condicionalElse (int a){
	
	bool temEnd =false;
	
	if (codigo[a+1] == "begin"){
		
		temEnd =true;
		quantidadeElse++;
	}else{
		
		temEnd =false;
	}
	
	linhaIn++;
	cout << linhaIn << " :" << " else" << endl;
	arquivoIn << linhaIn <<  " :" << " else " << endl;
	if (temEnd == true){
	
		//linhaIn++;
		//cout << linhaIn << "  =  " <<  "begin" << endl;		
	}		

			
		
		
	
}//finalconidcionalELse

void while2(int a){
	
	string vetorExp[100];
	int b=a;
	int c=0;
	int quanPare=0;
	int primeiroPa=0;
	int ultimoPa;

	primeiroPa=0;
		
	while(codigo[b+1] != ";"){
	
		vetorExp[c] = codigo[b+1];
		b++;
		c++;
	
	}//final codigo[b+1] != ";"
	//contadorIn=b+1;
	ultimoPa=b;
	
	int contCond=0;
	int posOp[10];
	int quantOp=0;
	int posEO[10];
	int quantEO=0;
	bool temEnd =false;
	
	while (vetorExp[contCond] != "do"){
		
		if (vetorExp[contCond]== ">" || vetorExp[contCond]== "<" || vetorExp[contCond]== ">=" || 
		vetorExp[contCond]== "<=" || vetorExp[contCond] == "=" || vetorExp[contCond] =="<>"){
			
			posOp[quantOp]=contCond;
			quantOp++;	
		}//final if de todos operadores
		
		if (vetorExp[contCond]== "or" || vetorExp[contCond]== "and"){
			
			posEO[quantEO]=contCond;
			quantEO++;
			
		}//vetorExp[contCond]== "or" || vetorExp[contCond]== "and"
		
		contCond++;
	}//vetorExp[contCond] != "do"
	
	int finalT =contCond;
	if (vetorExp[contCond+1] == "begin"){
		
		temEnd= true;
		quantidadeWhile++;
		
		
	}else{
		
		temEnd=false;
		
	}
	
		
	if (quantEO== 0){
	
		linhaIn++;
		cout<<linhaIn << " :"<< " temp1 =" <<" " <<  vetorExp[posOp[0]-1]  <<" " <<  vetorExp[posOp[0]] <<" " <<  vetorExp[posOp[0]+1] <<" " <<  endl;
		arquivoIn<<linhaIn << " :"<< " temp1 =" <<" " <<  vetorExp[posOp[0]-1]  <<" " <<  vetorExp[posOp[0]] <<" " <<  vetorExp[posOp[0]+1] <<" " <<  endl;
		
		arquivoFn <<"COPY "<<vetorExp[posOp[0]+1]<<" TEMP1"<<endl;
		arquivoFn<< vetorExp[posOp[0]]<<" "<<vetorExp[posOp[0]-1]<<" TEMP1"<<endl;
		
		guardalinhawhile=linhaIn;
		linhaIn++;
		cout<<linhaIn << " :" << " if not temp1 goto label "<< labelPos <<endl;
		arquivoIn<<linhaIn << " :" << " if not temp1 goto label "<< labelPos <<endl;
		
		arquivoFn<<"COPY NOT TEMP1"<<endl;
		arquivoFn<<"CMP TEMP1"<<endl;
		arquivoFn<<"JNZ LABEL"<<labelPos<<endl;
		labelPos++;
		
		
		
		
	}//quantEO== 0
	
	if (quantEO ==1){
	
		linhaIn++;
		cout<<linhaIn << " :"<< " temp1 =" << " " << vetorExp[posOp[0]-1]  << " " << vetorExp[posOp[0]] <<" " <<  vetorExp[posOp[0]+1] << endl;	
		arquivoIn<<linhaIn << " :"<< " temp1 =" << " " << vetorExp[posOp[0]-1]  << " " << vetorExp[posOp[0]] <<" " <<  vetorExp[posOp[0]+1] << endl;	
		
		arquivoFn <<"COPY "<<vetorExp[posOp[0]+1]<<" TEMP1"<<endl;
		arquivoFn<< vetorExp[posOp[0]]<<" "<<vetorExp[posOp[0]-1]<<" TEMP1"<<endl;
		
		linhaIn++;
		cout<<linhaIn << " :"<< " temp2 =" <<" " <<  vetorExp[posOp[1]-1]  <<" " <<  vetorExp[posOp[1]] <<" " <<  vetorExp[posOp[1]+1] << endl;
		arquivoIn<<linhaIn << " :"<< " temp2 =" <<" " <<  vetorExp[posOp[1]-1]  <<" " <<  vetorExp[posOp[1]] <<" " <<  vetorExp[posOp[1]+1] << endl;
		
		arquivoFn <<"COPY "<<vetorExp[posOp[1]+1]<<" TEMP2"<<endl;
		arquivoFn<< vetorExp[posOp[1]]<<" "<<vetorExp[posOp[1]-1]<<" TEMP2"<<endl;
		
		linhaIn++;
		cout<<linhaIn << " :"<< " temp1 = temp1" <<" " <<  vetorExp[posEO[0]]  << " temp2" << endl;
		arquivoIn<<linhaIn << " :"<< " temp1 = temp1" <<" " <<  vetorExp[posEO[0]]  << " temp2" << endl;
		
		arquivoFn<<vetorExp[posEO[0]]<<" TEMP2 TEMP1"<<endl;
		guardalinhawhile=linhaIn;
		
		
		linhaIn++;
		cout<<linhaIn << " :" << " if not temp1 goto label"<<labelPos <<endl;
		arquivoIn<<linhaIn << " :" << " if not temp1 goto label"<<labelPos <<endl;
		
		arquivoFn<<"COPY NOT TEMP1"<<endl;
		arquivoFn<<"CMP TEMP1"<<endl;
		arquivoFn<<"JNZ LABEL"<<labelPos<<endl;
		labelPos++;
		
		
		
		
	}//quantEO ==1
	
	int indiceTemp=1;
	contCond=0;
	
	if (quantEO >= 2){
		
		int chave1=1;
		int chave2=0;
		int posTemp=1;
		int ultimoTemp=3;
		int parede=0;
		int valor =2;
		
		while (vetorExp[contCond] != "do"){
		 
		 	if (chave1 <= valor ){
		 		
				 	
				if (vetorExp[contCond]== ">" || vetorExp[contCond]== "<" || vetorExp[contCond]== ">=" || 
				vetorExp[contCond]== "<=" || vetorExp[contCond] == "=" || vetorExp[contCond] =="<>"){
					
					if (chave1==2){
						valor--;
					}
					linhaIn++;
					cout<< linhaIn << " :" << " temp" << posTemp << " =" <<" " <<  vetorExp[contCond-1 ] <<" " <<  vetorExp[contCond] <<" " <<  vetorExp[contCond+1] << endl;
					arquivoIn<< linhaIn << " :" << " temp" << posTemp << " = " <<" " <<  vetorExp[contCond-1 ] <<" " <<  vetorExp[contCond] <<" " <<  vetorExp[contCond+1] << endl;
					
					arquivoFn <<"COPY "<<vetorExp[contCond+1]<<" TEMP"<<posTemp<<endl;
					arquivoFn<< vetorExp[contCond]<<" "<<vetorExp[contCond-1]<<" TEMP"<<posTemp<<endl;
					//vetorExp[contCond-1] = "Temp"+std::to_string(posTemp);
					//vetorExp[contCond+1] = "Temp"+std::to_string(posTemp);
					vetorExp[contCond] = "Temp"+std::to_string(posTemp);
					quantOp--;
					
					contCond=0;				
				
				
					/*for (int iM =0; iM< finalT; iM++){
						
						if (vetorExp[iM] == "Temp"+std::to_string(ultimoTemp)){
						
							vetorExp[iM] = "Temp"+std::to_string(posTemp);
						
						}	
					}*/
													
					if(posTemp< 2){
						
						ultimoTemp=posTemp;
						posTemp++;
				
					}else{
						
						ultimoTemp=posTemp;
						posTemp =1;
				
					}
				
					chave1++;
						
				}//final tipos de operadores
		
			}  
			
			if (chave1>valor|| quantOp==0  ){
		 	
				int proxDir =0;
		 		int proxEsq =0;
		 		int porta= 0;
		 	
		 	
 		 	
 		 		//if (quantOp ==0){
 		 		
				//	  quantOp++;
			  	//}
			  
		   		if (vetorExp[contCond]== "or" || vetorExp[contCond]== "and"){
				
					chave1=1;
					int atual = contCond;
					quantEO--;
					porta=0;
				
					while (porta == 0  ){
					
						if (vetorExp[contCond] == "Temp1" || vetorExp[contCond] == "Temp2" || vetorExp[contCond] == "Temp3"){
						
							proxDir=contCond;
							porta=1;
						}
					
						contCond++;
					}
				
					contCond=atual;
					porta=0;
					
					while (porta == 0  ){
					
						if (vetorExp[contCond] == "Temp1" || vetorExp[contCond] == "Temp2" || vetorExp[contCond] == "Temp3"){
						
							proxEsq=contCond;
							porta=1;
						}
					
						contCond--;
					}
				
					linhaIn++;
					cout<< linhaIn << " :" << " temp1 = " <<  " " << vetorExp[proxEsq] <<" " <<  vetorExp[atual] <<" " <<  vetorExp[proxDir] << endl;
					arquivoIn<< linhaIn << " :" << " temp1 = " <<  " " << vetorExp[proxEsq] <<" " <<  vetorExp[atual] <<" " <<  vetorExp[proxDir] << endl;
					
					arquivoFn<<vetorExp[atual]<<" TEMP2 TEMP1"<<endl;
					vetorExp[proxEsq]="Temp"+std::to_string(posTemp);
					vetorExp[proxDir]="Temp"+std::to_string(posTemp);
					vetorExp[atual]="Temp"+std::to_string(posTemp);
				
					if(posTemp< 2){
						
						ultimoTemp=posTemp;
						posTemp++;
				
					}else{
						
						ultimoTemp=posTemp;
						posTemp =1;
				
					}
				
				
					if (quantOp==0 && parede==0){
					
						//linhaIn++;
						//cout<<linhaIn << " = " << "if not temp"<< ultimoTemp <<" goto" <<endl;
					
						//linhaIn++;
						//cout<<linhaIn << " = " <<"Begin"<< endl;
				
						//parede++;
					
					
						if (quantOp==0){
					
							quantOp++;
						}
					
		
					}
				
					
					contCond=0;
				
				}
			
			}
		
				

		
			
			contCond++;	
			
		}
		
		guardalinhawhile=linhaIn;
		linhaIn++;
		cout<<linhaIn << " :" << " if not temp1 goto label"<< labelPos <<endl;
		arquivoIn<<linhaIn << " :" << " if not temp1 goto label"<< labelPos <<endl;
		
		arquivoFn<<"COPY NOT TEMP1"<<endl;
		arquivoFn<<"CMP TEMP1"<<endl;
		arquivoFn<<"JNZ LABEL"<<labelPos<<endl;
		labelPos++;
		
		if(temEnd =true){
			
			//linhaIn++;
			//cout << linhaIn << "Begin" << endl;	
		}//talvez seja aqui
		
		
		
	} 

	
}//finalwhile2

void repeat2 (int a){

	bool temEnd=false;

		if (codigo [a+1] == "begin"){
			
			temEnd=true;
			quantidadeRepeat++;
			
		}else{
			
			temEnd=false;
		}
			
		linhaIn++;
		cout << linhaIn << ": " << "repeat label"<<labelPos<< endl;
		arquivoIn << linhaIn <<" : " << " repeat label"<<labelPos <<endl;
		arquivoFn <<"LABEL"<<labelPos<<endl; 
		vetorRe[posVetorRe]=linhaIn;
		posVetorRe++;
		labelPos++;
		
		
		
		
		
}//finalrepeat2

void until2(int a){
	
	int b=a;
	int c=0;
	
	
	string vetorExp[100];
		
	while(codigo[b+1] != ";"){
		
		vetorExp[c] = codigo[b+1];
		b++;
		c++;
	}
	
	vetorExp[c+1]=codigo[b+1];
	c++;
	
	int contCond=0;
	int posOp[20];
	int quantOp=0;
	int posEO[20];
	int quantEO=0;
	
	while (vetorExp[contCond] != ";"){
		
		if (vetorExp[contCond]== ">" || vetorExp[contCond]== "<" || vetorExp[contCond]== ">=" || 
		vetorExp[contCond]== "<=" || vetorExp[contCond] == "=" || vetorExp[contCond] =="<>"){
			
			posOp[quantOp]=contCond;
			quantOp++;	
		}//final if de todos operadores
		
		if (vetorExp[contCond]== "or" || vetorExp[contCond]== "and"){
			
			posEO[quantEO]=contCond;
			quantEO++;
			
		}//vetorExp[contCond]== "or" || vetorExp[contCond]== "and"
		
		contCond++;
	}//vetorExp[contCond] != ";"

	if (quantEO== 0){
	
		linhaIn++;
		cout<<linhaIn << ": "<< " temp1 := " <<" " <<  vetorExp[posOp[0]-1]  << " " << vetorExp[posOp[0]] << " " << vetorExp[posOp[0]+1] << endl;
		arquivoIn<<linhaIn << " : "<< " temp1 := " <<" " <<  vetorExp[posOp[0]-1]  << " " << vetorExp[posOp[0]] << " " << vetorExp[posOp[0]+1] << endl;		
		
		arquivoFn <<"COPY "<<vetorExp[posOp[0]+1]<<" TEMP1"<<endl;
		arquivoFn<< vetorExp[posOp[0]]<<" "<<vetorExp[posOp[0]-1]<<" TEMP1"<<endl;
		linhaIn++;
		cout<<linhaIn << " :" << "if not temp1 goto label"<<labelPos-1 <<endl;
		arquivoIn<<linhaIn << " : " << " if not temp1 goto label"<<labelPos-1<<endl;
		arquivoFn<<"COPY NOT TEMP1"<<endl;
		arquivoFn<<"CMP TEMP1"<<endl;
		arquivoFn<<"JNZ LABEL"<<labelPos-1<<endl;
		posVetorRe--;

		
	}//quantEO== 0
	
	if (quantEO ==1){
	
		linhaIn++;
		cout<<linhaIn << " :"<< " temp1 :=" <<" " <<  vetorExp[posOp[0]-1]  <<" " <<  vetorExp[posOp[0]] <<" " <<  vetorExp[posOp[0]+1] << endl;		
		arquivoIn<<linhaIn << "  :  "<< " temp1 := " <<" " <<  vetorExp[posOp[0]-1]  <<" " <<  vetorExp[posOp[0]] <<" " <<  vetorExp[posOp[0]+1] << endl;
		
		arquivoFn <<"COPY "<<vetorExp[posOp[0]+1]<<" TEMP1"<<endl;
		arquivoFn<< vetorExp[posOp[0]]<<" "<<vetorExp[posOp[0]-1]<<" TEMP1"<<endl;
		
		linhaIn++;
		cout<<linhaIn << " :"<< " temp2 :=" <<" " <<  vetorExp[posOp[1]-1]  <<" " <<  vetorExp[posOp[1]] <<" " <<  vetorExp[posOp[1]+1] << endl;
		arquivoIn<<linhaIn << " :"<< " temp2 :=" <<" " <<  vetorExp[posOp[1]-1]  <<" " <<  vetorExp[posOp[1]] <<" " <<  vetorExp[posOp[1]+1] << endl;
		
		arquivoFn <<"COPY "<<" "<<vetorExp[posOp[1]+1]<<" TEMP2"<<endl;
		arquivoFn<< vetorExp[posOp[1]]<<" "<<vetorExp[posOp[1]-1]<<" TEMP2"<<endl;
		
		linhaIn++;
		cout<<linhaIn << " :"<< " temp1 := temp1 " <<" " <<  vetorExp[posEO[0]]  << " temp2" << endl;
		arquivoIn<<linhaIn << "  :  "<< " temp1 := temp1 " <<" " <<  vetorExp[posEO[0]]  << " temp2" << endl;
		
		arquivoFn<<vetorExp[posEO[0]]<<" TEMP2 TEMP1"<<endl;
		guardalinhawhile=linhaIn;
		
		linhaIn++;
		cout<<linhaIn << " :" << " if not temp1 goto "<<" " << vetorRe[posVetorRe-1] <<endl;
		arquivoIn<<linhaIn << " :" << " if not temp1 goto "<<" " << vetorRe[posVetorRe-1] <<endl;
		
		arquivoFn<<"COPY NOT TEMP1"<<endl;
		arquivoFn<<"CMP TEMP1"<<endl;
		arquivoFn<<"JNZ LABEL"<<endl;
		posVetorRe++;
		
		
		
		
	}//quantEO ==1
	
	int indiceTemp=1;
	contCond=0;
	
	if (quantEO >= 2){
		
		int chave1=1;
		int chave2=0;
		int posTemp=1;
		int ultimoTemp=3;
		int parede=0;
		int valor =2;
		
		while (vetorExp[contCond] != ";"){
		 
		 	if (chave1 <= valor ){
		 		
				 	
				if (vetorExp[contCond]== ">" || vetorExp[contCond]== "<" || vetorExp[contCond]== ">=" || 
				vetorExp[contCond]== "<=" || vetorExp[contCond] == "=" || vetorExp[contCond] =="<>"){
					
					if (chave1==2){
						valor--;
					}
					linhaIn++;
					cout<< linhaIn << " :" << " temp" << posTemp << " :=" <<" " <<  vetorExp[contCond-1 ] <<" " <<  vetorExp[contCond] <<" " <<  vetorExp[contCond+1] << endl;
					arquivoIn<< linhaIn << " :" << " temp" << posTemp << " :=" <<" " <<  vetorExp[contCond-1 ] <<" " <<  vetorExp[contCond] <<" " <<  vetorExp[contCond+1] << endl;					
					
					arquivoFn <<"COPY "<<vetorExp[contCond+1]<<" TEMP1"<<endl;
					arquivoFn<< vetorExp[contCond]<<" "<<vetorExp[contCond-1]<<" TEMP1"<<endl;
					
					//vetorExp[contCond-1] = "Temp"+std::to_string(posTemp);
					//vetorExp[contCond+1] = "Temp"+std::to_string(posTemp);
					vetorExp[contCond] = "Temp"+std::to_string(posTemp);
					quantOp--;
					
					contCond=0;				
				
				
					/*for (int iM =0; iM< finalT; iM++){
						
						if (vetorExp[iM] == "Temp"+std::to_string(ultimoTemp)){
						
							vetorExp[iM] = "Temp"+std::to_string(posTemp);
						
						}	
					}*/
													
					if(posTemp< 2){
						
						ultimoTemp=posTemp;
						posTemp++;
				
					}else{
						
						ultimoTemp=posTemp;
						posTemp =1;
				
					}
				
					chave1++;
						
				}//final tipos de operadores
		
			}  
			
			if (chave1>valor|| quantOp==0  ){
		 	
				int proxDir =0;
		 		int proxEsq =0;
		 		int porta= 0;
		 	
		 	
 		 	
 		 		//if (quantOp ==0){
 		 		
				//	  quantOp++;
			  	//}
			  
		   		if (vetorExp[contCond]== "or" || vetorExp[contCond]== "and"){
				
					chave1=1;
					int atual = contCond;
					quantEO--;
					porta=0;
				
					while (porta == 0  ){
					
						if (vetorExp[contCond] == "Temp1" || vetorExp[contCond] == "Temp2" || vetorExp[contCond] == "Temp3"){
						
							proxDir=contCond;
							porta=1;
						}
					
						contCond++;
					}
				
					contCond=atual;
					porta=0;
					
					while (porta == 0  ){
					
						if (vetorExp[contCond] == "Temp1" || vetorExp[contCond] == "Temp2" || vetorExp[contCond] == "Temp3"){
						
							proxEsq=contCond;
							porta=1;
						}
					
						contCond--;
					}
				
					linhaIn++;
					cout<< linhaIn << "  :  " << " temp1 := " <<  " " <<" " <<  vetorExp[proxEsq] <<" " <<  vetorExp[atual] <<" " <<" "<<  vetorExp[proxDir] << endl;
					arquivoIn<< linhaIn << "  : " << " temp1 := " <<  " " <<" " <<  vetorExp[proxEsq] <<" " <<  vetorExp[atual] <<" " <<" "<<  vetorExp[proxDir] << endl;
					
					arquivoFn<<vetorExp[atual]<<" TEMP2 TEMP1"<<endl;				
					vetorExp[proxEsq]="Temp"+std::to_string(posTemp);
					vetorExp[proxDir]="Temp"+std::to_string(posTemp);
					vetorExp[atual]="Temp"+std::to_string(posTemp);
				
					if(posTemp< 2){
						
						ultimoTemp=posTemp;
						posTemp++;
				
					}else{
						
						ultimoTemp=posTemp;
						posTemp =1;
				
					}
				
				
					if (quantOp==0 && parede==0){
					
						//linhaIn++;
						//cout<<linhaIn << " = " << "if not temp"<< ultimoTemp <<" goto" <<endl;
					
						//linhaIn++;
						//cout<<linhaIn << " = " <<"Begin"<< endl;
				
						//parede++;
					
					
						if (quantOp==0){
					
							quantOp++;
						}
					
		
					}
				
					
					contCond=0;
				
				}
			
			}
		
				

		
			
			contCond++;	
			
		}
		
		guardalinhawhile=linhaIn;
		linhaIn++;
		cout<<linhaIn << "  :  " << " if not temp1 goto "<< vetorRe[posVetorRe-1] <<endl;
		
		arquivoIn<<linhaIn << "  :  " << " if not temp1 goto "<< vetorRe[posVetorRe-1] <<endl;
		
		arquivoFn<<"COPY NOT TEMP1"<<endl;
		arquivoFn<<"CMP TEMP1"<<endl;
		arquivoFn<<"JNZ LABEL"<<labelPos<<endl;
	}
	
	
		
	
}//finaluntil2

void expressao(int a) {

	string vetorExp[50];
	int b;
	b=a;
	
	
	int c =0;
	int posTemp = 1;
	int auxPaFi;
	int auxPaIn;
	int ultimoTemp=2;
	int quantOp=0;
	string qualOp;
	int posQualOp;	 
	
	while(codigo[b+1] != ";"){
		
		vetorExp[c] = codigo[b+1];
		b++;
		c++;

		if (codigo[b+1] == "+"  || codigo[b+1] == "-" || codigo[b+1] == "/" || codigo[b+1] == "*"){
		
			quantOp++;
			qualOp=codigo[b+1];
			posQualOp=b+1;
		}
		
	}
	//contadorIn=b+1;
	int correrExp =a-1;
	int correrFinal=a+1;
	if (quantOp<=1){
		
		string saidaExp;
		
		if(quantOp==1){
			
			if(qualOp=="+"){
				
				
				arquivoFn<< "COPY "<< codigo[posQualOp+1]<<" TEMP1"<<endl;
				arquivoFn<< "ADD "<< codigo[posQualOp-1]<<" TEMP1"<<endl;
				arquivoFn<<"COPY TEMP1 "<<codigo[a-1]<<endl;
				//copy temp1 x
			}
			
			if(qualOp=="-"){
				
				arquivoFn<< "COPY "<<codigo[posQualOp+1]<<" TEMP1"<<endl;
				arquivoFn<< "SUB "<< codigo[posQualOp-1]<<" TEMP1"<<endl;
				arquivoFn<<"COPY TEMP1 "<<codigo[a-1]<<endl;
			}
			
			if(qualOp=="*"){
				
				arquivoFn<< "COPY "<< codigo[posQualOp+1]<<" TEMP1"<<endl;
				arquivoFn<< "MUL "<< codigo[posQualOp-1]<<" TEMP1"<<endl;
				arquivoFn<<"COPY TEMP1 "<<codigo[a-1]<<endl;
			}
			
			if(qualOp=="/"){
				
				arquivoFn<< "COPY "<< codigo[posQualOp+1]<<" TEMP1"<<endl;
				arquivoFn<< "DIV "<< codigo[posQualOp-1]<<" TEMP1"<<endl;
				arquivoFn<<"COPY TEMP1 "<<codigo[a-1]<<endl;
			}
			
			
		}else{
			
			arquivoFn<<"COPY  "<<codigo[a+1]<<" "<<codigo[a-1]<<endl;
		}
		
		while (codigo[correrExp] != ";"){
		
			saidaExp=saidaExp+=codigo[correrExp];
			correrExp++;
			
		}
		
		
		linhaIn++;
		cout << linhaIn << " : " << saidaExp << endl;
		
		correrExp=a-1;		
		arquivoIn<< linhaIn<<" : ";
		
		while(codigo[correrExp] != ";"){
			
			arquivoIn<<codigo [correrExp]<<" ";
			
			
			correrExp++;
		}	
		arquivoIn << endl;		
		
			
	}else{
			for(int Iexp = 0 ; Iexp < c ; Iexp ++ ){
		
		if (vetorExp[Iexp] == ")"){
			
			
			vetorExp[Iexp]="@";
			auxPaFi=Iexp;
			
			int chavePaIn=0;
			
			while (chavePaIn ==0){
									
				if (vetorExp[Iexp] == "("){
					
					vetorExp[Iexp]="@";
					auxPaIn=Iexp;
					chavePaIn=1;		
				}
				
				Iexp--;	
			}
			
			for(int iAux2 = auxPaIn; iAux2 < auxPaFi ; iAux2++ ){
					
					
				if (vetorExp[iAux2] == "*" || vetorExp[iAux2] == "/"){
					
					int chave=0;
					int atual = iAux2;
					int posEsq, posDir;
					
					while(chave==0){
						
						if (vetorExp[atual-1] != "@"){
							posEsq=atual-1;
							chave=1;
						}
						
						atual--;
					} 
					
					chave=0;
					atual=iAux2;
					
					while(chave==0){
						
						if (vetorExp[atual+1] != "@"){
							posDir=atual+1;
							chave=1;
						}
						
						atual++;
					}
						
						
					linhaIn++;
					cout<< linhaIn << " : " << "Temp " << posTemp << " :=" <<" " <<  vetorExp[posEsq ] <<" " <<  vetorExp[iAux2] <<" " <<  vetorExp[posDir] << endl;
					arquivoIn<< linhaIn << "  :  " << "Temp " << posTemp << " :=" <<" " <<  vetorExp[posEsq ] <<" " <<  vetorExp[iAux2] <<" " <<  vetorExp[posDir] << endl;
					
					if (vetorExp[iAux2]== "*"){
						
						arquivoFn<< "COPY "<< vetorExp[posDir]<<" TEMP"<<posTemp<<endl;
						arquivoFn<< "MUL "<< vetorExp[posEsq]<<" TEMP"<<posTemp<<endl;
						
					}else{
						
						arquivoFn<< "COPY "<< vetorExp[posDir]<<" TEMP"<<posTemp<<endl;
						arquivoFn<< "DIV "<< vetorExp[posEsq]<<" TEMP"<<posTemp<<endl;
					}
					vetorExp[iAux2+1] = "Temp"+std::to_string(posTemp);
					vetorExp[iAux2] = "@" ;	
					
					/*for (int iM =0; iM< c; iM++){
						
						if (vetorExp[iM] == "Temp"+std::to_string(ultimoTemp)){
							
							vetorExp[iM] = "Temp"+std::to_string(posTemp);
						}
					}*/				
					
					Iexp=0;
					
					if(posTemp< 2){
					
						ultimoTemp=posTemp;	
						posTemp++;
				
					}else{
						
						ultimoTemp=posTemp;
						posTemp =1;
				
					}
				}
			}
	
			for(int iAux2 = auxPaIn; iAux2 < auxPaFi ; iAux2++ ){
				
				if (vetorExp[iAux2] == "+" || vetorExp[iAux2] == "-"){
					
						int chave=0;
					int atual = iAux2;
					int posEsq, posDir;
					
					while(chave==0){
						
						if (vetorExp[atual-1] != "@"){
							posEsq=atual-1;
							chave=1;
						}
						
						atual--;
					} 
					
					chave=0;
					atual=iAux2;
					
					while(chave==0){
						
						if (vetorExp[atual+1] != "@"){
							posDir=atual+1;
							chave=1;
						}
						
						atual++;
					}
							
					linhaIn++;
					cout << linhaIn << " :" << " Temp" << posTemp << " :=" << " " << vetorExp[posEsq ] <<" " <<  vetorExp[iAux2] <<" " <<  vetorExp[posDir] << endl;
					arquivoIn << linhaIn << " :" << " Temp" << posTemp << " :=" << " " << vetorExp[posEsq ] <<" " <<  vetorExp[iAux2] <<" " <<  vetorExp[posDir] << endl;
					
					if (vetorExp[iAux2]== "+"){
						
						arquivoFn<< "COPY "<< vetorExp[posDir]<<" TEMP"<<posTemp<<endl;
						arquivoFn<< "ADD "<< vetorExp[posEsq]<<" TEMP"<<posTemp<<endl;
						
					}else{
						
						arquivoFn<< "COPY "<< vetorExp[posDir]<<" TEMP"<<posTemp<<endl;
						arquivoFn<< "SUB "<< vetorExp[posEsq]<<" TEMP"<<posTemp<<endl;
					}
					vetorExp[iAux2-1] = "Temp"+std::to_string(posTemp);
					vetorExp[iAux2+1] = "Temp"+std::to_string(posTemp);
					vetorExp[iAux2] = "@" ;

					/*for (int iM =0; iM< c; iM++){
						
						if (vetorExp[iM] == "Temp"+std::to_string(ultimoTemp)){
							
							vetorExp[iM] = "Temp"+std::to_string(posTemp);
						}
					}*/
					
					Iexp=0;
					
					if(posTemp< 2){
						
						ultimoTemp=posTemp;
						posTemp++;
				
					}else{
						
						ultimoTemp=posTemp;
						posTemp =1;
				
					}
				}
			}
			
		}
	}
	
	for(int Iexp = 0 ; Iexp < c ; Iexp ++ ){
	
		if(vetorExp[Iexp] == "*" || vetorExp[Iexp] == "/"){
			//fg := x tem1 x temp1 x  x temp2 x temp2 x;
			int chave=0;
			int atual = Iexp;
			int posEsq, posDir;
			
			while(chave==0){
				
				if(vetorExp[atual-1] != "@"){
					
					posEsq=atual-1;
					chave=1;					
					
				} 
				
				atual--;
			}
			
			atual = Iexp;
			chave=0;
				
			while(chave==0){
				
				if(vetorExp[atual+1] != "@"){
					
					posDir=atual+1;
					chave=1;					
					
				} 
				
				atual++;
			}
			
			linhaIn++;
			cout << linhaIn << " : " << "temp" << posTemp << " :=" <<" " <<  vetorExp[posEsq] <<" " <<  vetorExp[Iexp] <<" " <<  vetorExp[posDir] << endl;
			arquivoIn << linhaIn << ": " << "temp" << posTemp << " :=" <<" " <<  vetorExp[posEsq] <<" " <<  vetorExp[Iexp] <<" " <<  vetorExp[posDir] << endl; 
			
			if (vetorExp[Iexp]== "*"){
						
				arquivoFn<< "COPY "<< vetorExp[posDir]<<" TEMP"<<posTemp<<endl;
				arquivoFn<< "MUL "<< vetorExp[posEsq]<<" TEMP"<<posTemp<<endl;
						
			}else{
						
				arquivoFn<< "COPY "<< vetorExp[posDir]<<" TEMP"<<posTemp<<endl;
				arquivoFn<< "DIV "<< vetorExp[posEsq]<<" TEMP"<<posTemp<<endl;
			}
			
			vetorExp[posEsq] = "Temp"+std::to_string(posTemp);
			vetorExp[posDir] = "Temp"+std::to_string(posTemp);
			
				/*for (int iM =0; iM< c; iM++){
						
					if (vetorExp[iM] == "Temp"+std::to_string(ultimoTemp)){
							
						vetorExp[iM] = "Temp"+std::to_string(posTemp);
					}
				}*/
					
			if(posTemp< 2){
				
				ultimoTemp=posTemp;
				posTemp++;
				
			}else{
				
				ultimoTemp=posTemp;
				posTemp =1;
				
			}
			
			
		}
	}
	
	for(int Iexp = 0 ; Iexp < c ; Iexp ++ ){
		if(vetorExp[Iexp] == "+" || vetorExp[Iexp] == "-"){
			//fg := x tem1 x temp1 x + x temp2 x temp2 x;
			int chave=0;
			int atual = Iexp;
			int posEsq, posDir;
			
			while(chave==0){
				
				if(vetorExp[atual-1] != "@"){
					
					posEsq=atual-1;
					chave=1;
					
									
					
				} 
				
				atual--;
			}
			
			atual = Iexp;
			chave=0;
				
			while(chave==0){
				
				if(vetorExp[atual+1] != "@"){
					
					posDir=atual+1;
					chave=1;	
							
					
				} 
				
				atual++;
			}
			
			linhaIn++;
			cout << linhaIn << " :" << " temp" << posTemp <<" :=" <<" " <<  vetorExp[posEsq ] <<" " <<  vetorExp[Iexp] <<" " <<  vetorExp[posDir] << endl; 
			arquivoIn << linhaIn << "  :  " << " temp" << posTemp <<" :=" <<" " <<  vetorExp[posEsq ] <<" " <<  vetorExp[Iexp] <<" " <<  vetorExp[posDir] << endl;
			
			if (vetorExp[Iexp]== "+"){
						
						arquivoFn<< "COPY "<< vetorExp[posDir]<<" TEMP"<<posTemp<<endl;
						arquivoFn<< "ADD "<< vetorExp[posEsq]<<" TEMP"<<posTemp<<endl;
						
					}else{
						
						arquivoFn<< "COPY "<< vetorExp[posDir]<<" TEMP"<<posTemp<<endl;
						arquivoFn<< "SUB "<< vetorExp[posEsq]<<" TEMP"<<posTemp<<endl;
					}
			vetorExp[Iexp-1] = "Temp"+std::to_string(posTemp);
			vetorExp[Iexp+1] = "Temp"+std::to_string(posTemp);
			
				/*for (int iM =0; iM< c; iM++){
						
					if (vetorExp[iM] == "Temp"+std::to_string(ultimoTemp)){
							
						vetorExp[iM] = "Temp"+std::to_string(posTemp);
						
						}
					}*/
					
			if(posTemp< 2){
				
				ultimoTemp=posTemp;
				posTemp++;
				
			}else{
				
				ultimoTemp=posTemp;
				posTemp =1;
			}
			
			
		}
	}
	
	linhaIn++;
	cout<< linhaIn <<" :"<<" " <<  codigo[a-1] << " :=" << " temp" << ultimoTemp  << endl;
	arquivoIn<< linhaIn <<" :"<<" " <<  codigo[a-1] << " :=" << " temp" << ultimoTemp  << endl;
	
	arquivoFn<<"COPY"<<" TEMP"<<ultimoTemp<<" "<<codigo[a-1]<<endl;	
	//COPY #tmp2 x	
	}//finalelse
	

	
	
}//finalExpressao

void all2 (int a){
	
	int b =a;
	int c=0;

		
	string vetorExp[100];
	
	
		
	while (codigo[b+1] != ";"){
		
		vetorExp[c] = codigo[b+1];
		b++;
		c++;
		
	}
	
	vetorExp[c+1]=codigo[b+1];
	c++;
	
	int contadorAll=0;
	int quantidadeAll =0;
	
	while (vetorExp[contadorAll+1] != ";"){
		
			
			if (  vetorExp[contadorAll] != "(" && vetorExp[contadorAll] != "," && vetorExp[contadorAll] != ")" ){
				
				quantidadeAll++;
				linhaIn++;
				cout << linhaIn << "  :  " << " param " << vetorExp[contadorAll] << endl;
				arquivoIn << linhaIn << "  :  " << " param " <<" "<< vetorExp[contadorAll] <<endl ;
				arquivoFn <<"PARAM "<<" "<< vetorExp[contadorAll] <<endl ;			
			}
			
		contadorAll++;
		
	}
	
	
	linhaIn++;
	cout << linhaIn << ": " << "call all " << quantidadeAll << endl;
	arquivoIn << linhaIn << "  :  " << " call all " << " "<< quantidadeAll <<endl ;
	arquivoFn<< "CALL ALL " << " "<< quantidadeAll <<endl ;		
		
}


void lectura(){
		ifstream archivo;
    
	string tp,td;
	int i=0,count=0,Cl=1,Gl=1,Gl2=1,Hl=7,Cb=0;// contador de linhas ;
	vector <char> vet;
	char c;
	int  j2=0;
	int res,rest;
	bool alguma;
	int cont=0,coluna=0,q=0,maior=0,ct=0;
    int aux3 =0,aux4=0; 
    bool  po = false;
     char leitura[50];
	char comple[5]= ".txt";
	FILE *file;
	
     cout << "digite nome do arquivo" << endl;
     cin >> leitura;
     
	strcat(leitura,comple);
	file=fopen(leitura,"r");
	
	if(file == NULL){
		
		menu();
		
	}
	
	do{
		c=fgetc(file);
		
		
			//vet[i]= c;
			vet.push_back(c);
		if(c == '\n'){
			Cl++;
		//	vet2[q] = coluna;
			q++;
			coluna = 0; // recebe zzero;
		}
		
		coluna++;
		i++;
		
		
	} while(c!=EOF);
	fclose(file);
	

	
	
	file=fopen(leitura,"w"); // caso de erro coloca arq2;
	
	for(int k=0; k < i-1; k++){ 

		fputc(tolower(vet[k]),file);
	}
	
	fclose(file);
	//printf("quer colocar espaco ?  [0]- nao [1]-sim");
	//scanf("%d",&rest);
	
	//if(rest == 1){
		espaco(leitura);
	//}
	
	archivo.open("arq3.txt",ios::in); //Abrimos arquiv em modo leitura
	
	if(archivo.fail()){
		cout<<"nao pode abri o arquivo";
		exit(1);
	}
	
	while(!archivo.eof()){ 
        
		archivo >> codigo[j]; // esse;
	   //  codigo[0];
	   
	     j++;
	    
	}
	archivo.close();
	
		func();
	 

	
	for(int t=0 ; t < j-1; t++){
 	alguma=false;
		tp=codigo[t];
	//	cout << tp;
	   
	  
        if(Hl > maior){
        	Hl = 7;
		}
       
		if(buscatoken(tp) > 0){
		alguma = true;
	      Tab[j2].token = tp; 
	      Tab[j2].ind = buscatoken(tp);
		  //Tab[j2].linha = Gl;
		  //Tab[j2].coluna =  Hl; 
	      j2++;
		  
		}else {
			
			if(procuraID(tp)){
			alguma= true;	
		  Tab[j2].token = "ID"; 
		  Tab[j2].lexema = tp;
	      Tab[j2].ind = -1;//  identifica uma ID;
	      //Tab[j2].linha = Gl;
	      //Tab[j2].coluna =  Hl;
	    
	    if(Tab[j2].lexema!= ""){
	    	 GuardId[ct] = Tab[j2].lexema;
	        
	  	    ct++; 
	       contID++;
		}
	      j2++;
			}else{
				  	
				  if(procuraNum(tp)){
				  	alguma = true;
				  	 Tab[j2].token = "NUM"; 
		             Tab[j2].valor = tp;
		             Tab[j2].ind = -2; // identificar numero ;
		             //Tab[j2].linha = Gl;
		             //Tab[j2].coluna = Hl;
		             j2++;
		            
		            	
		           
				  }	
				  
				 
			}
		
		}
		
		
		if(alguma == true){
			cont++ ;
			
				
			}else{
					meroo(1,Tab[cont-1].token,Tab[cont-1].linha,Tab[cont-1].coluna);
				
			}
     
	}
	



for(int z=0 ; z < j-1 ; z++){
	
   if(codigo[z] == "real" ){
   	
   	aux3 = z ;
   	aux3++;
   	po = true;
 
   } 
   
   if(po == true){
   	if(codigo[aux3] != ";" ){
   		
   		if(codigo[aux3] != ","){
   		guardR[aux4] = codigo[aux3];
   	//	cout << guardR[aux4] << endl;
   	      dg++;
   		aux4++;
		   }
   		aux3++;
	   }
   }
   
}
//cout << guardR[6] << endl;
aux3=0 , aux4=0 , po = false;
for(int y=0 ; y < j-1 ; y++){
	
   if(codigo[y] == "integer" ){
   	
   	aux3 = y ;
   	aux3++;
   	po = true;
 
   } 
   
   if(po == true){
   	if(codigo[aux3] != ";" ){
   		
   		if(codigo[aux3] != ","){
   		guardI[aux4] = codigo[aux3];
   	//	cout << guardI[aux4] << endl;
   	   contI++;
   		aux4++;
		   }
   		aux3++;
	   }
   }
   
}

aux3=0 , aux4=0 , po = false;
//cout << "string" << endl;
for(int m=0 ; m < j-1 ; m++){
	
   if(codigo[m] == "string" ){
   	
   	aux3 = m ;
   	aux3++;
   	po = true;
 
   } 
   
   if(po == true){
   	if(codigo[aux3] != ";" ){
   		
   		if(codigo[aux3] != ","){
   		guardS[aux4] = codigo[aux3];
   	//	cout << guardS[aux4] << endl;
   	    contS++;
   		aux4++;
		   }
   		aux3++;
	   }
   }
   
}



// interator();

Tab[indiceT];


if(Tab[indiceT].ind == 16 ){
	testProgram();
}else {
	meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
}

interator();	

while((Tab[indiceT].ind == 10)  || (Tab[indiceT].ind == 11) || (Tab[indiceT].ind == 15)){
	testeVa();
	interator();
	
}

if(Tab[indiceT].ind != 1 ){
	meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
}

interator();// proximo token;

if(Tab[indiceT].ind != 1 ){
	meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
}



bloco();
interator();

if(Tab[indiceT].ind != 2 ){
	meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
}
if(((contID-1)-indiceV) > 0 ){
//	VariaveisN();
}
interator();// se for igual a end pega o proxima 
if(Tab[indiceT].ind != 29 ){
	meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
}

interator();

if(Tab[indiceT].ind == -2 || Tab[indiceT].ind == 30 || Tab[indiceT].ind == 31 
	|| Tab[indiceT].ind == 29 || Tab[indiceT].ind == 32 || Tab[indiceT].ind == 33 
	|| Tab[indiceT].ind == 17 || Tab[indiceT].ind == 18 || Tab[indiceT].ind == 19 || 
	Tab[indiceT].ind == 20 || Tab[indiceT].ind == 21 || Tab[indiceT].ind == 22 || Tab[indiceT].ind == 23
	|| Tab[indiceT].ind == 24 || Tab[indiceT].ind == 25 || Tab[indiceT].ind == 26 || Tab[indiceT].ind == 27 
	|| Tab[indiceT].ind == 28 || Tab[indiceT].ind == 7 || Tab[indiceT].ind == 34 || Tab[indiceT].ind == 1 
	|| Tab[indiceT].ind == 2 || Tab[indiceT].ind == 3 || Tab[indiceT].ind == 4 || Tab[indiceT].ind == 5 
	|| Tab[indiceT].ind == 6 || Tab[indiceT].ind == 8 || Tab[indiceT].ind == 9 || Tab[indiceT].ind == 10
	|| Tab[indiceT].ind == 11 || Tab[indiceT].ind == 12 || Tab[indiceT].ind == 13 || Tab[indiceT].ind == 14 
	|| Tab[indiceT].ind == 15 || Tab[indiceT].ind == 16  || Tab[indiceT].ind == -1  ){
	   meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
	}


cout << " compilacao foi um sucesso" << endl;


 
arquivoIn.open("codigointermediario.txt",ios::out);
arquivoFn.open ("codigofinal.txt",ios::out);
CodigoIntermediario();
arquivoIn.close();
arquivoFn.close();  
}




void Total( ){
 totToken = j;

}

void testElse(){
	interator () ;
	if(Tab[indiceT].ind == -2 || Tab[indiceT].ind == 30 || Tab[indiceT].ind == 31 
	|| Tab[indiceT].ind == 29 || Tab[indiceT].ind == 32 || Tab[indiceT].ind == 33 
	|| Tab[indiceT].ind == 17 || Tab[indiceT].ind == 18 || Tab[indiceT].ind == 19 || 
	Tab[indiceT].ind == 20 || Tab[indiceT].ind == 21 || Tab[indiceT].ind == 22 || Tab[indiceT].ind == 23
	|| Tab[indiceT].ind == 24 || Tab[indiceT].ind == 25 || Tab[indiceT].ind == 26 || Tab[indiceT].ind == 27 
	|| Tab[indiceT].ind == 28 || Tab[indiceT].ind == 7 || Tab[indiceT].ind == 34 ){
	   meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
	}
	comando(Tab[indiceT].ind);
}

void expressaoAri2(){
	
	int aux;
	int aux2 =0;
	int aux33=0;

		aux=0;
       
    
       
       do{
      
       	if(Tab[indiceT].ind == 32 ){
       		expp1++;
      	expp2++;
      	expp3++;
      	  Tab2[indiceT22].token1 = Tab[indiceT].token;
      Tab2[indiceT22].lexema1 = Tab[indiceT].lexema;
      Tab2[indiceT22].valor1 = Tab[indiceT].valor;
       Tab2[indiceT22].linha1 = Tab[indiceT].linha;
       Tab2[indiceT22].ind1 = Tab[indiceT].ind;
       Tab2[indiceT22].coluna1 = Tab[indiceT].coluna;
       indiceT22++;
       		interator();
		   }else {
		   	aux2 =1;
		   }
	   }while((aux2 == 0));
	 
       if(Tab[indiceT].ind != -1 &&  Tab[indiceT].ind != -2){
          
     	meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
	 }else {
	 	  Tab2[indiceT22].token1 = Tab[indiceT].token;
      Tab2[indiceT22].lexema1 = Tab[indiceT].lexema;
      Tab2[indiceT22].valor1 = Tab[indiceT].valor;
       Tab2[indiceT22].linha1 = Tab[indiceT].linha;
       Tab2[indiceT22].ind1 = Tab[indiceT].ind;
       Tab2[indiceT22].coluna1 = Tab[indiceT].coluna;
       indiceT22++;
	 		if(Tab[indiceT].lexema != ""){
	 		//cout << ssd4[iie4] << endl; 
	 			ssd4[iie4] = Tab[indiceT].lexema;
		//cout << ssd[iie] << endl;
		iie4++;
		
		//cout << Variaveis[1] << endl;
		for(int a=1; a <= indiceV;a++){
			
			if(ssd4[bs24] == Variaveis[a]){
				
				bs4++;
			}
			
		}
		
		//cout << bs1 << endl;
		
	     if(bs4 == 1){
	     	meroo(4,Tab[indiceT].lexema,Tab[indiceT].linha,Tab[indiceT].coluna);
		 }
		bs4=1;
		bs24++;
		 }
		 
		 if(Tab[indiceT].lexema != ""){
		 	
		 	 for(int rx=0 ; rx < contS ;rx++){ // teste erro de string que nao pode ter detnro do if;
        	if(Tab[indiceT].lexema == guardS[rx]){
        		
        		meroo(11,Tab[indiceT].lexema,Tab[indiceT].linha,Tab[indiceT].coluna);
			}
		}
		
		
		 }
	 }
	 interator();
	 
       		
	  do{
      
       	if(Tab[indiceT].ind == 33 ){
       
       		 	//cotA--;
       		expp1++; // so para o if; 	
       		expp2++;
       		expp3++;
       		  Tab2[indiceT22].token1 = Tab[indiceT].token;
              Tab2[indiceT22].lexema1 = Tab[indiceT].lexema;
              Tab2[indiceT22].valor1 = Tab[indiceT].valor;
       		  Tab2[indiceT22].linha1 = Tab[indiceT].linha;
      		  Tab2[indiceT22].ind1 = Tab[indiceT].ind;
      		  Tab2[indiceT22].coluna1 = Tab[indiceT].coluna;
      		  indiceT22++;
       		interator();
       	
		   }else {
		   	
		   	aux33 =1;
		   }
		   
	   }while((aux33 == 0));
	   
	   
        if(Tab[indiceT].ind != 17 && Tab[indiceT].ind != 18  && Tab[indiceT].ind != 19 && Tab[indiceT].ind != 20
	&& Tab[indiceT].ind != 21 && Tab[indiceT].ind != 22 && Tab[indiceT].ind != 23 &&  Tab[indiceT].ind != 24 && Tab[indiceT].ind != 25 && Tab[indiceT].ind != 26 
	 && Tab[indiceT].ind != -1 &&  Tab[indiceT].ind != -2 && Tab[indiceT].ind != 27 && Tab[indiceT].ind != 28  ){
     	aux=1;
	 }
	 bs4=1,bs24=0,iie4=0;
     while(aux == 0){
     	bs4=1,bs24=0,iie4=0;
	  ress =0;
	  ress2 =0;
	
	 if(Tab[indiceT].ind != 17 && Tab[indiceT].ind != 18  && Tab[indiceT].ind != 19 && Tab[indiceT].ind != 20
	&& Tab[indiceT].ind != 21 && Tab[indiceT].ind != 22 && Tab[indiceT].ind != 23 &&  Tab[indiceT].ind != 24 && Tab[indiceT].ind != 25 
	&& Tab[indiceT].ind != 26 && Tab[indiceT].ind != 27 && Tab[indiceT].ind != 28){
	 	 
     	meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
	 }else {
	 	  Tab2[indiceT22].token1 = Tab[indiceT].token;
      Tab2[indiceT22].lexema1 = Tab[indiceT].lexema;
      Tab2[indiceT22].valor1 = Tab[indiceT].valor;
       Tab2[indiceT22].linha1 = Tab[indiceT].linha;
       Tab2[indiceT22].ind1 = Tab[indiceT].ind;
       Tab2[indiceT22].coluna1 = Tab[indiceT].coluna;
       indiceT22++;
	 }
	 
	 interator();
	 	do{
		
       	if(Tab[indiceT].ind == 32){
       	expp1++;
       	expp2++;
       	expp3++;
       	  Tab2[indiceT22].token1 = Tab[indiceT].token;
      Tab2[indiceT22].lexema1 = Tab[indiceT].lexema;
      Tab2[indiceT22].valor1 = Tab[indiceT].valor;
       Tab2[indiceT22].linha1 = Tab[indiceT].linha;
       Tab2[indiceT22].ind1 = Tab[indiceT].ind;
       Tab2[indiceT22].coluna1 = Tab[indiceT].coluna;
       indiceT22++;
       		interator();
       		
		   }else {
		   	 
		   	ress =1;
		   }
	   }while((ress == 0));
	 	
	 	 	
     if(Tab[indiceT].ind != -1 &&  Tab[indiceT].ind != -2){
    	
     	meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
	 }else {
	 	  Tab2[indiceT22].token1 = Tab[indiceT].token;
      Tab2[indiceT22].lexema1 = Tab[indiceT].lexema;
      Tab2[indiceT22].valor1 = Tab[indiceT].valor;
       Tab2[indiceT22].linha1 = Tab[indiceT].linha;
       Tab2[indiceT22].ind1 = Tab[indiceT].ind;
       Tab2[indiceT22].coluna1 = Tab[indiceT].coluna;
       indiceT22++;
	 		if(Tab[indiceT].lexema != ""){
	 		//cout << Tab[indiceT].lexema << endl; 
	 			ssd4[iie4] = Tab[indiceT].lexema;
		//cout << ssd[iie] << endl;
		iie4++;
		
		//cout << Variaveis[1] << endl;
		for(int a=1; a <= indiceV;a++){
			
			if(ssd4[bs24] == Variaveis[a]){
				
				bs4++;
			}
			
		}
		
		//cout << bs1 << endl;
		
	     if(bs4 == 1){
	     	meroo(4,Tab[indiceT].lexema,Tab[indiceT].linha,Tab[indiceT].coluna);
		 }
		bs4=1;
		bs24++;
		 } // fim de if ;
		 
		 if(Tab[indiceT].lexema != ""){
		 	 for(int rx1=0 ; rx1 < contS ;rx1++){ // teste erro de string que nao pode ter detnro do if;
        	if(Tab[indiceT].lexema == guardS[rx1]){
        		meroo(11,Tab[indiceT].lexema,Tab[indiceT].linha,Tab[indiceT].coluna);
			}
		}
		} // fim de if ;
	 }
	 interator();
	 
 	do{
       	if(Tab[indiceT].ind == 33  ){
       		expp1++;
       		expp2++;
       		expp3++;
       		  Tab2[indiceT22].token1 = Tab[indiceT].token;
      Tab2[indiceT22].lexema1 = Tab[indiceT].lexema;
      Tab2[indiceT22].valor1 = Tab[indiceT].valor;
       Tab2[indiceT22].linha1 = Tab[indiceT].linha;
       Tab2[indiceT22].ind1 = Tab[indiceT].ind;
       Tab2[indiceT22].coluna1 = Tab[indiceT].coluna;
       indiceT22++;
       		interator();
       	//ress2 =1;
		   }else {
		   		
		   ress2 =1;
		   }
	   }while(ress2 == 0);
	
	
	 if(Tab[indiceT].ind != 17 && Tab[indiceT].ind != 18  && Tab[indiceT].ind != 19 && Tab[indiceT].ind != 20
	&& Tab[indiceT].ind != 21 && Tab[indiceT].ind != 22 && Tab[indiceT].ind != 23 &&  Tab[indiceT].ind != 24 && Tab[indiceT].ind != 25 && Tab[indiceT].ind != 26 
	 && Tab[indiceT].ind != -1 &&  Tab[indiceT].ind != -2 && Tab[indiceT].ind != 27 && Tab[indiceT].ind != 28){ // retura 22 para tras;
	   
     	aux=1;
	 }
}

for(int u1=0 ; u1 < indiceT22; u1++){
	//cout << Tab2[u1].token1 << endl;
	if(Tab2[u1].ind1 == 28 || Tab2[u1].ind1 == 27 ){
		if(Tab2[u1-1].ind1 == -2 || Tab2[u1-1].ind1 == -1 || Tab2[u1+1].ind1 == -2 || Tab2[u1+1].ind1 == -1){
			meroo(2,Tab2[u1].token1,Tab2[u1].linha1,Tab2[u1].coluna1);
		}
	}else if (Tab2[u1].ind1 == 17 || Tab2[u1].ind1 == 18 || Tab2[u1].ind1 == 19 || Tab2[u1].ind1 == 20 || 
	Tab2[u1].ind1 == 21 || Tab2[u1].ind1 == 22  ){
			if(Tab2[u1-1].ind1 == 33 || Tab2[u1+1].ind1 == 32){
			meroo(2,Tab2[u1].token1,Tab2[u1].linha1,Tab2[u1].coluna1);
		}
	}else if (Tab2[u1].ind1 == 23 || Tab2[u1].ind1 == 24 || Tab2[u1].ind1 == 25 || Tab2[u1].ind1 == 26){
		if(Tab2[u1-3].ind1 == 27 ||  Tab2[u1-3].ind1 == 28  || Tab2[u1+3].ind1 == 27 || Tab2[u1+3].ind1 == 28){
			meroo(2,Tab2[u1].token1,Tab2[u1].linha1,Tab2[u1].coluna1);
		}else if (Tab2[u1-1].ind1 == 33 &&  Tab2[u1+1].ind1 == 32){
				meroo(2,Tab2[u1].token1,Tab2[u1].linha1,Tab2[u1].coluna1); // aqui;
		}
	}else if (Tab2[u1].ind1 == -1 || Tab2[u1].ind1 == -2 ){
		if((Tab2[u1-1].ind1 == 32 &&  Tab2[u1+1].ind1 == 33) ){
			meroo(2,Tab2[u1].token1,Tab2[u1].linha1,Tab2[u1].coluna1);
		}
	}
}
indiceT22 =0;
	bs4=1,bs24=0,iie4=0;
}
   


void expressaoAri(){
	
	int aux;
	aux=0;
	int cont =0;
	int aux2=0;
	int aux33 =0;
	int abre =0, fecha=0 , id_num=0;
	 do{
      
       	if(Tab[indiceT].ind == 32 ){
       abre++;
      cotA++;
       		
       		interator();
		   }else {
		   	aux2 =1;
		   }
	   }while((aux2 == 0));
	   
	if(Tab[indiceT].ind != -1 &&  Tab[indiceT].ind != -2){
   	meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
   }else {
   	//	cout << Tab[indiceT].valor << endl;
   		id_num++;
   		if(Tab[indiceT].lexema != ""){
   	        //cout << ssd1[iie1] << endl;
	 		//cout << Tab[indiceT].lexema << endl; 
	 			ssd1[iie1] = Tab[indiceT].lexema;
		//cout << ssd[iie] << endl;
		iie1++;
		
		//cout << Variaveis[1] << endl;
		for(int a=1; a <= indiceV;a++){
			
			if(ssd1[bs21] == Variaveis[a]){
				
				bs1++;
			}
			
		}
		
		//cout << bs1 << endl;
		
	     if(bs1 == 1){
	     	meroo(4,Tab[indiceT].lexema,Tab[indiceT].linha,Tab[indiceT].coluna);
		 }
		bs1=1;
		bs21++;
		 }
   }
   
   
   interator();
   
    do{
      
       	if(Tab[indiceT].ind == 33 ){
            fecha++;
       		 cotA++;
       		interator();
       	
		   }else {
		   	
		   	aux33 =1;
		   }
		   
	   }while((aux33 == 0));

   if( Tab[indiceT].ind != -1 &&  Tab[indiceT].ind != -2 
&& Tab[indiceT].ind != 23  && Tab[indiceT].ind != 24  && Tab[indiceT].ind != 25 && Tab[indiceT].ind != 26){
			aux =1 ;
	}
bs1=1;
bs21=0;
iie1=0;
	while(aux == 0){
		bs1=1;
bs21=0;
iie1=0;
		ress3 =0;
	  ress33 =0;
//	gh =false;
   if(Tab[indiceT].ind != -1 &&  Tab[indiceT].ind != -2 
&& Tab[indiceT].ind != 23  && Tab[indiceT].ind != 24  && Tab[indiceT].ind != 25 && Tab[indiceT].ind != 26){
			aux =1 ;
	}
	

   if( Tab[indiceT].ind != 23 && Tab[indiceT].ind != 24  && Tab[indiceT].ind != 25  && Tab[indiceT].ind != 26){
   		meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
   }else {
   	
   	if (indiceSS > 0 && ss == true){ // testa se operadores no string ;
    // cout << Tab[indiceT].token << endl;
     if(Tab[indiceT].ind == 23 || Tab[indiceT].ind == 24 || Tab[indiceT].ind == 25   ) {
     	meroo(6 ,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
	 }
	
} // fim do if
   	
   		if (indiceSS > 0 && ss == true){ // testa se operadores de divisão no string ;
    // cout << Tab[indiceT].token << endl;
     if(Tab[indiceT].ind == 26  ) {
     	meroo(7 ,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
	 }
	
} // fim do if
   	
   	if(veriS == true){
   		if(Tab[indiceT].ind == 23 || Tab[indiceT].ind == 24 || Tab[indiceT].ind == 25  ){// verifica os operações em uma string ;
		   	meroo(6,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
		   }
	   }
	   
	    	if(veriS == true){ // repete para divisão
   		if( Tab[indiceT].ind == 26 ){// verifica os operações em uma string ;
		   	meroo(6,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
		   }
	   }
	   
	   if(veriI == true){ // verifica se tem divisoa no inteiro;
	   	if(Tab[indiceT].ind == 26 ){
	   			meroo(7,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
		   }
	   }
	   
	   if(indiceII > 0 && ii == true) { // verifia da segunda variavel interia em diante ;
	   	if(Tab[indiceT].ind == 26 ){
	   			meroo(8,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
		   }
	   }
   	
   }
   
 
   interator();
  
		do{
		
       	if(Tab[indiceT].ind == 32){
       		cotA++;
       		abre++;
       		interator();
       		 
		   }else {
		   	ress3 =1;
		   }
	   }while((ress3 == 0));
	
	if(Tab[indiceT].ind != -1 &&  Tab[indiceT].ind != -2){
			meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
	}else {
			id_num++;
			if(Tab[indiceT].lexema != ""){
			
	 	//	cout << Tab[indiceT].lexema << endl; 
	 			ssd1[iie1] = Tab[indiceT].lexema;
		//cout << ssd[iie] << endl;
		iie1++;
		
		//cout << Variaveis[1] << endl;
		for(int a=1; a <= indiceV;a++){
			
			if(ssd1[bs21] == Variaveis[a]){
				
				bs1++;
			}
			
		}
		
		//cout << bs1 << endl;
		
	     if(bs1 == 1){
	     	meroo(4,Tab[indiceT].lexema,Tab[indiceT].linha,Tab[indiceT].coluna);
		 }
		bs1=1;
		bs21++;
		 }
	if (indiceSS > 0 && ss ==true){ // testa se tem  no segundo elemento na atribuição string;
     
     if(Tab[indiceT].ind == -2) {
     	meroo(6,Tab[indiceT].valor,Tab[indiceT].linha,Tab[indiceT].coluna);
	 }
	
} // fim do if ;

if(indiceSS > 0){ // testa se tem ids inteiros nas strings ; testa da segunda variaveil em diante;
	for(int ss2=0 ; ss2 < contI ; ss2++){
		if(guardI[ss2]== Tab[indiceT].lexema && ss == true){
				meroo(6,Tab[indiceT].lexema,Tab[indiceT].linha,Tab[indiceT].coluna);
		}
	}
} // fim do if

if(indiceSS > 0){
		for(int ss33=0 ; ss33 < dg ; ss33++){// testa sem tem ids do tipo real na string , da segunda variavel em diante;
		if(guardR[ss33]== Tab[indiceT].lexema && ss == true){
				meroo(7,Tab[indiceT].lexema,Tab[indiceT].linha,Tab[indiceT].coluna);
		}
	}
}// fim do if

if(indiceII > 0){ 
	for(int x11=0 ; x11 < contS ; x11++){// testa sem tem ids do tipo string  no inteiro , da segunda variavel em diante;
		if(guardS[x11]== Tab[indiceT].lexema && ii == true){
				meroo(9,Tab[indiceT].lexema,Tab[indiceT].linha,Tab[indiceT].coluna);
		}
	}
	for(int x22=0 ; x22 < dg ; x22++){// testa sem tem ids do tipo real no inteiro , da segunda variavel em diante;
		if(guardR[x22]== Tab[indiceT].lexema && ii == true){
				meroo(8,Tab[indiceT].lexema,Tab[indiceT].linha,Tab[indiceT].coluna);
		}
	}
	
	if(ii){
		//cout << Tab[indiceT].valor << endl;
		char np2[Tab[indiceT].valor.length()]; // guard os caracteres do valor;
	int nq2[Tab[indiceT].valor.length()]; // guard os inteiro do valor;	
	fd66 = Tab[indiceT].valor; // varivel fd é global ;;
	for(int tt2=0 ; tt2 < fd66.length() ; tt2++){ // verifica se tem nuemro real no inteiro;
		np2[tt2] = fd66.at(tt2);
          nq2[tt2] = np2[tt2];
          
          if (nq2[tt2] == 46){
          	meroo(8,Tab[indiceT].valor,Tab[indiceT].linha,Tab[indiceT].coluna);
		  }
	}
	fd66 ="";
	}
}

if(indiceRR > 0){
	for(int y11=0 ; y11 < contS ; y11++){
		if(guardS[y11] == Tab[indiceT].lexema && rr == true){
		meroo(10,Tab[indiceT].lexema,Tab[indiceT].linha,Tab[indiceT].coluna);	
		}
	}
}
	if (veriI == true){ // fazer o eroo de inteiro nao aceita numero real;
	//cout << Tab[indiceT].valor << endl;
    char npp[Tab[indiceT].valor.length()]; // guard os caracteres do valor;
	int nqq[Tab[indiceT].valor.length()]; // guard os inteiro do valor;	
	fd2 = Tab[indiceT].valor; // varivel fd é global ;;
	for(int t2=0 ; t2 < fd2.length() ; t2++){ // verifica se tem nuemro real no inteiro;
		npp[t2] = fd2.at(t2);
          nqq[t2] = npp[t2];
          
          if (nqq[t2] == 46){
          	meroo(8,Tab[indiceT].valor,Tab[indiceT].linha,Tab[indiceT].coluna);
		  }
	}
	fd2 ="";
}
		for(int k = 0 ; k < dg ; k++){
			if(guardR[k]== Tab[indiceT].lexema && veriS == true){// verifica ids reais na string ;
				meroo(7,Tab[indiceT].lexema,Tab[indiceT].linha,Tab[indiceT].coluna);
			}else if(Tab[indiceT].ind == -2 && veriS == true){ // verifica numero ;
				meroo(6,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
			}
		} // fim do for ;
		
		for(int n = 0 ; n < contI ; n++){ // verifica ids inteiros na string depois do primeiro elemento;
			if(guardI[n]== Tab[indiceT].lexema && veriS == true){
					meroo(6,Tab[indiceT].lexema,Tab[indiceT].linha,Tab[indiceT].coluna);
			}
		} // fim do for ;
		
		for(int m = 0 ; m < contS ; m++){ // verifica se tem alguma id de string nos reais;
		if(guardS[m]== Tab[indiceT].lexema && veriR == true){
			meroo(10,Tab[indiceT].lexema,Tab[indiceT].linha,Tab[indiceT].coluna);
		}
			
		} // fim do for;
		
		for(int o = 0 ; o < contS ; o++){ // verifica se tem alguma string nos inteiros;
			if(guardS[o]== Tab[indiceT].lexema && veriI == true){
				meroo(9,Tab[indiceT].lexema,Tab[indiceT].linha,Tab[indiceT].coluna);
			}
		} // fim do for;
		
		for(int p = 0 ; p < dg ; p++){ // verifica se tem alguma id real nos inteiros;
		if(guardR[p]== Tab[indiceT].lexema && veriI == true){
			meroo(8,Tab[indiceT].lexema,Tab[indiceT].linha,Tab[indiceT].coluna);
		}
			
		}// fim do for;
	}
	

interator();

	do{
       	if(Tab[indiceT].ind == 33 ){
       		 cotA++;	
				fecha++;	
       		interator();
       	
		   }else {
		   		
		   	ress33 =1;
		   }
	   }while(ress33 == 0);
	
if(Tab[indiceT].ind != -1 &&  Tab[indiceT].ind != -2 
&& Tab[indiceT].ind != 23  && Tab[indiceT].ind != 24  && Tab[indiceT].ind != 25 && Tab[indiceT].ind != 26 ){
			aux =1 ;
	}
	
	
}
	



	if ((abre == 1 && fecha == 1) && id_num > 1 ){
	meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
}


//cout << cotA << endl;

		bs1=1;
bs21=0;
iie1=0;
}
   


void testIf(){
		Tab[indiceT];
	int aux;
	aux=0;

	interator();
	if(Tab[indiceT].ind != 32){
		meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
	}else {
			expp1++;
	}
	
	interator();
	
    expressaoAri2();
   indiceT --;
   
   	 if(expp1 == 4 ){
meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
}
   if(expp1 %2 != 0){
meroo(2,Tab[indiceT].lexema,Tab[indiceT].linha,Tab[indiceT].coluna);
}
expp3=0;
expp2=0;
expp1 =0;
	if(Tab[indiceT].ind != 33){
		meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
	}
	
	interator();
	
	if(Tab[indiceT].ind != 4){
		meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
	}
	
interator();
	
	if(Tab[indiceT].ind == -2 || Tab[indiceT].ind == 30 || Tab[indiceT].ind == 31 
	|| Tab[indiceT].ind == 29 || Tab[indiceT].ind == 32 || Tab[indiceT].ind == 33 
	|| Tab[indiceT].ind == 17 || Tab[indiceT].ind == 18 || Tab[indiceT].ind == 19 || 
	Tab[indiceT].ind == 20 || Tab[indiceT].ind == 21 || Tab[indiceT].ind == 22 || Tab[indiceT].ind == 23
	|| Tab[indiceT].ind == 24 || Tab[indiceT].ind == 25 || Tab[indiceT].ind == 26 || Tab[indiceT].ind == 27 
	|| Tab[indiceT].ind == 28 || Tab[indiceT].ind == 7 || Tab[indiceT].ind == 34 ){
	   meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
	}
 comando(Tab[indiceT].ind);



}


void atribuicao(){
	

	Tab[indiceT];
	
//	identifica[jk] = Tab[indiceT].lexema;
//	
	veriR=false;
	veriS= false;
	veriI = false;
	ii= false;
	ss= false;
	rr= false;
   if(Tab[indiceT].lexema != ""){
	 		//cout << Tab[indiceT].lexema << endl; 
	 			ssd2[iie2] = Tab[indiceT].lexema;
		//cout << ssd[iie] << endl;
		iie2++;
		
		//cout << Variaveis[1] << endl;
		for(int a=1; a <= indiceV;a++){
			
			if(ssd2[bs22] == Variaveis[a]){
				
				bs3++;
			}
			
		}
		
	//	cout << bs3 << endl;
		
	     if(bs3 == 1){
	     	meroo(4,Tab[indiceT].lexema,Tab[indiceT].linha,Tab[indiceT].coluna);
		 }
		bs3=1;
		bs22++;
		 }
          for(int v=0 ; v < dg;v++ ){ // serve para testa as primeiras variaveis ; de qualquer tipo.
		if(guardR[v] == Tab[indiceT].lexema){
		   // cout << Tab[indiceT].lexema << endl;
		   	veriR=true;
		}else if(guardS[v] == Tab[indiceT].lexema ){
			veriS= true;
			//	cout << Tab[indiceT].lexema  << endl;
		}else if(guardI[v] == Tab[indiceT].lexema ){
			veriI = true;
		}
	}
identifica[jk]= Tab[indiceT].lexema;
//cout << identifica[jk] << endl;
jk++;   


for(vvv2=0 ; vvv2 < contS; vvv2++ ){ // verifica da segunda varivael em diante as strings;
	if(guardS[vvv2] == identifica[aux03]){ // identifica recebe as variavies antes da atribuição ;
		guardSS[indiceSS] = guardS[vvv2] ;
	//	cout << guardSS[indiceSS] << endl; 
		indiceSS++;
		ss = true;
	}

}  
 
	aux03++;
	
for(vv6=0 ; vv6 < contI; vv6++ ){ // verifica da segunda varivael em diante as inteiros;
	if(guardI[vv6] == identifica[aux04]){ // identifica recebe as variavies antes da atribuição ;
	//	guardSS[indiceII] = guardI[vv6] ;
		indiceII++;
		ii= true;
	}

}  
 	aux04++;
 	
for(vv7=0 ; vv7 < dg; vv7++ ){ // verifica da segunda varivael em diante as inteiros;
	if(guardR[vv7] == identifica[aux05]){ // identifica recebe as variavies antes da atribuição ;
		//guardRR[indiceRR] = guardR[vv7] ; // guardR esta no main, guardRR esta na atrinuição ;
		indiceRR++;
		rr= true;
	}

}  
 	aux05++;
	
	interator();

	if(Tab[indiceT].ind != 34){
		meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna); 
	}
 
	
	interator();

	
if (indiceSS > 0){ // testa se tem nnuemor no primeiro elemento na atribuição string;
     
     
     if (ss){
     		char np24[Tab[indiceT].valor.length()]; // guard os caracteres do valor;
	int nq24[Tab[indiceT].valor.length()]; // guard os inteiro do valor;	
	fd77 = Tab[indiceT].valor; // varivel fd é global ;;
	for(int tt44=0 ; tt44 < fd77.length() ; tt44++){ // verifica se tem nuemro real no inteiro;
		np24[tt44] = fd77.at(tt44);
          nq24[tt44] = np24[tt44];
          
          if (nq24[tt44] == 46){
          	meroo(7,Tab[indiceT].valor,Tab[indiceT].linha,Tab[indiceT].coluna);
		  }
	}
	 }
     if(Tab[indiceT].ind == -2 && ss == true) {
     	meroo(6,Tab[indiceT].valor,Tab[indiceT].linha,Tab[indiceT].coluna);
	 }
	for(int ss1=0 ; ss1 < contI ; ss1++){// testa sem tem ids do tipo inteiro na string , da segunda variavel em diante;
		if(guardI[ss1]== Tab[indiceT].lexema && ss == true){
				meroo(6,Tab[indiceT].lexema,Tab[indiceT].linha,Tab[indiceT].coluna);
		}
	}
	
	for(int ss3=0 ; ss3 < dg ; ss3++){// testa sem tem ids do tipo real na string , da segunda variavel em diante;
		if(guardR[ss3]== Tab[indiceT].lexema && ss == true){
				meroo(7,Tab[indiceT].lexema,Tab[indiceT].linha,Tab[indiceT].coluna);
		}
	}
}



if(indiceII > 0){ 
	for(int x11=0 ; x11 < contS ; x11++){// testa sem tem ids do tipo string  no inteiro , da segunda variavel em diante;
		if(guardS[x11]== Tab[indiceT].lexema && ii == true){
				meroo(9,Tab[indiceT].lexema,Tab[indiceT].linha,Tab[indiceT].coluna);
		}
	}
	for(int x22=0 ; x22 < dg ; x22++){// testa sem tem ids do tipo real no inteiro , da segunda variavel em diante;
		if(guardR[x22]== Tab[indiceT].lexema && ii == true){
				meroo(8,Tab[indiceT].lexema,Tab[indiceT].linha,Tab[indiceT].coluna);
		}
	}
	
	if(ii){
	//	cout << Tab[indiceT].valor << endl;
		char np2[Tab[indiceT].valor.length()]; // guard os caracteres do valor;
	int nq2[Tab[indiceT].valor.length()]; // guard os inteiro do valor;	
	fd44 = Tab[indiceT].valor; // varivel fd é global ;;
	for(int tt2=0 ; tt2 < fd44.length() ; tt2++){ // verifica se tem nuemro real no inteiro;
		np2[tt2] = fd44.at(tt2);
          nq2[tt2] = np2[tt2];
          
          if (nq2[tt2] == 46){
          	meroo(8,Tab[indiceT].valor,Tab[indiceT].linha,Tab[indiceT].coluna);
		  }
	}
	}
}

if(indiceRR > 0){
	for(int y11=0 ; y11 < contS ; y11++){ // testa string no real 
		if(guardS[y11] == Tab[indiceT].lexema && rr == true){
		meroo(10,Tab[indiceT].lexema,Tab[indiceT].linha,Tab[indiceT].coluna);	
		}
	}
}


for(int s=0 ; s < contS ; s++){ // verifica o real com string  ; // apenas no primeiro elemento ;
	if(guardS[s] == Tab[indiceT].lexema && veriR == true ){
		meroo(10,Tab[indiceT].lexema,Tab[indiceT].linha,Tab[indiceT].coluna);
	}
}

for(int l=0 ; l < dg ; l++){ // verificar o string com real;  /observar 
	if(guardR[l] == Tab[indiceT].lexema   && veriS == true ){
		meroo(10,Tab[indiceT].lexema,Tab[indiceT].linha,Tab[indiceT].coluna);
	}else if (Tab[indiceT].ind == -2 && veriS == true){
		meroo(10,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
		
	}
	
}

for(int b=0 ; b < contI ; b++){ // verificar o string com inteiro;  // observar 
	if(guardI[b] == Tab[indiceT].lexema && veriS == true ){
		meroo(6,Tab[indiceT].lexema,Tab[indiceT].linha,Tab[indiceT].coluna);
	}
	
	
}

for(int g=0 ; g < dg ; g++){ // verificar o inteiro com real;
	if(guardR[g] == Tab[indiceT].lexema && veriI== true ){
		meroo(8,Tab[indiceT].lexema,Tab[indiceT].linha,Tab[indiceT].coluna);
	}
}

for(int h=0 ; h < contS ; h++){ // verificar o inteiro com string;
	if(guardS[h] == Tab[indiceT].lexema && veriI== true ){
		meroo(9,Tab[indiceT].lexema,Tab[indiceT].linha,Tab[indiceT].coluna);
	}
}

if (veriI == true){ // fazer o eroo de inteiro nao aceita numero real;
	//cout << Tab[indiceT].valor << endl;
    char np[Tab[indiceT].valor.length()]; // guard os caracteres do valor;
	int nq[Tab[indiceT].valor.length()]; // guard os inteiro do valor;	
	fd = Tab[indiceT].valor; // varivel fd é global ;;
	for(int t=0 ; t < fd.length() ; t++){ // verifica se tem nuemro real no inteiro;
		np[t] = fd.at(t);
          nq[t] = np[t];
          
          if (nq[t] == 46){
          	meroo(8,Tab[indiceT].valor,Tab[indiceT].linha,Tab[indiceT].coluna);
		  }
	}
}


	expressaoAri(); // nao precisa coloca o interator depois pq ja tem dentro da função
	





//abre =0; fecha =0 ; id_num=0;
   if(cotA % 2 != 0){
	meroo(2,Tab[indiceT-1].token,Tab[indiceT-1].linha,Tab[indiceT-1].coluna);
}

//	interator();
	if(Tab[indiceT].ind != 31){
			meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
	}
	
 	
 
}

void testWhile(){
	Tab[indiceT];
	
		interator();
	if(Tab[indiceT].ind != 32){
		meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
	}else {
		expp2++;
	}
	interator();
	
    expressaoAri2();
    indiceT--;
    //cout << expp2 << endl;
    	 if(expp2 == 4 ){
meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
}
     if(expp2 %2 != 0 ){
meroo(2,Tab[indiceT].lexema,Tab[indiceT].linha,Tab[indiceT].coluna);
}
expp3=0;
expp2=0;
expp1 =0;
	if(Tab[indiceT].ind != 33){
		meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
	}
	interator();
	// testa expressão logica fazer ;
	
	if(Tab[indiceT].ind != 7){
		meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
	}
	
	interator();// verificar isso ;
	if(Tab[indiceT].ind == -2 || Tab[indiceT].ind == 30 || Tab[indiceT].ind == 31 
	|| Tab[indiceT].ind == 29 || Tab[indiceT].ind == 32 || Tab[indiceT].ind == 33 
	|| Tab[indiceT].ind == 17 || Tab[indiceT].ind == 18 || Tab[indiceT].ind == 19 || 
	Tab[indiceT].ind == 20 || Tab[indiceT].ind == 21 || Tab[indiceT].ind == 22 || Tab[indiceT].ind == 23
	|| Tab[indiceT].ind == 24 || Tab[indiceT].ind == 25 || Tab[indiceT].ind == 26 || Tab[indiceT].ind == 27 
	|| Tab[indiceT].ind == 28 || Tab[indiceT].ind == 7 || Tab[indiceT].ind == 34  ){
		meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
	}
	//cout << Tab[indiceT].valor << endl;
	comando(Tab[indiceT].ind);
}

void testRepeat(){
	
	int auxpp3;
	auxpp3 =0;
	Tab[indiceT];
	interator();
	comando(Tab[indiceT].ind);
	interator();
	do{
   
		if(Tab[indiceT].ind == -1){
		comando(Tab[indiceT].ind); 
		interator();
	}
	
	if(Tab[indiceT].ind != -1){
		auxpp3 =1;
	}
	
	}while(auxpp3 == 0);
	
	if(Tab[indiceT].ind != 8){
		meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
	}
	
	
	interator();
	
		if(Tab[indiceT].ind != 32){
			meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
	}else{
	expp3++;
	}
	
	interator();
	
	expressaoAri2();
	indiceT--;
	
	 if(expp3 %2 != 0 ){
meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
}

	 if(expp3 == 4 ){
meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
}
expp3=0;
expp2=0;
expp1 =0;
		if(Tab[indiceT].ind != 33){
			meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
	}
	
	interator();
	if(Tab[indiceT].ind != 31){
			meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
	}
	


}

void testAll(){
	Tab[indiceT];
	int aux ;
	aux=0;
	
	interator();
	
	if(Tab[indiceT].ind != 32 ){
	meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);	
	}
	while(aux == 0){
		
	interator();
	
	if(Tab[indiceT].ind != -1 ){
	meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);	
	}else{
		
		if(Tab[indiceT].lexema != ""){
		
			ssd[iie] = Tab[indiceT].lexema;
		//cout << ssd[iie] << endl;
		iie++;
		
		//cout << Variaveis[1] << endl;
		for(int a=1; a <= indiceV;a++){
			
			if(ssd[bs2] == Variaveis[a]){
				
				bs++;
			}
			
		}
		
	//	cout << bs << endl;
		
	     if(bs == 1){
	     	meroo(4,Tab[indiceT].lexema,Tab[indiceT].linha,Tab[indiceT].coluna);
		 }
		bs=1;
		bs2++;
} // fim do if ;

if(Tab[indiceT].lexema != ""){
		 	 for(int rx1=0 ; rx1 < contI ;rx1++){ // teste erro de string que nao pode ter detnro do if;
        	if(Tab[indiceT].lexema == guardI[rx1]){
        		meroo(6,Tab[indiceT].lexema,Tab[indiceT].linha,Tab[indiceT].coluna);
			}
			
		   } // fim do for;
		   
		   for(int rx2=0 ; rx2 < dg ;rx2++){ // teste erro de string que nao pode ter detnro do if;
        	if(Tab[indiceT].lexema == guardR[rx2]){
        		meroo(7,Tab[indiceT].lexema,Tab[indiceT].linha,Tab[indiceT].coluna);
			}
			
		   } // fim do for;
		   
		} // fim de if ;
		
	} // else;
	interator();
	
	if((Tab[indiceT].ind != 30) && (Tab[indiceT].ind != 33)){
		meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
	}
	
	if(Tab[indiceT].ind == 33 ){
		aux =1;
	}
	
	}
	
		interator();
	
	if(Tab[indiceT].ind != 31 ){
	meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);	
	}
	
	
}

void comando(int Rest){
     int aux =0;
     aux = Rest;

	switch(aux){
		case -1:
			
			atribuicao();
			break;
		case  1:
			bloco();
			break;
		case  3:
			 testIf();
			break;
		case  5:
			 testElse();
			break;
		case  6:
			testWhile();
			break;
		case  9:
			testRepeat();
			break;
		case 12:
			testAll();
			break;
		//default :
			
		//	meroo(2,tab.token);
		
	}

	
}

string follow(int lc){// colocar dois inteiros 
			string resp;
	int indice=0;
	indice = lc;
	

	
	switch (indice){
		case 1:
			
				resp = "begin , end , if , while , repeat ,  all  ,  Id" ;
			
			break;
		case 2:
		
				resp = ";   . " ;
			
			break;
		case 3:
				
				resp = " ( " ;
			
		case 4: 
			resp = "begin" ;
			break;
			
		case 5: 
		  resp = "begin " ;
			break;
		case 6 :
			resp = " do " ;
			break;
		case 7 :
			resp = " ( vazio , bloco , id , while , repeat , if  )";
			break;
		case 8 :
				resp = " ( " ;
			break;
		case 9 :
				resp = " vazio ou begin ou ID " ;
			break;
		case 10 :
			resp = " ID " ;
			break;
		case 11 :
			resp = " ID " ;
			break;
		case 12 :
			resp = " ( " ;
			break;
		case 13 :
			resp = " ( ou num ou ID " ;
			break;
		case 14 :
			resp = " ( ou num ou ID " ;
			break;
		case 15 :
			resp = " ID " ;
			break;
		case 16 :
			resp = " ID " ;
			break;
		case 17 :
			resp = (" ( ou num ou ID " );
			break;
		case 18 :
			resp = (" ( ou num ou ID ") ;
			break;
		case 19 :
			resp = (" ( ou num ou ID " );
			break;
		case 20 :
			resp = (" ( ou num ou ID " );
			break;
		case 21 :
			resp = (" ( ou num ou ID " );
			break;
		case 22 :
			resp = (" ( ou num ou ID " );
			break;
		case 23 :
			resp = (" ( ou num ou ID ou < ou > ou <= ou >= ou <> ou =" );
			break;
		case 24 :
			resp = (" ( ou num ou ID ou < ou > ou <= ou >= ou <> ou =" );
			break;
		case 25 :
			resp = (" ( ou num ou ID ou < ou > ou <= ou >= ou <> ou =" );
			break;
		case 26 :
			resp = (" ( ou num ou ID ou < ou > ou <= ou >= ou <> ou =" );
			break;
		case 27 :
		resp = (" ( ou num ou ID " );
			break;
		case 28 :
			resp = (" ( ou num ou ID " );
			break;
		case 29 :
			resp = (" vazio ") ;
			break;
		case 30 :
			resp = (" vazio ") ;
			break;
		case 31 :
			resp = (" id ou num ") ;
			break;
		case 32 :
			resp = (" id ou num ") ;
			break;
		case 33 :
			resp = ";   .  + - * / " ;
			break;
		case 34 :
				resp = (" id ou num ") ;
			break;
				
		default:		
		printf(";   .  + - * / ");	
	}
	return resp;	
}


void bloco(){
	
Tab[indiceT];
int aux;
aux=0;



interator();

while(Tab[indiceT].ind != 2){
	//cout << Tab[indiceT].token << endl;
	if(Tab[indiceT].ind == -2 || Tab[indiceT].ind == 30 || Tab[indiceT].ind == 31 
	|| Tab[indiceT].ind == 29 || Tab[indiceT].ind == 32 || Tab[indiceT].ind == 33 
	|| Tab[indiceT].ind == 17 || Tab[indiceT].ind == 18 || Tab[indiceT].ind == 19 || 
	Tab[indiceT].ind == 20 || Tab[indiceT].ind == 21 || Tab[indiceT].ind == 22 || Tab[indiceT].ind == 23
	|| Tab[indiceT].ind == 24 || Tab[indiceT].ind == 25 || Tab[indiceT].ind == 26 || Tab[indiceT].ind == 27 
	|| Tab[indiceT].ind == 28 || Tab[indiceT].ind == 7 || Tab[indiceT].ind == 34 ){
	   meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
	}
	comando(Tab[indiceT].ind);
    interator();
      
}

interator();

if(Tab[indiceT].ind != 31){
	meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
}
	
}
void testeVa(){
	
	Tab[indiceT];
	int aux;
	aux=0;
	
	
	
	while(aux == 0){
	interator();
	
	if(Tab[indiceT].ind != -1){
		meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
		
		
	}else {
		for(indiceV2 = 1 ; indiceV2 <= indiceV; indiceV2++){
			if(Variaveis[indiceV2] == Tab[indiceT].lexema){
				meroo(3,Tab[indiceT].lexema,Tab[indiceT].linha,Tab[indiceT].coluna);
			}
		}
		indiceV++;
		Variaveis[indiceV]= Tab[indiceT].lexema;
	}
	
	interator();
	
	if((Tab[indiceT].ind != 30) && (Tab[indiceT].ind != 31) ){
			
		meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
	
		
	}
	
	if((Tab[indiceT].ind == 31) ){
		aux =1;
	
	}
		
	}
	
}

void testProgram(){
	Tab[indiceT];
	interator();
	
	if(Tab[indiceT].ind != -1){
		meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
	}
		interator();
	if(Tab[indiceT].ind != 31){
		meroo(2,Tab[indiceT].token,Tab[indiceT].linha,Tab[indiceT].coluna);
	}
	
}
bool procuraID(string toki){
	int i1;
	bool resp= true;
	char r;
	int r1;
	
	
	if(toki.length() == 1){
		
	r= toki.at(0);
	r1=r;
	
	if((r1 < 97)  || (r1 > 122)){
		resp = false;
	}	
	
	}else{
		
		char x[toki.length()];
		int res[toki.length()];
		 
		for (int i = 0; i < toki.length(); i++)
    {
          x[i] = toki.at(i);
          res[i] = x[i];
    }
	   
	   if((res[0] < 97) || (res[0] > 122) ){
	   	
	   	resp = false;
	   	
	   } else{
	   	
	   	   for(int i = 1 ; i < toki.length(); i++){
	   	   	
	   	   	 if((res[i] < 97) || (res[i] > 122) ){
	   	   	 	
	   	   	 	 if((res[i] < 48) || (res[i] > 57) ){
	   	   	 	 	resp =false;
	   	   	 	 	
				}
	   	   	 	
			}
	   	   	
			  }
	   }
		
	}
	
	return resp;
}

bool procuraNum(string token){
	bool resp, virgula;
    resp= true;
    virgula= false;
    char x[token.length()];
    int res[token.length()];
    for (int i = 0; i < token.length(); i++)
    {
         x[i] = token.at(i);
          res[i] = x[i];

    }
    
    for(int i1= 0 ; i1 < token.length(); i1++){
    	
    	
    	if((i1 > 0) && (res[i1] == 46 ) && !(virgula) ){
    		virgula =true;
		}else {
			 if((res[i1] < 48) || (res[i1] > 57) ){
			 	 
			 	 resp= false;
			 }
		}
	}
    
    

return resp;	
}

void meroo(int codEroo, string tok, int linn , int coluun){

  switch(codEroo){
  	case 1 :
  		cout << "erro 1 Identificador ou simbolo inesperado  " << tok << "  linha " << linn << "coluna " << coluun  << " follow " << " vazio "  << endl;
  	
  		system("pause");
  		system("cls");
  		menu();
  		
  		break;
  	case 2:
  		cout << "erro2  simbolo " << tok <<" esperando " <<  follow(buscatoken(tok)) << "  linha " << linn << "coluna " << coluun << endl;
  		system("pause");
  		system("cls");
  		menu();
  		
  		break;
  	case 3:
  		cout << "eroo 6 variavel " << tok <<  " declarada em duplicidade " << " linha " << linn << "coluna " << coluun << " esperava vazio "   << endl;
  	   	system("pause");
  		system("cls");
  		menu();
  		
  		break;
  	case 4 :
	  cout << "eroo 4  Identificador " << tok << " nao declarada " << " linha " << linn << " coluna " << coluun << " esperava a varivavel declarada "  << endl;
	  	system("pause");
  		system("cls");
  		menu();
  		
  		break;
    case 5:
		cout << "eroo 3 semantico  tipo incompativel " << tok << "  linha " << linn << "coluna " << coluun <<  " esperava vazio" << endl;
			system("pause");
  		system("cls");
  		menu();
  		
  		break;
  	 case 6:
		cout << "eroo 3 semantico  tipo incompativel " << tok << " string e integer " << "  linha " << linn << "coluna " << coluun <<  " esperava vazio" << endl;
	    	system("pause");
  		system("cls");
  		menu();
  		
  		break;
  	 case 7:
		cout << "eroo 3 semantico  tipo incompativel " << tok << " string e real " <<"  linha " << linn << " coluna " << coluun <<  " esperava vazio" << endl;
			system("pause");
  		system("cls");
  		menu();
  		
  		break;
  		 case 8:
		cout << "eroo 3 semantico  tipo incompativel " << tok << " integer e real " <<"  linha " << linn << " coluna " << coluun <<  " esperava vazio" << endl;
			system("pause");
  		system("cls");
  		menu();
  		
  		break;
  		 case 9:
		cout << "eroo 3 semantico  tipo incompativel " << tok << " integer e String " <<"  linha " << linn << " coluna " << coluun <<  " esperava vazio" << endl;
			system("pause");
  		system("cls");
  		menu();
  		
  		break;
  		case 10:
		cout << "eroo 3 semantico  tipo incompativel " << tok << " real e String " <<"  linha " << linn << " coluna " << coluun <<  " esperava vazio" << endl;
			system("pause");
  		system("cls");
  		menu();
  		
  		break;
  		case 11:
		cout << "eroo 3 semantico  tipo incompativel " << tok << "  String e real ou string e integer " <<"  linha " << linn << " coluna " << coluun <<  " esperava vazio" << endl;
			system("pause");
  		system("cls");
  		menu();
  		
  		break;
  		case 12:
  		cout << "erro2  simbolo " << tok << " esperando } "  << "  linha " << linn << " coluna " << coluun << endl;
  			system("pause");
  		system("cls");
  		menu();
  		
  		break;
  		case 13:
  		cout << "erro2  simbolo " << tok <<" esperando vazio"  << "  linha " << linn << "coluna " << coluun << endl;
  		system("pause");
  		system("cls");
  		menu();
  		
  		break;
  	
  	default:
  		printf("nada");
  }
	
}
int buscatoken(string tokenentrada){
	preenchetoken();
	int tok;
	
	
	for(int i=1 ; i <= 34; i++){
		
		if(tokenentrada == Reservada[i]){
			tok = i;
		}
	
	}
		return tok;
	
}


void interator(){
 	 Total();
 	 
 //	 printf("%d\n", totToken );
 	 
 	 indiceT = indiceT +1;
 	 
 	 if(indiceT > totToken-1){ // pq o ultimo é valor zero;
 	 	printf("eroo\n");
 	 	exit(0);
	  }
 	
 	 
 }
