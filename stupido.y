 
%{

  #include <stdio.h>
  extern FILE *yyin;
  extern int yylex();

  #define YYDEBUG 1

%}

%token ABSTRACTO AND ASOCIATIVA BOOLEANO CABECERA CADENA CASO CARACTER CARGA CLASE CONJUNTO CONSTANTE CUERPO CTC_BOOLEANA CTC_CADENA CTC_CARACTER CTC_ENTERA CTC_REAL CONSTRUCTOR CUANDO CUATRO_PTOS DESCENDENTE DESPD DESPI DESTRUCTOR DE DEVOLVER DOS_PTOS EJECUTA ELEMENTO EN ENTERO ENTONCES EQ ES ESPECIFICO EXCEPTO FICHERO FINAL FINALMENTE FLECHA_DOBLE FUNCION GEQ GENERICO HASTA IDENTIFICADOR INTERFAZ LANZAR LEQ LISTA MIENTRAS MODIFICABLE NEQ OTRO OR PAQUETE PARA PATH POTENCIA PRIVADO PROBAR PROCEDIMIENTO PROGRAMA PUBLICO REAL REGISTRO REPITE SALIR SEMIPUBLICO SI SINO TIPO VARIABLE

%%

/************************/
/* programas y paquetes */
/************************/

programa
    : definicion_programa                                 { printf ("EXITO: programa -> def_prog\n"); }
    | definicion_paquete                                  { printf ("EXITO: programa -> def_paq\n"); }
    ;

definicion_programa
    : PROGRAMA nombre ';' bloque_programa                 { printf ("  def_prog -> PROG nombre bloq_prog\n"); }
    ;
    

uno_o_mas_nombres
    : nombre	 { printf ("  uno_o_mas_nombres -> nombre\n"); }
    | uno_o_mas_nombres ',' nombre { printf ("  uno_o_mas_nombres -> uno_o_mas_nombres ',' nombre\n"); }
    ;
nombre
    : IDENTIFICADOR                                       { printf ("  nombre -> IDENTIFICADOR\n"); }
    | nombre CUATRO_PTOS IDENTIFICADOR                    { printf ("  nombre -> IDENTIFICADOR '::' nombre\n"); }
    ;

bloque_programa
    : declaracion_cargas
      declaracion_tipos
      declaracion_constantes
      declaracion_variables
      bloque_instrucciones            { printf ("  bloq_prog -> declr_cargas declr_tipos declr_cons declr_vars blq_intrs\n"); }
    ;

definicion_paquete
    : PAQUETE nombre ';'
      seccion_cabecera
      seccion_cuerpo                  { printf ("  def_paq -> PAQUETE nom ';' seccion_cab seccion_cuerpo\n"); }
    ;

seccion_cabecera
    : CABECERA
      declaracion_cargas
      declaracion_tipos
      declaracion_constantes
      declaracion_variables
      declaracion_interfaces          { printf ("  seccion_cab -> declr_cargas declr_tipos declr_cons declr_vars declr_interfs\n"); }
    ;

seccion_cuerpo
    : CUERPO
      declaracion_tipos
      declaracion_constantes
      declaracion_variables
      declaraciones_subprogramas      { printf ("  seccion_cuerpo -> declr_tipos declr_cons declr_vars declrs_subprgs\n"); }
    ;

/**********/
/* cargas */
/**********/

declaracion_cargas
	: 
	| CARGA multiple_declaracion_cargas ';' 	{ printf ("  declaracion_cargas -> multiple_declaracion_cargas\n"); }
	;
multiple_declaracion_cargas
        : declaracion_carga		{ printf ("  multiple_declaracion_cargas -> declaracion_carga\n"); }
        | multiple_declaracion_cargas ',' declaracion_carga { printf ("  multiple_declaracion_cargas -> multiple_declaracion_cargas ',' declaracion_carga\n"); }
        ;
