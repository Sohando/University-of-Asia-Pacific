/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "16201134.y"

#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "1305115_table.h"
#define bug cout << __LINE__ << ": all is well" << endl
#define debug(x) cerr << __LINE__ << ": " << #x << " = " << (x) << endl
using namespace std;

FILE *output;
string cmp;
symbolInfo* notget;
symbolInfo* idcheck;
symbolInfo* ix;
symbolInfo* idprint;
symbolTable* table=new symbolTable(31);
extern int line;
extern int error;
void yyerror(const char *s){
	printf("%s\n",s);
	fprintf(output,"Error at line %d : %s \n",line,s);
	error++;
}

int yylex(void);


#line 99 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    INT = 258,
    MAIN = 259,
    LPAREN = 260,
    RPAREN = 261,
    LCURL = 262,
    RCURL = 263,
    SEMICOLON = 264,
    FLOAT = 265,
    CHAR = 266,
    COMMA = 267,
    ID = 268,
    LTHIRD = 269,
    RTHIRD = 270,
    CONST_INT = 271,
    CONST_FLOAT = 272,
    CONST_CHAR = 273,
    FOR = 274,
    IF = 275,
    WHILE = 276,
    PRINTLN = 277,
    RETURN = 278,
    LOGICOP = 279,
    RELOP = 280,
    ASSIGNOP = 281,
    ADDOP = 282,
    NOT = 283,
    MULOP = 284,
    INCOP = 285,
    DECOP = 286,
    STRING = 287,
    ELSE = 288,
    DO = 289,
    BREAK = 290,
    DOUBLE = 291,
    VOID = 292,
    CASE = 293,
    SWITCH = 294,
    CONTINUE = 295,
    DEFAULT = 296,
    LOWER_THAN_ELSE = 297
  };
#endif
/* Tokens.  */
#define INT 258
#define MAIN 259
#define LPAREN 260
#define RPAREN 261
#define LCURL 262
#define RCURL 263
#define SEMICOLON 264
#define FLOAT 265
#define CHAR 266
#define COMMA 267
#define ID 268
#define LTHIRD 269
#define RTHIRD 270
#define CONST_INT 271
#define CONST_FLOAT 272
#define CONST_CHAR 273
#define FOR 274
#define IF 275
#define WHILE 276
#define PRINTLN 277
#define RETURN 278
#define LOGICOP 279
#define RELOP 280
#define ASSIGNOP 281
#define ADDOP 282
#define NOT 283
#define MULOP 284
#define INCOP 285
#define DECOP 286
#define STRING 287
#define ELSE 288
#define DO 289
#define BREAK 290
#define DOUBLE 291
#define VOID 292
#define CASE 293
#define SWITCH 294
#define CONTINUE 295
#define DEFAULT 296
#define LOWER_THAN_ELSE 297

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   415

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  174

#define YYUNDEFTOK  2
#define YYMAXUTOK   297


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    35,    35,    36,    39,    40,    41,    42,    45,    50,
      51,    54,    57,    60,    63,    66,    71,    72,    73,    74,
      75,    78,    81,    85,    90,    94,    99,   102,   105,   108,
     112,   145,   188,   239,   285,   286,   287,   289,   290,   291,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   305,
     306,   307,   330,   334,   338,   339,   342,   343,   400,   416,
     417,   418,   449,   450,   527,   528,   713,   714,   794,   795,
     886,   916,   932,   963,   964,   965,   968,   969,   970,   992
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "MAIN", "LPAREN", "RPAREN",
  "LCURL", "RCURL", "SEMICOLON", "FLOAT", "CHAR", "COMMA", "ID", "LTHIRD",
  "RTHIRD", "CONST_INT", "CONST_FLOAT", "CONST_CHAR", "FOR", "IF", "WHILE",
  "PRINTLN", "RETURN", "LOGICOP", "RELOP", "ASSIGNOP", "ADDOP", "NOT",
  "MULOP", "INCOP", "DECOP", "STRING", "ELSE", "DO", "BREAK", "DOUBLE",
  "VOID", "CASE", "SWITCH", "CONTINUE", "DEFAULT", "LOWER_THAN_ELSE",
  "$accept", "start", "functions", "main_function",
  "user_defined_functions", "full_defination", "prototype", "arguments",
  "global_var_declaration", "var_declaration", "type_specifier",
  "declaration_list", "compound_statement", "statements", "statement",
  "expression_statement", "expression", "variable", "logic_expression",
  "rel_expression", "simple_expression", "term", "unary_expression",
  "factor", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297
};
# endif

