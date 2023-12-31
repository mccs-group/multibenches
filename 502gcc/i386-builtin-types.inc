/* This file is auto-generated by i386-builtin-types.awk.  */

enum ix86_builtin_type {
  IX86_BT_VOID,
  IX86_BT_CHAR,
  IX86_BT_UCHAR,
  IX86_BT_QI,
  IX86_BT_HI,
  IX86_BT_SI,
  IX86_BT_DI,
  IX86_BT_UQI,
  IX86_BT_UHI,
  IX86_BT_USI,
  IX86_BT_UDI,
  IX86_BT_USHORT,
  IX86_BT_INT,
  IX86_BT_UINT,
  IX86_BT_UNSIGNED,
  IX86_BT_LONGLONG,
  IX86_BT_ULONGLONG,
  IX86_BT_UINT8,
  IX86_BT_UINT16,
  IX86_BT_INT64,
  IX86_BT_UINT64,
  IX86_BT_FLOAT,
  IX86_BT_DOUBLE,
  IX86_BT_FLOAT80,
  IX86_BT_FLOAT128,
  IX86_BT_LAST_PRIM = IX86_BT_FLOAT128,
  IX86_BT_V2SF,
  IX86_BT_V1DI,
  IX86_BT_V2SI,
  IX86_BT_V4HI,
  IX86_BT_V8QI,
  IX86_BT_V2DF,
  IX86_BT_V4SF,
  IX86_BT_V2DI,
  IX86_BT_V4SI,
  IX86_BT_V8HI,
  IX86_BT_V16QI,
  IX86_BT_V2UDI,
  IX86_BT_V4USI,
  IX86_BT_V8UHI,
  IX86_BT_V16UQI,
  IX86_BT_V4DF,
  IX86_BT_V8SF,
  IX86_BT_V4DI,
  IX86_BT_V8SI,
  IX86_BT_V16HI,
  IX86_BT_V32QI,
  IX86_BT_LAST_VECT = IX86_BT_V32QI,
  IX86_BT_PCHAR,
  IX86_BT_PVOID,
  IX86_BT_PDOUBLE,
  IX86_BT_PFLOAT,
  IX86_BT_PINT,
  IX86_BT_PULONGLONG,
  IX86_BT_PUNSIGNED,
  IX86_BT_PV2DF,
  IX86_BT_PV2DI,
  IX86_BT_PV2SF,
  IX86_BT_PV4DF,
  IX86_BT_PV4DI,
  IX86_BT_PV4SF,
  IX86_BT_PV8SF,
  IX86_BT_LAST_PTR = IX86_BT_PV8SF,
  IX86_BT_PCCHAR,
  IX86_BT_PCDOUBLE,
  IX86_BT_PCFLOAT,
  IX86_BT_PCVOID,
  IX86_BT_PCV2DF,
  IX86_BT_PCV2SF,
  IX86_BT_PCV4DF,
  IX86_BT_PCV4SF,
  IX86_BT_PCV8SF,
  IX86_BT_LAST_CPTR = IX86_BT_PCV8SF
}
;


#define DEFINE_BUILTIN_PRIMITIVE_TYPES \
  ix86_builtin_type_tab[(int)IX86_BT_VOID] = void_type_node, \
  ix86_builtin_type_tab[(int)IX86_BT_CHAR] = char_type_node, \
  ix86_builtin_type_tab[(int)IX86_BT_UCHAR] = unsigned_char_type_node, \
  ix86_builtin_type_tab[(int)IX86_BT_QI] = char_type_node, \
  ix86_builtin_type_tab[(int)IX86_BT_HI] = intHI_type_node, \
  ix86_builtin_type_tab[(int)IX86_BT_SI] = intSI_type_node, \
  ix86_builtin_type_tab[(int)IX86_BT_DI] = long_long_integer_type_node, \
  ix86_builtin_type_tab[(int)IX86_BT_UQI] = unsigned_intQI_type_node, \
  ix86_builtin_type_tab[(int)IX86_BT_UHI] = unsigned_intHI_type_node, \
  ix86_builtin_type_tab[(int)IX86_BT_USI] = unsigned_intSI_type_node, \
  ix86_builtin_type_tab[(int)IX86_BT_UDI] = long_long_unsigned_type_node, \
  ix86_builtin_type_tab[(int)IX86_BT_USHORT] = short_unsigned_type_node, \
  ix86_builtin_type_tab[(int)IX86_BT_INT] = integer_type_node, \
  ix86_builtin_type_tab[(int)IX86_BT_UINT] = unsigned_type_node, \
  ix86_builtin_type_tab[(int)IX86_BT_UNSIGNED] = unsigned_type_node, \
  ix86_builtin_type_tab[(int)IX86_BT_LONGLONG] = long_long_integer_type_node, \
  ix86_builtin_type_tab[(int)IX86_BT_ULONGLONG] = long_long_unsigned_type_node, \
  ix86_builtin_type_tab[(int)IX86_BT_UINT8] = unsigned_char_type_node, \
  ix86_builtin_type_tab[(int)IX86_BT_UINT16] = short_unsigned_type_node, \
  ix86_builtin_type_tab[(int)IX86_BT_INT64] = long_long_integer_type_node, \
  ix86_builtin_type_tab[(int)IX86_BT_UINT64] = long_long_unsigned_type_node, \
  ix86_builtin_type_tab[(int)IX86_BT_FLOAT] = float_type_node, \
  ix86_builtin_type_tab[(int)IX86_BT_DOUBLE] = double_type_node, \
  ix86_builtin_type_tab[(int)IX86_BT_FLOAT80] = float80_type_node, \
  ix86_builtin_type_tab[(int)IX86_BT_FLOAT128] = float128_type_node


static const enum machine_mode ix86_builtin_type_vect_mode[] = {
  V2SFmode, V1DImode, V2SImode, V4HImode, V8QImode, V2DFmode,
  V4SFmode, V2DImode, V4SImode, V8HImode, V16QImode, V2DImode,
  V4SImode, V8HImode, V16QImode, V4DFmode, V8SFmode, V4DImode,
  V8SImode, V16HImode, V32QImode
};