declaracion_carga
	: nombre { printf ("  declaracion_carga -> nombre\n"); }
	| nombre EN PATH { printf ("  declaracion_carga -> nombre EN PATH\n"); }
	| nombre '(' uno_o_mas_nombres ')' { printf ("  declaracion_carga -> '(' uno_o_mas_nombres ')'\n"); }
	| nombre EN PATH '(' uno_o_mas_nombres ')' { printf ("  declaracion_carga -> EN PATH '(' uno_o_mas_nombres ')'\n"); }
	; 

/*********/
/* tipos */
/*********/

declaracion_tipos
	: 
	| TIPO varias_declaracion_tipo  { printf ("  declaracion_tipos -> varias_declaracion_tipo\n"); }
	;
varias_declaracion_tipo
	: declaracion_tipo	{ printf ("  varias_declaracion_tipo -> declaracion_tipo\n"); }
	| varias_declaracion_tipo declaracion_tipo { printf ("  varias_declaracion_tipo -> varias_declaracion_tipo declaracion_tipo\n"); }
	;
declaracion_tipo
	: nombre '=' tipo_no_estructurado_o_nombre_tipo ';' { printf ("  declaracion_tipo -> nombre = tipo_no_estructurado_o_nombre_tipo ';'\n"); }
	| nombre '=' tipo_estructurado { printf ("  declaracion_tipo -> nombre = tipo_estructurado\n"); }
	;

tipo_estructurado 
	: tipo_registro { printf ("  tipo_estructurado -> tipo_registro\n"); }
	| declaracion_clase { printf ("  tipo_estructurado -> declaracion_clase\n"); }
	;
tipo_no_estructurado_o_nombre_tipo
	: nombre { printf ("  tipo_no_estructurado_o_nombre_tipo -> nombre\n"); }
	| tipo_escalar { printf ("  tipo_no_estructurado_o_nombre_tipo ->  tipo_escalar\n"); }
	| tipo_fichero	{ printf ("  tipo_no_estructurado_o_nombre_tipo -> tipo_fichero\n"); }
	| tipo_enumerado	{ printf ("  tipo_no_estructurado_o_nombre_tipo -> tipo_enumerado\n"); }
	| tipo_lista	{ printf ("  tipo_no_estructurado_o_nombre_tipo -> tipo_lista\n"); }
	| tipo_lista_asociativa { printf ("  tipo_no_estructurado_o_nombre_tipo -> tipo_lista_asociativa\n"); }
	| tipo_conjunto { printf ("  tipo_no_estructurado_o_nombre_tipo -> tipo_conjunto\n"); }
	;

tipo_escalar
	: ENTERO { printf ("  tipo_escalar -> entero\n"); }
	| REAL	{ printf ("  tipo_escalar -> real\n"); }
	| BOOLEANO { printf ("  tipo_escalar -> booleano\n"); }
	| CARACTER { printf ("  tipo_escalar -> caracter\n"); }
	| CADENA { printf ("  tipo_escalar -> cadena\n"); }
	;
tipo_fichero
	: FICHERO { printf ("  tipo_fichero -> fichero\n"); }
	;
tipo_enumerado
	: '(' varias_expresiones_constantes ')' { printf ("  tipo_enumerado ->  ( varias_expresiones_constantes	)\n"); }
	;
tipo_lista
	: LISTA DE tipo_no_estructurado_o_nombre_tipo { printf ("  tipo_lista -> Lista de tipo_no_estructurado_o_nombre_tipo\n"); }
	| LISTA '[' varios_rango ']' DE tipo_no_estructurado_o_nombre_tipo { printf ("  tipo_enumerado -> Lista [ varios_rango ] de tipo_no_estructurado_o_nombre_tipo\n"); }
	;



tipo_lista_asociativa
	: LISTA ASOCIATIVA DE tipo_no_estructurado_o_nombre_tipo { printf ("  tipo_lista_asociativa -> Lista asociativa de tipo_no_estructurado_o_nombre_tipo\n"); }
	;

tipo_conjunto 
	: CONJUNTO DE tipo_no_estructurado_o_nombre_tipo { printf ("  tipo_conjunto -> conjunto de tipo_no_estructurado_o_nombre_tipo\n"); }
	;
tipo_registro
	: REGISTRO '{' varias_declaraciones_campo '}' { printf ("  tipo_registro ->  { varias_declaraciones_campo }\n"); }
	;
