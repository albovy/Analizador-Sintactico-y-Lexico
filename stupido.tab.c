/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "stupido.y" /* yacc.c:339  */


  #include <stdio.h>
  extern FILE *yyin;
  extern int yylex();

  #define YYDEBUG 1


#line 76 "stupido.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "stupido.tab.h".  */
#ifndef YY_YY_STUPIDO_TAB_H_INCLUDED
# define YY_YY_STUPIDO_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ABSTRACTO = 258,
    AND = 259,
    ASOCIATIVA = 260,
    BOOLEANO = 261,
    CABECERA = 262,
    CADENA = 263,
    CASO = 264,
    CARACTER = 265,
    CARGA = 266,
    CLASE = 267,
    CONJUNTO = 268,
    CONSTANTE = 269,
    CUERPO = 270,
    CTC_BOOLEANA = 271,
    CTC_CADENA = 272,
    CTC_CARACTER = 273,
    CTC_ENTERA = 274,
    CTC_REAL = 275,
    CONSTRUCTOR = 276,
    CUANDO = 277,
    CUATRO_PTOS = 278,
    DESCENDENTE = 279,
    DESPD = 280,
    DESPI = 281,
    DESTRUCTOR = 282,
    DE = 283,
    DEVOLVER = 284,
    DOS_PTOS = 285,
    EJECUTA = 286,
    ELEMENTO = 287,
    EN = 288,
    ENTERO = 289,
    ENTONCES = 290,
    EQ = 291,
    ES = 292,
    ESPECIFICO = 293,
    EXCEPTO = 294,
    FICHERO = 295,
    FINAL = 296,
    FINALMENTE = 297,
    FLECHA_DOBLE = 298,
    FUNCION = 299,
    GEQ = 300,
    GENERICO = 301,
    HASTA = 302,
    IDENTIFICADOR = 303,
    INTERFAZ = 304,
    LANZAR = 305,
    LEQ = 306,
    LISTA = 307,
    MIENTRAS = 308,
    MODIFICABLE = 309,
    NEQ = 310,
    OTRO = 311,
    OR = 312,
    PAQUETE = 313,
    PARA = 314,
    PATH = 315,
    POTENCIA = 316,
    PRIVADO = 317,
    PROBAR = 318,
    PROCEDIMIENTO = 319,
    PROGRAMA = 320,
    PUBLICO = 321,
    REAL = 322,
    REGISTRO = 323,
    REPITE = 324,
    SALIR = 325,
    SEMIPUBLICO = 326,
    SI = 327,
    SINO = 328,
    TIPO = 329,
    VARIABLE = 330
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_STUPIDO_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 203 "stupido.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   472

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  99
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  106
/* YYNRULES -- Number of rules.  */
#define YYNRULES  222
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  414

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   330

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    87,     2,     2,     2,    97,    92,     2,
      78,    79,    95,    93,    77,    94,    98,    96,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    85,    76,
      88,    80,    89,     2,    91,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    81,     2,    82,    90,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    83,    86,    84,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    21,    21,    22,    26,    31,    32,    35,    36,    40,
      48,    54,    63,    74,    76,    79,    80,    83,    84,    85,
      86,    93,    95,    98,    99,   102,   103,   107,   108,   111,
     112,   113,   114,   115,   116,   117,   121,   122,   123,   124,
     125,   128,   131,   134,   135,   141,   145,   148,   151,   152,
     155,   159,   160,   163,   164,   173,   175,   178,   179,   182,
     185,   186,   189,   190,   191,   192,   195,   196,   199,   202,
     203,   207,   215,   217,   221,   222,   225,   226,   233,   235,
     238,   239,   248,   249,   251,   253,   256,   258,   260,   262,
     265,   266,   269,   272,   276,   277,   280,   281,   282,   283,
     284,   287,   290,   293,   297,   298,   301,   302,   303,   304,
     312,   313,   316,   319,   320,   321,   322,   325,   328,   331,
     334,   336,   338,   342,   343,   346,   347,   350,   361,   364,
     365,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   380,   383,   384,   387,   388,   391,   394,   397,   398,
     401,   404,   405,   408,   412,   413,   416,   417,   418,   421,
     424,   425,   426,   427,   428,   431,   432,   435,   436,   439,
     442,   449,   451,   454,   455,   459,   460,   464,   468,   469,
     472,   473,   476,   477,   480,   481,   482,   483,   484,   485,
     486,   489,   490,   493,   494,   497,   498,   501,   502,   503,
     506,   507,   508,   511,   512,   513,   514,   517,   518,   521,
     522,   526,   527,   528,   529,   532,   533,   534,   537,   538,
     539,   540,   541
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ABSTRACTO", "AND", "ASOCIATIVA",
  "BOOLEANO", "CABECERA", "CADENA", "CASO", "CARACTER", "CARGA", "CLASE",
  "CONJUNTO", "CONSTANTE", "CUERPO", "CTC_BOOLEANA", "CTC_CADENA",
  "CTC_CARACTER", "CTC_ENTERA", "CTC_REAL", "CONSTRUCTOR", "CUANDO",
  "CUATRO_PTOS", "DESCENDENTE", "DESPD", "DESPI", "DESTRUCTOR", "DE",
  "DEVOLVER", "DOS_PTOS", "EJECUTA", "ELEMENTO", "EN", "ENTERO",
  "ENTONCES", "EQ", "ES", "ESPECIFICO", "EXCEPTO", "FICHERO", "FINAL",
  "FINALMENTE", "FLECHA_DOBLE", "FUNCION", "GEQ", "GENERICO", "HASTA",
  "IDENTIFICADOR", "INTERFAZ", "LANZAR", "LEQ", "LISTA", "MIENTRAS",
  "MODIFICABLE", "NEQ", "OTRO", "OR", "PAQUETE", "PARA", "PATH",
  "POTENCIA", "PRIVADO", "PROBAR", "PROCEDIMIENTO", "PROGRAMA", "PUBLICO",
  "REAL", "REGISTRO", "REPITE", "SALIR", "SEMIPUBLICO", "SI", "SINO",
  "TIPO", "VARIABLE", "';'", "','", "'('", "')'", "'='", "'['", "']'",
  "'{'", "'}'", "':'", "'|'", "'!'", "'<'", "'>'", "'^'", "'@'", "'&'",
  "'+'", "'-'", "'*'", "'/'", "'%'", "'.'", "$accept", "programa",
  "definicion_programa", "uno_o_mas_nombres", "nombre", "bloque_programa",
  "definicion_paquete", "seccion_cabecera", "seccion_cuerpo",
  "declaracion_cargas", "multiple_declaracion_cargas", "declaracion_carga",
  "declaracion_tipos", "varias_declaracion_tipo", "declaracion_tipo",
  "tipo_estructurado", "tipo_no_estructurado_o_nombre_tipo",
  "tipo_escalar", "tipo_fichero", "tipo_enumerado", "tipo_lista",
  "tipo_lista_asociativa", "tipo_conjunto", "tipo_registro",
  "varias_declaraciones_campo", "declaracion_campo", "varios_rango",
  "rango", "declaracion_constantes", "varias_declaracion_constantes",
  "declaracion_constante", "valores_constantes", "valor_constante",
  "claves_valores", "clave_valor", "campos_valores", "campo_valor",
  "declaracion_variables", "varias_declaracion_variables",
  "declaracion_variable", "declaracion_interfaces",
  "varias_cabeceras_subprogramas", "declaracion_clase", "final",
  "ceroOuna_declaraciones_semi", "ceroOuna_declaraciones_privadas",
  "declaraciones_publicas", "declaraciones_semi", "declaraciones_privadas",
  "varias_declaraciones_componentes", "declaracion_componente",
  "declaracion_tipo_anidado", "declaracion_constante_anidada",
  "declaracion_atributos", "modificadores", "modificador",
  "declaraciones_subprogramas", "declaracion_subprograma",
  "cabecera_subprograma", "cabecera_funcion", "cabecera_procedimiento",
  "cabecera_constructor", "cabecera_destructor", "declaracion_parametros",
  "lista_parametros_formales", "parametros_formales", "bloque_subprograma",
  "bloque_instrucciones", "uno_o_mas_instrucciones", "instruccion",
  "instruccion_asignacion", "instruccion_salir", "instruccion_devolver",
  "instruccion_llamada", "llamada_subprograma", "instruccion_si",
  "instruccion_casos", "uno_o_mas_casos", "caso", "entradas", "entrada",
  "instruccion_bucle", "clausula_iteracion", "instruccion_probar_excepto",
  "varias_clausula_excepcion", "clausula_excepcion", "instruccion_lanzar",
  "cero_o_mas_expresiones", "varias_expresiones_constantes",
  "varias_expresion", "expresion", "expresion_logica", "expresion_logica1",
  "expresion_logica2", "expresion_logica3", "expresion_logica4",
  "expresion_logica5", "expresion_logica6", "expresion_logica7",
  "expresion_logica8", "expresion_logica9", "expresion_logica10",
  "expresion_logica11", "expresion_primaria", "objeto",
  "expresion_constante", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,    59,    44,    40,    41,
      61,    91,    93,   123,   125,    58,   124,    33,    60,    62,
      94,    64,    38,    43,    45,    42,    47,    37,    46
};
# endif