#define YYPACT_NINF (-115)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-59)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       3,    19,  -115,  -115,  -115,    28,  -115,    57,     3,  -115,
    -115,     3,    57,   369,    29,  -115,  -115,  -115,    25,  -115,
       3,  -115,  -115,    46,   387,   165,  -115,  -115,  -115,   387,
     387,    -2,    60,    48,  -115,    53,    62,    63,  -115,    94,
      91,    98,  -115,    93,    69,   192,   108,   102,     5,   297,
    -115,  -115,  -115,  -115,   109,  -115,   387,   387,   387,   387,
     387,  -115,  -115,   127,   119,  -115,   315,  -115,   387,    86,
      57,   133,   128,   130,   138,   140,   129,  -115,  -115,   144,
      63,  -115,   110,  -115,   138,   150,  -115,  -115,   143,   103,
      15,  -115,  -115,  -115,   151,   163,  -115,  -115,   168,    52,
     170,   171,   321,   141,    46,  -115,   219,  -115,  -115,   172,
    -115,    21,  -115,  -115,   167,  -115,   169,  -115,   291,   175,
     339,   345,   173,   174,   176,    46,   243,    70,  -115,  -115,
    -115,   182,  -115,  -115,  -115,   291,   186,   193,   194,   196,
     197,   198,  -115,  -115,    79,  -115,  -115,    33,   363,   199,
     267,   267,   267,   267,   179,  -115,  -115,   202,   203,   267,
     177,   178,  -115,  -115,  -115,   267,   267,  -115,   267,   267,
    -115,  -115,  -115,  -115
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       7,    26,    27,    28,    29,     0,     3,    13,     7,     9,
      10,     7,     0,     0,     0,     1,    26,     5,     0,     4,
       7,     2,     3,     0,     0,     0,    75,    76,    77,     0,
       0,     0,     0,    73,    56,    62,    64,    66,    68,    72,
       0,     0,     6,    32,     0,     0,     0,     0,     0,     0,
      73,    70,    71,    22,     0,    21,     0,     0,     0,     0,
       0,    78,    79,     0,     0,    23,     0,    74,     0,     0,
       0,     0,     0,     0,    75,     0,    30,    57,    63,    65,
      67,    69,     0,     8,     0,     0,    14,    11,     0,     0,
      16,    59,    33,    61,     0,     0,    36,    53,     0,     0,
       0,     0,     0,     0,     0,    41,     0,    38,    40,     0,
      60,    16,    15,    12,     0,    17,     0,    55,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    35,    39,
      54,     0,    18,    19,    31,     0,     0,     0,     0,     0,
       0,     0,    45,    52,     0,    34,    24,    16,     0,     0,
       0,     0,     0,     0,     0,    25,    20,     0,     0,     0,
       0,    48,    44,    50,    51,     0,     0,    42,     0,     0,
      46,    47,    43,    49
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -115,   201,    65,  -115,   206,  -115,  -115,   -81,    31,   132,
      -7,   -20,    17,   112,  -104,  -114,   -12,    42,   187,   188,
     191,   166,   -10,  -115
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     5,     6,     7,     8,     9,    10,    71,    11,    12,
      13,    31,   105,   106,   107,   108,   109,    33,    34,    35,
      36,    37,    38,    39
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      18,    32,   129,    44,   135,    23,     1,    53,    16,   115,
      54,    69,    46,     2,     3,     2,     3,    70,    16,    51,
      52,   148,   129,    14,    16,     2,     3,    70,    15,   114,
     132,     2,     3,    70,    40,   131,    16,    75,    41,    20,
       4,    72,     4,     2,     3,    70,   160,   161,   162,   163,
      81,    20,     4,   119,    75,   167,    85,   120,     4,    43,
      16,   170,   171,    88,   172,   173,   156,     2,     3,    55,
       4,    50,    50,    19,    56,   104,    22,    57,    65,   146,
      83,    54,    54,    72,   127,    42,    87,    58,   155,    59,
     124,    54,    60,    82,     4,    86,   125,    63,    50,    50,
      50,    50,    50,    48,    72,   144,   113,    64,   138,   140,
      82,    95,   112,    16,    67,    24,    68,    82,    96,    97,
       2,     3,    76,    45,    61,    62,    26,    27,    28,    98,
      99,   100,   101,   102,    82,    84,   158,    29,    30,    89,
      72,    90,    95,    94,    16,    91,    24,     4,    82,   -37,
      97,     2,     3,    92,    45,    93,   111,    26,    27,    28,
      98,    99,   100,   101,   102,   110,    47,   116,    29,    30,
      48,    59,   117,   118,   -32,   121,   122,   -32,     4,    49,
     136,   130,   133,   142,   134,   143,   141,   149,   164,   -58,
     -58,   -58,   -58,    47,   -58,   -58,   -58,   147,   -58,   150,
     151,   -58,   152,   153,   154,   159,    66,   -58,   165,   166,
     168,   169,    21,    17,   103,   126,   -58,   -58,   -58,   -58,
      95,   -58,   -58,   -58,    24,    80,    82,   128,    97,     0,
       0,     0,    45,     0,     0,    26,    27,    28,    98,    99,
     100,   101,   102,    77,    95,    78,    29,    30,    24,    79,
      82,   145,    97,     0,     0,     0,    45,     0,     0,    26,
      27,    28,    98,    99,   100,   101,   102,     0,    95,     0,
      29,    30,    24,     0,    82,     0,    97,     0,     0,     0,
      45,     0,     0,    26,    27,    28,    98,    99,   100,   101,
     102,     0,    95,     0,    29,    30,    24,     0,    73,     0,
      97,     0,    24,     0,    45,     0,     0,    26,    27,    28,
      45,     0,     0,    74,    27,    28,    73,     0,    29,    30,
      24,     0,   123,     0,    29,    30,    24,     0,    45,     0,
       0,    26,    27,    28,    45,     0,     0,    26,    27,    28,
     137,     0,    29,    30,    24,     0,   139,     0,    29,    30,
      24,     0,    45,     0,     0,    26,    27,    28,    45,     0,
       0,    26,    27,    28,   157,     0,    29,    30,    24,     0,
       0,     0,    29,    30,    24,     0,    45,     0,     0,    26,
      27,    28,    25,     0,     0,    26,    27,    28,     0,     0,
      29,    30,    24,     0,     0,     0,    29,    30,     0,     0,
      45,     0,     0,    26,    27,    28,     0,     0,     0,     0,
       0,     0,     0,     0,    29,    30
};