varias_declaraciones_campo 
	: declaracion_campo { printf ("  varias_declaraciones_campo -> declaracion_campo\n"); }
	| varias_declaraciones_campo  declaracion_campo { printf ("  varias_declaraciones_campo -> varias_declaraciones_campo declaracion_campo\n"); }
	;
declaracion_campo
	: uno_o_mas_nombres ':' tipo_no_estructurado_o_nombre_tipo ';' { printf ("  declaracion_campo -> uno_o_mas_nombres : tipo_no estructurado_o_nombre_tipo\n"); }
	;

varios_rango
	: rango { printf ("  varios_rango -> rango\n"); }
	| varios_rango ',' rango  { printf ("  varios_rango -> varios_rango , rango\n"); }
	;
rango
	: expresion DOS_PTOS expresion { printf ("  rango -> expresion .. expresion\n"); }
	| expresion DOS_PTOS expresion DOS_PTOS expresion { printf ("  rango -> expresion .. expresion .. expresion\n"); }
	;



/**************/
/* constantes */
/**************/

declaracion_constantes 
	: 
	| CONSTANTE varias_declaracion_constantes { printf ("  declaracion_constantes -> varias_declaracion_constantes\n"); }
	;
varias_declaracion_constantes
	: declaracion_constante { printf ("  varias_declaracion_constantes -> declaracion_constante\n"); }
	| varias_declaracion_constantes declaracion_constante { printf ("  varias_declaracion_constantes -> varias_declaracion_constantes declaracion_constante\n"); }
	;
declaracion_constante
	: nombre ':' tipo_no_estructurado_o_nombre_tipo '=' valor_constante ';' { printf ("  declaracion_constante -> nombre : tipo_no_estructurado_o_nombre_tipo = valor_constante\n"); }
	;
valores_constantes
	: valor_constante { printf ("  valores_constantes -> valor_constante\n"); }
	| valores_constantes ',' valor_constante { printf ("  valores_constantes -> valores_constantes , valor_constante\n"); }
	;
valor_constante
	: expresion { printf ("  valor_constante -> expresion\n"); }
	| '[' valores_constantes ']' { printf ("  valor_constante -> [ valores_constantes ]\n"); }
	| '[' claves_valores ']' { printf ("  valor_constante -> [ valores_constantes ]\n"); }
	| '[' campos_valores ']' { printf ("  valor_constante -> [ campos_valores ]\n"); }
	;
claves_valores
	: clave_valor { printf ("  claves_valores -> clave_valor\n"); }
	| claves_valores ',' clave_valor { printf ("  claves_valores -> claves_valores , clave_valor\n"); }
	;
clave_valor
	: CTC_CADENA FLECHA_DOBLE valor_constante { printf ("  clave_valor -> CTC_CADENA => valor_constante \n"); }
	;
campos_valores
	: campo_valor { printf ("  campos_valores -> clampo_valor\n"); }
	| campos_valores ',' campo_valor { printf ("  campos_valores -> campos_valores , clampo_valor\n"); }
	;

campo_valor
	: nombre FLECHA_DOBLE valor_constante { printf ("  campo_valor -> nombre => valor_constante\n"); }
	;

/*************/
/* variables */
/*************/


declaracion_variables
	: 
	| VARIABLE varias_declaracion_variables { printf ("  declaracion_variables -> varias_declaracion_variables\n"); }
	;

varias_declaracion_variables
	: declaracion_variable { printf ("  varias_declaracion_variables -> declaracion_variable\n"); }
	| varias_declaracion_variables declaracion_variable { printf ("  varias_declaracion_variables -> varias_declaracion_variables declaracion_variable\n"); }
	;
declaracion_variable 
	: uno_o_mas_nombres ':' tipo_no_estructurado_o_nombre_tipo ';' { printf ("  declaracion_variable -> uno_o_mas_nombres : tipo_no_estructurado_o_nombre_tipo ;\n"); }
	| uno_o_mas_nombres ':' tipo_no_estructurado_o_nombre_tipo '=' valor_constante ';'  { printf ("  declaracion_variable -> uno_o_mas_nombres : tipo_no_estructurado_o_nombre_tipo = valor-constante ;\n"); }
	; 