static const enum ix86_builtin_type ix86_builtin_type_vect_base[] = {
  IX86_BT_FLOAT, IX86_BT_DI, IX86_BT_SI, IX86_BT_HI,
  IX86_BT_QI, IX86_BT_DOUBLE, IX86_BT_FLOAT, IX86_BT_DI,
  IX86_BT_SI, IX86_BT_HI, IX86_BT_QI, IX86_BT_UDI,
  IX86_BT_USI, IX86_BT_UHI, IX86_BT_UQI, IX86_BT_DOUBLE,
  IX86_BT_FLOAT, IX86_BT_DI, IX86_BT_SI, IX86_BT_HI,
  IX86_BT_QI
};


static const enum ix86_builtin_type ix86_builtin_type_ptr_base[] = {
  IX86_BT_CHAR, IX86_BT_VOID, IX86_BT_DOUBLE, IX86_BT_FLOAT,
  IX86_BT_INT, IX86_BT_ULONGLONG, IX86_BT_UNSIGNED, IX86_BT_V2DF,
  IX86_BT_V2DI, IX86_BT_V2SF, IX86_BT_V4DF, IX86_BT_V4DI,
  IX86_BT_V4SF, IX86_BT_V8SF,
  /* pointer-to-constant defs start here */
  IX86_BT_CHAR, IX86_BT_DOUBLE, IX86_BT_FLOAT, IX86_BT_VOID,
  IX86_BT_V2DF, IX86_BT_V2SF, IX86_BT_V4DF, IX86_BT_V4SF,
  IX86_BT_V8SF
};