static const yytype_int16 yycheck[] =
{
       7,    13,   106,    23,   118,    12,     3,     9,     3,    90,
      12,     6,    24,    10,    11,    10,    11,    12,     3,    29,
      30,   135,   126,     4,     3,    10,    11,    12,     0,    14,
     111,    10,    11,    12,     5,    14,     3,    49,    13,     8,
      37,    48,    37,    10,    11,    12,   150,   151,   152,   153,
      60,    20,    37,     1,    66,   159,    68,     5,    37,    13,
       3,   165,   166,    70,   168,   169,   147,    10,    11,     9,
      37,    29,    30,     8,    26,    82,    11,    24,     9,     9,
      63,    12,    12,    90,   104,    20,    69,    25,     9,    27,
     102,    12,    29,     7,    37,     9,   103,     6,    56,    57,
      58,    59,    60,     5,   111,   125,    89,    14,   120,   121,
       7,     1,     9,     3,     6,     5,    14,     7,     8,     9,
      10,    11,    13,    13,    30,    31,    16,    17,    18,    19,
      20,    21,    22,    23,     7,    16,   148,    27,    28,     6,
     147,    13,     1,    14,     3,    15,     5,    37,     7,     8,
       9,    10,    11,    15,    13,    15,    13,    16,    17,    18,
      19,    20,    21,    22,    23,    15,     1,    16,    27,    28,
       5,    27,     9,     5,     9,     5,     5,    12,    37,    14,
       5,     9,    15,     9,    15,     9,    13,     1,     9,    24,
      25,    26,    27,     1,    29,    30,    31,    15,     6,     6,
       6,     9,     6,     6,     6,     6,    14,    15,     6,     6,
      33,    33,    11,     7,    82,   103,    24,    25,    26,    27,
       1,    29,    30,    31,     5,    59,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    17,    18,    19,    20,
      21,    22,    23,    56,     1,    57,    27,    28,     5,    58,
       7,     8,     9,    -1,    -1,    -1,    13,    -1,    -1,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,     1,    -1,
      27,    28,     5,    -1,     7,    -1,     9,    -1,    -1,    -1,
      13,    -1,    -1,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,     1,    -1,    27,    28,     5,    -1,     1,    -1,
       9,    -1,     5,    -1,    13,    -1,    -1,    16,    17,    18,
      13,    -1,    -1,    16,    17,    18,     1,    -1,    27,    28,
       5,    -1,     1,    -1,    27,    28,     5,    -1,    13,    -1,
      -1,    16,    17,    18,    13,    -1,    -1,    16,    17,    18,
       1,    -1,    27,    28,     5,    -1,     1,    -1,    27,    28,
       5,    -1,    13,    -1,    -1,    16,    17,    18,    13,    -1,
      -1,    16,    17,    18,     1,    -1,    27,    28,     5,    -1,
      -1,    -1,    27,    28,     5,    -1,    13,    -1,    -1,    16,
      17,    18,    13,    -1,    -1,    16,    17,    18,    -1,    -1,
      27,    28,     5,    -1,    -1,    -1,    27,    28,    -1,    -1,
      13,    -1,    -1,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    10,    11,    37,    44,    45,    46,    47,    48,
      49,    51,    52,    53,     4,     0,     3,    47,    53,    45,
      51,    44,    45,    53,     5,    13,    16,    17,    18,    27,
      28,    54,    59,    60,    61,    62,    63,    64,    65,    66,
       5,    13,    45,    13,    54,    13,    59,     1,     5,    14,
      60,    65,    65,     9,    12,     9,    26,    24,    25,    27,
      29,    30,    31,     6,    14,     9,    14,     6,    14,     6,
      12,    50,    53,     1,    16,    59,    13,    61,    62,    63,
      64,    65,     7,    55,    16,    59,     9,    55,    53,     6,
      13,    15,    15,    15,    14,     1,     8,     9,    19,    20,
      21,    22,    23,    52,    53,    55,    56,    57,    58,    59,
      15,    13,     9,    55,    14,    50,    16,     9,     5,     1,
       5,     5,     5,     1,    59,    53,    56,    54,     8,    57,
       9,    14,    50,    15,    15,    58,     5,     1,    59,     1,
      59,    13,     9,     9,    54,     8,     9,    15,    58,     1,
       6,     6,     6,     6,     6,     9,    50,     1,    59,     6,
      57,    57,    57,    57,     9,     6,     6,    57,    33,    33,
      57,    57,    57,    57
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    44,    45,    45,    45,    45,    46,    47,
      47,    48,    48,    48,    49,    49,    50,    50,    50,    50,
      50,    51,    51,    51,    52,    52,    53,    53,    53,    53,
      54,    54,    54,    54,    55,    55,    55,    56,    56,    56,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    58,    58,    58,    59,    59,    60,    60,
      60,    60,    61,    61,    62,    62,    63,    63,    64,    64,
      65,    65,    65,    66,    66,    66,    66,    66,    66,    66
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     2,     2,     2,     0,     5,     1,
       1,     5,     6,     0,     5,     6,     0,     3,     4,     4,
       6,     3,     3,     4,     3,     4,     1,     1,     1,     1,
       3,     6,     1,     4,     4,     3,     2,     0,     1,     2,
       1,     1,     6,     7,     5,     3,     7,     7,     5,     7,
       5,     5,     3,     1,     2,     2,     1,     3,     1,     4,
       5,     4,     1,     3,     1,     3,     1,     3,     1,     3,
       2,     2,     1,     1,     3,     1,     1,     1,     2,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 8:
#line 45 "16201134.y"
                                                    { 
            fprintf(output,"program : INT MAIN LPAREN RPAREN compound_statement\n\n");
        }
#line 1571 "y.tab.c"
    break;

  case 11:
#line 54 "16201134.y"
                                                             {
            cout << "user defined" << endl;
        }
#line 1579 "y.tab.c"
    break;

  case 12:
#line 57 "16201134.y"
                                                                       {
            cout << "user defined having arguments" << endl;
        }
#line 1587 "y.tab.c"
    break;

  case 14:
#line 63 "16201134.y"
                                                    {   
            cout << "prototyping" << endl;
        }
#line 1595 "y.tab.c"
    break;

  case 15:
#line 66 "16201134.y"
                                                              {
            cout << "prototype having arguments" << endl;
        }
#line 1603 "y.tab.c"
    break;

  case 21:
#line 78 "16201134.y"
                                              {
            // if ($3->data != $1->data) cout << "mismatch" << endl;
        }
#line 1611 "y.tab.c"
    break;

  case 22:
#line 81 "16201134.y"
                                                    { 
            fprintf(output,"var_declaration	: type_specifier declaration_list SEMICOLON\n\n");
            // cout << "var declaration" << endl;
        }
#line 1620 "y.tab.c"
    break;

  case 23:
#line 85 "16201134.y"
                                                                    { 
            fprintf(output,"var_declaration	: var_declaration type_specifier declaration_list SEMICOLON\n\n");
        }
#line 1628 "y.tab.c"
    break;

  case 24:
#line 90 "16201134.y"
                                                    { 
            fprintf(output,"var_declaration	: type_specifier declaration_list SEMICOLON\n\n");
            // cout << "var declaration" << endl;
        }
#line 1637 "y.tab.c"
    break;

  case 25:
#line 94 "16201134.y"
                                                                    { 
            fprintf(output,"var_declaration	: var_declaration type_specifier declaration_list SEMICOLON\n\n");
        }
#line 1645 "y.tab.c"
    break;

  case 26:
#line 99 "16201134.y"
                      { 
            fprintf(output,"type_specifier  : INT \n\n"); {cmp="int";}
        }
#line 1653 "y.tab.c"
    break;

  case 27:
#line 102 "16201134.y"
                        { 
            fprintf(output,"type_specifier  : FLOAT \n\n"); {cmp="float";}
        }
#line 1661 "y.tab.c"
    break;

  case 28:
#line 105 "16201134.y"
                        { 
            fprintf(output,"type_specifier  : FLOAT \n\n"); {cmp="char";}
        }
#line 1669 "y.tab.c"
    break;

  case 30:
#line 112 "16201134.y"
                                    { 
    		fprintf(output,"declaration_list  : declaration_list COMMA ID\n%s\n\n",yyvsp[0]->name.c_str()); 
	    	idcheck=table->lookOut(yyvsp[0]->name);
		    if(idcheck==Null){				
					if(strcmp(cmp.c_str(),"int")==0)
					{
    					yyvsp[0]->data=integer;
	    				yyvsp[0]->val.i=-99999;
		    			yyvsp[0]->position=0;
			    		table->insertItem(yyvsp[0]);
					}
					//Add code for float and character					
					else if(strcmp(cmp.c_str(),"float")==0)
					{
    					yyvsp[0]->data=floating;
	    				yyvsp[0]->val.i=-99999;
		    			yyvsp[0]->position=0;
			    		table->insertItem(yyvsp[0]);
					}
					else if(strcmp(cmp.c_str(),"char")==0)
					{
				    	yyvsp[0]->data=character;
					    yyvsp[0]->val.c='.';
    					yyvsp[0]->position=0;
	    				table->insertItem(yyvsp[0]);
					}
				}
		    else{
				char errorarr[30]="Multiple Declaration";
				strcat(errorarr,yyvsp[0]->name.c_str());							
				yyerror(errorarr);
		    } 
        }
#line 1707 "y.tab.c"
    break;

  case 31:
#line 145 "16201134.y"
                                                            {
                fprintf(output,"declaration_list  : declaration_list COMMA ID LTHIRD CONST_INT RTHIRD\n %s\n\n", yyvsp[-3]->name.c_str());
	    	    idcheck=table->lookOut(yyvsp[-3]->name);
    	    	if(idcheck==Null){
		    		if(strcmp(cmp.c_str(),"int")==0)
		    		{
		    		    yyvsp[-3]->data=integer; 
		    		    yyvsp[-3]->arraysz=yyvsp[-1]->val.i;
		    		    yyvsp[-3]->val.arrayi = (int*)malloc((yyvsp[-3]->arraysz)*sizeof(int));
		    		    for(int k=0;k<yyvsp[-3]->arraysz;k++) {
                            yyvsp[-3]->val.arrayi[k]=-1;
                        }
		    		}
		    		else if(strcmp(cmp.c_str(),"float")==0)
		    		{
		    		    //add codes
		    		    yyvsp[-3]->data=floating; 
		    		    yyvsp[-3]->arraysz=yyvsp[-1]->val.i;
		    		    yyvsp[-3]->val.arrayf = (float*)malloc((yyvsp[-3]->arraysz)*sizeof(float));
		    		    for(int k=0;k<yyvsp[-3]->arraysz;k++) {
                            yyvsp[-3]->val.arrayf[k]=-1;
                        }
		    		}
		    		else if(strcmp(cmp.c_str(),"char")==0)
		    		{	
		    		    //add codes
		    		    yyvsp[-3]->data=character; 
		    		    yyvsp[-3]->arraysz=yyvsp[-1]->val.i;
		    		    yyvsp[-3]->val.arrayc=(char*)malloc((yyvsp[-3]->arraysz)*sizeof(char));
		    		    for(int k=0;k<yyvsp[-3]->arraysz;k++) {
                            yyvsp[-3]->val.arrayc[k]=-1;
                        }
                        
		    		}
				table->insertItem(yyvsp[-3]);	
			}
	        else{
    	    	// add error here	
	    	    char errorarr[30]="Multiple Declaration";
        		strcat(errorarr,yyvsp[-3]->name.c_str());							
    	        yyerror(errorarr);
        	}	
        }
#line 1755 "y.tab.c"
    break;

  case 32:
#line 188 "16201134.y"
                     {
// bug;
                fprintf(output,"declaration_list  : ID\n %s\n\n", yyvsp[0]->name.c_str());
// bug;
                // cout << $1->name.c_str() << endl;
                // debug($1->name.c_str());
		        idcheck=table->lookOut(yyvsp[0]->name);
		        // table->lookOut($1->name) == Null ? cout << "h" << endl : cout << "m" << endl;                
                // idcheck = Null;
// bug;
                // cout << "returned" << endl;
		        if(idcheck==Null){
// bug;		        		
		        			if(strcmp(cmp.c_str(),"int")==0)
		        			{
// bug;
// $1->data = integer;
// cout << typeid($1).name() <<  endl;
// cout << $1->data << endl;                
                                yyvsp[0]->data=integer;
// bug;
	    	        			yyvsp[0]->val.i=-99999;
// bug;
		            			yyvsp[0]->position=0;
// bug;
		            			table->insertItem(yyvsp[0]);
// bug;                    
		        			}
		        			//Add code for float and character
		        			
		        			else if(strcmp(cmp.c_str(),"float")==0)
		        			{
		        			yyvsp[0]->data=floating;
		        			yyvsp[0]->val.i=-99999;
		        			yyvsp[0]->position=0;
		        			table->insertItem(yyvsp[0]);
		        			}
		        			else if(strcmp(cmp.c_str(),"char")==0)
		        			{
		        			yyvsp[0]->data=character;
		        			yyvsp[0]->val.c='.';
		        			yyvsp[0]->position=0;
		        			table->insertItem(yyvsp[0]);
		        			}
		        		}
		        else{
		        		char errorarr[30]="Multiple Declaration";
		        		strcat(errorarr,yyvsp[0]->name.c_str());							
		        		yyerror(errorarr);
		            } 
        }
#line 1811 "y.tab.c"
    break;

  case 33:
#line 239 "16201134.y"
                                             {
                // fprintf(output,"declaration_list : ID LTHIRD CONST_INT RTHIRD\n %s\n\n",$1);}
                fprintf(output,"declaration_list  : declaration_list ID LTHIRD CONST_INT RTHIRD\n %s\n\n", yyvsp[-3]->name.c_str());
	    	    idcheck=table->lookOut(yyvsp[-3]->name);
    	    	if(idcheck==Null){
		    		if(strcmp(cmp.c_str(),"int")==0)
		    		{
		    		    yyvsp[-3]->data=integer; 
		    		    yyvsp[-3]->arraysz=yyvsp[-1]->val.i;
		    		    yyvsp[-3]->val.arrayi=(int*)malloc((yyvsp[-3]->arraysz)*sizeof(int));
		    		    for(int k=0;k<yyvsp[-3]->arraysz;k++) {
                            yyvsp[-3]->val.arrayi[k]=-1;
                        }
		    		}
		    		else if(strcmp(cmp.c_str(),"float")==0)
		    		{
		    		    //add codes
		    		    yyvsp[-3]->data=floating; 
		    		    yyvsp[-3]->arraysz=yyvsp[-1]->val.i;
		    		    yyvsp[-3]->val.arrayf=(float*)malloc((yyvsp[-3]->arraysz)*sizeof(float));
		    		    for(int k=0;k<yyvsp[-3]->arraysz;k++) {
                            yyvsp[-3]->val.arrayf[k]=-1;
                        }
		    		}
		    		else if(strcmp(cmp.c_str(),"char")==0)
		    		{	
		    		    //add codes
		    		    yyvsp[-3]->data=character; 
		    		    yyvsp[-3]->arraysz=yyvsp[-1]->val.i;
		    		    yyvsp[-3]->val.arrayc=(char*)malloc((yyvsp[-3]->arraysz)*sizeof(char));
		    		    for(int k=0;k<yyvsp[-3]->arraysz;k++) {
                            yyvsp[-3]->val.arrayc[k]=-1;
                        }
                        
		    		}
				    table->insertItem(yyvsp[-3]);	
			    }
	           else{
    	    	    // add error here	
    	    	    char errorarr[30]="Multiple Declaration";
        		    strcat(errorarr,yyvsp[-1]->name.c_str());							
                	yyerror(errorarr);
        	    }	
        }
#line 1860 "y.tab.c"
    break;

  case 34:
#line 285 "16201134.y"
                                                 {fprintf(output,"compound_statement : LCURL var_declaration statements RCURL\n\n");}
#line 1866 "y.tab.c"
    break;

  case 35:
#line 286 "16201134.y"
                                         {fprintf(output,"compound_statement : LCUR  statements RCURL\n\n");}
#line 1872 "y.tab.c"
    break;

  case 36:
#line 287 "16201134.y"
                              {fprintf(output,"compound_statement : LCURL RCURL\n\n");}
#line 1878 "y.tab.c"
    break;

  case 48:
#line 303 "16201134.y"
                                                  { //add precedence at the end of action
	     }
#line 1885 "y.tab.c"
    break;

  case 51:
#line 308 "16201134.y"
        { 
		    fprintf(output,"statement  : PRINTLN LPAREN ID RPAREN SEMICOLON \n\n");
    		idprint=table->lookOut(yyvsp[-2]->name);
	    	if(idprint!=Null)
		    {	
			    if(idprint->data==integer) {
				    printf("\n\n\nPRINTLN LPAREN ID RPAREN SEMICOLON  %d\n\n\n",idprint->val.i);
                }
    			//can you add additional code here??
                else if (idprint->data == floating) {
				    printf("\n\n\nPRINTLN LPAREN ID RPAREN SEMICOLON  %f\n\n\n",idprint->val.f);
                } else {
				    printf("\n\n\nPRINTLN LPAREN ID RPAREN SEMICOLON  %c\n\n\n",idprint->val.c);
                }
	    	}
		    else {
			    //add the error code! can you tell what would be the error here?? 
    		    char errorarr[100]="ID WAS NOT DECLARED IN THIS SCOPE";
        		strcat(errorarr,yyvsp[-2]->name.c_str());							
            	yyerror(errorarr);
    		}
		}
#line 1912 "y.tab.c"
    break;

  case 53:
#line 335 "16201134.y"
                     {
                        fprintf(output,"expression : SEMICOLON\n\n"); 
            }
#line 1920 "y.tab.c"
    break;

  case 54:
#line 338 "16201134.y"
                                               {fprintf(output,"expression : expression SEMICOLON\n\n"); }
#line 1926 "y.tab.c"
    break;

  case 57:
#line 343 "16201134.y"
                                                { 
        fprintf(output,"expression : variable ASSIGNOP logic_expression\n\n");         
		if(yyvsp[0]->data==invalid){}
		else if((yyvsp[-2]->data==integer||yyvsp[-2]->data==character)&&yyvsp[0]->data==floating)
 		{
            yyerror("Type mismatch");
        }
		else{
			if(yyvsp[-2]->arraysz==0){

				if(yyvsp[0]->data==integer)
				{
					//$1->val.i=What will be here??
                    yyvsp[-2]->val.i = yyvsp[0]->val.i;
					yyvsp[-2]->data=yyvsp[0]->data;
				}
				else if(yyvsp[0]->data==floating)
				{
					//$1->val.i=What will be here??
                    yyvsp[-2]->val.f = yyvsp[0]->val.f;
					yyvsp[-2]->data=yyvsp[0]->data;
				}
				else if(yyvsp[0]->data==character)
				{
					//$1->val.i=What will be here??
                    yyvsp[-2]->val.c = yyvsp[0]->val.c;
					yyvsp[-2]->data=yyvsp[0]->data;
				}
				// add codes for others
				table->print(output);
			}
			else if(yyvsp[-2]->arraysz>0)
			{
				if(yyvsp[0]->data==integer)
				{
					//$1->val.arrayi[ix->val.i]=what will be here?;
                    yyvsp[-2]->val.arrayi[ix->val.i] = yyvsp[0]->val.i;
					yyvsp[-2]->data=yyvsp[0]->data;
				}
				else if(yyvsp[0]->data==floating)
				{
					//$1->val.arrayi[ix->val.i]=what will be here?;
                    yyvsp[-2]->val.arrayf[ix->val.i] = yyvsp[0]->val.f;
					yyvsp[-2]->data=yyvsp[0]->data;
				}
				if(yyvsp[0]->data==character)
				{
					//$1->val.arrayi[ix->val.i]=what will be here?;
                    yyvsp[-2]->val.arrayc[ix->val.c] = yyvsp[0]->val.c;
					yyvsp[-2]->data=yyvsp[0]->data;
				}
				
			table->print(output);	
			}
		}
		}
#line 1987 "y.tab.c"
    break;

  case 58:
#line 400 "16201134.y"
                { fprintf(output,"variable  : ID \n\n"); 
			notget=table->lookOut(yyvsp[0]->name);
			if(notget!=Null)
			{
    			//$$=notget;
    			yyval=yyvsp[0];
	    		if(yyval->arraysz!=0) {
                    yyerror("Identifier to an array");
                }
		    }
			else
			{
			//add the error!
                yyerror("NOT DECLARED IN THIS SCOPE");
			}
}
#line 2008 "y.tab.c"
    break;

  case 61:
#line 419 "16201134.y"
                { fprintf(output,"variable  : ID LTHIRD expression RTHIRD\n\n");//printf("Arraytype: %d\n",$1->data); 
			notget=table->lookOut(yyvsp[-3]->name);
			
			if(notget!=Null)
			{
				
				if(notget->arraysz>0) 
				{
					printf("declared before1: %s\n",notget->name.c_str());
					ix=yyvsp[-1];
					printf("here is in assign %d %d\n",ix->val.i,yyvsp[-1]->val.i);
					yyval=notget;
					if(yyvsp[-1]->data==floating){yyerror("invalid index");}
					else if(yyvsp[-1]->val.i>=yyval->arraysz || yyvsp[-1]->val.i<0){yyerror("Array Index out of bound");}
				}
				else if(notget->arraysz==0)
					{
					char errorarr[30]="Not an array : ";
					strcat(errorarr,yyvsp[-3]->name.c_str());							
					yyerror(errorarr);
					}
			}
			else
			{
			//add code
                yyerror("NOT DECLARED IN THIS SCOPE");
			}
		}
#line 2041 "y.tab.c"
    break;

  case 63:
#line 451 "16201134.y"
                        { fprintf(output,"logic_expression : rel_expression LOGICOP rel_expression\n\n");
				if((strcmp(yyvsp[-1]->name.c_str(),"&&"))==0)
				{
					if (yyvsp[-2]->data==integer&&yyvsp[0]->data==integer)//int&&int
					{
							printf("%d",yyvsp[-2]->val.i);
							//hint: 1&&0=0 0&&0=0 1&&1=1 $$ value will be changed
                            if (yyvsp[-2]->val.i == 1 && yyvsp[0]->val.i == 1) yyval->val.i = 1;
                            else yyval->val.i = 0;
							printf("&&%d=%d\n",yyvsp[0]->val.i,yyval->val.i);
					}
					else if (yyvsp[-2]->data==integer&&yyvsp[0]->data==floating)//int&&float
					{
						printf("%d",yyvsp[-2]->val.i);
						//static_cast<float>($1->val.i) just convert the int to float type and then compare simply
                        if (static_cast<float>(yyvsp[-2]->val.i) == 1 && yyvsp[0]->val.f == 1) yyval->val.i = 1;
                        else yyval->val.i = 0;
						printf("&&%f=%d\n",yyvsp[0]->val.f,yyval->val.i);
					}
					else if (yyvsp[-2]->data==floating&&yyvsp[0]->data==integer)//float&&int
					{
						printf("%f",yyvsp[-2]->val.f);
						//same as int&&int
                        if (static_cast<float>(yyvsp[0]->val.i) == 1 && yyvsp[-2]->val.f == 1) yyval->val.i = 1;
                        else yyval->val.i = 0;
						printf("&&%d=%d\n",yyvsp[0]->val.i,yyval->val.i);
					}
					else if (yyvsp[-2]->data==floating&&yyvsp[0]->data==floating)//float&&float
					{
						printf("%f",yyvsp[-2]->val.f);
						//same as int && intp
                        if (yyvsp[-2]->val.f == 1 && yyvsp[0]->val.f == 1) yyval->val.i = 1;
                        else yyval->val.i = 0;
						printf("&&%f=%d\n",yyvsp[0]->val.f,yyval->val.i);
					}
						
				}
				else if((strcmp(yyvsp[-1]->name.c_str(),"||"))==0)
				{
					
					//add codes for || take help from &&
											
					if (yyvsp[-2]->data==integer&&yyvsp[0]->data==integer)//int&&int
					{
							printf("%d",yyvsp[-2]->val.i);
							//hint: 1&&0=0 0&&0=0 1&&1=1 $$ value will be changed
                            if (yyvsp[-2]->val.i == 0 && yyvsp[0]->val.i == 0) yyval->val.i = 0;
                            else yyval->val.i = 1;
							printf("&&%d=%d\n",yyvsp[0]->val.i,yyval->val.i);
					}
					else if (yyvsp[-2]->data==integer&&yyvsp[0]->data==floating)//int&&float
					{
						printf("%d",yyvsp[-2]->val.i);
						//static_cast<float>($1->val.i) just convert the int to float type and then compare simply
                        if (static_cast<float>(yyvsp[-2]->val.i) == 0 && yyvsp[0]->val.f == 0) yyval->val.i = 0;
                        else yyval->val.i = 1;
						printf("&&%f=%d\n",yyvsp[0]->val.f,yyval->val.i);
					}
					else if (yyvsp[-2]->data==floating&&yyvsp[0]->data==integer)//float&&int
					{
						printf("%f",yyvsp[-2]->val.f);
						//same as int&&int
                        if (static_cast<float>(yyvsp[0]->val.i) == 0 && yyvsp[-2]->val.f == 0) yyval->val.i = 0;
                        else yyval->val.i = 1;
						printf("&&%d=%d\n",yyvsp[0]->val.i,yyval->val.i);
					}
					else if (yyvsp[-2]->data==floating&&yyvsp[0]->data==floating)//float&&float
					{
						printf("%f",yyvsp[-2]->val.f);
						//same as int && intp
                        if (yyvsp[-2]->val.f == 0 && yyvsp[0]->val.f == 0) yyval->val.i = 0;
                        else yyval->val.i = 1;
						printf("&&%f=%d\n",yyvsp[0]->val.f,yyval->val.i);
					}
				} }
#line 2121 "y.tab.c"
    break;

  case 65:
#line 529 "16201134.y"
                        { fprintf(output,"rel_expression : simple_expression RELOP simple_expression\n\n"); 
				if((strcmp(yyvsp[-1]->name.c_str(),"<"))==0)
				{					
					if (yyvsp[-2]->data==integer&&yyvsp[0]->data==floating)//int<float
					{
						printf("%d",yyvsp[-2]->val.i);
						//convert int to float using static_cast<float>
                        if (static_cast<float>(yyvsp[-2]->val.i) < yyvsp[0]->val.f) yyval->val.i = 1;
                        else yyval->val.i = 0;
						printf("<%f=%d\n",yyvsp[0]->val.f,yyval->val.i);
					}
					else if (yyvsp[-2]->data==floating&&yyvsp[0]->data==integer)//float<int
					{
						printf("%f",yyvsp[-2]->val.f);
						//convert int to float using static_cast<float>
                        if (static_cast<float>(yyvsp[0]->val.i) < yyvsp[-2]->val.f) yyval->val.i = 1;
                        else yyval->val.i = 0;
						printf("<%d=%d\n",yyvsp[0]->val.i,yyval->val.i);
					}
					else if (yyvsp[-2]->data==integer&&yyvsp[0]->data==integer)//int<int
					{
						printf("%d",yyvsp[-2]->val.i);
						//add code herep
                        if (yyvsp[-2]->val.i < yyvsp[0]->val.i) yyval->val.i = 1;
                        else yyval->val.i = 0;
						printf("<%d=%d\n",yyvsp[0]->val.i,yyval->val.i);
					}
					else if (yyvsp[-2]->data==floating&&yyvsp[0]->data==floating)//float<float
					{
						printf("%f",yyvsp[-2]->val.f);
						//add code here
                        if (yyvsp[-2]->val.f < yyvsp[0]->val.f) yyval->val.i = 1;
                        else yyval->val.i = 0;
						printf("<%f=%d\n",yyvsp[0]->val.f,yyval->val.i);
					}				
											
				}
				else if((strcmp(yyvsp[-1]->name.c_str(),">")==0))
				{
					//take help from <					
					if (yyvsp[-2]->data==integer&&yyvsp[0]->data==floating)//int>float
					{
						printf("%d",yyvsp[-2]->val.i);
						//convert int to float using static_cast<float>
                        if (static_cast<float>(yyvsp[-2]->val.i) > yyvsp[0]->val.f) yyval->val.i = 1;
                        else yyval->val.i = 0;
						printf("<%f=%d\n",yyvsp[0]->val.f,yyval->val.i);
					}
					else if (yyvsp[-2]->data==floating&&yyvsp[0]->data==integer)//float<int
					{
						printf("%f",yyvsp[-2]->val.f);
						//convert int to float using static_cast<float>
                        if (static_cast<float>(yyvsp[0]->val.i) > yyvsp[-2]->val.f) yyval->val.i = 1;
                        else yyval->val.i = 0;
						printf("<%d=%d\n",yyvsp[0]->val.i,yyval->val.i);
					}
					else if (yyvsp[-2]->data==integer&&yyvsp[0]->data==integer)//int<int
					{
						printf("%d",yyvsp[-2]->val.i);
						//add code herep
                        if (yyvsp[-2]->val.i > yyvsp[0]->val.i) yyval->val.i = 1;
                        else yyval->val.i = 0;
						printf("<%d=%d\n",yyvsp[0]->val.i,yyval->val.i);
					}
					else if (yyvsp[-2]->data==floating&&yyvsp[0]->data==floating)//float<float
					{
						printf("%f",yyvsp[-2]->val.f);
						//add code here
                        if (yyvsp[-2]->val.f > yyvsp[0]->val.f) yyval->val.i = 1;
                        else yyval->val.i = 0;
						printf("<%f=%d\n",yyvsp[0]->val.f,yyval->val.i);
					}				
				}
				else if((strcmp(yyvsp[-1]->name.c_str(),"<="))==0)
				{
					//take help from <					
					if (yyvsp[-2]->data==integer&&yyvsp[0]->data==floating)//int<float
					{
						printf("%d",yyvsp[-2]->val.i);
						//convert int to float using static_cast<float>
                        if (static_cast<float>(yyvsp[-2]->val.i) <= yyvsp[0]->val.f) yyval->val.i = 1;
                        else yyval->val.i = 0;
						printf("<%f=%d\n",yyvsp[0]->val.f,yyval->val.i);
					}
					else if (yyvsp[-2]->data==floating&&yyvsp[0]->data==integer)//float<int
					{
						printf("%f",yyvsp[-2]->val.f);
						//convert int to float using static_cast<float>
                        if (static_cast<float>(yyvsp[0]->val.i) <= yyvsp[-2]->val.f) yyval->val.i = 1;
                        else yyval->val.i = 0;
						printf("<%d=%d\n",yyvsp[0]->val.i,yyval->val.i);
					}
					else if (yyvsp[-2]->data==integer&&yyvsp[0]->data==integer)//int<int
					{
						printf("%d",yyvsp[-2]->val.i);
						//add code herep
                        if (yyvsp[-2]->val.i <= yyvsp[0]->val.i) yyval->val.i = 1;
                        else yyval->val.i = 0;
						printf("<%d=%d\n",yyvsp[0]->val.i,yyval->val.i);
					}
					else if (yyvsp[-2]->data==floating&&yyvsp[0]->data==floating)//float<float
					{
						printf("%f",yyvsp[-2]->val.f);
						//add code here
                        if (yyvsp[-2]->val.f <= yyvsp[0]->val.f) yyval->val.i = 1;
                        else yyval->val.i = 0;
						printf("<%f=%d\n",yyvsp[0]->val.f,yyval->val.i);
					}				
				}
				else if((strcmp(yyvsp[-1]->name.c_str(),">="))==0)
				{
					//take help from <
					if (yyvsp[-2]->data==integer&&yyvsp[0]->data==floating)//int>float
					{
						printf("%d",yyvsp[-2]->val.i);
						//convert int to float using static_cast<float>
                        if (static_cast<float>(yyvsp[-2]->val.i) >= yyvsp[0]->val.f) yyval->val.i = 1;
                        else yyval->val.i = 0;
						printf("<%f=%d\n",yyvsp[0]->val.f,yyval->val.i);
					}
					else if (yyvsp[-2]->data==floating&&yyvsp[0]->data==integer)//float<int
					{
						printf("%f",yyvsp[-2]->val.f);
						//convert int to float using static_cast<float>
                        if (static_cast<float>(yyvsp[0]->val.i) >= yyvsp[-2]->val.f) yyval->val.i = 1;
                        else yyval->val.i = 0;
						printf("<%d=%d\n",yyvsp[0]->val.i,yyval->val.i);
					}
					else if (yyvsp[-2]->data==integer&&yyvsp[0]->data==integer)//int<int
					{
						printf("%d",yyvsp[-2]->val.i);
						//add code herep
                        if (yyvsp[-2]->val.i >= yyvsp[0]->val.i) yyval->val.i = 1;
                        else yyval->val.i = 0;
						printf("<%d=%d\n",yyvsp[0]->val.i,yyval->val.i);
					}
					else if (yyvsp[-2]->data==floating&&yyvsp[0]->data==floating)//float<float
					{
						printf("%f",yyvsp[-2]->val.f);
						//add code here
                        if (yyvsp[-2]->val.f >= yyvsp[0]->val.f) yyval->val.i = 1;
                        else yyval->val.i = 0;
						printf("<%f=%d\n",yyvsp[0]->val.f,yyval->val.i);
					}				
				}
				else if((strcmp(yyvsp[-1]->name.c_str(),"!="))==0)
				{
					//take help from <
					if (yyvsp[-2]->data==integer&&yyvsp[0]->data==floating)//int>float
					{
						printf("%d",yyvsp[-2]->val.i);
						//convert int to float using static_cast<float>
                        if (static_cast<float>(yyvsp[-2]->val.i) != yyvsp[0]->val.f) yyval->val.i = 1;
                        else yyval->val.i = 0;
						printf("<%f=%d\n",yyvsp[0]->val.f,yyval->val.i);
					}
					else if (yyvsp[-2]->data==floating&&yyvsp[0]->data==integer)//float<int
					{
						printf("%f",yyvsp[-2]->val.f);
						//convert int to float using static_cast<float>
                        if (static_cast<float>(yyvsp[0]->val.i) != yyvsp[-2]->val.f) yyval->val.i = 1;
                        else yyval->val.i = 0;
						printf("<%d=%d\n",yyvsp[0]->val.i,yyval->val.i);
					}
					else if (yyvsp[-2]->data==integer&&yyvsp[0]->data==integer)//int<int
					{
						printf("%d",yyvsp[-2]->val.i);
						//add code herep
                        if (yyvsp[-2]->val.i != yyvsp[0]->val.i) yyval->val.i = 1;
                        else yyval->val.i = 0;
						printf("<%d=%d\n",yyvsp[0]->val.i,yyval->val.i);
					}
					else if (yyvsp[-2]->data==floating&&yyvsp[0]->data==floating)//float<float
					{
						printf("%f",yyvsp[-2]->val.f);
						//add code here
                        if (yyvsp[-2]->val.f != yyvsp[0]->val.f) yyval->val.i = 1;
                        else yyval->val.i = 0;
						printf("<%f=%d\n",yyvsp[0]->val.f,yyval->val.i);
					}				
				
				}}
#line 2308 "y.tab.c"
    break;

  case 67:
#line 715 "16201134.y"
        { fprintf(output,"simple_expression : simple_expression ADDOP term  \n\n"); 
		if((strcmp(yyvsp[-1]->name.c_str(),"+"))==0)
		{
			if(yyvsp[-2]->data==integer&&yyvsp[0]->data==integer)//integer+integer
			{
                printf("%d",yyvsp[-2]->val.i);
			    //add codes here
                yyval->val.i = yyvsp[-2]->val.i + yyvsp[0]->val.i;
	    		yyval->data==yyvsp[-2]->data;
		    	printf("+%d:%d\n",yyvsp[0]->val.i,yyval->val.i);
			}
			else if (yyvsp[-2]->data==floating&&yyvsp[0]->data==floating)//float+float
			{
    			printf("%f",yyvsp[-2]->val.f);
	    		//add codes here
                yyval->val.f = yyvsp[-2]->val.f + yyvsp[0]->val.f;
		    	yyval->data==yyvsp[-2]->data;
			    printf("+%f:%f\n",yyvsp[0]->val.f,yyval->val.f);
			}
			else if (yyvsp[-2]->data==integer&&yyvsp[0]->data==floating)//int+float=float
			{
			    printf("%f",static_cast<float>(yyvsp[-2]->val.i));
		    	//add after converting int to float
	    		//$$->data==what data type?
                yyval->val.f = yyvsp[-2]->val.i + yyvsp[0]->val.f;
		        yyval->data==yyvsp[0]->data;
    			printf("+%f:%f\n",yyvsp[0]->val.f,yyval->val.f);
			}
			else if (yyvsp[-2]->data==floating&&yyvsp[0]->data==integer)//float+int=float
			{
    			printf("%f",yyvsp[-2]->val.f);
	    		//add after converting int to float 
		    	//$$->data==what data  type??
                yyval->val.f = yyvsp[-2]->val.f + yyvsp[0]->val.i;
		    	yyval->data==yyvsp[-2]->data;
			    printf("+%f:%f\n",static_cast<float>(yyvsp[0]->val.i),yyval->val.f);
			}
				
		} 
		else if((strcmp(yyvsp[-1]->name.c_str(),"-"))==0)
		{
			//add codes for minus; similar to +
 
			if(yyvsp[-2]->data==integer&&yyvsp[0]->data==integer)//integer+integer
			{
                printf("%d",yyvsp[-2]->val.i);
			    //add codes here
                yyval->val.i = yyvsp[-2]->val.i - yyvsp[0]->val.i;
	    		yyval->data==yyvsp[-2]->data;
		    	printf("+%d:%d\n",yyvsp[0]->val.i,yyval->val.i);
			}
			else if (yyvsp[-2]->data==floating&&yyvsp[0]->data==floating)//float+float
			{
    			printf("%f",yyvsp[-2]->val.f);
	    		//add codes here
                yyval->val.f = yyvsp[-2]->val.f - yyvsp[0]->val.f;
		    	yyval->data==yyvsp[-2]->data;
			    printf("+%f:%f\n",yyvsp[0]->val.f,yyval->val.f);
			}
			else if (yyvsp[-2]->data==integer&&yyvsp[0]->data==floating)//int+float=float
			{
			    printf("%f",static_cast<float>(yyvsp[-2]->val.i));
		    	//add after converting int to float
	    		//$$->data==what data type?
                yyval->val.f = yyvsp[-2]->val.i - yyvsp[0]->val.f;
		        yyval->data==yyvsp[0]->data;
    			printf("+%f:%f\n",yyvsp[0]->val.f,yyval->val.f);
			}
			else if (yyvsp[-2]->data==floating&&yyvsp[0]->data==integer)//float+int=float
			{
    			printf("%f",yyvsp[-2]->val.f);
	    		//add after converting int to float 
		    	//$$->data==what data  type??
                yyval->val.f = yyvsp[-2]->val.f - yyvsp[0]->val.i;
		    	yyval->data==yyvsp[-2]->data;
			    printf("+%f:%f\n",static_cast<float>(yyvsp[0]->val.i),yyval->val.f);
			}
		} }
#line 2391 "y.tab.c"
    break;

  case 69:
#line 797 "16201134.y"
{ 
        fprintf(output,"term : term MULOP unary_expression\n\n");
		if((strcmp(yyvsp[-1]->name.c_str(),"*")==0))
		{
				if(yyvsp[-2]->data==integer&&yyvsp[0]->data==integer)//integer is multipllied by integer
				{
				printf("%d",yyvsp[-2]->val.i);
				yyval->val.i=yyvsp[-2]->val.i*yyvsp[0]->val.i;yyval->data=yyvsp[-2]->data;
				printf("*%d=%d\n",yyvsp[0]->val.i,yyval->val.i);
				}
				else if(yyvsp[-2]->data==floating&&yyvsp[0]->data==floating)//float is multipllied by float
				{
				printf("%f",yyvsp[-2]->val.f);
				//add code
				yyval->val.f=yyvsp[-2]->val.f*yyvsp[0]->val.f;
                yyval->data=yyvsp[-2]->data;
				printf("*%f=%f\n",yyvsp[0]->val.f,yyval->val.f);
				}
				else if(yyvsp[-2]->data==integer&&yyvsp[0]->data==floating)//integer is multiplied by float
				{
				printf("%d",yyvsp[-2]->val.i);
				//add code
				yyval->val.f=static_cast<float>(yyvsp[-2]->val.i) * yyvsp[0]->val.f;
                yyval->data=yyvsp[0]->data;
				printf("*%f=%f\n",yyvsp[0]->val.f,yyval->val.f);
				}
				else if(yyvsp[-2]->data==floating&&yyvsp[0]->data==integer)//float*int
				{
				printf("%f",yyvsp[-2]->val.f);
				//add code
				yyval->val.i=yyvsp[-2]->val.f * (static_cast<float>(yyvsp[0]->val.i));
                yyval->data=yyvsp[-2]->data;
				printf("*%d=%f\n",yyvsp[0]->val.i,yyval->val.f);
				}
				
					
		} 
		else if (strcmp(yyvsp[-1]->name.c_str(),"%")==0)
		{
				if (yyvsp[-2]->data!=integer||yyvsp[0]->data!=integer){yyval->data=invalid;yyerror("invalid operands for modulo");}
				else if (yyvsp[-2]->data==integer&&yyvsp[0]->data==integer)//other cases are not acceptable
				{
				printf("%d",yyvsp[-2]->val.i);
				//add code
                yyval->val.i = yyvsp[-2]->val.i % yyvsp[0]->val.i;
				printf(" %d=%d\n",yyvsp[0]->val.i,yyval->val.i);
				};
		}
		else {
				//consider cases like multiplication *
                // Division by 0 -_- 
                if (yyvsp[0]->val.i == 0) {
                    yyerror("exception: divide by 0");
                }
                else {                
				    if(yyvsp[-2]->data==integer&&yyvsp[0]->data==integer)//integer is multipllied by integer
				    {
				        printf("%d",yyvsp[-2]->val.i);
				        yyval->val.i=yyvsp[-2]->val.i / yyvsp[0]->val.i;
                        yyval->data=yyvsp[-2]->data;
				        printf("*%d=%d\n",yyvsp[0]->val.i,yyval->val.i);
				    }
				    else if(yyvsp[-2]->data==floating&&yyvsp[0]->data==floating)//float is multipllied by float
				    {
				        printf("%f",yyvsp[-2]->val.f);
				        //add code
				        yyval->val.f=yyvsp[-2]->val.f / yyvsp[0]->val.f;
                        yyval->data=yyvsp[-2]->data;
				        printf("*%f=%f\n",yyvsp[0]->val.f,yyval->val.f);
				    }
				    else if(yyvsp[-2]->data==integer&&yyvsp[0]->data==floating)//integer is multiplied by float
				    {
				        printf("%d",yyvsp[-2]->val.i);
				        //add code
				        yyval->val.f=static_cast<float>(yyvsp[-2]->val.i) / yyvsp[0]->val.f;
                        yyval->data=yyvsp[0]->data;
				        printf("*%f=%f\n",yyvsp[0]->val.f,yyval->val.f);
				    }
				    else if(yyvsp[-2]->data==floating&&yyvsp[0]->data==integer)//float*int
				    {
				        printf("%f",yyvsp[-2]->val.f);
				        //add code
				        yyval->val.i=yyvsp[-2]->val.f / static_cast<float>(yyvsp[0]->val.i);
                        yyval->data=yyvsp[-2]->data;
				        printf("*%d=%f\n",yyvsp[0]->val.i,yyval->val.f);
				    }
                }   
            }
}
#line 2485 "y.tab.c"
    break;

  case 70:
#line 887 "16201134.y"
                { fprintf(output,"unary_expression : ADDOP unary_expression \n\n"); 
		if((strcmp(yyvsp[-1]->name.c_str(),"+")==0))
			{
				if(yyvsp[0]->data==integer)
				{
				    //add code
                    yyval->val.i = yyvsp[0]->val.i;
				}
				else if (yyvsp[0]->data==floating)
				{
    				//add code
                    yyval->val.f = yyvsp[0]->val.f;
				}
				
			} 
		else {
				//for - sign add code like +	
				if(yyvsp[0]->data==integer)
				{
				    //add code
                    yyval->val.i = yyvsp[0]->val.i * (-1);
				}
				else if (yyvsp[0]->data==floating)
				{
    				//add code
                    yyval->val.f = yyvsp[0]->val.f * (-1);
				}
		     }
		}
#line 2519 "y.tab.c"
    break;

  case 71:
#line 917 "16201134.y"
                        { fprintf(output,"unary_expression : NOT unary_expression \n\n");
				yyval->data==yyvsp[0]->data;
				if(yyvsp[0]->data==integer)//!5=0 !0=1
				{
					//add code
                    if (yyvsp[0]->val.i == 0) yyval->val.i = 1;
                    else yyval->val.i = 1;
				}
				else if (yyvsp[0]->data==floating)
				{
					//add code
                    if (yyvsp[0]->val.f == 0) yyval->val.f = 1;
                    else yyval->val.f = 1;
				}
			}
#line 2539 "y.tab.c"
    break;

  case 72:
#line 932 "16201134.y"
                          { 
                fprintf(output,"unary_expression : factor\n\n");
				yyval=new symbolInfo(yyvsp[0]->name,yyvsp[0]->type,yyvsp[0]->position);
				yyval->data=yyvsp[0]->data;
				yyval->arraysz=yyvsp[0]->arraysz;
				if(yyval->arraysz==0)
				{
					printf("normal factor\n ");
                    cout << yyval->name << endl;
					if(yyvsp[0]->data==integer)
					{
					yyval->val.i=yyvsp[0]->val.i;
					}
					
				}
				else
				{
					if(yyvsp[0]->data==integer)
					{
    					yyval->val.i=yyvsp[0]->val.arrayi[ix->val.i];
					}
					else if(yyvsp[0]->data == floating)
					{
					     yyval->val.f=yyvsp[0]->val.arrayf[ix->val.i];
					}
					else if(yyvsp[0]->data==character)
					{
    					yyval->val.c=yyvsp[0]->val.arrayc[ix->val.i];
					}
			} }
#line 2574 "y.tab.c"
    break;

  case 75:
#line 965 "16201134.y"
                    {//what will be added here??!!
        yyval = yyvsp[0];
	  }
#line 2582 "y.tab.c"
    break;

  case 76:
#line 968 "16201134.y"
                      {yyval = yyvsp[0];}
#line 2588 "y.tab.c"
    break;

  case 77:
#line 969 "16201134.y"
                     {yyval = yyvsp[0];}
#line 2594 "y.tab.c"
    break;

  case 78:
#line 970 "16201134.y"
                       { 
        fprintf(output,"factor : factor INCOP\n\n\n"); 
	    if(yyvsp[-1]->arraysz==0)
        {
	    	if(yyvsp[-1]->data==integer)
	    	{
	    		yyvsp[-1]->val.i++;
	    		yyval=yyvsp[-1];
	    		printf("\nfartor++ %d\n",yyval->val.i);
	    	}
	    }
	    else
	    {
	    			if(yyvsp[-1]->data==integer)
	    				{
	    				yyvsp[-1]->val.arrayi[ix->val.i]++;
	    				yyval=yyvsp[-1];
	    				printf("\nfactor-- %d\n",yyval->val.i);
	    				}
	    			
	    }			
 	}
#line 2621 "y.tab.c"
    break;

  case 79:
#line 992 "16201134.y"
                       {//add codes like incop  
        fprintf(output,"factor : factor DECOP\n\n\n"); 
	    if(yyvsp[-1]->arraysz==0)
        {
	    	if(yyvsp[-1]->data==integer)
	    	{
	    		yyvsp[-1]->val.i--;
	    		yyval=yyvsp[-1];
	    		printf("\nfartor++ %d\n",yyval->val.i);
	    	}
	    }
	    else
	    {
	    	if(yyvsp[-1]->data==integer)
	    	{
	    	    yyvsp[-1]->val.arrayi[ix->val.i]--;
	    		yyval=yyvsp[-1];
	    		printf("\nfactor-- %d\n",yyval->val.i);
	    	}
	    			
	    }			
	}
#line 2648 "y.tab.c"
    break;


#line 2652 "y.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 1016 "16201134.y"


int main(int argc,char *argv[])
{
	extern FILE* yyin, *input;	
    argc--; ++argv;
    if (argc > 0) {        
        // FILE *input = fopen(argv[0], "r");
        yyin  = fopen(argv[0], "r");

	    if(yyin==Null){
	    	printf("cannot open the file\n");
	    	return 0;
	    }
    } else {
        yyin = stdin;
    }

	// if(argc!=2)
	// 	{
	// 	printf("Please provide input file name and try again\n");
	// 	return 0;
	// 	}
	// FILE *input=fopen(argv[1],"r");
	// if(input==NULL){
	// 	printf("cannot open the file\n");
	// 	return 0;
	// 	}
	output= fopen("16201134_output.txt","w");
	// yyin= input;
    yyparse();
	printf("\nline   %d\n",line);
	fprintf(output,"\nLine   : %d\n\n",line);
	fprintf(output,"\nError   : %d\n\n",error);
	fprintf(output,"\n\nSymbol Table\n\n");
	table->print(output);
	fclose(yyin);
	fclose(output);
    exit(0);
return 0;
}