/**************/
/* interfaces */
/**************/
declaracion_interfaces
	: 
	| INTERFAZ varias_cabeceras_subprogramas { printf ("  declaracion_interfaces -> varias_cabeceras_subprogramas ;\n"); }
	;
varias_cabeceras_subprogramas
	: cabecera_subprograma ';' { printf ("  varias_cabeceras_subprogramas -> cabecera_subprograma ;\n"); }
	| varias_cabeceras_subprogramas cabecera_subprograma ';' { printf ("  varias_cabeceras_subprogramas -> varias_cabeceras_subprogramas cabecera_subprograma ;\n"); }
	;

/**********/
/* clases */
/**********/


declaracion_clase 
	: CLASE final '{' declaraciones_publicas ceroOuna_declaraciones_semi ceroOuna_declaraciones_privadas '}' { printf ("  declaracion_clase -> { declaraciones_publicas ceroOuna_declaraciones_semi ceroOuna_declaraciones_privadas }\n"); } 
	| CLASE final '(' uno_o_mas_nombres ')' '{' declaraciones_publicas ceroOuna_declaraciones_semi ceroOuna_declaraciones_privadas '}' { printf ("  declaracion_clase -> (uno_o_mas_nombre){ declaraciones_publicas ceroOuna_declaraciones_semi ceroOuna_declaraciones_privadas }\n"); } 
	;
final
	: 
	| FINAL { printf ("  final -> FINAL\n"); } 
	;	

ceroOuna_declaraciones_semi
	:
	| declaraciones_semi { printf (" ceroOuna_declaraciones_semi -> declaraciones_semi\n"); } 
	;
ceroOuna_declaraciones_privadas
	:
	| declaraciones_privadas { printf (" ceroOuna_declaraciones_privadas -> declaraciones_privadas\n"); } 
	;
declaraciones_publicas
	: PUBLICO varias_declaraciones_componentes { printf (" declaraciones_publicas -> PUBLICO varias_declaraciones_componentes\n"); } 
	| varias_declaraciones_componentes { printf (" declaraciones_publicas ->  varias_declaraciones_componentes\n"); }
	;
declaraciones_semi
	: SEMIPUBLICO varias_declaraciones_componentes { printf (" declaraciones_semi -> SEMIPUBLICO varias_declaraciones_componentes\n"); }
	;
declaraciones_privadas
	: PRIVADO varias_declaraciones_componentes { printf (" declaraciones_privadas -> PRIVADAS varias_declaraciones_componentes\n"); }
	;

varias_declaraciones_componentes
	: declaracion_componente { printf (" varias_declaraciones_componentes -> declaracion_componente\n"); }
	| varias_declaraciones_componentes declaracion_componente { printf (" varias_declaraciones_componentes -> varias_declaraciones_componentes declaracion_componente\n"); }
	;
declaracion_componente
	: declaracion_tipo_anidado { printf (" declaracion_componente -> declaracion_tipo_anidado\n"); }
	| declaracion_constante_anidada { printf (" declaraciones_componente -> declaracion_constante_anidada\n"); }
	| declaracion_atributos  { printf (" declaraciones_componente -> declaracion_atributos\n"); }
	| cabecera_subprograma ';'  { printf (" declaraciones_componente -> cabecera_subprograma ;\n"); }
	| cabecera_subprograma ';'modificadores ';' { printf (" declaraciones_componente -> cabecera_subprograma ; modificadores ;\n"); }
	;
declaracion_tipo_anidado
	: TIPO declaracion_tipo { printf (" declaracion_tipo_anidado -> declaracion_tipo ;\n"); }
	;
declaracion_constante_anidada
	: CONSTANTE declaracion_constante { printf (" declaraciones_constante_anidada -> declaracion_constante \n"); }
	;
declaracion_atributos
	: uno_o_mas_nombres ':' tipo_no_estructurado_o_nombre_tipo ';' { printf (" declaracion_atributos -> uno_o_mas_nombres : tipo_no_estructurado_o_nombre_tipo ;\n"); }
	;