#define YYPACT_NINF -238

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-238)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -31,    18,    18,   170,  -238,  -238,  -238,    41,    44,  -238,
      36,   111,   147,  -238,   147,   164,    18,  -238,    99,    99,
      99,  -238,    28,    19,  -238,    18,   199,   199,   199,   167,
      18,  -238,    18,     2,    18,  -238,    18,   149,   149,   149,
     174,    84,   261,  -238,   342,  -238,   -12,    18,  -238,    18,
     187,   238,   157,    18,    18,  -238,  -238,  -238,  -238,   254,
     286,  -238,  -238,     9,  -238,   257,   292,   261,  -238,   265,
    -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,   317,  -238,
     132,    18,  -238,   396,  -238,   157,  -238,    18,    18,    18,
      18,   157,  -238,    99,  -238,  -238,  -238,  -238,   162,   261,
    -238,    24,   317,   309,   317,   228,    18,  -238,  -238,  -238,
    -238,  -238,   215,  -238,  -238,   262,   317,  -238,    22,   335,
      18,   228,    18,   187,    61,   190,   228,  -238,     5,   364,
    -238,  -238,  -238,  -238,  -238,   273,  -238,  -238,  -238,   187,
    -238,  -238,    85,   157,   280,    26,   261,    26,    26,  -238,
     199,  -238,  -238,    18,   339,  -238,   317,  -238,   228,   281,
     129,    82,  -238,  -238,   328,   304,   359,  -238,   214,   272,
     276,   278,   106,    98,   194,  -238,   307,  -238,    -7,  -238,
     135,     8,  -238,   292,  -238,    94,   192,  -238,   295,   228,
      53,  -238,    35,   334,    18,   228,   228,  -238,   343,   228,
    -238,  -238,  -238,  -238,   228,   228,   326,   301,  -238,    18,
    -238,   338,  -238,   149,   247,    18,   358,    18,   141,   315,
     358,  -238,  -238,  -238,  -238,   312,  -238,   310,   214,  -238,
     228,   363,   228,   228,   228,   281,   281,   281,   281,   281,
     281,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     281,   281,   317,  -238,  -238,  -238,   180,   316,  -238,  -238,
      94,  -238,   361,  -238,    18,   374,   134,  -238,   323,   187,
     321,   324,  -238,   331,   154,  -238,  -238,   145,   181,  -238,
     317,   187,   325,  -238,   358,  -238,   317,   358,   349,  -238,
    -238,   148,  -238,  -238,   317,   385,   359,  -238,   272,   272,
     272,   272,   272,   272,   276,   278,   106,    98,    98,   194,
     194,  -238,  -238,  -238,  -238,   340,   375,     7,   158,  -238,
     161,  -238,   172,  -238,  -238,   345,   382,   261,    -7,    18,
     118,  -238,   228,  -238,   346,  -238,   228,  -238,  -238,   317,
      18,  -238,  -238,  -238,   339,   348,   358,   358,   344,  -238,
    -238,  -238,  -238,  -238,   201,  -238,  -238,   228,  -238,    94,
      94,    94,  -238,   409,  -238,    18,  -238,  -238,   186,    -4,
    -238,   202,   187,  -238,   406,   187,  -238,   377,  -238,   315,
    -238,   358,  -238,  -238,   148,  -238,  -238,  -238,  -238,   375,
    -238,   133,  -238,  -238,  -238,    51,  -238,   328,  -238,  -238,
     187,  -238,  -238,  -238,  -238,   349,  -238,   187,   186,  -238,
     351,  -238,  -238,  -238
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     2,     3,     7,     0,     0,     1,
       0,     0,    13,     8,    13,     0,     0,     4,    21,    21,
      21,    10,    17,     0,    15,     0,    55,    55,    55,     0,
       0,    14,     0,     0,    22,    23,     0,    72,    72,    72,
      18,     0,     5,    16,     0,    24,     0,    56,    57,     0,
       0,    78,     0,     0,     0,    19,    38,    40,    39,    84,
       0,    36,    41,     0,    37,     0,     0,    29,    26,     0,
      30,    31,    32,    33,    34,    35,    27,    28,     0,    58,
       0,    73,    74,     0,     9,     0,    11,     0,     0,     0,
       0,    12,   110,    21,   113,   114,   115,   116,     0,     6,
      85,     0,     0,     0,     0,     0,     0,   222,   220,   221,
     218,   219,     0,   173,    25,     0,     0,    75,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   131,   217,     0,
     129,   132,   133,   134,   135,     0,   136,   137,   138,     0,
     139,   140,     0,    79,     0,   121,   120,   121,   121,   111,
      55,   112,    20,     0,     0,    46,     0,    43,     0,     0,
       0,     0,    51,   213,     0,   177,   179,   181,   183,   190,
     192,   194,   196,   199,   202,   206,   208,   210,   214,   211,
       0,     0,    48,     0,    42,     0,     0,   145,     0,     0,
       0,   164,     0,     0,     0,     0,     0,   142,     0,   171,
     128,   130,   146,   159,     0,     0,     0,     0,    80,     0,
     119,     0,   118,    72,     0,     0,     0,     0,     0,    86,
      91,    94,    96,    97,    98,     0,    45,     0,   182,   209,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    47,    49,   174,     0,     0,    62,    76,
       0,   144,     0,   170,     0,     0,     0,   163,     0,     0,
       0,   172,   175,     0,     0,   215,    81,     0,     0,   123,
       0,     0,     0,   102,    90,   101,     0,     0,    88,    87,
      95,    99,   212,    52,     0,    53,   178,   180,   188,   187,
     186,   189,   184,   185,   191,   193,   195,   198,   197,   200,
     201,   203,   204,   205,   207,     0,   220,   217,     0,    60,
       0,    66,     0,    69,    59,     0,     0,   217,   160,     0,
     165,   167,     0,   143,   148,   147,     0,   141,   216,     0,
       0,   122,   117,   127,     0,     0,    92,     0,     0,    89,
     107,   108,   109,   106,     0,   104,    44,     0,    50,     0,
       0,     0,    63,     0,    64,     0,    65,    77,     0,     0,
     151,     0,     0,   168,   162,     0,   176,   125,   124,    86,
     103,    93,    82,   100,     0,    54,    68,    71,    61,     0,
      67,     0,    70,   158,   157,     0,   154,   156,   150,   152,
       0,   166,   161,   149,   126,    88,   105,     0,     0,   169,
       0,   153,   155,    83
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -238,  -238,  -238,   -27,    -1,  -238,  -238,  -238,  -238,   423,
    -238,   407,    43,  -238,   -32,  -238,   -57,  -238,  -238,  -238,
    -238,  -238,  -238,  -238,  -238,   260,  -238,  -100,   -11,  -238,
     -41,  -238,  -237,  -238,    75,  -238,    77,   -26,  -238,   362,
    -238,  -238,  -238,  -238,    66,    42,   107,  -238,  -238,  -206,
    -213,  -238,  -238,  -238,  -238,    68,  -238,   365,   -16,  -238,
    -238,  -238,  -238,    63,  -238,   110,  -238,  -119,  -238,   329,
    -238,  -238,  -238,  -238,   -51,  -238,  -238,  -238,    88,  -238,
      45,  -238,  -238,  -238,  -238,   124,  -238,  -238,  -238,   255,
     -61,  -238,   229,   227,   305,    81,   222,   225,   226,    60,
      89,    83,  -238,   311,   -74,   -58
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,   218,   128,    17,     5,    15,    21,    18,
      23,    24,    26,    34,    35,    68,    69,    70,    71,    72,
      73,    74,    75,    76,   181,   182,   161,   394,    37,    47,
      48,   318,   257,   320,   321,   322,   323,    50,    81,    82,
      86,   143,    77,   101,   288,   348,   219,   289,   349,   220,
     221,   222,   223,   224,   354,   355,    91,    92,   225,    94,
      95,    96,    97,   210,   278,   279,   151,    84,   129,   130,
     131,   132,   133,   134,   163,   136,   137,   369,   370,   395,
     396,   138,   139,   140,   330,   331,   141,   270,   112,   271,
     258,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
       7,     8,    45,    41,   193,   162,    79,   290,   113,   142,
     284,    10,    51,    52,   103,    22,    38,    39,   368,   319,
     203,   115,    80,   325,    33,    10,    98,     1,    10,    42,
      10,    22,   135,    33,     2,    46,    93,   104,   107,   108,
     109,   110,   111,    67,   164,   155,    46,   157,    42,    10,
     360,    10,    42,    99,    80,   142,     6,   188,    10,   186,
     191,    29,    27,    28,    10,   198,     6,    10,   264,   144,
       6,   290,   398,    78,   205,    93,    10,    67,   135,   180,
      42,   346,    44,   199,    13,   199,   145,   146,   147,   148,
     105,   206,   253,   194,   407,    31,    32,   227,   187,   226,
     158,    67,   153,    67,   209,    42,    30,   154,   195,   159,
     107,   108,   109,   110,   111,    67,   160,    11,    14,   190,
      12,   192,   386,   387,   388,   255,   214,   207,   262,   263,
     293,   244,   245,   290,   267,   268,   150,   408,   272,   213,
     329,   381,     6,   273,   272,   107,   108,   109,   110,   111,
     334,   350,    42,    42,   180,    67,    10,    10,    16,   230,
     372,    54,   343,    55,   231,   204,   205,   332,   290,   164,
       9,   295,   158,    25,   283,   256,   360,     6,    87,    20,
      42,   159,   277,   206,    88,   285,   351,   281,   160,   352,
     328,   246,   247,   266,   353,   315,   107,   316,   109,   110,
     111,    89,   107,   108,   109,   110,   111,   158,    42,    54,
     211,   212,    54,    36,    46,    42,    33,   116,    54,    42,
     252,    90,    54,   342,    49,    10,   286,    40,     6,   345,
     339,   336,   374,   400,     6,   361,   338,   356,   363,    54,
     362,   152,   393,   364,   107,   108,   109,   110,   111,   365,
     235,    67,    53,   401,   366,   317,   403,   340,   158,   236,
     341,   256,   196,   327,   158,   237,   197,   159,   259,   238,
      83,   164,   260,   159,   160,   376,     6,   383,   384,    67,
     160,   409,   377,    42,    10,    67,    42,    85,   411,   248,
     249,   250,   183,    67,   184,   100,   385,   107,   108,   109,
     110,   111,   239,   240,   307,   308,   158,   397,   107,   108,
     109,   110,   111,   277,   102,   159,   298,   299,   300,   301,
     302,   303,   160,    56,    54,    57,   282,    58,   371,     6,
      60,   311,   312,   313,   314,   309,   310,   156,    67,    42,
     106,   114,   185,    42,   189,    42,    42,   397,    56,   202,
      57,    61,    58,   215,    59,    60,   208,    62,   232,   158,
      87,   233,   241,   234,   391,     6,    88,   242,   251,    63,
     243,   261,   215,   265,   275,   160,    61,   276,   269,    87,
      42,   280,    62,    89,    64,    88,   287,     6,   291,   292,
       6,   294,   324,   118,    63,    66,   329,   119,   326,   333,
     335,   336,    89,    90,   368,   216,     6,   337,   344,    64,
      65,   347,     6,   217,   120,   357,   358,   121,   359,   375,
      66,   367,    90,   122,   380,   118,   389,   123,   382,   119,
     402,   404,   217,   124,   125,   413,   126,    19,   390,    43,
     127,   254,   392,   117,     6,   405,   120,   410,   200,   121,
     378,   379,   406,   412,   373,   122,   149,   399,   201,   123,
     274,   297,   296,   304,   228,   124,   125,   305,   126,   306,
       0,   229,   127
};

