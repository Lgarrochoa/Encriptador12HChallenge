#include<iostream>
using namespace std;
#include<stdlib.h>
#include<string>
#include<fstream>
#include<time.h>
#include<cstdlib>
#include<cstring>
#include<sstream>//Librerias

char texto_b[2]="", abecedario[]="abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz", nombre_b[15],en[]=" Encriptado", des[]=" Desencriptado", texto_c=' ',nombre_d[15],numero_secreto_2[3];
int numero=0, numero_2=0,n=0,n1=0,i=0,n2=0,n3=0,n4=0,n5=0;//Variables

void encriptar();
void desencriptar();//Declaro las funciones
char *strlwr(char *str)
{
  unsigned char *p = (unsigned char *)str;

  while (*p) {
     *p = tolower((unsigned char)*p);
      p++;
  }

  return str;
}
char *strupr(char *str)
{
  unsigned char *p = (unsigned char *)str;

  while (*p) {
     *p = toupper((unsigned char)*p);
      p++;
  }

  return str;
}

int main(){//funcion main
 int ele = 0;
 bool a = false;//extra variables

  while(!a){//bucle de menu

   system("clear");
   cout<<"Menu:"<<endl<<"1:Encriptar"<<endl<<"2:Desencriptar"<<endl<<"3:Salir"<<endl;
   cin>>ele;//Menu

switch (ele){//el programa identifica que opcion has elegido
     case 1:
      encriptar();
     break;
     case 2:
      desencriptar();
     break;
     case 3:
      exit(0);
     break;
     default:
      system("clear");
      cout<<"Ha ocurrido un error";
      exit(1);
     break;

}

 }

 system("pause");
 return 0;

 }


 void encriptar(){//funcion encriptar
string nombre,nombre_c,nombre_txt,txt=".txt",numero_secreto;
 ofstream archivo_a;
 ifstream archivo_b;//declaro variables extra
cin.ignore();
 system("clear");
 cout<<"Seleccione el archivo que desea encriptar: ";
getline(cin, nombre);//guarda lo que has escrito
nombre_txt=nombre+txt;//le añade la terminacion txt al nombre que has elegido


 archivo_b.open(nombre_txt.c_str(), ios::in);//abre el archivo elegido
if(archivo_b.fail()){
    system("clear");
    cout<<"Ha ocurrido un error";
    exit(1);
}

strcpy(nombre_b, nombre.c_str());
strcat(nombre_b, en);
strcat(nombre_b, txt.c_str());
nombre_c=nombre_b;
  archivo_a.open(nombre_c.c_str(),ios::out);//crea un nuevo archivo
if(archivo_a.fail()){
    system("clear");
    cout<<"Ha ocurrido un error";
    exit(1);
}
  srand(time(NULL));//genera un numero aleatorio del 1 al 20
  numero = 1 + rand()%(20);
  numero_2=numero;
  numero_2*=15;
numero_secreto=static_cast<std::ostringstream*>(&(std::ostringstream() << numero_2))->str();
strcpy(numero_secreto_2,numero_secreto.c_str());
for(int z=0;z<3;z++){//encripta el numero
    switch(numero_secreto_2[z]){
case '1':
    numero_secreto_2[z]='w';
    break;
    case '0':
    numero_secreto_2[z]='z';
    break;
    case '2':
    numero_secreto_2[z]='c';
    break;
    case '3':
    numero_secreto_2[z]='a';
    break;
    case '4':
    numero_secreto_2[z]='l';
    break;
    case '5':
    numero_secreto_2[z]='p';
    break;
    case '6':
    numero_secreto_2[z]='u';
    break;
    case '7':
    numero_secreto_2[z]='r';
    break;
    case '8':
    numero_secreto_2[z]='q';
    break;
    case '9':
    numero_secreto_2[z]='f';
    break;
    }
}
  archivo_a<<numero_secreto_2<<endl;
archivo_b.get(texto_b[0]);
strlwr(texto_b);
    while(!archivo_b.eof()){//encripta el txt


if(!i==1){
          for(int c=0;c<27;c++){

            if(texto_b[0]==abecedario[c]){
                texto_b[0]=abecedario[c+numero];
                archivo_a<<texto_b[0];
                c=28;
            }
            else{
                n++;
            }
if(n==27){
    archivo_a<<" ";
}
          }
}
n=0;
i=0;
archivo_b.get(texto_b[0]);
strlwr(texto_b);
if(!n3==1){


switch(texto_b[0]){
case '.':
    archivo_a<<".";
n3++;
    i++;
    break;
case ';':
    archivo_a<<";";
     i++;
    break;
case ':':
    archivo_a<<":";
     i++;
    break;
    case '*':
    archivo_a<<"*";
     i++;
    break;
    case 'ª':
    archivo_a<<"ª";
     i++;
    break;
    case ',':
    archivo_a<<",";
     i++;
    break;
    case '+':
    archivo_a<<"+";
     i++;
    break;
    case '_':
    archivo_a<<"_";
     i++;
    break;
    case '-':
    archivo_a<<"-";
     i++;
    break;
    case '{':
    archivo_a<<"{";
     i++;
    break;
    case '}':
    archivo_a<<"}";
     i++;
    break;
    case '/':
    archivo_a<<"/";
     i++;
    break;
    case '?':
    archivo_a<<"?";
     i++;
    break;
    case '¿':
    archivo_a<<"¿";
     i++;
    break;
    case '¡':
    archivo_a<<"¡";
     i++;
    break;
    case '!':
    archivo_a<<"!";
     i++;
    break;
    case '@':
    archivo_a<<"@";
     i++;
    break;
    case '%':
    archivo_a<<"%";
     i++;
    break;
    case '#':
    archivo_a<<"#";
     i++;
    break;
    case ']':
    archivo_a<<"]";
     i++;
    break;
    case '[':
    archivo_a<<"[";
     i++;
    break;
    case '^':
    archivo_a<<"^";
     i++;
    break;
    case '=':
    archivo_a<<"=";
     i++;
    break;
    case ')':
    archivo_a<<")";
     i++;
    break;
    case '(':
    archivo_a<<"(";
     i++;
    break;
    case '&':
    archivo_a<<"&";
     i++;
    break;
    case '$':
    archivo_a<<"$";
     i++;
    break;
    case 'ñ':
        archivo_a<<"ç";
        i++;
        break;
    case 'ç':
        archivo_a<<"ñ";
         i++;
        break;
    case 'á':
        texto_b[0]='a';
        break;
            case 'é':
        texto_b[0]='e';
        break;
            case 'í':
        texto_b[0]='i';
        break;
            case 'ó':
        texto_b[0]='o';
        break;
            case 'ú':
        texto_b[0]='u';
        break;
            case 'ï':
        texto_b[0]='i';
        break;
            case 'ü':
        texto_b[0]='u';
        break;
}

}
else{
    n3=0;
}
    }
    system("clear");
    cout<<"Cargando";//pantalla de carga
for(int d=0;d<4;d++){
    cout<<".";
}

archivo_a.close();//cierra los archivos
archivo_b.close();
 }
 void desencriptar(){
 string nombre,nombre_c,txt=".txt",nombre_txt;
 ofstream archivo_a;
 ifstream archivo_b;//variables extra
cin.ignore();
 system("clear");
 cout<<"Seleccione el archivo que desea desencriptar: ";
getline(cin, nombre);//guarda el nombre del archivo
nombre_txt=nombre+txt;//añade la terminacion txt
 archivo_b.open(nombre_txt.c_str(), ios::in);
if(archivo_b.fail()){
    system("clear");
    cout<<"Ha ocurrido un error ";
    exit(1);
}
strcpy(nombre_b, nombre.c_str());
strcat(nombre_b, des);
strcat(nombre_b, txt.c_str());
nombre_c=nombre_b;
  archivo_a.open(nombre_c.c_str(),ios::out);//crea nuevo archivo
if(archivo_a.fail()){
    system("clear");
    cout<<"Ha ocurrido un error ";
    exit(1);
}

getline(archivo_b, nombre);
strcpy(numero_secreto_2, nombre.c_str());
for(int z=0;z<3;z++){//desencripta el numero
    switch(numero_secreto_2[z]){
case 'w':
    numero_secreto_2[z]='1';
    break;
    case 'z':
    numero_secreto_2[z]='0';
    break;
    case 'c':
    numero_secreto_2[z]='2';
    break;
    case 'a':
    numero_secreto_2[z]='3';
    break;
    case 'l':
    numero_secreto_2[z]='4';
    break;
    case 'p':
    numero_secreto_2[z]='5';
    break;
    case 'u':
    numero_secreto_2[z]='6';
    break;
    case 'r':
    numero_secreto_2[z]='7';
    break;
    case 'q':
    numero_secreto_2[z]='8';
    break;
    case 'f':
    numero_secreto_2[z]='9';
    break;
    }
}
numero=atoi(numero_secreto_2);

numero=numero/15;

archivo_b.get(texto_b[0]);
n4=0;
n5=0;
while(!archivo_b.eof()){//desencripta el archivo

if(i==1){
    n1++;

}
if(!i==1){
          for(int c=0;c<27;c++){

            if(texto_b[0]==abecedario[c]){
                texto_b[0]=abecedario[c-numero+26];
              if(n5==1){
                strupr(texto_b);
                n5=0;
              }
               if(n4==0){
                strupr(texto_b);
                n4++;
               }
                archivo_a<<texto_b[0];
                n1++;

                c=28;
            }
            else{
                n++;
            }
if(n==27){
    archivo_a<<" ";
    n1++;


    if(n1>100){

   archivo_a<<endl;
    n1=0;
    n2=0;

}
}
          }
}
n=0;
i=0;

archivo_b.get(texto_b[0]);
if(!n3==1){
switch(texto_b[0]){
case '.':
    archivo_a<<".";
    i++;
n3++;
n5++;
    break;
case ';':
    archivo_a<<";";
     i++;
    break;
case ':':
    archivo_a<<":";
     i++;
    break;
    case '*':
    archivo_a<<"*";
     i++;
    break;
    case 'ª':
    archivo_a<<"ª";
     i++;
    break;
    case ',':
    archivo_a<<",";
     i++;
    break;
    case '+':
    archivo_a<<"+";
     i++;
    break;
    case '_':
    archivo_a<<"_";
     i++;
    break;
    case '-':
    archivo_a<<"-";
     i++;
    break;
    case '{':
    archivo_a<<"{";
     i++;
    break;
    case '}':
    archivo_a<<"}";
     i++;
    break;
    case '/':
    archivo_a<<"/";
     i++;
    break;
    case '?':
    archivo_a<<"?";
     i++;
    break;
    case '¿':
    archivo_a<<"¿";
     i++;
    break;
    case '¡':
    archivo_a<<"¡";
     i++;
    break;
    case '!':
    archivo_a<<"!";
     i++;
    break;
    case '@':
    archivo_a<<"@";
     i++;
    break;
    case '%':
    archivo_a<<"%";
     i++;
    break;
    case '#':
    archivo_a<<"#";
     i++;
    break;
    case ']':
    archivo_a<<"]";
     i++;
    break;
    case '[':
    archivo_a<<"[";
     i++;
    break;
    case '^':
    archivo_a<<"^";
     i++;
    break;
    case '=':
    archivo_a<<"=";
     i++;
    break;
    case ')':
    archivo_a<<")";
     i++;
    break;
    case '(':
    archivo_a<<"(";
     i++;
    break;
    case '&':
    archivo_a<<"&";
     i++;
    break;
    case '$':
    archivo_a<<"$";
     i++;
    break;
 case 'ñ':
        archivo_a<<"ç";
         i++;
        break;
    case 'ç':
        archivo_a<<"ñ";
         i++;
        break;

}
}
else{
    n3=0;
}
    }
 system("clear");
 cout<<"Cargando";//pantalla de carga
 for(int d=0;d<4;d++){
    cout<<".";
 }
 archivo_a.close();//cierra los archivos
 archivo_b.close();
 }