modificadores
	: modificador  { printf (" modificadores -> modificador\n"); }
	| modificadores ',' modificador { printf (" modificadores -> modificadores , modificador\n"); }
	;
modificador
	: GENERICO { printf (" modificador -> GENERICO\n"); }
	| ABSTRACTO { printf (" modificador -> ABSTRACTO\n"); }
	| ESPECIFICO { printf (" modificador -> ESPECIFICO\n"); }
	| FINAL { printf (" modificador -> FINAL\n"); }
	;

/****************/
/* subprogramas */
/****************/

declaraciones_subprogramas
	: declaracion_subprograma { printf (" declaraciones_subprogramas -> declaracion_subprograma\n"); }
	| declaraciones_subprogramas declaracion_subprograma { printf (" declaraciones_subprogramas -> declaraciones_subprogramas declaracion_subprograma\n"); }
	;
declaracion_subprograma
	: cabecera_subprograma bloque_subprograma { printf (" declaracion_subprograma -> cabecera_subprograma bloque_subprograma\n"); }
	;
cabecera_subprograma
	: cabecera_funcion { printf (" cabecera_subprograma -> cabecera_funcion\n"); }
	| cabecera_procedimiento { printf (" cabecera_subprograma -> cabecera_procedimiento\n"); }
	| cabecera_constructor { printf (" cabecera_subprograma -> cabecera_constructor\n"); }
	| cabecera_destructor  { printf (" cabecera_subprograma -> cabecera_destructor\n"); }
	;
cabecera_funcion
	: FUNCION nombre declaracion_parametros FLECHA_DOBLE tipo_no_estructurado_o_nombre_tipo { printf (" cabecera_funcion -> FUNCION nombre declaracion_parametros => tipo_no_estructurado_o_nombre_tipo\n"); }
	;
cabecera_procedimiento
	: PROCEDIMIENTO nombre declaracion_parametros { printf (" cabecera_procedimiento -> PROCEDIMIENTO nombre declaracion_parametros\n"); }
	;
cabecera_constructor
	: CONSTRUCTOR nombre declaracion_parametros { printf (" cabecera_constructor -> CONSTRUCTOR nombre declaracion_parametros\n"); }
	;
cabecera_destructor
	: DESTRUCTOR nombre { printf (" cabecera_destructor -> DESTRUCTOR nombre \n"); }
	;
declaracion_parametros
	:
	| '(' lista_parametros_formales ')' { printf (" declaracion_parametros -> ( lista_parametros_formales ) \n"); }
	;

lista_parametros_formales
	: parametros_formales { printf (" lista_parametros_formales -> parametros_formales \n"); }
	| lista_parametros_formales ';' parametros_formales { printf (" lista_parametros_formales -> lista_parametros_formales ; parametros_formales \n"); }
	;
parametros_formales
	: uno_o_mas_nombres ':' tipo_no_estructurado_o_nombre_tipo  { printf (" parametros_formales -> uno_o_mas_nombres : tipo_no_estructurado_o_nombre_tipo \n"); }
	| uno_o_mas_nombres ':' tipo_no_estructurado_o_nombre_tipo MODIFICABLE { printf (" parametros_formales -> uno_o_mas_nombres : tipo_no_estructurado_o_nombre_tipo MODIFICABLE \n"); }
	;
bloque_subprograma
	: declaracion_tipos 
          declaracion_constantes 
          declaracion_variables 
          bloque_instrucciones { printf (" bloque_subprograma -> dec_tipos dec_constantes dec_variables bloque_instrucciones \n"); }
	;

/*****************/
/* instrucciones */
/*****************/

bloque_instrucciones
	: '{' uno_o_mas_instrucciones '}' { printf (" bloque_instrucciones -> { uno_o_mas_instrucciones } \n"); }
	;
uno_o_mas_instrucciones
	: instruccion { printf (" uno_o_mas_instrucciones -> instruccion \n"); }
	| uno_o_mas_instrucciones instruccion { printf (" uno_o_mas_instrucciones -> uno_o_mas_instrucciones instruccion \n"); }
	;
