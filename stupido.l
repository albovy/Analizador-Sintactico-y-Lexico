/*Ejecutado con flex -i (para minusculas y mayusculas)*/

%x caracter
%x comentariocorto
%x comentlargo
%x cadena
%x sigue
%{ 
   #include "stupido.tab.h"
   #include <string.h>
   #include <stdlib.h>
   #include <stdio.h>
   int lineas = 1;
%}



IDENTIFICADOR	[A-Za-z_][[:alnum:]_]*		

ENTERA	[[:digit:]]+

REAL	([0-9]*\.[0-9]+)|([0-9]+[Ee][+-]?[0-9]+)|([0-9]*\.[0-9]+[Ee][+-]?[0-9]+)

CUATRO_PTOS	"::"
DOS_PTOS	".."

CARACTER	[^\n'\\]
RANGO255	([0-9]{2})|(1[0-9]{2})|(2[0-4][0-9]|25[0-5])
ESCAPADOS	(\\'|\\\?|\\\\|\\a|\\b|\\f|\\n|\\r|\\t|\\v)
OCTAL		(\\[0-3]?[0-7]{1,2})
HEXADECIMAL	(\\x[0-9a-fA-F]{1,2})

CAR		('{CARACTER}')|('{OCTAL}')|('{ESCAPADOS}')|('{RANGO255}')|('{HEXADECIMAL}')

CAD		({CARACTER}|{ESCAPADOS})

PATH		\"[/"./""../"][^\n\"]+\"



EQ		":="
GEQ		">="
LEQ		"=<"
NEQ		"!="
LOGICO		("!"|\/\\|\\\/)
DESPD		"->"
DESPI		"<-"
FLECHA_DOBLE	"=>"
POTENCIA 	"**"



SP		[ \t]

%%

\/\/				BEGIN(comentariocorto);
<comentariocorto>[^\n]		;
<comentariocorto>\n		BEGIN(INITIAL);lineas++;


'				BEGIN(cadena);
<cadena>{CAD}*			printf("linea %d, cadena: %s\n",lineas,yytext);			return(CTC_CADENA);
<cadena>\\\n			lineas++;BEGIN(sigue);
<cadena>'			BEGIN(INITIAL);
<cadena>\n			printf("linea %d, error en la cadena \n",lineas);BEGIN(INITIAL);
<sigue>{CAD}*			printf("linea %d, sigue la cadena: %s\n",lineas,yytext);BEGIN(cadena);


			      



"/*"				BEGIN(comentlargo);
<comentlargo>[^*\n]*		;
<comentlargo>"*"+[^*/\n]*;	;
<comentlargo>\n			lineas++;
<comentlargo>"*/"		BEGIN(INITIAL);



\n				lineas++; 
CLASE				printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(CLASE);
CARACTER			printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(CARACTER);
CASO				printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(CASO);
CADENA				printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(CADENA);
BOOLEANO			printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(BOOLEANO);
ASOCIATIVA			printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(ASOCIATIVA);
ABSTRACTO			printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(ABSTRACTO);
CABECERA			printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(CABECERA);
CONJUNTO			printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(CONJUNTO);
CONSTANTE			printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(CONSTANTE);
CUERPO				printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(CUERPO);
CONSTRUCTOR			printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(CONSTRUCTOR);
CUANDO				printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(CUANDO);
DESCENDENTE			printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(DESCENDENTE);
DESTRUCTOR			printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(DESTRUCTOR);
DE				printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(DE);
DEVOLVER			printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(DEVOLVER);
CARGA				printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(CARGA);
ELEMENTO			printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(ELEMENTO);
EJECUTA				printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(EJECUTA);
EN				printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(EN);
ENTERO				printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(ENTERO);
ENTONCES			printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(ENTONCES);
ES				printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(ES);
ESPECIFICO			printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(ESPECIFICO);
EXCEPTO				printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(EXCEPTO);
FICHERO				printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(FICHERO);
FINAL				printf("linea %d, palabra reservada: %s\n",lineas,yytext);	;return(FINAL);
FINALMENTE			printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(FINALMENTE);
FUNCION				printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(FUNCION);
GENERICO			printf("linea %d, palabra reservada: %s\n",lineas,yytext);	;return(GENERICO);
HASTA				printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(HASTA);
INTERFAZ			printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(INTERFAZ);
LANZAR				printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(LANZAR);
LISTA				printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(LISTA);
MIENTRAS			printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(MIENTRAS);
MODIFICABLE			printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(MODIFICABLE);
OTRO				printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(OTRO);
PAQUETE				printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(PAQUETE);
PARA				printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(PARA);
PRIVADO				printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(PRIVADO);
PROBAR				printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(PROBAR);
PROCEDIMIENTO			printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(PROCEDIMIENTO);
PROGRAMA			printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(PROGRAMA);
PUBLICO				printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(PUBLICO);
REAL				printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(REAL);
REGISTRO			printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(REGISTRO);
REPITE				printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(REPITE);
SALIR				printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(SALIR);
SEMIPUBLICO			printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(SEMIPUBLICO);
SI				printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(SI);
SINO				printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(SINO);
TIPO				printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(TIPO);
VARIABLE			printf("linea %d, palabra reservada: %s\n",lineas,yytext);	return(VARIABLE);
{CUATRO_PTOS}			printf("linea %d, delimitador: %s\n",lineas,yytext);		return(CUATRO_PTOS);
{DOS_PTOS}			printf("linea %d, delimitador: %s\n",lineas,yytext);		return(DOS_PTOS);
{CAR}				printf("linea %d, caracter: %s\n",lineas,yytext);		return(CTC_CARACTER);
VERDADERO			printf("linea %d, constante_booleana: %s\n",lineas,yytext);	return(CTC_BOOLEANA);
FALSO				printf("linea %d, constante_booleana: %s\n",lineas,yytext);	return(CTC_BOOLEANA);
{EQ}				printf("linea %d, operador relacional: %s\n",lineas,yytext);	return(EQ);
{GEQ}				printf("linea %d, operador relacional: %s\n",lineas,yytext);	return(GEQ);
{LEQ}				printf("linea %d, operador relacional: %s\n",lineas,yytext);	return(LEQ);
{NEQ}				printf("linea %d, operador relacional: %s\n",lineas,yytext);	return(NEQ);
{POTENCIA}			printf("linea %d, operador aritmetico: %s\n",lineas,yytext);	return(POTENCIA);
{DESPD}				printf("linea %d, operador de bits: %s\n",lineas,yytext);	return(DESPD);
{DESPI}				printf("linea %d, operador de bits: %s\n",lineas,yytext);	return(DESPI);
{FLECHA_DOBLE}			printf("linea %d, delimitador: %s\n",lineas,yytext);		return(FLECHA_DOBLE);
\\\/				printf("linea %d, operador logico: %s\n",lineas,yytext);	return(OR);
\/\\				printf("linea %d, operador logico: %s\n",lineas,yytext);	return(AND);
{IDENTIFICADOR}			printf("linea %d, IDENTIFICADOR: %s\n",lineas,yytext);		return(IDENTIFICADOR);
{ENTERA}			printf("linea %d, constante entera: %s\n",lineas,yytext);	return(CTC_ENTERA);
{REAL}				printf("linea %d, constante real: %s\n",lineas,yytext);		return(CTC_REAL);
{PATH}				printf("linea %d, PATH: %s\n",lineas,yytext);			return(PATH);
,				printf("linea %d, delimitador: %s\n",lineas,yytext);		return(yytext[0]);
\(				printf("linea %d, delimitador: %s\n",lineas,yytext);		return(yytext[0]);
"="				printf("linea %d, operador asignacion: %s\n",lineas,yytext);	return(yytext[0]);
\)				printf("linea %d, delimitador: %s\n",lineas,yytext);		return(yytext[0]);
;				printf("linea %d, delimitador: %s\n",lineas,yytext);		return(yytext[0]);
":"				printf("linea %d, delimitador: %s\n",lineas,yytext);		return(yytext[0]);
\[				printf("linea %d, memoria: %s\n",lineas,yytext);		return(yytext[0]);
\]				printf("linea %d, memoria: %s\n",lineas,yytext);		return(yytext[0]);
\{				printf("linea %d, delimitador: %s\n",lineas,yytext);		return(yytext[0]);
\}				printf("linea %d, delimitador: %s\n",lineas,yytext);		return(yytext[0]);
"|"                             printf("linea %d, delimitador: %s\n",lineas,yytext);		return(yytext[0]);
"+"                             printf("linea %d, operador aritmético: %s\n",lineas,yytext);	return(yytext[0]);
"-"                             printf("linea %d, operador aritmético: %s\n",lineas,yytext);	return(yytext[0]);
"*"                             printf("linea %d, operador aritmético: %s\n",lineas,yytext);	return(yytext[0]);
"^"                             printf("linea %d, operador de bits: %s\n",lineas,yytext);	return(yytext[0]);
"&"                             printf("linea %d, operador de bits: %s\n",lineas,yytext);	return(yytext[0]);
"%"                             printf("linea %d, operador aritmético: %s\n",lineas,yytext);	return(yytext[0]);
"!"                             printf("linea %d, operador lógico: %s\n",lineas,yytext);	return(yytext[0]);
"<"                             printf("linea %d, operador relacional: %s\n",lineas,yytext);	return(yytext[0]);
">"                             printf("linea %d, operador relacional: %s\n",lineas,yytext);	return(yytext[0]);
"."				printf("linea %d, operador memoria: %s\n",lineas,yytext);	return(yytext[0]);
"/"				printf("linea %d, operador aritmético: %s\n",lineas,yytext);	return(yytext[0]);
{SP}+				;

.				 printf("linea %d,ERROR: %s\n",lineas,yytext);

%%