static const yytype_int16 yycheck[] =
{
       1,     2,    34,    30,   123,   105,    47,   220,    66,    83,
     216,    23,    38,    39,     5,    16,    27,    28,    22,   256,
     139,    78,    49,   260,    25,    23,    53,    58,    23,    30,
      23,    32,    83,    34,    65,    36,    52,    28,    16,    17,
      18,    19,    20,    44,   105,   102,    47,   104,    49,    23,
      43,    23,    53,    54,    81,   129,    48,   118,    23,   116,
     121,    33,    19,    20,    23,   126,    48,    23,    33,    85,
      48,   284,    76,    85,    81,    91,    23,    78,   129,   106,
      81,   287,    80,    78,    48,    78,    87,    88,    89,    90,
      81,    98,    84,    32,    43,    76,    77,   158,    76,   156,
      78,   102,    78,   104,    78,   106,    78,    83,    47,    87,
      16,    17,    18,    19,    20,   116,    94,    76,     7,   120,
      76,   122,   359,   360,   361,   183,   153,   143,   189,    76,
     230,    25,    26,   346,   195,   196,    93,    86,   199,   150,
      22,   347,    48,   204,   205,    16,    17,    18,    19,    20,
     269,     3,   153,   154,   181,   156,    23,    23,    11,    77,
      42,    77,   281,    79,    82,    80,    81,    33,   381,   230,
       0,   232,    78,    74,   215,    81,    43,    48,    21,    15,
     181,    87,   209,    98,    27,   217,    38,   213,    94,    41,
     264,    93,    94,   194,    46,   252,    16,    17,    18,    19,
      20,    44,    16,    17,    18,    19,    20,    78,   209,    77,
     147,   148,    77,    14,   215,   216,   217,    85,    77,   220,
      85,    64,    77,   280,    75,    23,    85,    60,    48,   286,
      85,    77,   332,    31,    48,    77,    82,   294,    77,    77,
      82,    79,    56,    82,    16,    17,    18,    19,    20,    77,
      36,   252,    78,   372,    82,   256,   375,    76,    78,    45,
      79,    81,    72,   264,    78,    51,    76,    87,    76,    55,
      83,   332,    80,    87,    94,   336,    48,    76,    77,   280,
      94,   400,   339,   284,    23,   286,   287,    49,   407,    95,
      96,    97,    77,   294,    79,    41,   357,    16,    17,    18,
      19,    20,    88,    89,   244,   245,    78,   368,    16,    17,
      18,    19,    20,   340,    28,    87,   235,   236,   237,   238,
     239,   240,    94,     6,    77,     8,    79,    10,   329,    48,
      13,   248,   249,   250,   251,   246,   247,    28,   339,   340,
      83,    76,    80,   344,     9,   346,   347,   408,     6,    76,
       8,    34,    10,    14,    12,    13,    76,    40,    30,    78,
      21,    57,    90,     4,   365,    48,    27,    91,    61,    52,
      92,    76,    14,    39,    48,    94,    34,    76,    35,    21,
     381,    43,    40,    44,    67,    27,    71,    48,    76,    79,
      48,    28,    76,    29,    52,    78,    22,    33,    37,    76,
      79,    77,    44,    64,    22,    66,    48,    76,    83,    67,
      68,    62,    48,    74,    50,    30,    76,    53,    43,    73,
      78,    76,    64,    59,    76,    29,    17,    63,    84,    33,
      24,    54,    74,    69,    70,    84,    72,    14,   363,    32,
      76,   181,   365,    81,    48,   379,    50,   405,    84,    53,
     340,   344,   384,   408,   330,    59,    91,   369,   129,    63,
     205,   234,   233,   241,   159,    69,    70,   242,    72,   243,
      -1,   160,    76
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    58,    65,   100,   101,   105,    48,   103,   103,     0,
      23,    76,    76,    48,     7,   106,    11,   104,   108,   108,
      15,   107,   103,   109,   110,    74,   111,   111,   111,    33,
      78,    76,    77,   103,   112,   113,    14,   127,   127,   127,
      60,   102,   103,   110,    80,   113,   103,   128,   129,    75,
     136,   136,   136,    78,    77,    79,     6,     8,    10,    12,
      13,    34,    40,    52,    67,    68,    78,   103,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   141,    85,   129,
     102,   137,   138,    83,   166,    49,   139,    21,    27,    44,
      64,   155,   156,   157,   158,   159,   160,   161,   102,   103,
      41,   142,    28,     5,    28,    81,    83,    16,    17,    18,
      19,    20,   187,   204,    76,   115,    85,   138,    29,    33,
      50,    53,    59,    63,    69,    70,    72,    76,   103,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   180,   181,
     182,   185,   203,   140,   157,   103,   103,   103,   103,   156,
     111,   165,    79,    78,    83,   115,    28,   115,    78,    87,
      94,   125,   126,   173,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     102,   123,   124,    77,    79,    80,   115,    76,   189,     9,
     103,   189,   103,   166,    32,    47,    72,    76,   189,    78,
      84,   168,    76,   166,    80,    81,    98,   157,    76,    78,
     162,   162,   162,   127,   102,    14,    66,    74,   102,   145,
     148,   149,   150,   151,   152,   157,   115,   189,   193,   202,
      77,    82,    30,    57,     4,    36,    45,    51,    55,    88,
      89,    90,    91,    92,    25,    26,    93,    94,    95,    96,
      97,    61,    85,    84,   124,   204,    81,   131,   189,    76,
      80,    76,   189,    76,    33,    39,   103,   189,   189,    35,
     186,   188,   189,   189,   188,    48,    76,   102,   163,   164,
      43,   136,    79,   129,   148,   113,    85,    71,   143,   146,
     149,    76,    79,   126,    28,   189,   191,   192,   194,   194,
     194,   194,   194,   194,   195,   196,   197,   198,   198,   199,
     199,   200,   200,   200,   200,   115,    17,   103,   130,   131,
     132,   133,   134,   135,    76,   131,    37,   103,   203,    22,
     183,   184,    33,    76,   166,    79,    77,    76,    82,    85,
      76,    79,   115,   166,    83,   115,   148,    62,   144,   147,
       3,    38,    41,    46,   153,   154,   115,    30,    76,    43,
      43,    77,    82,    77,    82,    77,    82,    76,    22,   176,
     177,   103,    42,   184,   126,    73,   189,   115,   164,   145,
      76,   148,    84,    76,    77,   189,   131,   131,   131,    17,
     133,   103,   135,    56,   126,   178,   179,   189,    76,   177,
      31,   166,    24,   166,    54,   143,   154,    43,    86,   166,
     144,   166,   179,    84
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    99,   100,   100,   101,   102,   102,   103,   103,   104,
     105,   106,   107,   108,   108,   109,   109,   110,   110,   110,
     110,   111,   111,   112,   112,   113,   113,   114,   114,   115,
     115,   115,   115,   115,   115,   115,   116,   116,   116,   116,
     116,   117,   118,   119,   119,   120,   121,   122,   123,   123,
     124,   125,   125,   126,   126,   127,   127,   128,   128,   129,
     130,   130,   131,   131,   131,   131,   132,   132,   133,   134,
     134,   135,   136,   136,   137,   137,   138,   138,   139,   139,
     140,   140,   141,   141,   142,   142,   143,   143,   144,   144,
     145,   145,   146,   147,   148,   148,   149,   149,   149,   149,
     149,   150,   151,   152,   153,   153,   154,   154,   154,   154,
     155,   155,   156,   157,   157,   157,   157,   158,   159,   160,
     161,   162,   162,   163,   163,   164,   164,   165,   166,   167,
     167,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   169,   170,   170,   171,   171,   172,   173,   174,   174,
     175,   176,   176,   177,   178,   178,   179,   179,   179,   180,
     181,   181,   181,   181,   181,   182,   182,   183,   183,   184,
     185,   186,   186,   187,   187,   188,   188,   189,   190,   190,
     191,   191,   192,   192,   193,   193,   193,   193,   193,   193,
     193,   194,   194,   195,   195,   196,   196,   197,   197,   197,
     198,   198,   198,   199,   199,   199,   199,   200,   200,   201,
     201,   202,   202,   202,   202,   203,   203,   203,   204,   204,
     204,   204,   204
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     4,     1,     3,     1,     3,     5,
       5,     6,     5,     0,     3,     1,     3,     1,     3,     4,
       6,     0,     2,     1,     2,     4,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     6,     4,     3,     4,     1,     2,
       4,     1,     3,     3,     5,     0,     2,     1,     2,     6,
       1,     3,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     0,     2,     1,     2,     4,     6,     0,     2,
       2,     3,     7,    10,     0,     1,     0,     1,     0,     1,
       2,     1,     2,     2,     1,     2,     1,     1,     1,     2,
       4,     2,     2,     4,     1,     3,     1,     1,     1,     1,
       1,     2,     2,     1,     1,     1,     1,     5,     3,     3,
       2,     0,     3,     1,     3,     3,     4,     4,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     2,     4,     3,     2,     2,     4,     4,     6,
       6,     1,     2,     4,     1,     3,     1,     1,     1,     2,
       4,     6,     5,     3,     2,     4,     6,     1,     2,     4,
       3,     0,     1,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     2,     1,     3,     3,     3,     3,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     1,     3,     1,     2,
       1,     1,     3,     1,     1,     3,     4,     1,     1,     1,
       1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 21 "stupido.y" /* yacc.c:1646  */
    { printf ("EXITO: programa -> def_prog\n"); }
#line 1637 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 22 "stupido.y" /* yacc.c:1646  */
    { printf ("EXITO: programa -> def_paq\n"); }
#line 1643 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 26 "stupido.y" /* yacc.c:1646  */
    { printf ("  def_prog -> PROG nombre bloq_prog\n"); }
#line 1649 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 31 "stupido.y" /* yacc.c:1646  */
    { printf ("  uno_o_mas_nombres -> nombre\n"); }
#line 1655 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 32 "stupido.y" /* yacc.c:1646  */
    { printf ("  uno_o_mas_nombres -> uno_o_mas_nombres ',' nombre\n"); }
#line 1661 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 35 "stupido.y" /* yacc.c:1646  */
    { printf ("  nombre -> IDENTIFICADOR\n"); }
#line 1667 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 36 "stupido.y" /* yacc.c:1646  */
    { printf ("  nombre -> IDENTIFICADOR '::' nombre\n"); }
#line 1673 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 44 "stupido.y" /* yacc.c:1646  */
    { printf ("  bloq_prog -> declr_cargas declr_tipos declr_cons declr_vars blq_intrs\n"); }
#line 1679 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 50 "stupido.y" /* yacc.c:1646  */
    { printf ("  def_paq -> PAQUETE nom ';' seccion_cab seccion_cuerpo\n"); }
#line 1685 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 59 "stupido.y" /* yacc.c:1646  */
    { printf ("  seccion_cab -> declr_cargas declr_tipos declr_cons declr_vars declr_interfs\n"); }
#line 1691 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 67 "stupido.y" /* yacc.c:1646  */
    { printf ("  seccion_cuerpo -> declr_tipos declr_cons declr_vars declrs_subprgs\n"); }
#line 1697 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 76 "stupido.y" /* yacc.c:1646  */
    { printf ("  declaracion_cargas -> multiple_declaracion_cargas\n"); }
#line 1703 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 79 "stupido.y" /* yacc.c:1646  */
    { printf ("  multiple_declaracion_cargas -> declaracion_carga\n"); }
#line 1709 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 80 "stupido.y" /* yacc.c:1646  */
    { printf ("  multiple_declaracion_cargas -> multiple_declaracion_cargas ',' declaracion_carga\n"); }
#line 1715 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 83 "stupido.y" /* yacc.c:1646  */
    { printf ("  declaracion_carga -> nombre\n"); }
#line 1721 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 84 "stupido.y" /* yacc.c:1646  */
    { printf ("  declaracion_carga -> nombre EN PATH\n"); }
#line 1727 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 85 "stupido.y" /* yacc.c:1646  */
    { printf ("  declaracion_carga -> '(' uno_o_mas_nombres ')'\n"); }
#line 1733 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 86 "stupido.y" /* yacc.c:1646  */
    { printf ("  declaracion_carga -> EN PATH '(' uno_o_mas_nombres ')'\n"); }
#line 1739 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 95 "stupido.y" /* yacc.c:1646  */
    { printf ("  declaracion_tipos -> varias_declaracion_tipo\n"); }
#line 1745 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 98 "stupido.y" /* yacc.c:1646  */
    { printf ("  varias_declaracion_tipo -> declaracion_tipo\n"); }
#line 1751 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 99 "stupido.y" /* yacc.c:1646  */
    { printf ("  varias_declaracion_tipo -> varias_declaracion_tipo declaracion_tipo\n"); }
#line 1757 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 102 "stupido.y" /* yacc.c:1646  */
    { printf ("  declaracion_tipo -> nombre = tipo_no_estructurado_o_nombre_tipo ';'\n"); }
#line 1763 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 103 "stupido.y" /* yacc.c:1646  */
    { printf ("  declaracion_tipo -> nombre = tipo_estructurado\n"); }
#line 1769 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 107 "stupido.y" /* yacc.c:1646  */
    { printf ("  tipo_estructurado -> tipo_registro\n"); }
#line 1775 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 108 "stupido.y" /* yacc.c:1646  */
    { printf ("  tipo_estructurado -> declaracion_clase\n"); }
#line 1781 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 111 "stupido.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado_o_nombre_tipo -> nombre\n"); }
#line 1787 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 112 "stupido.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado_o_nombre_tipo ->  tipo_escalar\n"); }
#line 1793 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 113 "stupido.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado_o_nombre_tipo -> tipo_fichero\n"); }
#line 1799 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 114 "stupido.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado_o_nombre_tipo -> tipo_enumerado\n"); }
#line 1805 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 115 "stupido.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado_o_nombre_tipo -> tipo_lista\n"); }
#line 1811 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 116 "stupido.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado_o_nombre_tipo -> tipo_lista_asociativa\n"); }
#line 1817 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 117 "stupido.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado_o_nombre_tipo -> tipo_conjunto\n"); }
#line 1823 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 121 "stupido.y" /* yacc.c:1646  */
    { printf ("  tipo_escalar -> entero\n"); }
#line 1829 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 122 "stupido.y" /* yacc.c:1646  */
    { printf ("  tipo_escalar -> real\n"); }
#line 1835 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 123 "stupido.y" /* yacc.c:1646  */
    { printf ("  tipo_escalar -> booleano\n"); }
#line 1841 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 124 "stupido.y" /* yacc.c:1646  */
    { printf ("  tipo_escalar -> caracter\n"); }
#line 1847 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 125 "stupido.y" /* yacc.c:1646  */
    { printf ("  tipo_escalar -> cadena\n"); }
#line 1853 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 128 "stupido.y" /* yacc.c:1646  */
    { printf ("  tipo_fichero -> fichero\n"); }
#line 1859 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 131 "stupido.y" /* yacc.c:1646  */
    { printf ("  tipo_enumerado ->  ( varias_expresiones_constantes	)\n"); }
#line 1865 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 134 "stupido.y" /* yacc.c:1646  */
    { printf ("  tipo_lista -> Lista de tipo_no_estructurado_o_nombre_tipo\n"); }
#line 1871 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 135 "stupido.y" /* yacc.c:1646  */
    { printf ("  tipo_enumerado -> Lista [ varios_rango ] de tipo_no_estructurado_o_nombre_tipo\n"); }
#line 1877 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 141 "stupido.y" /* yacc.c:1646  */
    { printf ("  tipo_lista_asociativa -> Lista asociativa de tipo_no_estructurado_o_nombre_tipo\n"); }
#line 1883 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 145 "stupido.y" /* yacc.c:1646  */
    { printf ("  tipo_conjunto -> conjunto de tipo_no_estructurado_o_nombre_tipo\n"); }
#line 1889 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 148 "stupido.y" /* yacc.c:1646  */
    { printf ("  tipo_registro ->  { varias_declaraciones_campo }\n"); }
#line 1895 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 151 "stupido.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones_campo -> declaracion_campo\n"); }
#line 1901 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 152 "stupido.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones_campo -> varias_declaraciones_campo declaracion_campo\n"); }
#line 1907 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 155 "stupido.y" /* yacc.c:1646  */
    { printf ("  declaracion_campo -> uno_o_mas_nombres : tipo_no estructurado_o_nombre_tipo\n"); }
#line 1913 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 159 "stupido.y" /* yacc.c:1646  */
    { printf ("  varios_rango -> rango\n"); }
#line 1919 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 160 "stupido.y" /* yacc.c:1646  */
    { printf ("  varios_rango -> varios_rango , rango\n"); }
#line 1925 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 163 "stupido.y" /* yacc.c:1646  */
    { printf ("  rango -> expresion .. expresion\n"); }
#line 1931 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 164 "stupido.y" /* yacc.c:1646  */
    { printf ("  rango -> expresion .. expresion .. expresion\n"); }
#line 1937 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 175 "stupido.y" /* yacc.c:1646  */
    { printf ("  declaracion_constantes -> varias_declaracion_constantes\n"); }
#line 1943 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 178 "stupido.y" /* yacc.c:1646  */
    { printf ("  varias_declaracion_constantes -> declaracion_constante\n"); }
#line 1949 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 179 "stupido.y" /* yacc.c:1646  */
    { printf ("  varias_declaracion_constantes -> varias_declaracion_constantes declaracion_constante\n"); }
#line 1955 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 182 "stupido.y" /* yacc.c:1646  */
    { printf ("  declaracion_constante -> nombre : tipo_no_estructurado_o_nombre_tipo = valor_constante\n"); }
#line 1961 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 185 "stupido.y" /* yacc.c:1646  */
    { printf ("  valores_constantes -> valor_constante\n"); }
#line 1967 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 186 "stupido.y" /* yacc.c:1646  */
    { printf ("  valores_constantes -> valores_constantes , valor_constante\n"); }
#line 1973 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 189 "stupido.y" /* yacc.c:1646  */
    { printf ("  valor_constante -> expresion\n"); }
#line 1979 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 190 "stupido.y" /* yacc.c:1646  */
    { printf ("  valor_constante -> [ valores_constantes ]\n"); }
#line 1985 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 191 "stupido.y" /* yacc.c:1646  */
    { printf ("  valor_constante -> [ valores_constantes ]\n"); }
#line 1991 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 192 "stupido.y" /* yacc.c:1646  */
    { printf ("  valor_constante -> [ campos_valores ]\n"); }
#line 1997 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 195 "stupido.y" /* yacc.c:1646  */
    { printf ("  claves_valores -> clave_valor\n"); }
#line 2003 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 196 "stupido.y" /* yacc.c:1646  */
    { printf ("  claves_valores -> claves_valores , clave_valor\n"); }
#line 2009 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 199 "stupido.y" /* yacc.c:1646  */
    { printf ("  clave_valor -> CTC_CADENA => valor_constante \n"); }
#line 2015 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 202 "stupido.y" /* yacc.c:1646  */
    { printf ("  campos_valores -> clampo_valor\n"); }
#line 2021 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 203 "stupido.y" /* yacc.c:1646  */
    { printf ("  campos_valores -> campos_valores , clampo_valor\n"); }
#line 2027 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 207 "stupido.y" /* yacc.c:1646  */
    { printf ("  campo_valor -> nombre => valor_constante\n"); }
#line 2033 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 217 "stupido.y" /* yacc.c:1646  */
    { printf ("  declaracion_variables -> varias_declaracion_variables\n"); }
#line 2039 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 221 "stupido.y" /* yacc.c:1646  */
    { printf ("  varias_declaracion_variables -> declaracion_variable\n"); }
#line 2045 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 222 "stupido.y" /* yacc.c:1646  */
    { printf ("  varias_declaracion_variables -> varias_declaracion_variables declaracion_variable\n"); }
#line 2051 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 225 "stupido.y" /* yacc.c:1646  */
    { printf ("  declaracion_variable -> uno_o_mas_nombres : tipo_no_estructurado_o_nombre_tipo ;\n"); }
#line 2057 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 226 "stupido.y" /* yacc.c:1646  */
    { printf ("  declaracion_variable -> uno_o_mas_nombres : tipo_no_estructurado_o_nombre_tipo = valor-constante ;\n"); }
#line 2063 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 235 "stupido.y" /* yacc.c:1646  */
    { printf ("  declaracion_interfaces -> varias_cabeceras_subprogramas ;\n"); }
#line 2069 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 238 "stupido.y" /* yacc.c:1646  */
    { printf ("  varias_cabeceras_subprogramas -> cabecera_subprograma ;\n"); }
#line 2075 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 239 "stupido.y" /* yacc.c:1646  */
    { printf ("  varias_cabeceras_subprogramas -> varias_cabeceras_subprogramas cabecera_subprograma ;\n"); }
#line 2081 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 248 "stupido.y" /* yacc.c:1646  */
    { printf ("  declaracion_clase -> { declaraciones_publicas ceroOuna_declaraciones_semi ceroOuna_declaraciones_privadas }\n"); }
#line 2087 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 249 "stupido.y" /* yacc.c:1646  */
    { printf ("  declaracion_clase -> (uno_o_mas_nombre){ declaraciones_publicas ceroOuna_declaraciones_semi ceroOuna_declaraciones_privadas }\n"); }
#line 2093 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 253 "stupido.y" /* yacc.c:1646  */
    { printf ("  final -> FINAL\n"); }
#line 2099 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 258 "stupido.y" /* yacc.c:1646  */
    { printf (" ceroOuna_declaraciones_semi -> declaraciones_semi\n"); }
#line 2105 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 262 "stupido.y" /* yacc.c:1646  */
    { printf (" ceroOuna_declaraciones_privadas -> declaraciones_privadas\n"); }
#line 2111 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 265 "stupido.y" /* yacc.c:1646  */
    { printf (" declaraciones_publicas -> PUBLICO varias_declaraciones_componentes\n"); }
#line 2117 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 266 "stupido.y" /* yacc.c:1646  */
    { printf (" declaraciones_publicas ->  varias_declaraciones_componentes\n"); }
#line 2123 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 269 "stupido.y" /* yacc.c:1646  */
    { printf (" declaraciones_semi -> SEMIPUBLICO varias_declaraciones_componentes\n"); }
#line 2129 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 272 "stupido.y" /* yacc.c:1646  */
    { printf (" declaraciones_privadas -> PRIVADAS varias_declaraciones_componentes\n"); }
#line 2135 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 276 "stupido.y" /* yacc.c:1646  */
    { printf (" varias_declaraciones_componentes -> declaracion_componente\n"); }
#line 2141 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 277 "stupido.y" /* yacc.c:1646  */
    { printf (" varias_declaraciones_componentes -> varias_declaraciones_componentes declaracion_componente\n"); }
#line 2147 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 280 "stupido.y" /* yacc.c:1646  */
    { printf (" declaracion_componente -> declaracion_tipo_anidado\n"); }
#line 2153 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 281 "stupido.y" /* yacc.c:1646  */
    { printf (" declaraciones_componente -> declaracion_constante_anidada\n"); }
#line 2159 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 282 "stupido.y" /* yacc.c:1646  */
    { printf (" declaraciones_componente -> declaracion_atributos\n"); }
#line 2165 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 283 "stupido.y" /* yacc.c:1646  */
    { printf (" declaraciones_componente -> cabecera_subprograma ;\n"); }
#line 2171 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 284 "stupido.y" /* yacc.c:1646  */
    { printf (" declaraciones_componente -> cabecera_subprograma ; modificadores ;\n"); }
#line 2177 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 287 "stupido.y" /* yacc.c:1646  */
    { printf (" declaracion_tipo_anidado -> declaracion_tipo ;\n"); }
#line 2183 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 290 "stupido.y" /* yacc.c:1646  */
    { printf (" declaraciones_constante_anidada -> declaracion_constante \n"); }
#line 2189 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 293 "stupido.y" /* yacc.c:1646  */
    { printf (" declaracion_atributos -> uno_o_mas_nombres : tipo_no_estructurado_o_nombre_tipo ;\n"); }
#line 2195 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 297 "stupido.y" /* yacc.c:1646  */
    { printf (" modificadores -> modificador\n"); }
#line 2201 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 298 "stupido.y" /* yacc.c:1646  */
    { printf (" modificadores -> modificadores , modificador\n"); }
#line 2207 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 301 "stupido.y" /* yacc.c:1646  */
    { printf (" modificador -> GENERICO\n"); }
#line 2213 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 302 "stupido.y" /* yacc.c:1646  */
    { printf (" modificador -> ABSTRACTO\n"); }
#line 2219 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 303 "stupido.y" /* yacc.c:1646  */
    { printf (" modificador -> ESPECIFICO\n"); }
#line 2225 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 304 "stupido.y" /* yacc.c:1646  */
    { printf (" modificador -> FINAL\n"); }
#line 2231 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 312 "stupido.y" /* yacc.c:1646  */
    { printf (" declaraciones_subprogramas -> declaracion_subprograma\n"); }
#line 2237 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 313 "stupido.y" /* yacc.c:1646  */
    { printf (" declaraciones_subprogramas -> declaraciones_subprogramas declaracion_subprograma\n"); }
#line 2243 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 316 "stupido.y" /* yacc.c:1646  */
    { printf (" declaracion_subprograma -> cabecera_subprograma bloque_subprograma\n"); }
#line 2249 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 319 "stupido.y" /* yacc.c:1646  */
    { printf (" cabecera_subprograma -> cabecera_funcion\n"); }
#line 2255 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 320 "stupido.y" /* yacc.c:1646  */
    { printf (" cabecera_subprograma -> cabecera_procedimiento\n"); }
#line 2261 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 321 "stupido.y" /* yacc.c:1646  */
    { printf (" cabecera_subprograma -> cabecera_constructor\n"); }
#line 2267 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 322 "stupido.y" /* yacc.c:1646  */
    { printf (" cabecera_subprograma -> cabecera_destructor\n"); }
#line 2273 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 325 "stupido.y" /* yacc.c:1646  */
    { printf (" cabecera_funcion -> FUNCION nombre declaracion_parametros => tipo_no_estructurado_o_nombre_tipo\n"); }
#line 2279 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 328 "stupido.y" /* yacc.c:1646  */
    { printf (" cabecera_procedimiento -> PROCEDIMIENTO nombre declaracion_parametros\n"); }
#line 2285 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 331 "stupido.y" /* yacc.c:1646  */
    { printf (" cabecera_constructor -> CONSTRUCTOR nombre declaracion_parametros\n"); }
#line 2291 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 334 "stupido.y" /* yacc.c:1646  */
    { printf (" cabecera_destructor -> DESTRUCTOR nombre \n"); }
#line 2297 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 338 "stupido.y" /* yacc.c:1646  */
    { printf (" declaracion_parametros -> ( lista_parametros_formales ) \n"); }
#line 2303 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 342 "stupido.y" /* yacc.c:1646  */
    { printf (" lista_parametros_formales -> parametros_formales \n"); }
#line 2309 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 343 "stupido.y" /* yacc.c:1646  */
    { printf (" lista_parametros_formales -> lista_parametros_formales ; parametros_formales \n"); }
#line 2315 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 346 "stupido.y" /* yacc.c:1646  */
    { printf (" parametros_formales -> uno_o_mas_nombres : tipo_no_estructurado_o_nombre_tipo \n"); }
#line 2321 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 347 "stupido.y" /* yacc.c:1646  */
    { printf (" parametros_formales -> uno_o_mas_nombres : tipo_no_estructurado_o_nombre_tipo MODIFICABLE \n"); }
#line 2327 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 353 "stupido.y" /* yacc.c:1646  */
    { printf (" bloque_subprograma -> dec_tipos dec_constantes dec_variables bloque_instrucciones \n"); }
#line 2333 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 361 "stupido.y" /* yacc.c:1646  */
    { printf (" bloque_instrucciones -> { uno_o_mas_instrucciones } \n"); }
#line 2339 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 364 "stupido.y" /* yacc.c:1646  */
    { printf (" uno_o_mas_instrucciones -> instruccion \n"); }
#line 2345 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 365 "stupido.y" /* yacc.c:1646  */
    { printf (" uno_o_mas_instrucciones -> uno_o_mas_instrucciones instruccion \n"); }
#line 2351 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 368 "stupido.y" /* yacc.c:1646  */
    { printf (" instruccion -> ; \n"); }
#line 2357 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 369 "stupido.y" /* yacc.c:1646  */
    { printf (" instruccion -> instruccion_asignacion \n"); }
#line 2363 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 370 "stupido.y" /* yacc.c:1646  */
    { printf (" instruccion -> instruccion_salir \n"); }
#line 2369 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 371 "stupido.y" /* yacc.c:1646  */
    { printf (" instruccion -> instruccion_devolver \n"); }
#line 2375 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 372 "stupido.y" /* yacc.c:1646  */
    { printf (" instruccion -> instruccion_llamada \n"); }
#line 2381 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 373 "stupido.y" /* yacc.c:1646  */
    { printf (" instruccion -> instruccion_si \n"); }
#line 2387 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 374 "stupido.y" /* yacc.c:1646  */
    { printf (" instruccion -> instruccion_casos \n"); }
#line 2393 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 375 "stupido.y" /* yacc.c:1646  */
    { printf (" instruccion -> instruccion_bucle \n"); }
#line 2399 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 376 "stupido.y" /* yacc.c:1646  */
    { printf (" instruccion -> instruccion_probar_excepto \n"); }
#line 2405 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 377 "stupido.y" /* yacc.c:1646  */
    { printf (" instruccion -> instruccion_lanzar \n"); }
#line 2411 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 380 "stupido.y" /* yacc.c:1646  */
    { printf (" instruccion_asignacion -> objeto = expresion \n"); }
#line 2417 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 383 "stupido.y" /* yacc.c:1646  */
    { printf (" instruccion_salir -> SALIR ; \n"); }
#line 2423 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 384 "stupido.y" /* yacc.c:1646  */
    { printf (" instruccion_salir -> SALIR SI expresion ; \n"); }
#line 2429 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 387 "stupido.y" /* yacc.c:1646  */
    { printf (" instruccion_devolver -> DEVOLVER expresion ; \n"); }
#line 2435 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 388 "stupido.y" /* yacc.c:1646  */
    { printf (" DEVOLVER -> DEVOLVER ; \n"); }
#line 2441 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 391 "stupido.y" /* yacc.c:1646  */
    { printf (" instruccion_llamada -> llamada_subprograma ; \n"); }
#line 2447 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 394 "stupido.y" /* yacc.c:1646  */
    { printf (" llamada_subprograma -> nombre ( cero_o_mas_expresiones )  \n"); }
#line 2453 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 397 "stupido.y" /* yacc.c:1646  */
    { printf (" instruccion_si -> SI expresion ENTONCES bloque_instrucciones \n"); }
#line 2459 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 398 "stupido.y" /* yacc.c:1646  */
    { printf (" instruccion_si -> SI expresion ENTONCES bloque_instrucciones SINO bloque_instrucciones \n"); }
#line 2465 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 401 "stupido.y" /* yacc.c:1646  */
    { printf (" instruccion_casos -> EN CASO expresion ES uno_o_mas_casos \n"); }
#line 2471 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 404 "stupido.y" /* yacc.c:1646  */
    { printf (" uno_o_mas_casos -> caso \n"); }
#line 2477 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 405 "stupido.y" /* yacc.c:1646  */
    { printf (" uno_o_mas_casos -> uno_o_mas_casos caso \n"); }
#line 2483 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 408 "stupido.y" /* yacc.c:1646  */
    { printf (" caso -> CUANDO entradas => bloque_instrucciones \n"); }
#line 2489 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 412 "stupido.y" /* yacc.c:1646  */
    { printf (" entradas -> entrada \n"); }
#line 2495 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 413 "stupido.y" /* yacc.c:1646  */
    { printf (" entradas -> entradas | entrada \n"); }
#line 2501 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 416 "stupido.y" /* yacc.c:1646  */
    { printf (" entrada -> expresion \n"); }
#line 2507 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 417 "stupido.y" /* yacc.c:1646  */
    { printf (" entrada -> rango \n"); }
#line 2513 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 418 "stupido.y" /* yacc.c:1646  */
    { printf (" entrada -> OTRO \n"); }
#line 2519 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 421 "stupido.y" /* yacc.c:1646  */
    { printf (" instrucciones_bucle -> clausula_iteracion bloque_instrucciones \n"); }
#line 2525 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 424 "stupido.y" /* yacc.c:1646  */
    { printf (" clausula_iteracion -> PARA nombre EN objeto \n"); }
#line 2531 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 425 "stupido.y" /* yacc.c:1646  */
    { printf (" clausula_iteracion -> REPITE ELEMENTO nombre EN rango DESCENDENTE \n"); }
#line 2537 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 426 "stupido.y" /* yacc.c:1646  */
    { printf (" clausula_iteracion -> REPITE ELEMENTO nombre EN rango  \n"); }
#line 2543 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 427 "stupido.y" /* yacc.c:1646  */
    { printf (" clausula_iteracion -> REPITE HASTA expresion \n"); }
#line 2549 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 428 "stupido.y" /* yacc.c:1646  */
    { printf (" clausula_iteracion -> MIENTRAS expresion \n"); }
#line 2555 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 431 "stupido.y" /* yacc.c:1646  */
    { printf (" instrucciones_probar_excepto -> PROBAR bloque_instrucciones EXCEPTO varias_clausula_excepcion \n"); }
#line 2561 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 432 "stupido.y" /* yacc.c:1646  */
    { printf (" instrucciones_probar_excepto -> PROBAR bloque_instrucciones EXCEPTO varias_clausula_excepcion FINALMENTE bloque_instrucciones \n"); }
#line 2567 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 435 "stupido.y" /* yacc.c:1646  */
    { printf (" varias_clausula_excepcion -> clausula_excepcion \n"); }
#line 2573 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 436 "stupido.y" /* yacc.c:1646  */
    { printf (" varias_clausula_excepcion -> varias_clausula_excepcion clausula_excepcion \n"); }
#line 2579 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 439 "stupido.y" /* yacc.c:1646  */
    { printf (" clausula_excepcion -> CUANDO nombre EJECUTA bloque_instrucciones \n"); }
#line 2585 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 442 "stupido.y" /* yacc.c:1646  */
    { printf (" instruccion_lanzar -> LANZAR nombre ; \n"); }
#line 2591 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 451 "stupido.y" /* yacc.c:1646  */
    { printf (" cero_o_mas_expresiones -> varias_expresion \n"); }
#line 2597 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 454 "stupido.y" /* yacc.c:1646  */
    { printf (" varias_expresiones_constantes -> expresion_constante \n"); }
#line 2603 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 455 "stupido.y" /* yacc.c:1646  */
    { printf (" varias_expresiones_constantes -> varias_expresiones_constantes , expresion_constante \n"); }
#line 2609 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 459 "stupido.y" /* yacc.c:1646  */
    { printf (" varias_expresion -> expresion \n"); }
#line 2615 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 460 "stupido.y" /* yacc.c:1646  */
    { printf (" varias_expresion -> varias_expresion expresion \n"); }
#line 2621 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 464 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion -> expresion_logica \n"); }
#line 2627 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 468 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_logica -> expresion_logica OR expresion_logica1 \n"); }
#line 2633 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 469 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_logica -> expresion_logica1 \n"); }
#line 2639 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 472 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_logica1 -> expresion_logica1 AND expresion_logica2 \n"); }
#line 2645 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 473 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_logica1 ->  expresion_logica2 \n"); }
#line 2651 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 476 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_logica2 -> ! expresion_logica3 \n"); }
#line 2657 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 477 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_logica2 -> expresion_logica3 \n"); }
#line 2663 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 480 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_logica3 -> expresion_logica3 < expresion_logica4 \n"); }
#line 2669 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 481 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_logica3 -> expresion_logica3 > expresion_logica4 \n"); }
#line 2675 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 482 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_logica3 -> expresion_logica3 =< expresion_logica4 \n"); }
#line 2681 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 483 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_logica3 -> expresion_logica3 >= expresion_logica4 \n"); }
#line 2687 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 484 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_logica3 -> expresion_logica3 := expresion_logica4 \n"); }
#line 2693 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 485 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_logica3 -> expresion_logica3 != expresion_logica4 \n"); }
#line 2699 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 486 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_logica3 -> expresion_logica4 \n"); }
#line 2705 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 489 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_logica4 -> expresion_logica4 ^ expresion_logica5 \n"); }
#line 2711 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 490 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_logica4 -> expresion_logica5 \n"); }
#line 2717 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 493 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_logica5 -> expresion_logica5 @ expresion_logica6 \n"); }
#line 2723 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 494 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_logica5 -> expresion_logica6 \n"); }
#line 2729 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 497 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_logica6 -> expresion_logica6 & expresion_logica7 \n"); }
#line 2735 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 498 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_logica6 -> expresion_logica7 \n"); }
#line 2741 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 501 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_logica7 -> expresion_logica7 <- expresion_logica8 \n"); }
#line 2747 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 502 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_logica7 -> expresion_logica7 -> expresion_logica8 \n"); }
#line 2753 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 503 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_logica7 -> expresion_logica8 \n"); }
#line 2759 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 506 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_logica8 -> expresion_logica8 + expresion_logica9 \n"); }
#line 2765 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 507 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_logica8 -> expresion_logica8 - expresion_logica9 \n"); }
#line 2771 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 508 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_logica8 -> expresion_logica9 \n"); }
#line 2777 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 511 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_logica9 -> expresion_logica9 * expresion_logica10 \n"); }
#line 2783 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 512 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_logica9 -> expresion_logica9 / expresion_logica10 \n"); }
#line 2789 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 513 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_logica9 -> expresion_logica9 MODULO expresion_logica10 \n"); }
#line 2795 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 514 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_logica9 -> expresion_logica10 \n"); }
#line 2801 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 517 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_logica10 -> expresion_logica11 ** expresion_logica10 \n"); }
#line 2807 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 518 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_logica10 -> expresion_logica11\n"); }
#line 2813 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 521 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_logica11 -> - expresion_primaria\n"); }
#line 2819 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 522 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_logica11 -> expresion_primaria\n"); }
#line 2825 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 526 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_primaria -> expresion_constante\n"); }
#line 2831 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 527 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_primaria -> ( expresion )\n"); }
#line 2837 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 528 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_primaria -> llamada_subprograma\n"); }
#line 2843 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 529 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_primaria -> objeto\n"); }
#line 2849 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 532 "stupido.y" /* yacc.c:1646  */
    { printf (" objeto -> objeto . IDENTIFICADOR\n"); }
#line 2855 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 533 "stupido.y" /* yacc.c:1646  */
    { printf (" objeto -> objeto [ varias_expresion ]\n"); }
#line 2861 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 534 "stupido.y" /* yacc.c:1646  */
    { printf (" objeto -> nombre\n"); }
#line 2867 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 537 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_constante -> CTC_ENTERA\n"); }
#line 2873 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 538 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_constante -> CTC_REAL\n"); }
#line 2879 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 539 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_constante -> CTC_CADENA\n"); }
#line 2885 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 540 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_constante -> CTC_CARACTER\n"); }
#line 2891 "stupido.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 541 "stupido.y" /* yacc.c:1646  */
    { printf (" expresion_constante -> CTC_BOOLEANA\n"); }
#line 2897 "stupido.tab.c" /* yacc.c:1646  */
    break;


#line 2901 "stupido.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 547 "stupido.y" /* yacc.c:1906  */


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