instruccion
	: ';' { printf (" instruccion -> ; \n"); }
	| instruccion_asignacion { printf (" instruccion -> instruccion_asignacion \n"); }
	| instruccion_salir { printf (" instruccion -> instruccion_salir \n"); }
	| instruccion_devolver { printf (" instruccion -> instruccion_devolver \n"); }
	| instruccion_llamada { printf (" instruccion -> instruccion_llamada \n"); }
	| instruccion_si { printf (" instruccion -> instruccion_si \n"); }
	| instruccion_casos { printf (" instruccion -> instruccion_casos \n"); }
	| instruccion_bucle { printf (" instruccion -> instruccion_bucle \n"); }
	| instruccion_probar_excepto { printf (" instruccion -> instruccion_probar_excepto \n"); }
	| instruccion_lanzar { printf (" instruccion -> instruccion_lanzar \n"); }
	;
instruccion_asignacion
	: objeto '=' expresion ';' { printf (" instruccion_asignacion -> objeto = expresion \n"); }
	;
instruccion_salir
	: SALIR ';' { printf (" instruccion_salir -> SALIR ; \n"); }
	| SALIR SI expresion ';' { printf (" instruccion_salir -> SALIR SI expresion ; \n"); }
	;
instruccion_devolver
	: DEVOLVER expresion ';' { printf (" instruccion_devolver -> DEVOLVER expresion ; \n"); }
	| DEVOLVER ';' { printf (" DEVOLVER -> DEVOLVER ; \n"); }
	;
instruccion_llamada
	: llamada_subprograma ';' { printf (" instruccion_llamada -> llamada_subprograma ; \n"); }
	;
llamada_subprograma 
	: nombre '(' cero_o_mas_expresiones ')' { printf (" llamada_subprograma -> nombre ( cero_o_mas_expresiones )  \n"); }
	;
instruccion_si
	: SI expresion ENTONCES bloque_instrucciones   { printf (" instruccion_si -> SI expresion ENTONCES bloque_instrucciones \n"); }
	| SI expresion ENTONCES bloque_instrucciones SINO bloque_instrucciones { printf (" instruccion_si -> SI expresion ENTONCES bloque_instrucciones SINO bloque_instrucciones \n"); }
	;
instruccion_casos
	: EN CASO expresion ES uno_o_mas_casos ';' { printf (" instruccion_casos -> EN CASO expresion ES uno_o_mas_casos \n"); }
	;
uno_o_mas_casos
	: caso { printf (" uno_o_mas_casos -> caso \n"); }
	| uno_o_mas_casos  caso { printf (" uno_o_mas_casos -> uno_o_mas_casos caso \n"); }
	;
caso
	: CUANDO entradas FLECHA_DOBLE bloque_instrucciones { printf (" caso -> CUANDO entradas => bloque_instrucciones \n"); }
	;

entradas
	: entrada { printf (" entradas -> entrada \n"); }
	| entradas '|' entrada { printf (" entradas -> entradas | entrada \n"); }
	;
entrada
	: expresion { printf (" entrada -> expresion \n"); }
	| rango { printf (" entrada -> rango \n"); }
	| OTRO { printf (" entrada -> OTRO \n"); }
	;
instruccion_bucle
	: clausula_iteracion bloque_instrucciones { printf (" instrucciones_bucle -> clausula_iteracion bloque_instrucciones \n"); }
	;
clausula_iteracion
	: PARA nombre EN objeto { printf (" clausula_iteracion -> PARA nombre EN objeto \n"); }
	| REPITE ELEMENTO nombre EN rango DESCENDENTE { printf (" clausula_iteracion -> REPITE ELEMENTO nombre EN rango DESCENDENTE \n"); }
	| REPITE ELEMENTO nombre EN rango  { printf (" clausula_iteracion -> REPITE ELEMENTO nombre EN rango  \n"); }
	| REPITE HASTA expresion { printf (" clausula_iteracion -> REPITE HASTA expresion \n"); }
	| MIENTRAS expresion { printf (" clausula_iteracion -> MIENTRAS expresion \n"); }
	;