enum ix86_builtin_func_type {
  FLOAT128_FTYPE_VOID,
  UINT64_FTYPE_VOID,
  UNSIGNED_FTYPE_VOID,
  VOID_FTYPE_VOID,
  PVOID_FTYPE_VOID,
  FLOAT_FTYPE_FLOAT,
  FLOAT128_FTYPE_FLOAT128,
  INT_FTYPE_INT,
  INT_FTYPE_V16QI,
  INT_FTYPE_V2DF,
  INT_FTYPE_V4DF,
  INT_FTYPE_V4SF,
  INT_FTYPE_V8QI,
  INT_FTYPE_V8SF,
  INT64_FTYPE_INT64,
  INT64_FTYPE_V2DF,
  INT64_FTYPE_V4SF,
  UINT64_FTYPE_INT,
  UINT16_FTYPE_UINT16,
  UINT64_FTYPE_PUNSIGNED,
  V16QI_FTYPE_PCCHAR,
  V16QI_FTYPE_V16QI,
  V2DF_FTYPE_PCDOUBLE,
  V2DF_FTYPE_V2DF,
  V2DF_FTYPE_V2SI,
  V2DF_FTYPE_V4DF,
  V2DF_FTYPE_V4SF,
  V2DF_FTYPE_V4SI,
  V2DI_FTYPE_PV2DI,
  V2DI_FTYPE_V16QI,
  V2DI_FTYPE_V2DI,
  V2DI_FTYPE_V4SI,
  V2DI_FTYPE_V8HI,
  V2SF_FTYPE_V2SF,
  V2SF_FTYPE_V2SI,
  V2SI_FTYPE_V2DF,
  V2SI_FTYPE_V2SF,
  V2SI_FTYPE_V2SI,
  V2SI_FTYPE_V4SF,
  V32QI_FTYPE_PCCHAR,
  V4DF_FTYPE_PCDOUBLE,
  V4DF_FTYPE_PCV2DF,
  V4DF_FTYPE_V2DF,
  V4DF_FTYPE_V4DF,
  V4DF_FTYPE_V4SF,
  V4DF_FTYPE_V4SI,
  V4HI_FTYPE_V4HI,
  V4SF_FTYPE_PCFLOAT,
  V4SF_FTYPE_V2DF,
  V4SF_FTYPE_V4DF,
  V4SF_FTYPE_V4SF,
  V4SF_FTYPE_V4SI,
  V4SF_FTYPE_V8SF,
  V4SI_FTYPE_V16QI,
  V4SI_FTYPE_V2DF,
  V4SI_FTYPE_V4DF,
  V4SI_FTYPE_V4SF,
  V4SI_FTYPE_V4SI,
  V4SI_FTYPE_V8HI,
  V4SI_FTYPE_V8SI,
  V8HI_FTYPE_V16QI,
  V8HI_FTYPE_V8HI,
  V8QI_FTYPE_V8QI,
  V8SF_FTYPE_PCFLOAT,
  V8SF_FTYPE_PCV4SF,
  V8SF_FTYPE_V4SF,
  V8SF_FTYPE_V8SF,
  V8SF_FTYPE_V8SI,
  V8SI_FTYPE_V4SI,
  V8SI_FTYPE_V8SF,
  VOID_FTYPE_PCVOID,
  VOID_FTYPE_PVOID,
  VOID_FTYPE_UNSIGNED,
  DI_FTYPE_V2DI_INT,
  DOUBLE_FTYPE_V2DF_INT,
  FLOAT_FTYPE_V4SF_INT,
  FLOAT128_FTYPE_FLOAT128_FLOAT128,
  HI_FTYPE_V4HI_INT,
  HI_FTYPE_V8HI_INT,
  INT_FTYPE_V2DF_V2DF,
  INT_FTYPE_V2DI_V2DI,
  INT_FTYPE_V4DF_V4DF,
  INT_FTYPE_V4DI_V4DI,
  INT_FTYPE_V4SF_V4SF,
  INT_FTYPE_V8SF_V8SF,
  QI_FTYPE_V16QI_INT,
  QI_FTYPE_V8QI_INT,
  SI_FTYPE_V2SI_INT,
  SI_FTYPE_V4SI_INT,
  UINT_FTYPE_UINT_UCHAR,
  UINT_FTYPE_UINT_UINT,
  UINT_FTYPE_UINT_USHORT,
  UINT16_FTYPE_UINT16_INT,
  UINT64_FTYPE_UINT64_UINT64,
  UINT8_FTYPE_UINT8_INT,
  V16QI_FTYPE_V16QI_SI,
  V16QI_FTYPE_V16QI_V16QI,
  V16QI_FTYPE_V8HI_V8HI,
  V1DI_FTYPE_V1DI_SI,
  V1DI_FTYPE_V1DI_V1DI,
  V1DI_FTYPE_V2SI_V2SI,
  V1DI_FTYPE_V8QI_V8QI,
  V2DF_FTYPE_PCV2DF_V2DF,
  V2DF_FTYPE_V2DF_DI,
  V2DF_FTYPE_V2DF_INT,
  V2DF_FTYPE_V2DF_PCDOUBLE,
  V2DF_FTYPE_V2DF_SI,
  V2DF_FTYPE_V2DF_V2DF,
  V2DF_FTYPE_V2DF_V2DI,
  V2DF_FTYPE_V2DF_V4SF,
  V2DF_FTYPE_V4DF_INT,
  V2DI_FTYPE_V16QI_V16QI,
  V2DI_FTYPE_V2DF_V2DF,
  V2DI_FTYPE_V2DI_INT,
  V2DI_FTYPE_V2DI_SI,
  V2DI_FTYPE_V2DI_V16QI,
  V2DI_FTYPE_V2DI_V2DI,
  V2DI_FTYPE_V4SI_V4SI,
  V2SF_FTYPE_V2SF_V2SF,
  V2SI_FTYPE_INT_INT,
  V2SI_FTYPE_V2SF_V2SF,
  V2SI_FTYPE_V2SI_SI,
  V2SI_FTYPE_V2SI_V2SI,
  V2SI_FTYPE_V4HI_V4HI,
  V4DF_FTYPE_PCV4DF_V4DF,
  V4DF_FTYPE_V4DF_INT,
  V4DF_FTYPE_V4DF_V4DF,
  V4DF_FTYPE_V4DF_V4DI,
  V4HI_FTYPE_V2SI_V2SI,
  V4HI_FTYPE_V4HI_INT,
  V4HI_FTYPE_V4HI_SI,
  V4HI_FTYPE_V4HI_V4HI,
  V4HI_FTYPE_V8QI_V8QI,
  V4SF_FTYPE_PCV4SF_V4SF,
  V4SF_FTYPE_V4SF_DI,
  V4SF_FTYPE_V4SF_INT,
  V4SF_FTYPE_V4SF_PCV2SF,
  V4SF_FTYPE_V4SF_SI,
  V4SF_FTYPE_V4SF_V2DF,
  V4SF_FTYPE_V4SF_V2SI,
  V4SF_FTYPE_V4SF_V4SF,
  V4SF_FTYPE_V4SF_V4SI,
  V4SF_FTYPE_V8SF_INT,
  V4SI_FTYPE_V2DF_V2DF,
  V4SI_FTYPE_V4SF_V4SF,
  V4SI_FTYPE_V4SI_INT,
  V4SI_FTYPE_V4SI_SI,
  V4SI_FTYPE_V4SI_V4SI,
  V4SI_FTYPE_V8HI_V8HI,
  V4SI_FTYPE_V8SI_INT,
  V8HI_FTYPE_V16QI_V16QI,
  V8HI_FTYPE_V4SI_V4SI,
  V8HI_FTYPE_V8HI_INT,
  V8HI_FTYPE_V8HI_SI,
  V8HI_FTYPE_V8HI_V8HI,
  V8QI_FTYPE_V4HI_V4HI,
  V8QI_FTYPE_V8QI_V8QI,
  V8SF_FTYPE_PCV8SF_V8SF,
  V8SF_FTYPE_V8SF_INT,
  V8SF_FTYPE_V8SF_V8SF,
  V8SF_FTYPE_V8SF_V8SI,
  VOID_FTYPE_PCHAR_V16QI,
  VOID_FTYPE_PCHAR_V32QI,
  VOID_FTYPE_PDOUBLE_V2DF,
  VOID_FTYPE_PDOUBLE_V4DF,
  VOID_FTYPE_PFLOAT_V4SF,
  VOID_FTYPE_PFLOAT_V8SF,
  VOID_FTYPE_PINT_INT,
  VOID_FTYPE_PULONGLONG_ULONGLONG,
  VOID_FTYPE_PV2DI_V2DI,
  VOID_FTYPE_PV2SF_V4SF,
  VOID_FTYPE_PV4DI_V4DI,
  VOID_FTYPE_UNSIGNED_UNSIGNED,
  INT_FTYPE_V16QI_V16QI_INT,
  UCHAR_FTYPE_UINT_UINT_UINT,
  UCHAR_FTYPE_UINT64_UINT_UINT,
  V16HI_FTYPE_V16HI_V16HI_V16HI,
  V16QI_FTYPE_V16QI_QI_INT,
  V16QI_FTYPE_V16QI_V16QI_INT,
  V16QI_FTYPE_V16QI_V16QI_V16QI,
  V1DI_FTYPE_V1DI_V1DI_INT,
  V2DF_FTYPE_V2DF_V2DF_INT,
  V2DF_FTYPE_V2DF_V2DF_V2DF,
  V2DF_FTYPE_V2DF_V2DF_V2DI_INT,
  V2DI_FTYPE_V2DI_DI_INT,
  V2DI_FTYPE_V2DI_UINT_UINT,
  V2DI_FTYPE_V2DI_V2DI_INT,
  V2DI_FTYPE_V2DI_V2DI_V2DI,
  V32QI_FTYPE_V32QI_V32QI_V32QI,
  V4DF_FTYPE_V4DF_V2DF_INT,
  V4DF_FTYPE_V4DF_V4DF_INT,
  V4DF_FTYPE_V4DF_V4DF_V4DF,
  V4DF_FTYPE_V4DF_V4DF_V4DI_INT,
  V4DI_FTYPE_V4DI_V4DI_V4DI,
  V4HI_FTYPE_V4HI_HI_INT,
  V4SF_FTYPE_V4SF_FLOAT_INT,
  V4SF_FTYPE_V4SF_V4SF_INT,
  V4SF_FTYPE_V4SF_V4SF_V4SF,
  V4SF_FTYPE_V4SF_V4SF_V4SI_INT,
  V4SI_FTYPE_V4SI_SI_INT,
  V4SI_FTYPE_V4SI_V4SI_INT,
  V4SI_FTYPE_V4SI_V4SI_V2DI,
  V4SI_FTYPE_V4SI_V4SI_V4SI,
  V8HI_FTYPE_V8HI_HI_INT,
  V8HI_FTYPE_V8HI_V8HI_INT,
  V8HI_FTYPE_V8HI_V8HI_V4SI,
  V8HI_FTYPE_V8HI_V8HI_V8HI,
  V8SF_FTYPE_V8SF_V4SF_INT,
  V8SF_FTYPE_V8SF_V8SF_INT,
  V8SF_FTYPE_V8SF_V8SF_V8SF,
  V8SF_FTYPE_V8SF_V8SF_V8SI_INT,
  V8SI_FTYPE_V8SI_V4SI_INT,
  V8SI_FTYPE_V8SI_V8SI_INT,
  V8SI_FTYPE_V8SI_V8SI_V8SI,
  VOID_FTYPE_PCVOID_UNSIGNED_UNSIGNED,
  VOID_FTYPE_PV2DF_V2DF_V2DF,
  VOID_FTYPE_PV4DF_V4DF_V4DF,
  VOID_FTYPE_PV4SF_V4SF_V4SF,
  VOID_FTYPE_PV8SF_V8SF_V8SF,
  VOID_FTYPE_UINT_UINT_UINT,
  VOID_FTYPE_UINT64_UINT_UINT,
  VOID_FTYPE_V16QI_V16QI_PCHAR,
  VOID_FTYPE_V8QI_V8QI_PCHAR,
  V2DF_FTYPE_V2DF_V2DF_V2DI,
  V4SF_FTYPE_V4SF_V4SF_V4SI,
  V2UDI_FTYPE_V2UDI_V2UDI_V2UDI,
  V4USI_FTYPE_V4USI_V4USI_V4USI,
  V8UHI_FTYPE_V8UHI_V8UHI_V8UHI,
  V16UQI_FTYPE_V16UQI_V16UQI_V16UQI,
  V4DF_FTYPE_V4DF_V4DF_V4DI,
  V8SF_FTYPE_V8SF_V8SF_V8SI,
  V2DI_FTYPE_V2DI_V2DI_UINT_UINT,
  V4HI_FTYPE_HI_HI_HI_HI,
  INT_FTYPE_V16QI_INT_V16QI_INT_INT,
  V16QI_FTYPE_V16QI_INT_V16QI_INT_INT,
  V8QI_FTYPE_QI_QI_QI_QI_QI_QI_QI_QI,
  IX86_BT_LAST_FUNC = V8QI_FTYPE_QI_QI_QI_QI_QI_QI_QI_QI,
  INT_FTYPE_V2DF_V2DF_PTEST,
  INT_FTYPE_V2DI_V2DI_PTEST,
  INT_FTYPE_V4DF_V4DF_PTEST,
  INT_FTYPE_V4DI_V4DI_PTEST,
  INT_FTYPE_V4SF_V4SF_PTEST,
  INT_FTYPE_V8SF_V8SF_PTEST,
  V2DF_FTYPE_V2DF_VEC_MERGE,
  V4SF_FTYPE_V4SF_VEC_MERGE,
  V1DI_FTYPE_V1DI_SI_COUNT,
  V2DI_FTYPE_V2DI_SI_COUNT,
  V2SI_FTYPE_V2SI_SI_COUNT,
  V4HI_FTYPE_V4HI_SI_COUNT,
  V4SI_FTYPE_V4SI_SI_COUNT,
  V8HI_FTYPE_V8HI_SI_COUNT,
  V1DI_FTYPE_V1DI_V1DI_COUNT,
  V2DI_FTYPE_V2DI_V2DI_COUNT,
  V2SI_FTYPE_V2SI_V2SI_COUNT,
  V4HI_FTYPE_V4HI_V4HI_COUNT,
  V4SI_FTYPE_V4SI_V4SI_COUNT,
  V8HI_FTYPE_V8HI_V8HI_COUNT,
  V2DF_FTYPE_V2DF_V2DF_SWAP,
  V4SF_FTYPE_V4SF_V4SF_SWAP,
  V2DI_FTYPE_V2DI_INT_CONVERT,
  V2DI_FTYPE_V2DI_V2DI_INT_CONVERT,
  V1DI_FTYPE_V1DI_V1DI_INT_CONVERT,
  V16QI_FTYPE_V16QI_V16QI_CMP,
  V2DI_FTYPE_V2DI_V2DI_CMP,
  V4SI_FTYPE_V4SI_V4SI_CMP,
  V8HI_FTYPE_V8HI_V8HI_CMP,
  V16QI_FTYPE_V16QI_V16QI_TF,
  V2DF_FTYPE_V2DF_V2DF_TF,
  V2DI_FTYPE_V2DI_V2DI_TF,
  V4SF_FTYPE_V4SF_V4SF_TF,
  V4SI_FTYPE_V4SI_V4SI_TF,
  V8HI_FTYPE_V8HI_V8HI_TF,
  IX86_BT_LAST_ALIAS = V8HI_FTYPE_V8HI_V8HI_TF
}
;