instruccion_probar_excepto
	: PROBAR bloque_instrucciones EXCEPTO varias_clausula_excepcion { printf (" instrucciones_probar_excepto -> PROBAR bloque_instrucciones EXCEPTO varias_clausula_excepcion \n"); }
	| PROBAR bloque_instrucciones EXCEPTO varias_clausula_excepcion FINALMENTE bloque_instrucciones { printf (" instrucciones_probar_excepto -> PROBAR bloque_instrucciones EXCEPTO varias_clausula_excepcion FINALMENTE bloque_instrucciones \n"); }
	;
varias_clausula_excepcion
	: clausula_excepcion { printf (" varias_clausula_excepcion -> clausula_excepcion \n"); }
	| varias_clausula_excepcion  clausula_excepcion { printf (" varias_clausula_excepcion -> varias_clausula_excepcion clausula_excepcion \n"); }
	;
clausula_excepcion
	: CUANDO nombre EJECUTA bloque_instrucciones { printf (" clausula_excepcion -> CUANDO nombre EJECUTA bloque_instrucciones \n"); }
	;
instruccion_lanzar
	: LANZAR nombre ';' { printf (" instruccion_lanzar -> LANZAR nombre ; \n"); }
	;

/***************/
/* expresiones */
/***************/

cero_o_mas_expresiones
	:
	| varias_expresion { printf (" cero_o_mas_expresiones -> varias_expresion \n"); }
	;
varias_expresiones_constantes
	: expresion_constante { printf (" varias_expresiones_constantes -> expresion_constante \n"); }
	| varias_expresiones_constantes ',' expresion_constante { printf (" varias_expresiones_constantes -> varias_expresiones_constantes , expresion_constante \n"); }
	;

varias_expresion
        : expresion  { printf (" varias_expresion -> expresion \n"); }
        | varias_expresion ',' expresion { printf (" varias_expresion -> varias_expresion expresion \n"); }
        ;

expresion  
        : expresion_logica { printf (" expresion -> expresion_logica \n"); }
        ;

expresion_logica
        : expresion_logica OR expresion_logica1 { printf (" expresion_logica -> expresion_logica OR expresion_logica1 \n"); }
        | expresion_logica1 { printf (" expresion_logica -> expresion_logica1 \n"); }
        ;
expresion_logica1
        : expresion_logica1 AND expresion_logica2 { printf (" expresion_logica1 -> expresion_logica1 AND expresion_logica2 \n"); }
        | expresion_logica2  { printf (" expresion_logica1 ->  expresion_logica2 \n"); }
        ;
expresion_logica2
        : '!' expresion_logica3 { printf (" expresion_logica2 -> ! expresion_logica3 \n"); }
        | expresion_logica3 { printf (" expresion_logica2 -> expresion_logica3 \n"); }
        ;
expresion_logica3
        : expresion_logica3 '<' expresion_logica4 { printf (" expresion_logica3 -> expresion_logica3 < expresion_logica4 \n"); }
        | expresion_logica3 '>' expresion_logica4 { printf (" expresion_logica3 -> expresion_logica3 > expresion_logica4 \n"); }
        | expresion_logica3 LEQ expresion_logica4 { printf (" expresion_logica3 -> expresion_logica3 =< expresion_logica4 \n"); }
        | expresion_logica3 GEQ expresion_logica4 { printf (" expresion_logica3 -> expresion_logica3 >= expresion_logica4 \n"); }
        | expresion_logica3 EQ expresion_logica4  { printf (" expresion_logica3 -> expresion_logica3 := expresion_logica4 \n"); }
        | expresion_logica3 NEQ expresion_logica4 { printf (" expresion_logica3 -> expresion_logica3 != expresion_logica4 \n"); }
        | expresion_logica4 { printf (" expresion_logica3 -> expresion_logica4 \n"); }
        ;
expresion_logica4
        : expresion_logica4 '^' expresion_logica5 { printf (" expresion_logica4 -> expresion_logica4 ^ expresion_logica5 \n"); }
        | expresion_logica5 { printf (" expresion_logica4 -> expresion_logica5 \n"); }
        ;
expresion_logica5
        : expresion_logica5 '@' expresion_logica6 { printf (" expresion_logica5 -> expresion_logica5 @ expresion_logica6 \n"); }
        | expresion_logica6 { printf (" expresion_logica5 -> expresion_logica6 \n"); }
        ;
expresion_logica6
        : expresion_logica6 '&' expresion_logica7 { printf (" expresion_logica6 -> expresion_logica6 & expresion_logica7 \n"); }
        | expresion_logica7 { printf (" expresion_logica6 -> expresion_logica7 \n"); }
        ;
expresion_logica7
        : expresion_logica7 DESPI expresion_logica8 { printf (" expresion_logica7 -> expresion_logica7 <- expresion_logica8 \n"); }
        | expresion_logica7 DESPD expresion_logica8 { printf (" expresion_logica7 -> expresion_logica7 -> expresion_logica8 \n"); }
        | expresion_logica8 { printf (" expresion_logica7 -> expresion_logica8 \n"); }
        ;
expresion_logica8
        : expresion_logica8 '+' expresion_logica9 { printf (" expresion_logica8 -> expresion_logica8 + expresion_logica9 \n"); }
        | expresion_logica8 '-' expresion_logica9 { printf (" expresion_logica8 -> expresion_logica8 - expresion_logica9 \n"); }
        | expresion_logica9 { printf (" expresion_logica8 -> expresion_logica9 \n"); }
        ;
expresion_logica9
        : expresion_logica9 '*' expresion_logica10 { printf (" expresion_logica9 -> expresion_logica9 * expresion_logica10 \n"); }
        | expresion_logica9 '/' expresion_logica10 { printf (" expresion_logica9 -> expresion_logica9 / expresion_logica10 \n"); }
        | expresion_logica9 '%' expresion_logica10 { printf (" expresion_logica9 -> expresion_logica9 MODULO expresion_logica10 \n"); }
        | expresion_logica10  { printf (" expresion_logica9 -> expresion_logica10 \n"); }
        ;
expresion_logica10
        : expresion_logica11 POTENCIA expresion_logica10 { printf (" expresion_logica10 -> expresion_logica11 ** expresion_logica10 \n"); }
        | expresion_logica11 { printf (" expresion_logica10 -> expresion_logica11\n"); }
        ;
expresion_logica11
        : '-' expresion_primaria { printf (" expresion_logica11 -> - expresion_primaria\n"); }
        | expresion_primaria { printf (" expresion_logica11 -> expresion_primaria\n"); }
        ;

expresion_primaria
	: expresion_constante { printf (" expresion_primaria -> expresion_constante\n"); }
	| '(' expresion ')' { printf (" expresion_primaria -> ( expresion )\n"); }
	| llamada_subprograma { printf (" expresion_primaria -> llamada_subprograma\n"); }
	| objeto { printf (" expresion_primaria -> objeto\n"); }
	;
objeto 
	: objeto '.' IDENTIFICADOR { printf (" objeto -> objeto . IDENTIFICADOR\n"); }
	| objeto '[' varias_expresion ']' { printf (" objeto -> objeto [ varias_expresion ]\n"); }
	| nombre { printf (" objeto -> nombre\n"); }
	;
expresion_constante
	: CTC_ENTERA { printf (" expresion_constante -> CTC_ENTERA\n"); }
	| CTC_REAL  { printf (" expresion_constante -> CTC_REAL\n"); }
	| CTC_CADENA  { printf (" expresion_constante -> CTC_CADENA\n"); }
	| CTC_CARACTER { printf (" expresion_constante -> CTC_CARACTER\n"); }
	| CTC_BOOLEANA { printf (" expresion_constante -> CTC_BOOLEANA\n"); }
	;




%%

int yyerror(char *s) {
  fflush(stdout);
  printf("***************** %s\n",s);
  }

int yywrap() {
  return(1);
  }

int main(int argc, char *argv[]) {

  yydebug = 0;

  if (argc < 2) {
    printf("Uso: ./stupido NombreArchivo\n");
    }
  else {
    yyin = fopen(argv[1],"r");
    yyparse();
    }
  }