static const enum ix86_builtin_type ix86_builtin_func_args[] = {
  IX86_BT_FLOAT128, IX86_BT_UINT64, IX86_BT_UNSIGNED, IX86_BT_VOID,
  IX86_BT_PVOID, IX86_BT_FLOAT, IX86_BT_FLOAT, IX86_BT_FLOAT128,
  IX86_BT_FLOAT128, IX86_BT_INT, IX86_BT_INT, IX86_BT_INT,
  IX86_BT_V16QI, IX86_BT_INT, IX86_BT_V2DF, IX86_BT_INT,
  IX86_BT_V4DF, IX86_BT_INT, IX86_BT_V4SF, IX86_BT_INT,
  IX86_BT_V8QI, IX86_BT_INT, IX86_BT_V8SF, IX86_BT_INT64,
  IX86_BT_INT64, IX86_BT_INT64, IX86_BT_V2DF, IX86_BT_INT64,
  IX86_BT_V4SF, IX86_BT_UINT64, IX86_BT_INT, IX86_BT_UINT16,
  IX86_BT_UINT16, IX86_BT_UINT64, IX86_BT_PUNSIGNED, IX86_BT_V16QI,
  IX86_BT_PCCHAR, IX86_BT_V16QI, IX86_BT_V16QI, IX86_BT_V2DF,
  IX86_BT_PCDOUBLE, IX86_BT_V2DF, IX86_BT_V2DF, IX86_BT_V2DF,
  IX86_BT_V2SI, IX86_BT_V2DF, IX86_BT_V4DF, IX86_BT_V2DF,
  IX86_BT_V4SF, IX86_BT_V2DF, IX86_BT_V4SI, IX86_BT_V2DI,
  IX86_BT_PV2DI, IX86_BT_V2DI, IX86_BT_V16QI, IX86_BT_V2DI,
  IX86_BT_V2DI, IX86_BT_V2DI, IX86_BT_V4SI, IX86_BT_V2DI,
  IX86_BT_V8HI, IX86_BT_V2SF, IX86_BT_V2SF, IX86_BT_V2SF,
  IX86_BT_V2SI, IX86_BT_V2SI, IX86_BT_V2DF, IX86_BT_V2SI,
  IX86_BT_V2SF, IX86_BT_V2SI, IX86_BT_V2SI, IX86_BT_V2SI,
  IX86_BT_V4SF, IX86_BT_V32QI, IX86_BT_PCCHAR, IX86_BT_V4DF,
  IX86_BT_PCDOUBLE, IX86_BT_V4DF, IX86_BT_PCV2DF, IX86_BT_V4DF,
  IX86_BT_V2DF, IX86_BT_V4DF, IX86_BT_V4DF, IX86_BT_V4DF,
  IX86_BT_V4SF, IX86_BT_V4DF, IX86_BT_V4SI, IX86_BT_V4HI,
  IX86_BT_V4HI, IX86_BT_V4SF, IX86_BT_PCFLOAT, IX86_BT_V4SF,
  IX86_BT_V2DF, IX86_BT_V4SF, IX86_BT_V4DF, IX86_BT_V4SF,
  IX86_BT_V4SF, IX86_BT_V4SF, IX86_BT_V4SI, IX86_BT_V4SF,
  IX86_BT_V8SF, IX86_BT_V4SI, IX86_BT_V16QI, IX86_BT_V4SI,
  IX86_BT_V2DF, IX86_BT_V4SI, IX86_BT_V4DF, IX86_BT_V4SI,
  IX86_BT_V4SF, IX86_BT_V4SI, IX86_BT_V4SI, IX86_BT_V4SI,
  IX86_BT_V8HI, IX86_BT_V4SI, IX86_BT_V8SI, IX86_BT_V8HI,
  IX86_BT_V16QI, IX86_BT_V8HI, IX86_BT_V8HI, IX86_BT_V8QI,
  IX86_BT_V8QI, IX86_BT_V8SF, IX86_BT_PCFLOAT, IX86_BT_V8SF,
  IX86_BT_PCV4SF, IX86_BT_V8SF, IX86_BT_V4SF, IX86_BT_V8SF,
  IX86_BT_V8SF, IX86_BT_V8SF, IX86_BT_V8SI, IX86_BT_V8SI,
  IX86_BT_V4SI, IX86_BT_V8SI, IX86_BT_V8SF, IX86_BT_VOID,
  IX86_BT_PCVOID, IX86_BT_VOID, IX86_BT_PVOID, IX86_BT_VOID,
  IX86_BT_UNSIGNED, IX86_BT_DI, IX86_BT_V2DI, IX86_BT_INT,
  IX86_BT_DOUBLE, IX86_BT_V2DF, IX86_BT_INT, IX86_BT_FLOAT,
  IX86_BT_V4SF, IX86_BT_INT, IX86_BT_FLOAT128, IX86_BT_FLOAT128,
  IX86_BT_FLOAT128, IX86_BT_HI, IX86_BT_V4HI, IX86_BT_INT,
  IX86_BT_HI, IX86_BT_V8HI, IX86_BT_INT, IX86_BT_INT,
  IX86_BT_V2DF, IX86_BT_V2DF, IX86_BT_INT, IX86_BT_V2DI,
  IX86_BT_V2DI, IX86_BT_INT, IX86_BT_V4DF, IX86_BT_V4DF,
  IX86_BT_INT, IX86_BT_V4DI, IX86_BT_V4DI, IX86_BT_INT,
  IX86_BT_V4SF, IX86_BT_V4SF, IX86_BT_INT, IX86_BT_V8SF,
  IX86_BT_V8SF, IX86_BT_QI, IX86_BT_V16QI, IX86_BT_INT,
  IX86_BT_QI, IX86_BT_V8QI, IX86_BT_INT, IX86_BT_SI,
  IX86_BT_V2SI, IX86_BT_INT, IX86_BT_SI, IX86_BT_V4SI,
  IX86_BT_INT, IX86_BT_UINT, IX86_BT_UINT, IX86_BT_UCHAR,
  IX86_BT_UINT, IX86_BT_UINT, IX86_BT_UINT, IX86_BT_UINT,
  IX86_BT_UINT, IX86_BT_USHORT, IX86_BT_UINT16, IX86_BT_UINT16,
  IX86_BT_INT, IX86_BT_UINT64, IX86_BT_UINT64, IX86_BT_UINT64,
  IX86_BT_UINT8, IX86_BT_UINT8, IX86_BT_INT, IX86_BT_V16QI,
  IX86_BT_V16QI, IX86_BT_SI, IX86_BT_V16QI, IX86_BT_V16QI,
  IX86_BT_V16QI, IX86_BT_V16QI, IX86_BT_V8HI, IX86_BT_V8HI,
  IX86_BT_V1DI, IX86_BT_V1DI, IX86_BT_SI, IX86_BT_V1DI,
  IX86_BT_V1DI, IX86_BT_V1DI, IX86_BT_V1DI, IX86_BT_V2SI,
  IX86_BT_V2SI, IX86_BT_V1DI, IX86_BT_V8QI, IX86_BT_V8QI,
  IX86_BT_V2DF, IX86_BT_PCV2DF, IX86_BT_V2DF, IX86_BT_V2DF,
  IX86_BT_V2DF, IX86_BT_DI, IX86_BT_V2DF, IX86_BT_V2DF,
  IX86_BT_INT, IX86_BT_V2DF, IX86_BT_V2DF, IX86_BT_PCDOUBLE,
  IX86_BT_V2DF, IX86_BT_V2DF, IX86_BT_SI, IX86_BT_V2DF,
  IX86_BT_V2DF, IX86_BT_V2DF, IX86_BT_V2DF, IX86_BT_V2DF,
  IX86_BT_V2DI, IX86_BT_V2DF, IX86_BT_V2DF, IX86_BT_V4SF,
  IX86_BT_V2DF, IX86_BT_V4DF, IX86_BT_INT, IX86_BT_V2DI,
  IX86_BT_V16QI, IX86_BT_V16QI, IX86_BT_V2DI, IX86_BT_V2DF,
  IX86_BT_V2DF, IX86_BT_V2DI, IX86_BT_V2DI, IX86_BT_INT,
  IX86_BT_V2DI, IX86_BT_V2DI, IX86_BT_SI, IX86_BT_V2DI,
  IX86_BT_V2DI, IX86_BT_V16QI, IX86_BT_V2DI, IX86_BT_V2DI,
  IX86_BT_V2DI, IX86_BT_V2DI, IX86_BT_V4SI, IX86_BT_V4SI,
  IX86_BT_V2SF, IX86_BT_V2SF, IX86_BT_V2SF, IX86_BT_V2SI,
  IX86_BT_INT, IX86_BT_INT, IX86_BT_V2SI, IX86_BT_V2SF,
  IX86_BT_V2SF, IX86_BT_V2SI, IX86_BT_V2SI, IX86_BT_SI,
  IX86_BT_V2SI, IX86_BT_V2SI, IX86_BT_V2SI, IX86_BT_V2SI,
  IX86_BT_V4HI, IX86_BT_V4HI, IX86_BT_V4DF, IX86_BT_PCV4DF,
  IX86_BT_V4DF, IX86_BT_V4DF, IX86_BT_V4DF, IX86_BT_INT,
  IX86_BT_V4DF, IX86_BT_V4DF, IX86_BT_V4DF, IX86_BT_V4DF,
  IX86_BT_V4DF, IX86_BT_V4DI, IX86_BT_V4HI, IX86_BT_V2SI,
  IX86_BT_V2SI, IX86_BT_V4HI, IX86_BT_V4HI, IX86_BT_INT,
  IX86_BT_V4HI, IX86_BT_V4HI, IX86_BT_SI, IX86_BT_V4HI,
  IX86_BT_V4HI, IX86_BT_V4HI, IX86_BT_V4HI, IX86_BT_V8QI,
  IX86_BT_V8QI, IX86_BT_V4SF, IX86_BT_PCV4SF, IX86_BT_V4SF,
  IX86_BT_V4SF, IX86_BT_V4SF, IX86_BT_DI, IX86_BT_V4SF,
  IX86_BT_V4SF, IX86_BT_INT, IX86_BT_V4SF, IX86_BT_V4SF,
  IX86_BT_PCV2SF, IX86_BT_V4SF, IX86_BT_V4SF, IX86_BT_SI,
  IX86_BT_V4SF, IX86_BT_V4SF, IX86_BT_V2DF, IX86_BT_V4SF,
  IX86_BT_V4SF, IX86_BT_V2SI, IX86_BT_V4SF, IX86_BT_V4SF,
  IX86_BT_V4SF, IX86_BT_V4SF, IX86_BT_V4SF, IX86_BT_V4SI,
  IX86_BT_V4SF, IX86_BT_V8SF, IX86_BT_INT, IX86_BT_V4SI,
  IX86_BT_V2DF, IX86_BT_V2DF, IX86_BT_V4SI, IX86_BT_V4SF,
  IX86_BT_V4SF, IX86_BT_V4SI, IX86_BT_V4SI, IX86_BT_INT,
  IX86_BT_V4SI, IX86_BT_V4SI, IX86_BT_SI, IX86_BT_V4SI,
  IX86_BT_V4SI, IX86_BT_V4SI, IX86_BT_V4SI, IX86_BT_V8HI,
  IX86_BT_V8HI, IX86_BT_V4SI, IX86_BT_V8SI, IX86_BT_INT,
  IX86_BT_V8HI, IX86_BT_V16QI, IX86_BT_V16QI, IX86_BT_V8HI,
  IX86_BT_V4SI, IX86_BT_V4SI, IX86_BT_V8HI, IX86_BT_V8HI,
  IX86_BT_INT, IX86_BT_V8HI, IX86_BT_V8HI, IX86_BT_SI,
  IX86_BT_V8HI, IX86_BT_V8HI, IX86_BT_V8HI, IX86_BT_V8QI,
  IX86_BT_V4HI, IX86_BT_V4HI, IX86_BT_V8QI, IX86_BT_V8QI,
  IX86_BT_V8QI, IX86_BT_V8SF, IX86_BT_PCV8SF, IX86_BT_V8SF,
  IX86_BT_V8SF, IX86_BT_V8SF, IX86_BT_INT, IX86_BT_V8SF,
  IX86_BT_V8SF, IX86_BT_V8SF, IX86_BT_V8SF, IX86_BT_V8SF,
  IX86_BT_V8SI, IX86_BT_VOID, IX86_BT_PCHAR, IX86_BT_V16QI,
  IX86_BT_VOID, IX86_BT_PCHAR, IX86_BT_V32QI, IX86_BT_VOID,
  IX86_BT_PDOUBLE, IX86_BT_V2DF, IX86_BT_VOID, IX86_BT_PDOUBLE,
  IX86_BT_V4DF, IX86_BT_VOID, IX86_BT_PFLOAT, IX86_BT_V4SF,
  IX86_BT_VOID, IX86_BT_PFLOAT, IX86_BT_V8SF, IX86_BT_VOID,
  IX86_BT_PINT, IX86_BT_INT, IX86_BT_VOID, IX86_BT_PULONGLONG,
  IX86_BT_ULONGLONG, IX86_BT_VOID, IX86_BT_PV2DI, IX86_BT_V2DI,
  IX86_BT_VOID, IX86_BT_PV2SF, IX86_BT_V4SF, IX86_BT_VOID,
  IX86_BT_PV4DI, IX86_BT_V4DI, IX86_BT_VOID, IX86_BT_UNSIGNED,
  IX86_BT_UNSIGNED, IX86_BT_INT, IX86_BT_V16QI, IX86_BT_V16QI,
  IX86_BT_INT, IX86_BT_UCHAR, IX86_BT_UINT, IX86_BT_UINT,
  IX86_BT_UINT, IX86_BT_UCHAR, IX86_BT_UINT64, IX86_BT_UINT,
  IX86_BT_UINT, IX86_BT_V16HI, IX86_BT_V16HI, IX86_BT_V16HI,
  IX86_BT_V16HI, IX86_BT_V16QI, IX86_BT_V16QI, IX86_BT_QI,
  IX86_BT_INT, IX86_BT_V16QI, IX86_BT_V16QI, IX86_BT_V16QI,
  IX86_BT_INT, IX86_BT_V16QI, IX86_BT_V16QI, IX86_BT_V16QI,
  IX86_BT_V16QI, IX86_BT_V1DI, IX86_BT_V1DI, IX86_BT_V1DI,
  IX86_BT_INT, IX86_BT_V2DF, IX86_BT_V2DF, IX86_BT_V2DF,
  IX86_BT_INT, IX86_BT_V2DF, IX86_BT_V2DF, IX86_BT_V2DF,
  IX86_BT_V2DF, IX86_BT_V2DF, IX86_BT_V2DF, IX86_BT_V2DF,
  IX86_BT_V2DI, IX86_BT_INT, IX86_BT_V2DI, IX86_BT_V2DI,
  IX86_BT_DI, IX86_BT_INT, IX86_BT_V2DI, IX86_BT_V2DI,
  IX86_BT_UINT, IX86_BT_UINT, IX86_BT_V2DI, IX86_BT_V2DI,
  IX86_BT_V2DI, IX86_BT_INT, IX86_BT_V2DI, IX86_BT_V2DI,
  IX86_BT_V2DI, IX86_BT_V2DI, IX86_BT_V32QI, IX86_BT_V32QI,
  IX86_BT_V32QI, IX86_BT_V32QI, IX86_BT_V4DF, IX86_BT_V4DF,
  IX86_BT_V2DF, IX86_BT_INT, IX86_BT_V4DF, IX86_BT_V4DF,
  IX86_BT_V4DF, IX86_BT_INT, IX86_BT_V4DF, IX86_BT_V4DF,
  IX86_BT_V4DF, IX86_BT_V4DF, IX86_BT_V4DF, IX86_BT_V4DF,
  IX86_BT_V4DF, IX86_BT_V4DI, IX86_BT_INT, IX86_BT_V4DI,
  IX86_BT_V4DI, IX86_BT_V4DI, IX86_BT_V4DI, IX86_BT_V4HI,
  IX86_BT_V4HI, IX86_BT_HI, IX86_BT_INT, IX86_BT_V4SF,
  IX86_BT_V4SF, IX86_BT_FLOAT, IX86_BT_INT, IX86_BT_V4SF,
  IX86_BT_V4SF, IX86_BT_V4SF, IX86_BT_INT, IX86_BT_V4SF,
  IX86_BT_V4SF, IX86_BT_V4SF, IX86_BT_V4SF, IX86_BT_V4SF,
  IX86_BT_V4SF, IX86_BT_V4SF, IX86_BT_V4SI, IX86_BT_INT,
  IX86_BT_V4SI, IX86_BT_V4SI, IX86_BT_SI, IX86_BT_INT,
  IX86_BT_V4SI, IX86_BT_V4SI, IX86_BT_V4SI, IX86_BT_INT,
  IX86_BT_V4SI, IX86_BT_V4SI, IX86_BT_V4SI, IX86_BT_V2DI,
  IX86_BT_V4SI, IX86_BT_V4SI, IX86_BT_V4SI, IX86_BT_V4SI,
  IX86_BT_V8HI, IX86_BT_V8HI, IX86_BT_HI, IX86_BT_INT,
  IX86_BT_V8HI, IX86_BT_V8HI, IX86_BT_V8HI, IX86_BT_INT,
  IX86_BT_V8HI, IX86_BT_V8HI, IX86_BT_V8HI, IX86_BT_V4SI,
  IX86_BT_V8HI, IX86_BT_V8HI, IX86_BT_V8HI, IX86_BT_V8HI,
  IX86_BT_V8SF, IX86_BT_V8SF, IX86_BT_V4SF, IX86_BT_INT,
  IX86_BT_V8SF, IX86_BT_V8SF, IX86_BT_V8SF, IX86_BT_INT,
  IX86_BT_V8SF, IX86_BT_V8SF, IX86_BT_V8SF, IX86_BT_V8SF,
  IX86_BT_V8SF, IX86_BT_V8SF, IX86_BT_V8SF, IX86_BT_V8SI,
  IX86_BT_INT, IX86_BT_V8SI, IX86_BT_V8SI, IX86_BT_V4SI,
  IX86_BT_INT, IX86_BT_V8SI, IX86_BT_V8SI, IX86_BT_V8SI,
  IX86_BT_INT, IX86_BT_V8SI, IX86_BT_V8SI, IX86_BT_V8SI,
  IX86_BT_V8SI, IX86_BT_VOID, IX86_BT_PCVOID, IX86_BT_UNSIGNED,
  IX86_BT_UNSIGNED, IX86_BT_VOID, IX86_BT_PV2DF, IX86_BT_V2DF,
  IX86_BT_V2DF, IX86_BT_VOID, IX86_BT_PV4DF, IX86_BT_V4DF,
  IX86_BT_V4DF, IX86_BT_VOID, IX86_BT_PV4SF, IX86_BT_V4SF,
  IX86_BT_V4SF, IX86_BT_VOID, IX86_BT_PV8SF, IX86_BT_V8SF,
  IX86_BT_V8SF, IX86_BT_VOID, IX86_BT_UINT, IX86_BT_UINT,
  IX86_BT_UINT, IX86_BT_VOID, IX86_BT_UINT64, IX86_BT_UINT,
  IX86_BT_UINT, IX86_BT_VOID, IX86_BT_V16QI, IX86_BT_V16QI,
  IX86_BT_PCHAR, IX86_BT_VOID, IX86_BT_V8QI, IX86_BT_V8QI,
  IX86_BT_PCHAR, IX86_BT_V2DF, IX86_BT_V2DF, IX86_BT_V2DF,
  IX86_BT_V2DI, IX86_BT_V4SF, IX86_BT_V4SF, IX86_BT_V4SF,
  IX86_BT_V4SI, IX86_BT_V2UDI, IX86_BT_V2UDI, IX86_BT_V2UDI,
  IX86_BT_V2UDI, IX86_BT_V4USI, IX86_BT_V4USI, IX86_BT_V4USI,
  IX86_BT_V4USI, IX86_BT_V8UHI, IX86_BT_V8UHI, IX86_BT_V8UHI,
  IX86_BT_V8UHI, IX86_BT_V16UQI, IX86_BT_V16UQI, IX86_BT_V16UQI,
  IX86_BT_V16UQI, IX86_BT_V4DF, IX86_BT_V4DF, IX86_BT_V4DF,
  IX86_BT_V4DI, IX86_BT_V8SF, IX86_BT_V8SF, IX86_BT_V8SF,
  IX86_BT_V8SI, IX86_BT_V2DI, IX86_BT_V2DI, IX86_BT_V2DI,
  IX86_BT_UINT, IX86_BT_UINT, IX86_BT_V4HI, IX86_BT_HI,
  IX86_BT_HI, IX86_BT_HI, IX86_BT_HI, IX86_BT_INT,
  IX86_BT_V16QI, IX86_BT_INT, IX86_BT_V16QI, IX86_BT_INT,
  IX86_BT_INT, IX86_BT_V16QI, IX86_BT_V16QI, IX86_BT_INT,
  IX86_BT_V16QI, IX86_BT_INT, IX86_BT_INT, IX86_BT_V8QI,
  IX86_BT_QI, IX86_BT_QI, IX86_BT_QI, IX86_BT_QI,
  IX86_BT_QI, IX86_BT_QI, IX86_BT_QI, IX86_BT_QI
};


static const unsigned short ix86_builtin_func_start[] = {
  0, 1, 2, 3, 4, 5, 7, 9, 11, 13,
  15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
  35, 37, 39, 41, 43, 45, 47, 49, 51, 53,
  55, 57, 59, 61, 63, 65, 67, 69, 71, 73,
  75, 77, 79, 81, 83, 85, 87, 89, 91, 93,
  95, 97, 99, 101, 103, 105, 107, 109, 111, 113,
  115, 117, 119, 121, 123, 125, 127, 129, 131, 133,
  135, 137, 139, 141, 144, 147, 150, 153, 156, 159,
  162, 165, 168, 171, 174, 177, 180, 183, 186, 189,
  192, 195, 198, 201, 204, 207, 210, 213, 216, 219,
  222, 225, 228, 231, 234, 237, 240, 243, 246, 249,
  252, 255, 258, 261, 264, 267, 270, 273, 276, 279,
  282, 285, 288, 291, 294, 297, 300, 303, 306, 309,
  312, 315, 318, 321, 324, 327, 330, 333, 336, 339,
  342, 345, 348, 351, 354, 357, 360, 363, 366, 369,
  372, 375, 378, 381, 384, 387, 390, 393, 396, 399,
  402, 405, 408, 411, 414, 417, 420, 423, 426, 429,
  432, 435, 438, 441, 445, 449, 453, 457, 461, 465,
  469, 473, 477, 481, 486, 490, 494, 498, 502, 506,
  510, 514, 518, 523, 527, 531, 535, 539, 543, 548,
  552, 556, 560, 564, 568, 572, 576, 580, 584, 588,
  592, 597, 601, 605, 609, 613, 617, 621, 625, 629,
  633, 637, 641, 645, 649, 653, 657, 661, 665, 669,
  673, 677, 682, 687, 693, 699, 708
};


static const enum ix86_builtin_func_type ix86_builtin_func_alias_base[] = {
  INT_FTYPE_V2DF_V2DF,
  INT_FTYPE_V2DI_V2DI,
  INT_FTYPE_V4DF_V4DF,
  INT_FTYPE_V4DI_V4DI,
  INT_FTYPE_V4SF_V4SF,
  INT_FTYPE_V8SF_V8SF,
  V2DF_FTYPE_V2DF,
  V4SF_FTYPE_V4SF,
  V1DI_FTYPE_V1DI_SI,
  V2DI_FTYPE_V2DI_SI,
  V2SI_FTYPE_V2SI_SI,
  V4HI_FTYPE_V4HI_SI,
  V4SI_FTYPE_V4SI_SI,
  V8HI_FTYPE_V8HI_SI,
  V1DI_FTYPE_V1DI_V1DI,
  V2DI_FTYPE_V2DI_V2DI,
  V2SI_FTYPE_V2SI_V2SI,
  V4HI_FTYPE_V4HI_V4HI,
  V4SI_FTYPE_V4SI_V4SI,
  V8HI_FTYPE_V8HI_V8HI,
  V2DF_FTYPE_V2DF_V2DF,
  V4SF_FTYPE_V4SF_V4SF,
  V2DI_FTYPE_V2DI_INT,
  V2DI_FTYPE_V2DI_V2DI_INT,
  V1DI_FTYPE_V1DI_V1DI_INT,
  V16QI_FTYPE_V16QI_V16QI,
  V2DI_FTYPE_V2DI_V2DI,
  V4SI_FTYPE_V4SI_V4SI,
  V8HI_FTYPE_V8HI_V8HI,
  V16QI_FTYPE_V16QI_V16QI,
  V2DF_FTYPE_V2DF_V2DF,
  V2DI_FTYPE_V2DI_V2DI,
  V4SF_FTYPE_V4SF_V4SF,
  V4SI_FTYPE_V4SI_V4SI,
  V8HI_FTYPE_V8HI_V8HI
};
