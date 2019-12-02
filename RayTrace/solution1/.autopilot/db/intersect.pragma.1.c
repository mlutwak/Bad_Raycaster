# 1 "src/intersect.c"
# 1 "src/intersect.c" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 147 "<built-in>" 3
# 1 "<command line>" 1






# 1 "C:/Vivado/2018.3/common/technology/autopilot\\etc/autopilot_ssdm_op.h" 1
# 300 "C:/Vivado/2018.3/common/technology/autopilot\\etc/autopilot_ssdm_op.h"
    void _ssdm_op_IfRead() __attribute__ ((nothrow));
    void _ssdm_op_IfWrite() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbRead() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbWrite() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanRead() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanWrite() __attribute__ ((nothrow));


    void _ssdm_StreamRead() __attribute__ ((nothrow));
    void _ssdm_StreamWrite() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbRead() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbWrite() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanRead() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanWrite() __attribute__ ((nothrow));




    void _ssdm_op_MemShiftRead() __attribute__ ((nothrow));

    void _ssdm_op_Wait() __attribute__ ((nothrow));
    void _ssdm_op_Poll() __attribute__ ((nothrow));

    void _ssdm_op_Return() __attribute__ ((nothrow));


    void _ssdm_op_SpecSynModule() __attribute__ ((nothrow));
    void _ssdm_op_SpecTopModule() __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDecl() __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDef() __attribute__ ((nothrow));
    void _ssdm_op_SpecPort() __attribute__ ((nothrow));
    void _ssdm_op_SpecConnection() __attribute__ ((nothrow));
    void _ssdm_op_SpecChannel() __attribute__ ((nothrow));
    void _ssdm_op_SpecSensitive() __attribute__ ((nothrow));
    void _ssdm_op_SpecModuleInst() __attribute__ ((nothrow));
    void _ssdm_op_SpecPortMap() __attribute__ ((nothrow));

    void _ssdm_op_SpecReset() __attribute__ ((nothrow));

    void _ssdm_op_SpecPlatform() __attribute__ ((nothrow));
    void _ssdm_op_SpecClockDomain() __attribute__ ((nothrow));
    void _ssdm_op_SpecPowerDomain() __attribute__ ((nothrow));

    int _ssdm_op_SpecRegionBegin() __attribute__ ((nothrow));
    int _ssdm_op_SpecRegionEnd() __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopName() __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopTripCount() __attribute__ ((nothrow));

    int _ssdm_op_SpecStateBegin() __attribute__ ((nothrow));
    int _ssdm_op_SpecStateEnd() __attribute__ ((nothrow));

    void _ssdm_op_SpecInterface() __attribute__ ((nothrow));

    void _ssdm_op_SpecPipeline() __attribute__ ((nothrow));
    void _ssdm_op_SpecDataflowPipeline() __attribute__ ((nothrow));


    void _ssdm_op_SpecLatency() __attribute__ ((nothrow));
    void _ssdm_op_SpecParallel() __attribute__ ((nothrow));
    void _ssdm_op_SpecProtocol() __attribute__ ((nothrow));
    void _ssdm_op_SpecOccurrence() __attribute__ ((nothrow));

    void _ssdm_op_SpecResource() __attribute__ ((nothrow));
    void _ssdm_op_SpecResourceLimit() __attribute__ ((nothrow));
    void _ssdm_op_SpecCHCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecFUCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecIFCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecIPCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecKeepValue() __attribute__ ((nothrow));
    void _ssdm_op_SpecMemCore() __attribute__ ((nothrow));

    void _ssdm_op_SpecExt() __attribute__ ((nothrow));




    void _ssdm_SpecArrayDimSize() __attribute__ ((nothrow));

    void _ssdm_RegionBegin() __attribute__ ((nothrow));
    void _ssdm_RegionEnd() __attribute__ ((nothrow));

    void _ssdm_Unroll() __attribute__ ((nothrow));
    void _ssdm_UnrollRegion() __attribute__ ((nothrow));

    void _ssdm_InlineAll() __attribute__ ((nothrow));
    void _ssdm_InlineLoop() __attribute__ ((nothrow));
    void _ssdm_Inline() __attribute__ ((nothrow));
    void _ssdm_InlineSelf() __attribute__ ((nothrow));
    void _ssdm_InlineRegion() __attribute__ ((nothrow));

    void _ssdm_SpecArrayMap() __attribute__ ((nothrow));
    void _ssdm_SpecArrayPartition() __attribute__ ((nothrow));
    void _ssdm_SpecArrayReshape() __attribute__ ((nothrow));

    void _ssdm_SpecStream() __attribute__ ((nothrow));

    void _ssdm_SpecExpr() __attribute__ ((nothrow));
    void _ssdm_SpecExprBalance() __attribute__ ((nothrow));

    void _ssdm_SpecDependence() __attribute__ ((nothrow));

    void _ssdm_SpecLoopMerge() __attribute__ ((nothrow));
    void _ssdm_SpecLoopFlatten() __attribute__ ((nothrow));
    void _ssdm_SpecLoopRewind() __attribute__ ((nothrow));

    void _ssdm_SpecFuncInstantiation() __attribute__ ((nothrow));
    void _ssdm_SpecFuncBuffer() __attribute__ ((nothrow));
    void _ssdm_SpecFuncExtract() __attribute__ ((nothrow));
    void _ssdm_SpecConstant() __attribute__ ((nothrow));

    void _ssdm_DataPack() __attribute__ ((nothrow));
    void _ssdm_SpecDataPack() __attribute__ ((nothrow));

    void _ssdm_op_SpecBitsMap() __attribute__ ((nothrow));
    void _ssdm_op_SpecLicense() __attribute__ ((nothrow));
# 8 "<command line>" 2
# 1 "<built-in>" 2
# 1 "src/intersect.c" 2
# 1 "src/intersect.h" 1


# 1 "src/bvh.h" 1

# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 1 3








# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 10 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/_mingw_mac.h" 1 3
# 10 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3
# 277 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 1 3
# 13 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 3
# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 674 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/sdks/_mingw_directx.h" 1 3
# 674 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3

# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/sdks/_mingw_ddk.h" 1 3
# 675 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3
# 13 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 2 3


#pragma pack(push,_CRT_PACKING)








 typedef __builtin_va_list __gnuc_va_list;






  typedef __gnuc_va_list va_list;
# 102 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 3
#pragma pack(pop)
# 277 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3


#pragma pack(push,_CRT_PACKING)
# 370 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef unsigned long long size_t;
# 380 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef long long ssize_t;
# 392 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef long long intptr_t;
# 405 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef unsigned long long uintptr_t;
# 418 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef long long ptrdiff_t;
# 428 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
typedef unsigned short wchar_t;







typedef unsigned short wint_t;
typedef unsigned short wctype_t;
# 456 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
typedef int errno_t;




typedef long __time32_t;




__extension__ typedef long long __time64_t;







typedef __time64_t time_t;
# 607 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
struct threadlocaleinfostruct;
struct threadmbcinfostruct;
typedef struct threadlocaleinfostruct *pthreadlocinfo;
typedef struct threadmbcinfostruct *pthreadmbcinfo;
struct __lc_time_data;

typedef struct localeinfo_struct {
  pthreadlocinfo locinfo;
  pthreadmbcinfo mbcinfo;
} _locale_tstruct,*_locale_t;



typedef struct tagLC_ID {
  unsigned short wLanguage;
  unsigned short wCountry;
  unsigned short wCodePage;
} LC_ID,*LPLC_ID;




typedef struct threadlocaleinfostruct {
  int refcount;
  unsigned int lc_codepage;
  unsigned int lc_collate_cp;
  unsigned long lc_handle[6];
  LC_ID lc_id[6];
  struct {
    char *locale;
    wchar_t *wlocale;
    int *refcount;
    int *wrefcount;
  } lc_category[6];
  int lc_clike;
  int mb_cur_max;
  int *lconv_intl_refcount;
  int *lconv_num_refcount;
  int *lconv_mon_refcount;
  struct lconv *lconv;
  int *ctype1_refcount;
  unsigned short *ctype1;
  const unsigned short *pctype;
  const unsigned char *pclmap;
  const unsigned char *pcumap;
  struct __lc_time_data *lc_time_curr;
} threadlocinfo;







const char *__mingw_get_crt_info (void);





#pragma pack(pop)
# 9 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 2 3

# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/include\\limits.h" 1 3 4
# 38 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/include\\limits.h" 3 4
# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\limits.h" 1 3 4





# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3 4
# 6 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\limits.h" 2 3 4
# 38 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/include\\limits.h" 2 3 4
# 10 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 2 3


#pragma pack(push,_CRT_PACKING)
# 36 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
 typedef int ( *_onexit_t)(void);
# 46 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  typedef struct _div_t {
    int quot;
    int rem;
  } div_t;

  typedef struct _ldiv_t {
    long quot;
    long rem;
  } ldiv_t;





#pragma pack(4)
 typedef struct {
    unsigned char ld[10];
  } _LDOUBLE;
#pragma pack()



 typedef struct {
    double x;
  } _CRT_DOUBLE;

  typedef struct {
    float f;
  } _CRT_FLOAT;




  typedef struct {
    long double x;
  } _LONGDOUBLE;



#pragma pack(4)
 typedef struct {
    unsigned char ld12[12];
  } _LDBL12;
#pragma pack()
# 100 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
 extern int * __imp___mb_cur_max;







  extern int* __imp___mbcur_max;
# 132 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  typedef void ( *_purecall_handler)(void);

  __attribute__ ((__dllimport__)) _purecall_handler _set_purecall_handler(_purecall_handler _Handler);
  __attribute__ ((__dllimport__)) _purecall_handler _get_purecall_handler(void);

  typedef void ( *_invalid_parameter_handler)(const wchar_t *,const wchar_t *,const wchar_t *,unsigned int,uintptr_t);
  _invalid_parameter_handler _set_invalid_parameter_handler(_invalid_parameter_handler _Handler);
  _invalid_parameter_handler _get_invalid_parameter_handler(void);



  __attribute__ ((__dllimport__)) extern int * _errno(void);

  errno_t _set_errno(int _Value);
  errno_t _get_errno(int *_Value);

  __attribute__ ((__dllimport__)) unsigned long * __doserrno(void);

  errno_t _set_doserrno(unsigned long _Value);
  errno_t _get_doserrno(unsigned long *_Value);




  extern __attribute__ ((__dllimport__)) char *_sys_errlist[1];
  extern __attribute__ ((__dllimport__)) int _sys_nerr;
# 172 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  extern int * __imp___argc;







  extern char *** __imp___argv;







  extern wchar_t *** __imp___wargv;
# 200 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  extern char *** __imp__environ;
# 209 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  extern wchar_t *** __imp__wenviron;
# 218 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  extern char ** __imp__pgmptr;
# 227 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  extern wchar_t ** __imp__wpgmptr;



  errno_t _get_pgmptr(char **_Value);
  errno_t _get_wpgmptr(wchar_t **_Value);




  extern int * __imp__fmode;



  __attribute__ ((__dllimport__)) errno_t _set_fmode(int _Mode);
  __attribute__ ((__dllimport__)) errno_t _get_fmode(int *_PMode);





  extern unsigned int * __imp__osplatform;
# 257 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  extern unsigned int * __imp__osver;
# 266 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  extern unsigned int * __imp__winver;
# 275 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  extern unsigned int * __imp__winmajor;
# 284 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  extern unsigned int * __imp__winminor;




  errno_t _get_osplatform(unsigned int *_Value);
  errno_t _get_osver(unsigned int *_Value);
  errno_t _get_winver(unsigned int *_Value);
  errno_t _get_winmajor(unsigned int *_Value);
  errno_t _get_winminor(unsigned int *_Value);
# 307 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  void __attribute__ ((__nothrow__)) exit(int _Code) __attribute__ ((__noreturn__));
  __attribute__ ((__dllimport__)) void __attribute__ ((__nothrow__)) _exit(int _Code) __attribute__ ((__noreturn__));



  void _Exit(int) __attribute__ ((__noreturn__));
# 321 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  void __attribute__((noreturn)) abort(void);




  __attribute__ ((__dllimport__)) unsigned int _set_abort_behavior(unsigned int _Flags,unsigned int _Mask);



  int abs(int _X);
  long labs(long _X);


  __extension__ long long _abs64(long long);
  int atexit(void ( *)(void));


  double atof(const char *_String);
  double _atof_l(const char *_String,_locale_t _Locale);

  int atoi(const char *_Str);
  __attribute__ ((__dllimport__)) int _atoi_l(const char *_Str,_locale_t _Locale);
  long atol(const char *_Str);
  __attribute__ ((__dllimport__)) long _atol_l(const char *_Str,_locale_t _Locale);


  void * bsearch(const void *_Key,const void *_Base,size_t _NumOfElements,size_t _SizeOfElements,int ( *_PtFuncCompare)(const void *,const void *));
  void qsort(void *_Base,size_t _NumOfElements,size_t _SizeOfElements,int ( *_PtFuncCompare)(const void *,const void *));

  unsigned short _byteswap_ushort(unsigned short _Short);

  __extension__ unsigned long long _byteswap_uint64(unsigned long long _Int64);
  div_t div(int _Numerator,int _Denominator);
  char * getenv(const char *_VarName) ;
  __attribute__ ((__dllimport__)) char * _itoa(int _Value,char *_Dest,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) char * _i64toa(long long _Val,char *_DstBuf,int _Radix) ;
  __extension__ __attribute__ ((__dllimport__)) char * _ui64toa(unsigned long long _Val,char *_DstBuf,int _Radix) ;
  __extension__ __attribute__ ((__dllimport__)) long long _atoi64(const char *_String);
  __extension__ __attribute__ ((__dllimport__)) long long _atoi64_l(const char *_String,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) long long _strtoi64(const char *_String,char **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) long long _strtoi64_l(const char *_String,char **_EndPtr,int _Radix,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long _strtoui64(const char *_String,char **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long _strtoui64_l(const char *_String,char **_EndPtr,int _Radix,_locale_t _Locale);
  ldiv_t ldiv(long _Numerator,long _Denominator);
  __attribute__ ((__dllimport__)) char * _ltoa(long _Value,char *_Dest,int _Radix) ;
  int mblen(const char *_Ch,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _mblen_l(const char *_Ch,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) size_t _mbstrlen(const char *_Str);
  __attribute__ ((__dllimport__)) size_t _mbstrlen_l(const char *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) size_t _mbstrnlen(const char *_Str,size_t _MaxCount);
  __attribute__ ((__dllimport__)) size_t _mbstrnlen_l(const char *_Str,size_t _MaxCount,_locale_t _Locale);
  int mbtowc(wchar_t * __restrict__ _DstCh,const char * __restrict__ _SrcCh,size_t _SrcSizeInBytes);
  __attribute__ ((__dllimport__)) int _mbtowc_l(wchar_t * __restrict__ _DstCh,const char * __restrict__ _SrcCh,size_t _SrcSizeInBytes,_locale_t _Locale);
  size_t mbstowcs(wchar_t * __restrict__ _Dest,const char * __restrict__ _Source,size_t _MaxCount);
  __attribute__ ((__dllimport__)) size_t _mbstowcs_l(wchar_t * __restrict__ _Dest,const char * __restrict__ _Source,size_t _MaxCount,_locale_t _Locale);
  int rand(void);
  __attribute__ ((__dllimport__)) int _set_error_mode(int _Mode);
  void srand(unsigned int _Seed);



  double __attribute__ ((__nothrow__)) strtod(const char * __restrict__ _Str,char ** __restrict__ _EndPtr);
  float __attribute__ ((__nothrow__)) strtof(const char * __restrict__ nptr, char ** __restrict__ endptr);
  long double __attribute__ ((__nothrow__)) strtold(const char * __restrict__ , char ** __restrict__ );


  extern double __attribute__ ((__nothrow__))
  __strtod (const char * __restrict__ , char ** __restrict__);
# 400 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  float __mingw_strtof (const char * __restrict__, char ** __restrict__);
  long double __mingw_strtold(const char * __restrict__, char ** __restrict__);

  __attribute__ ((__dllimport__)) double _strtod_l(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,_locale_t _Locale);
  long strtol(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) long _strtol_l(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  unsigned long strtoul(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) unsigned long _strtoul_l(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);


  int system(const char *_Command);

  __attribute__ ((__dllimport__)) char * _ultoa(unsigned long _Value,char *_Dest,int _Radix) ;
  int wctomb(char *_MbCh,wchar_t _WCh) ;
  __attribute__ ((__dllimport__)) int _wctomb_l(char *_MbCh,wchar_t _WCh,_locale_t _Locale) ;
  size_t wcstombs(char * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _MaxCount) ;
  __attribute__ ((__dllimport__)) size_t _wcstombs_l(char * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _MaxCount,_locale_t _Locale) ;



  void * calloc(size_t _NumOfElements,size_t _SizeOfElements);
  void free(void *_Memory);
  void * malloc(size_t _Size);
  void * realloc(void *_Memory,size_t _NewSize);
  __attribute__ ((__dllimport__)) void * _recalloc(void *_Memory,size_t _Count,size_t _Size);






  __attribute__ ((__dllimport__)) void _aligned_free(void *_Memory);
  __attribute__ ((__dllimport__)) void * _aligned_malloc(size_t _Size,size_t _Alignment);



  __attribute__ ((__dllimport__)) void * _aligned_offset_malloc(size_t _Size,size_t _Alignment,size_t _Offset);
  __attribute__ ((__dllimport__)) void * _aligned_realloc(void *_Memory,size_t _Size,size_t _Alignment);
  __attribute__ ((__dllimport__)) void * _aligned_recalloc(void *_Memory,size_t _Count,size_t _Size,size_t _Alignment);
  __attribute__ ((__dllimport__)) void * _aligned_offset_realloc(void *_Memory,size_t _Size,size_t _Alignment,size_t _Offset);
  __attribute__ ((__dllimport__)) void * _aligned_offset_recalloc(void *_Memory,size_t _Count,size_t _Size,size_t _Alignment,size_t _Offset);





  __attribute__ ((__dllimport__)) wchar_t * _itow(int _Value,wchar_t *_Dest,int _Radix) ;
  __attribute__ ((__dllimport__)) wchar_t * _ltow(long _Value,wchar_t *_Dest,int _Radix) ;
  __attribute__ ((__dllimport__)) wchar_t * _ultow(unsigned long _Value,wchar_t *_Dest,int _Radix) ;
  double wcstod(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr);
  float wcstof(const wchar_t * __restrict__ nptr, wchar_t ** __restrict__ endptr);

  float wcstof( const wchar_t * __restrict__, wchar_t ** __restrict__);
  long double wcstold(const wchar_t * __restrict__, wchar_t ** __restrict__);

  __attribute__ ((__dllimport__)) double _wcstod_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,_locale_t _Locale);
  long wcstol(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) long _wcstol_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  unsigned long wcstoul(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) unsigned long _wcstoul_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  __attribute__ ((__dllimport__)) wchar_t * _wgetenv(const wchar_t *_VarName) ;


  __attribute__ ((__dllimport__)) int _wsystem(const wchar_t *_Command);

  __attribute__ ((__dllimport__)) double _wtof(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) double _wtof_l(const wchar_t *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wtoi(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) int _wtoi_l(const wchar_t *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) long _wtol(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) long _wtol_l(const wchar_t *_Str,_locale_t _Locale);

  __extension__ __attribute__ ((__dllimport__)) wchar_t * _i64tow(long long _Val,wchar_t *_DstBuf,int _Radix) ;
  __extension__ __attribute__ ((__dllimport__)) wchar_t * _ui64tow(unsigned long long _Val,wchar_t *_DstBuf,int _Radix) ;
  __extension__ __attribute__ ((__dllimport__)) long long _wtoi64(const wchar_t *_Str);
  __extension__ __attribute__ ((__dllimport__)) long long _wtoi64_l(const wchar_t *_Str,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) long long _wcstoi64(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) long long _wcstoi64_l(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long _wcstoui64(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long _wcstoui64_l(const wchar_t *_Str ,wchar_t **_EndPtr,int _Radix,_locale_t _Locale);




  __attribute__ ((__dllimport__)) char * _fullpath(char *_FullPath,const char *_Path,size_t _SizeInBytes);
  __attribute__ ((__dllimport__)) char * _ecvt(double _Val,int _NumOfDigits,int *_PtDec,int *_PtSign) ;
  __attribute__ ((__dllimport__)) char * _fcvt(double _Val,int _NumOfDec,int *_PtDec,int *_PtSign) ;
  __attribute__ ((__dllimport__)) char * _gcvt(double _Val,int _NumOfDigits,char *_DstBuf) ;
  __attribute__ ((__dllimport__)) int _atodbl(_CRT_DOUBLE *_Result,char *_Str);
  __attribute__ ((__dllimport__)) int _atoldbl(_LDOUBLE *_Result,char *_Str);
  __attribute__ ((__dllimport__)) int _atoflt(_CRT_FLOAT *_Result,char *_Str);
  __attribute__ ((__dllimport__)) int _atodbl_l(_CRT_DOUBLE *_Result,char *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _atoldbl_l(_LDOUBLE *_Result,char *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale);





  __extension__ unsigned long long _lrotl(unsigned long long _Val,int _Shift);
  __extension__ unsigned long long _lrotr(unsigned long long _Val,int _Shift);







  __attribute__ ((__dllimport__)) void _makepath(char *_Path,const char *_Drive,const char *_Dir,const char *_Filename,const char *_Ext);
  _onexit_t _onexit(_onexit_t _Func);



  void perror(const char *_ErrMsg);

  __attribute__ ((__dllimport__)) int _putenv(const char *_EnvString);




  __extension__ unsigned long long _rotl64(unsigned long long _Val,int _Shift);
  __extension__ unsigned long long _rotr64(unsigned long long Value,int Shift);






  unsigned int _rotr(unsigned int _Val,int _Shift);
  unsigned int _rotl(unsigned int _Val,int _Shift);


  __extension__ unsigned long long _rotr64(unsigned long long _Val,int _Shift);
  __attribute__ ((__dllimport__)) void _searchenv(const char *_Filename,const char *_EnvVar,char *_ResultPath) ;
  __attribute__ ((__dllimport__)) void _splitpath(const char *_FullPath,char *_Drive,char *_Dir,char *_Filename,char *_Ext) ;
  __attribute__ ((__dllimport__)) void _swab(char *_Buf1,char *_Buf2,int _SizeInBytes);



  __attribute__ ((__dllimport__)) wchar_t * _wfullpath(wchar_t *_FullPath,const wchar_t *_Path,size_t _SizeInWords);
  __attribute__ ((__dllimport__)) void _wmakepath(wchar_t *_ResultPath,const wchar_t *_Drive,const wchar_t *_Dir,const wchar_t *_Filename,const wchar_t *_Ext);


  __attribute__ ((__dllimport__)) void _wperror(const wchar_t *_ErrMsg);

  __attribute__ ((__dllimport__)) int _wputenv(const wchar_t *_EnvString);
  __attribute__ ((__dllimport__)) void _wsearchenv(const wchar_t *_Filename,const wchar_t *_EnvVar,wchar_t *_ResultPath) ;
  __attribute__ ((__dllimport__)) void _wsplitpath(const wchar_t *_FullPath,wchar_t *_Drive,wchar_t *_Dir,wchar_t *_Filename,wchar_t *_Ext) ;


  __attribute__ ((__dllimport__)) void _beep(unsigned _Frequency,unsigned _Duration) __attribute__ ((__deprecated__));

  __attribute__ ((__dllimport__)) void _seterrormode(int _Mode) __attribute__ ((__deprecated__));
  __attribute__ ((__dllimport__)) void _sleep(unsigned long _Duration) __attribute__ ((__deprecated__));
# 574 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  char * ecvt(double _Val,int _NumOfDigits,int *_PtDec,int *_PtSign) ;
  char * fcvt(double _Val,int _NumOfDec,int *_PtDec,int *_PtSign) ;
  char * gcvt(double _Val,int _NumOfDigits,char *_DstBuf) ;
  char * itoa(int _Val,char *_DstBuf,int _Radix) ;
  char * ltoa(long _Val,char *_DstBuf,int _Radix) ;
  int putenv(const char *_EnvString) ;
  void swab(char *_Buf1,char *_Buf2,int _SizeInBytes) ;
  char * ultoa(unsigned long _Val,char *_Dstbuf,int _Radix) ;
  _onexit_t onexit(_onexit_t _Func);





  typedef struct { __extension__ long long quot, rem; } lldiv_t;

  __extension__ lldiv_t lldiv(long long, long long);

  __extension__ long long llabs(long long);




  __extension__ long long strtoll(const char * __restrict__, char ** __restrict, int);
  __extension__ unsigned long long strtoull(const char * __restrict__, char ** __restrict__, int);


  __extension__ long long atoll (const char *);


  __extension__ long long wtoll (const wchar_t *);
  __extension__ char * lltoa (long long, char *, int);
  __extension__ char * ulltoa (unsigned long long , char *, int);
  __extension__ wchar_t * lltow (long long, wchar_t *, int);
  __extension__ wchar_t * ulltow (unsigned long long, wchar_t *, int);
# 627 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
#pragma pack(pop)


# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/stdlib_s.h" 1 3








# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 1 3
# 9 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/stdlib_s.h" 2 3
# 629 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 2 3

# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\malloc.h" 1 3








# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 9 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\malloc.h" 2 3


#pragma pack(push,_CRT_PACKING)
# 46 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\malloc.h" 3
 typedef struct _heapinfo {
    int *_pentry;
    size_t _size;
    int _useflag;
  } _HEAPINFO;


  extern unsigned int _amblksiz;
# 99 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\malloc.h" 3
void * __mingw_aligned_malloc (size_t _Size, size_t _Alignment);
void __mingw_aligned_free (void *_Memory);
void * __mingw_aligned_offset_realloc (void *_Memory, size_t _Size, size_t _Alignment, size_t _Offset);
void * __mingw_aligned_realloc (void *_Memory, size_t _Size, size_t _Offset);



  __attribute__ ((__dllimport__)) int _resetstkoflw (void);
  __attribute__ ((__dllimport__)) unsigned long _set_malloc_crt_max_wait(unsigned long _NewValue);

  __attribute__ ((__dllimport__)) void * _expand(void *_Memory,size_t _NewSize);
  __attribute__ ((__dllimport__)) size_t _msize(void *_Memory);






  __attribute__ ((__dllimport__)) size_t _get_sbh_threshold(void);
  __attribute__ ((__dllimport__)) int _set_sbh_threshold(size_t _NewValue);
  __attribute__ ((__dllimport__)) errno_t _set_amblksiz(size_t _Value);
  __attribute__ ((__dllimport__)) errno_t _get_amblksiz(size_t *_Value);
  __attribute__ ((__dllimport__)) int _heapadd(void *_Memory,size_t _Size);
  __attribute__ ((__dllimport__)) int _heapchk(void);
  __attribute__ ((__dllimport__)) int _heapmin(void);
  __attribute__ ((__dllimport__)) int _heapset(unsigned int _Fill);
  __attribute__ ((__dllimport__)) int _heapwalk(_HEAPINFO *_EntryInfo);
  __attribute__ ((__dllimport__)) size_t _heapused(size_t *_Used,size_t *_Commit);
  __attribute__ ((__dllimport__)) intptr_t _get_heap_handle(void);
# 140 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\malloc.h" 3
  static __inline void *_MarkAllocaS(void *_Ptr,unsigned int _Marker) {
    if(_Ptr) {
      *((unsigned int*)_Ptr) = _Marker;
      _Ptr = (char*)_Ptr + 16;
    }
    return _Ptr;
  }
# 159 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\malloc.h" 3
  static __inline void _freea(void *_Memory) {
    unsigned int _Marker;
    if(_Memory) {
      _Memory = (char*)_Memory - 16;
      _Marker = *(unsigned int *)_Memory;
      if(_Marker==0xDDDD) {
 free(_Memory);
      }





    }
  }
# 205 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\malloc.h" 3
#pragma pack(pop)
# 630 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 2 3
# 3 "src/bvh.h" 2
# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 1 3








# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 9 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3


# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw_print_push.h" 1 3
# 11 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3


#pragma pack(push,_CRT_PACKING)
# 26 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
 struct _iobuf {
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char *_tmpfname;
  };
  typedef struct _iobuf FILE;
# 84 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  typedef long _off_t;

  typedef long off_t;






  __extension__ typedef long long _off64_t;

  __extension__ typedef long long off64_t;





  __attribute__ ((__dllimport__)) FILE * __iob_func(void);
# 120 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  __extension__ typedef long long fpos_t;
# 157 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  __attribute__ ((__dllimport__)) int _filbuf(FILE *_File);
  __attribute__ ((__dllimport__)) int _flsbuf(int _Ch,FILE *_File);



  __attribute__ ((__dllimport__)) FILE * _fsopen(const char *_Filename,const char *_Mode,int _ShFlag);

  void clearerr(FILE *_File);
  int fclose(FILE *_File);
  __attribute__ ((__dllimport__)) int _fcloseall(void);



  __attribute__ ((__dllimport__)) FILE * _fdopen(int _FileHandle,const char *_Mode);

  int feof(FILE *_File);
  int ferror(FILE *_File);
  int fflush(FILE *_File);
  int fgetc(FILE *_File);
  __attribute__ ((__dllimport__)) int _fgetchar(void);
  int fgetpos(FILE * __restrict__ _File ,fpos_t * __restrict__ _Pos);
  char * fgets(char * __restrict__ _Buf,int _MaxCount,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int _fileno(FILE *_File);



  __attribute__ ((__dllimport__)) char * _tempnam(const char *_DirName,const char *_FilePrefix);
  __attribute__ ((__dllimport__)) int _flushall(void);
  FILE * fopen(const char * __restrict__ _Filename,const char * __restrict__ _Mode) ;
  FILE *fopen64(const char * __restrict__ filename,const char * __restrict__ mode);
  int fprintf(FILE * __restrict__ _File,const char * __restrict__ _Format,...);
  int fputc(int _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) int _fputchar(int _Ch);
  int fputs(const char * __restrict__ _Str,FILE * __restrict__ _File);
  size_t fread(void * __restrict__ _DstBuf,size_t _ElementSize,size_t _Count,FILE * __restrict__ _File);
  FILE * freopen(const char * __restrict__ _Filename,const char * __restrict__ _Mode,FILE * __restrict__ _File) ;
  int fscanf(FILE * __restrict__ _File,const char * __restrict__ _Format,...) ;
  int _fscanf_l(FILE * __restrict__ _File,const char * __restrict__ _Format,_locale_t locale,...) ;
  int fsetpos(FILE *_File,const fpos_t *_Pos);
  int fseek(FILE *_File,long _Offset,int _Origin);
  int fseeko64(FILE* stream, _off64_t offset, int whence);
  long ftell(FILE *_File);
  _off64_t ftello64(FILE * stream);
  __extension__ int _fseeki64(FILE *_File,long long _Offset,int _Origin);
  __extension__ long long _ftelli64(FILE *_File);
  size_t fwrite(const void * __restrict__ _Str,size_t _Size,size_t _Count,FILE * __restrict__ _File);
  int getc(FILE *_File);
  int getchar(void);
  __attribute__ ((__dllimport__)) int _getmaxstdio(void);
  char * gets(char *_Buffer) ;
  int _getw(FILE *_File);




  __attribute__ ((__dllimport__)) int _pclose(FILE *_File);
  __attribute__ ((__dllimport__)) FILE * _popen(const char *_Command,const char *_Mode);




  int printf(const char * __restrict__ _Format,...);
  int putc(int _Ch,FILE *_File);
  int putchar(int _Ch);
  int puts(const char *_Str);
  __attribute__ ((__dllimport__)) int _putw(int _Word,FILE *_File);


  int remove(const char *_Filename);
  int rename(const char *_OldFilename,const char *_NewFilename);
  __attribute__ ((__dllimport__)) int _unlink(const char *_Filename);

  int unlink(const char *_Filename) ;


  void rewind(FILE *_File);
  __attribute__ ((__dllimport__)) int _rmtmp(void);
  int scanf(const char * __restrict__ _Format,...) ;
  int _scanf_l(const char * __restrict__ format,_locale_t locale,... ) ;
  void setbuf(FILE * __restrict__ _File,char * __restrict__ _Buffer) ;
  __attribute__ ((__dllimport__)) int _setmaxstdio(int _Max);
  __attribute__ ((__dllimport__)) unsigned int _set_output_format(unsigned int _Format);
  __attribute__ ((__dllimport__)) unsigned int _get_output_format(void);
  unsigned int __mingw_set_output_format(unsigned int _Format);
  unsigned int __mingw_get_output_format(void);




  int setvbuf(FILE * __restrict__ _File,char * __restrict__ _Buf,int _Mode,size_t _Size);
  __attribute__ ((__dllimport__)) int _scprintf(const char * __restrict__ _Format,...);
  int sscanf(const char * __restrict__ _Src,const char * __restrict__ _Format,...) ;
  int _sscanf_l(const char * __restrict__ buffer,const char * __restrict__ format,_locale_t locale,...) ;
  __attribute__ ((__dllimport__)) int _snscanf(const char * __restrict__ _Src,size_t _MaxCount,const char * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _snscanf_l(const char * __restrict__ input,size_t length,const char * __restrict__ format,_locale_t locale,...) ;
  FILE * tmpfile(void) ;
  char * tmpnam(char *_Buffer);
  int ungetc(int _Ch,FILE *_File);
  int vfprintf(FILE * __restrict__ _File,const char * __restrict__ _Format,va_list _ArgList);
  int vprintf(const char * __restrict__ _Format,va_list _ArgList);


  extern
    __attribute__((__format__ (gnu_printf, 3, 0))) __attribute__ ((__nonnull__ (3)))
    int __mingw_vsnprintf(char * __restrict__ _DstBuf,size_t _MaxCount,const char * __restrict__ _Format,
      va_list _ArgList);
  extern
    __attribute__((__format__ (gnu_printf, 3, 4))) __attribute__ ((__nonnull__ (3)))
    int __mingw_snprintf(char * __restrict__ s, size_t n, const char * __restrict__ format, ...);
  extern
    __attribute__((__format__ (gnu_printf, 1, 2))) __attribute__ ((__nonnull__ (1)))
    int __mingw_printf(const char * __restrict__ , ... ) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 1, 0))) __attribute__ ((__nonnull__ (1)))
    int __mingw_vprintf (const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
    int __mingw_fprintf (FILE * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
    int __mingw_vfprintf (FILE * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
    int __mingw_sprintf (char * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
    int __mingw_vsprintf (char * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));

  __attribute__ ((__dllimport__)) int _snprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _snprintf_l(char * __restrict__ buffer,size_t count,const char * __restrict__ format,_locale_t locale,...) ;
  __attribute__ ((__dllimport__)) int _vsnprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,va_list _Args) ;
  __attribute__ ((__dllimport__)) int _vsnprintf_l(char * __restrict__ buffer,size_t count,const char * __restrict__ format,_locale_t locale,va_list argptr) ;
  int sprintf(char * __restrict__ _Dest,const char * __restrict__ _Format,...) ;
  int _sprintf_l(char * __restrict__ buffer,const char * __restrict__ format,_locale_t locale,...) ;
  int vsprintf(char * __restrict__ _Dest,const char * __restrict__ _Format,va_list _Args) ;







  int vsnprintf(char * __restrict__ _DstBuf,size_t _MaxCount,const char * __restrict__ _Format,va_list _ArgList) ;

  int snprintf(char * __restrict__ s, size_t n, const char * __restrict__ format, ...);
# 312 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  int vscanf(const char * __restrict__ Format, va_list argp);
  int vfscanf (FILE * __restrict__ fp, const char * __restrict__ Format,va_list argp);
  int vsscanf (const char * __restrict__ _Str,const char * __restrict__ Format,va_list argp);

  __attribute__ ((__dllimport__)) int _vscprintf(const char * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _set_printf_count_output(int _Value);
  __attribute__ ((__dllimport__)) int _get_printf_count_output(void);
# 330 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  __attribute__ ((__dllimport__)) FILE * _wfsopen(const wchar_t *_Filename,const wchar_t *_Mode,int _ShFlag);


  wint_t fgetwc(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _fgetwchar(void);
  wint_t fputwc(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _fputwchar(wchar_t _Ch);
  wint_t getwc(FILE *_File);
  wint_t getwchar(void);
  wint_t putwc(wchar_t _Ch,FILE *_File);
  wint_t putwchar(wchar_t _Ch);
  wint_t ungetwc(wint_t _Ch,FILE *_File);
  wchar_t * fgetws(wchar_t * __restrict__ _Dst,int _SizeInWords,FILE * __restrict__ _File);
  int fputws(const wchar_t * __restrict__ _Str,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) wchar_t * _getws(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) int _putws(const wchar_t *_Str);
  int fwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
  int wprintf(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _scwprintf(const wchar_t * __restrict__ _Format,...);
  int vfwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
  int vwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int swprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ , ...) ;
  __attribute__ ((__dllimport__)) int _swprintf_l(wchar_t * __restrict__ buffer,size_t count,const wchar_t * __restrict__ format,_locale_t locale,... ) ;
  __attribute__ ((__dllimport__)) int vswprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ ,va_list) ;
  __attribute__ ((__dllimport__)) int _swprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vswprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _snwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _vsnwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,va_list _Args) ;





  int snwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, ...);
  int vsnwprintf (wchar_t * __restrict__ , size_t, const wchar_t * __restrict__ , va_list);
# 373 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  int vwscanf (const wchar_t * __restrict__ , va_list);
  int vfwscanf (FILE * __restrict__ ,const wchar_t * __restrict__ ,va_list);
  int vswscanf (const wchar_t * __restrict__ ,const wchar_t * __restrict__ ,va_list);

  __attribute__ ((__dllimport__)) int _fwprintf_p(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _wprintf_p(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vfwprintf_p(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vwprintf_p(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _swprintf_p(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vswprintf_p(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _scwprintf_p(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vscwprintf_p(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _wprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _wprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _fwprintf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _fwprintf_p_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vfwprintf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vfwprintf_p_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _swprintf_c_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _swprintf_p_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vswprintf_c_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vswprintf_p_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _scwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _scwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vscwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _snwprintf_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vsnwprintf_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList) ;
  __attribute__ ((__dllimport__)) int _swprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vswprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,va_list _Args);
  __attribute__ ((__dllimport__)) int __swprintf_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,_locale_t _Plocinfo,...) ;
  __attribute__ ((__dllimport__)) int _vswprintf_l(wchar_t * __restrict__ buffer,size_t count,const wchar_t * __restrict__ format,_locale_t locale,va_list argptr) ;
  __attribute__ ((__dllimport__)) int __vswprintf_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,_locale_t _Plocinfo,va_list _Args) ;
# 417 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  __attribute__ ((__dllimport__)) wchar_t * _wtempnam(const wchar_t *_Directory,const wchar_t *_FilePrefix);
  __attribute__ ((__dllimport__)) int _vscwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vscwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  int fwscanf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _fwscanf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  int swscanf(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _swscanf_l(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  __attribute__ ((__dllimport__)) int _snwscanf(const wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _snwscanf_l(const wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  int wscanf(const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _wscanf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  __attribute__ ((__dllimport__)) FILE * _wfdopen(int _FileHandle ,const wchar_t *_Mode);
  __attribute__ ((__dllimport__)) FILE * _wfopen(const wchar_t * __restrict__ _Filename,const wchar_t *__restrict__ _Mode) ;
  __attribute__ ((__dllimport__)) FILE * _wfreopen(const wchar_t * __restrict__ _Filename,const wchar_t * __restrict__ _Mode,FILE * __restrict__ _OldFile) ;





  __attribute__ ((__dllimport__)) FILE * _wpopen(const wchar_t *_Command,const wchar_t *_Mode);




  __attribute__ ((__dllimport__)) int _wremove(const wchar_t *_Filename);
  __attribute__ ((__dllimport__)) wchar_t * _wtmpnam(wchar_t *_Buffer);
  __attribute__ ((__dllimport__)) wint_t _fgetwc_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _fputwc_nolock(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _ungetwc_nolock(wint_t _Ch,FILE *_File);
# 475 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  __attribute__ ((__dllimport__)) void _lock_file(FILE *_File);
  __attribute__ ((__dllimport__)) void _unlock_file(FILE *_File);
  __attribute__ ((__dllimport__)) int _fclose_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) int _fflush_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) size_t _fread_nolock(void * __restrict__ _DstBuf,size_t _ElementSize,size_t _Count,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int _fseek_nolock(FILE *_File,long _Offset,int _Origin);
  __attribute__ ((__dllimport__)) long _ftell_nolock(FILE *_File);
  __extension__ __attribute__ ((__dllimport__)) int _fseeki64_nolock(FILE *_File,long long _Offset,int _Origin);
  __extension__ __attribute__ ((__dllimport__)) long long _ftelli64_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) size_t _fwrite_nolock(const void * __restrict__ _DstBuf,size_t _Size,size_t _Count,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int _ungetc_nolock(int _Ch,FILE *_File);





  char * tempnam(const char *_Directory,const char *_FilePrefix) ;
  int fcloseall(void) ;
  FILE * fdopen(int _FileHandle,const char *_Format) ;
  int fgetchar(void) ;
  int fileno(FILE *_File) ;
  int flushall(void) ;
  int fputchar(int _Ch) ;
  int getw(FILE *_File) ;
  int putw(int _Ch,FILE *_File) ;
  int rmtmp(void) ;






#pragma pack(pop)


# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/stdio_s.h" 1 3








# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 1 3
# 9 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/stdio_s.h" 2 3
# 509 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3


# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw_print_pop.h" 1 3
# 511 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3
# 4 "src/bvh.h" 2
# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\string.h" 1 3








# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 9 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\string.h" 2 3
# 36 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\string.h" 3
  __attribute__ ((__dllimport__)) void * _memccpy(void *_Dst,const void *_Src,int _Val,size_t _MaxCount);
                void * memchr(const void *_Buf ,int _Val,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _memicmp(const void *_Buf1,const void *_Buf2,size_t _Size);
  __attribute__ ((__dllimport__)) int _memicmp_l(const void *_Buf1,const void *_Buf2,size_t _Size,_locale_t _Locale);
  int memcmp(const void *_Buf1,const void *_Buf2,size_t _Size);
  void * memcpy(void * __restrict__ _Dst,const void * __restrict__ _Src,size_t _Size) ;
  void * memset(void *_Dst,int _Val,size_t _Size);

  void * memccpy(void *_Dst,const void *_Src,int _Val,size_t _Size) ;
  int memicmp(const void *_Buf1,const void *_Buf2,size_t _Size) ;


  char * _strset(char *_Str,int _Val) ;
  char * _strset_l(char *_Str,int _Val,_locale_t _Locale) ;
  char * strcpy(char * __restrict__ _Dest,const char * __restrict__ _Source);
  char * strcat(char * __restrict__ _Dest,const char * __restrict__ _Source);
  int strcmp(const char *_Str1,const char *_Str2);
  size_t strlen(const char *_Str);
  size_t strnlen(const char *_Str,size_t _MaxCount);
  void * memmove(void *_Dst,const void *_Src,size_t _Size) ;
  __attribute__ ((__dllimport__)) char * _strdup(const char *_Src);
                char * strchr(const char *_Str,int _Val);
  __attribute__ ((__dllimport__)) int _stricmp(const char *_Str1,const char *_Str2);
  __attribute__ ((__dllimport__)) int _strcmpi(const char *_Str1,const char *_Str2);
  __attribute__ ((__dllimport__)) int _stricmp_l(const char *_Str1,const char *_Str2,_locale_t _Locale);
  int strcoll(const char *_Str1,const char *_Str2);
  __attribute__ ((__dllimport__)) int _strcoll_l(const char *_Str1,const char *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _stricoll(const char *_Str1,const char *_Str2);
  __attribute__ ((__dllimport__)) int _stricoll_l(const char *_Str1,const char *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _strncoll (const char *_Str1,const char *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _strncoll_l(const char *_Str1,const char *_Str2,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _strnicoll (const char *_Str1,const char *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _strnicoll_l(const char *_Str1,const char *_Str2,size_t _MaxCount,_locale_t _Locale);
  size_t strcspn(const char *_Str,const char *_Control);
  __attribute__ ((__dllimport__)) char * _strerror(const char *_ErrMsg) ;
  char * strerror(int) ;
  __attribute__ ((__dllimport__)) char * _strlwr(char *_String) ;
  char *strlwr_l(char *_String,_locale_t _Locale) ;
  char * strncat(char * __restrict__ _Dest,const char * __restrict__ _Source,size_t _Count) ;
  int strncmp(const char *_Str1,const char *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _strnicmp(const char *_Str1,const char *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _strnicmp_l(const char *_Str1,const char *_Str2,size_t _MaxCount,_locale_t _Locale);
  char *strncpy(char * __restrict__ _Dest,const char * __restrict__ _Source,size_t _Count) ;
  __attribute__ ((__dllimport__)) char * _strnset(char *_Str,int _Val,size_t _MaxCount) ;
  __attribute__ ((__dllimport__)) char * _strnset_l(char *str,int c,size_t count,_locale_t _Locale) ;
                char * strpbrk(const char *_Str,const char *_Control);
                char * strrchr(const char *_Str,int _Ch);
  __attribute__ ((__dllimport__)) char * _strrev(char *_Str);
  size_t strspn(const char *_Str,const char *_Control);
                char * strstr(const char *_Str,const char *_SubStr);
  char * strtok(char * __restrict__ _Str,const char * __restrict__ _Delim) ;
  __attribute__ ((__dllimport__)) char * _strupr(char *_String) ;
  __attribute__ ((__dllimport__)) char *_strupr_l(char *_String,_locale_t _Locale) ;
  size_t strxfrm(char * __restrict__ _Dst,const char * __restrict__ _Src,size_t _MaxCount);
  __attribute__ ((__dllimport__)) size_t _strxfrm_l(char * __restrict__ _Dst,const char * __restrict__ _Src,size_t _MaxCount,_locale_t _Locale);


  char * strdup(const char *_Src) ;
  int strcmpi(const char *_Str1,const char *_Str2) ;
  int stricmp(const char *_Str1,const char *_Str2) ;
  char * strlwr(char *_Str) ;
  int strnicmp(const char *_Str1,const char *_Str,size_t _MaxCount) ;
  int strncasecmp (const char *, const char *, size_t);
  int strcasecmp (const char *, const char *);







  char * strnset(char *_Str,int _Val,size_t _MaxCount) ;
  char * strrev(char *_Str) ;
  char * strset(char *_Str,int _Val) ;
  char * strupr(char *_Str) ;





  __attribute__ ((__dllimport__)) wchar_t * _wcsdup(const wchar_t *_Str);
  wchar_t * wcscat(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source) ;
                wchar_t * wcschr(const wchar_t *_Str,wchar_t _Ch);
  int wcscmp(const wchar_t *_Str1,const wchar_t *_Str2);
  wchar_t * wcscpy(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source) ;
  size_t wcscspn(const wchar_t *_Str,const wchar_t *_Control);
  size_t wcslen(const wchar_t *_Str);
  size_t wcsnlen(const wchar_t *_Src,size_t _MaxCount);
  wchar_t *wcsncat(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _Count) ;
  int wcsncmp(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  wchar_t *wcsncpy(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _Count) ;
  wchar_t * _wcsncpy_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _Count,_locale_t _Locale) ;
                wchar_t * wcspbrk(const wchar_t *_Str,const wchar_t *_Control);
                wchar_t * wcsrchr(const wchar_t *_Str,wchar_t _Ch);
  size_t wcsspn(const wchar_t *_Str,const wchar_t *_Control);
                wchar_t * wcsstr(const wchar_t *_Str,const wchar_t *_SubStr);
  wchar_t * wcstok(wchar_t * __restrict__ _Str,const wchar_t * __restrict__ _Delim) ;
  __attribute__ ((__dllimport__)) wchar_t * _wcserror(int _ErrNum) ;
  __attribute__ ((__dllimport__)) wchar_t * __wcserror(const wchar_t *_Str) ;
  __attribute__ ((__dllimport__)) int _wcsicmp(const wchar_t *_Str1,const wchar_t *_Str2);
  __attribute__ ((__dllimport__)) int _wcsicmp_l(const wchar_t *_Str1,const wchar_t *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wcsnicmp(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _wcsnicmp_l(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) wchar_t * _wcsnset(wchar_t *_Str,wchar_t _Val,size_t _MaxCount) ;
  __attribute__ ((__dllimport__)) wchar_t * _wcsrev(wchar_t *_Str);
  __attribute__ ((__dllimport__)) wchar_t * _wcsset(wchar_t *_Str,wchar_t _Val) ;
  __attribute__ ((__dllimport__)) wchar_t * _wcslwr(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) wchar_t *_wcslwr_l(wchar_t *_String,_locale_t _Locale) ;
  __attribute__ ((__dllimport__)) wchar_t * _wcsupr(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) wchar_t *_wcsupr_l(wchar_t *_String,_locale_t _Locale) ;
  size_t wcsxfrm(wchar_t * __restrict__ _Dst,const wchar_t * __restrict__ _Src,size_t _MaxCount);
  __attribute__ ((__dllimport__)) size_t _wcsxfrm_l(wchar_t * __restrict__ _Dst,const wchar_t * __restrict__ _Src,size_t _MaxCount,_locale_t _Locale);
  int wcscoll(const wchar_t *_Str1,const wchar_t *_Str2);
  __attribute__ ((__dllimport__)) int _wcscoll_l(const wchar_t *_Str1,const wchar_t *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wcsicoll(const wchar_t *_Str1,const wchar_t *_Str2);
  __attribute__ ((__dllimport__)) int _wcsicoll_l(const wchar_t *_Str1,const wchar_t *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wcsncoll(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _wcsncoll_l(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wcsnicoll(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _wcsnicoll_l(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);


  wchar_t * wcsdup(const wchar_t *_Str) ;

  int wcsicmp(const wchar_t *_Str1,const wchar_t *_Str2) ;
  int wcsnicmp(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount) ;
  wchar_t * wcsnset(wchar_t *_Str,wchar_t _Val,size_t _MaxCount) ;
  wchar_t * wcsrev(wchar_t *_Str) ;
  wchar_t * wcsset(wchar_t *_Str,wchar_t _Val) ;
  wchar_t * wcslwr(wchar_t *_Str) ;
  wchar_t * wcsupr(wchar_t *_Str) ;
  int wcsicoll(const wchar_t *_Str1,const wchar_t *_Str2) ;








# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/string_s.h" 1 3








# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\string.h" 1 3
# 9 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/string_s.h" 2 3
# 175 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\string.h" 2 3
# 5 "src/bvh.h" 2
# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sys/types.h" 1 3
# 13 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sys/types.h" 3
# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 13 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sys/types.h" 2 3
# 43 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sys/types.h" 3
typedef unsigned short _ino_t;

typedef unsigned short ino_t;





typedef unsigned int _dev_t;

typedef unsigned int dev_t;
# 62 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sys/types.h" 3
__extension__
typedef long long _pid_t;



typedef _pid_t pid_t;





typedef unsigned short _mode_t;


typedef _mode_t mode_t;
# 102 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sys/types.h" 3
typedef unsigned int useconds_t;




struct timespec {
  time_t tv_sec;
  long tv_nsec;
};

struct itimerspec {
  struct timespec it_interval;
  struct timespec it_value;
};





__extension__
typedef unsigned long long _sigset_t;
# 6 "src/bvh.h" 2
# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\unistd.h" 1 3
# 10 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\unistd.h" 3
# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\io.h" 1 3








# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 9 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\io.h" 2 3



#pragma pack(push,_CRT_PACKING)





__attribute__ ((__dllimport__)) char* _getcwd (char*, int);

  typedef unsigned long _fsize_t;





  struct _finddata32_t {
    unsigned attrib;
    __time32_t time_create;
    __time32_t time_access;
    __time32_t time_write;
    _fsize_t size;
    char name[260];
  };

  struct _finddata32i64_t {
    unsigned attrib;
    __time32_t time_create;
    __time32_t time_access;
    __time32_t time_write;
    __extension__ long long size;
    char name[260];
  };

  struct _finddata64i32_t {
    unsigned attrib;
    __time64_t time_create;
    __time64_t time_access;
    __time64_t time_write;
    _fsize_t size;
    char name[260];
  };

  struct __finddata64_t {
    unsigned attrib;
    __time64_t time_create;
    __time64_t time_access;
    __time64_t time_write;
    __extension__ long long size;
    char name[260];
  };
# 85 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\io.h" 3
  struct _wfinddata32_t {
    unsigned attrib;
    __time32_t time_create;
    __time32_t time_access;
    __time32_t time_write;
    _fsize_t size;
    wchar_t name[260];
  };

  struct _wfinddata32i64_t {
    unsigned attrib;
    __time32_t time_create;
    __time32_t time_access;
    __time32_t time_write;
    __extension__ long long size;
    wchar_t name[260];
  };

  struct _wfinddata64i32_t {
    unsigned attrib;
    __time64_t time_create;
    __time64_t time_access;
    __time64_t time_write;
    _fsize_t size;
    wchar_t name[260];
  };

  struct _wfinddata64_t {
    unsigned attrib;
    __time64_t time_create;
    __time64_t time_access;
    __time64_t time_write;
    __extension__ long long size;
    wchar_t name[260];
  };
# 195 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\io.h" 3
  __attribute__ ((__dllimport__)) int _access(const char *_Filename,int _AccessMode);
  __attribute__ ((__dllimport__)) int _chmod(const char *_Filename,int _Mode);
  __attribute__ ((__dllimport__)) int _chsize(int _FileHandle,long _Size) ;
  __attribute__ ((__dllimport__)) int _close(int _FileHandle);
  __attribute__ ((__dllimport__)) int _commit(int _FileHandle);
  __attribute__ ((__dllimport__)) int _creat(const char *_Filename,int _PermissionMode) ;
  __attribute__ ((__dllimport__)) int _dup(int _FileHandle);
  __attribute__ ((__dllimport__)) int _dup2(int _FileHandleSrc,int _FileHandleDst);
  __attribute__ ((__dllimport__)) int _eof(int _FileHandle);
  __attribute__ ((__dllimport__)) long _filelength(int _FileHandle);
  __attribute__ ((__dllimport__)) intptr_t _findfirst32(const char *_Filename,struct _finddata32_t *_FindData);
  __attribute__ ((__dllimport__)) int _findnext32(intptr_t _FindHandle,struct _finddata32_t *_FindData);
  __attribute__ ((__dllimport__)) int _findclose(intptr_t _FindHandle);
  __attribute__ ((__dllimport__)) int _isatty(int _FileHandle);
  __attribute__ ((__dllimport__)) int _locking(int _FileHandle,int _LockMode,long _NumOfBytes);
  __attribute__ ((__dllimport__)) long _lseek(int _FileHandle,long _Offset,int _Origin);
  _off64_t lseek64(int fd,_off64_t offset, int whence);
  __attribute__ ((__dllimport__)) char * _mktemp(char *_TemplateName) ;
  __attribute__ ((__dllimport__)) int _pipe(int *_PtHandles,unsigned int _PipeSize,int _TextMode);
  __attribute__ ((__dllimport__)) int _read(int _FileHandle,void *_DstBuf,unsigned int _MaxCharCount);
# 226 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\io.h" 3
  __attribute__ ((__dllimport__)) int _setmode(int _FileHandle,int _Mode);
  __attribute__ ((__dllimport__)) long _tell(int _FileHandle);
  __attribute__ ((__dllimport__)) int _umask(int _Mode) ;
  __attribute__ ((__dllimport__)) int _write(int _FileHandle,const void *_Buf,unsigned int _MaxCharCount);

  __extension__ __attribute__ ((__dllimport__)) long long _filelengthi64(int _FileHandle);
  __attribute__ ((__dllimport__)) intptr_t _findfirst32i64(const char *_Filename,struct _finddata32i64_t *_FindData);
  __attribute__ ((__dllimport__)) intptr_t _findfirst64(const char *_Filename,struct __finddata64_t *_FindData);



  intptr_t _findfirst64i32(const char *_Filename,struct _finddata64i32_t *_FindData);
# 256 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\io.h" 3
  __attribute__ ((__dllimport__)) int _findnext32i64(intptr_t _FindHandle,struct _finddata32i64_t *_FindData);
  __attribute__ ((__dllimport__)) int _findnext64(intptr_t _FindHandle,struct __finddata64_t *_FindData);
  int _findnext64i32(intptr_t _FindHandle,struct _finddata64i32_t *_FindData);
# 277 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\io.h" 3
  __extension__ long long _lseeki64(int _FileHandle,long long _Offset,int _Origin);
  __extension__ long long _telli64(int _FileHandle);



  int chdir (const char *) ;
  char * getcwd (char *, int) ;
  int mkdir (const char *) ;
  char * mktemp(char *) ;
  int rmdir (const char*) ;
  int chmod (const char *, int) ;



  __attribute__ ((__dllimport__)) errno_t _sopen_s(int *_FileHandle,const char *_Filename,int _OpenFlag,int _ShareFlag,int _PermissionMode);

  __attribute__ ((__dllimport__)) int _open(const char *_Filename,int _OpenFlag,...) ;
  __attribute__ ((__dllimport__)) int _sopen(const char *_Filename,int _OpenFlag,int _ShareFlag,...) ;



  __attribute__ ((__dllimport__)) int _waccess(const wchar_t *_Filename,int _AccessMode);
  __attribute__ ((__dllimport__)) int _wchmod(const wchar_t *_Filename,int _Mode);
  __attribute__ ((__dllimport__)) int _wcreat(const wchar_t *_Filename,int _PermissionMode) ;
  __attribute__ ((__dllimport__)) intptr_t _wfindfirst32(const wchar_t *_Filename,struct _wfinddata32_t *_FindData);
  __attribute__ ((__dllimport__)) int _wfindnext32(intptr_t _FindHandle,struct _wfinddata32_t *_FindData);
  __attribute__ ((__dllimport__)) int _wunlink(const wchar_t *_Filename);
  __attribute__ ((__dllimport__)) int _wrename(const wchar_t *_NewFilename,const wchar_t *_OldFilename);
  __attribute__ ((__dllimport__)) wchar_t * _wmktemp(wchar_t *_TemplateName) ;

  __attribute__ ((__dllimport__)) intptr_t _wfindfirst32i64(const wchar_t *_Filename,struct _wfinddata32i64_t *_FindData);
  intptr_t _wfindfirst64i32(const wchar_t *_Filename,struct _wfinddata64i32_t *_FindData);
  __attribute__ ((__dllimport__)) intptr_t _wfindfirst64(const wchar_t *_Filename,struct _wfinddata64_t *_FindData);
  __attribute__ ((__dllimport__)) int _wfindnext32i64(intptr_t _FindHandle,struct _wfinddata32i64_t *_FindData);
  int _wfindnext64i32(intptr_t _FindHandle,struct _wfinddata64i32_t *_FindData);
  __attribute__ ((__dllimport__)) int _wfindnext64(intptr_t _FindHandle,struct _wfinddata64_t *_FindData);

  __attribute__ ((__dllimport__)) errno_t _wsopen_s(int *_FileHandle,const wchar_t *_Filename,int _OpenFlag,int _ShareFlag,int _PermissionFlag);

  __attribute__ ((__dllimport__)) int _wopen(const wchar_t *_Filename,int _OpenFlag,...) ;
  __attribute__ ((__dllimport__)) int _wsopen(const wchar_t *_Filename,int _OpenFlag,int _ShareFlag,...) ;



  int __lock_fhandle(int _Filehandle);
  void _unlock_fhandle(int _Filehandle);
  __attribute__ ((__dllimport__)) intptr_t _get_osfhandle(int _FileHandle);
  __attribute__ ((__dllimport__)) int _open_osfhandle(intptr_t _OSFileHandle,int _Flags);


  int access(const char *_Filename,int _AccessMode) ;
  int chmod(const char *_Filename,int _AccessMode) ;
  int chsize(int _FileHandle,long _Size) ;
  int close(int _FileHandle) ;
  int creat(const char *_Filename,int _PermissionMode) ;
  int dup(int _FileHandle) ;
  int dup2(int _FileHandleSrc,int _FileHandleDst) ;
  int eof(int _FileHandle) ;
  long filelength(int _FileHandle) ;
  int isatty(int _FileHandle) ;
  int locking(int _FileHandle,int _LockMode,long _NumOfBytes) ;
  long lseek(int _FileHandle,long _Offset,int _Origin) ;
  char * mktemp(char *_TemplateName) ;
  int open(const char *_Filename,int _OpenFlag,...) ;
  int read(int _FileHandle,void *_DstBuf,unsigned int _MaxCharCount) ;
  int setmode(int _FileHandle,int _Mode) ;
  int sopen(const char *_Filename,int _OpenFlag,int _ShareFlag,...) ;
  long tell(int _FileHandle) ;
  int umask(int _Mode) ;
  int write(int _Filehandle,const void *_Buf,unsigned int _MaxCharCount) ;
# 376 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\io.h" 3
#pragma pack(pop)


# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/io_s.h" 1 3








# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\io.h" 1 3
# 9 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/io_s.h" 2 3
# 378 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\io.h" 2 3
# 10 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\unistd.h" 2 3

# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\process.h" 1 3








# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 9 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\process.h" 2 3
# 29 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\process.h" 3
  __attribute__ ((__dllimport__)) uintptr_t _beginthread(void ( *_StartAddress) (void *),unsigned _StackSize,void *_ArgList);
  __attribute__ ((__dllimport__)) void _endthread(void) __attribute__ ((__noreturn__));
  __attribute__ ((__dllimport__)) uintptr_t _beginthreadex(void *_Security,unsigned _StackSize,unsigned ( *_StartAddress) (void *),void *_ArgList,unsigned _InitFlag,unsigned *_ThrdAddr);
  __attribute__ ((__dllimport__)) void _endthreadex(unsigned _Retval) __attribute__ ((__noreturn__));
# 55 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\process.h" 3
  __attribute__ ((__dllimport__)) void __attribute__ ((__nothrow__)) _cexit(void);
  __attribute__ ((__dllimport__)) void __attribute__ ((__nothrow__)) _c_exit(void);
  __attribute__ ((__dllimport__)) int _getpid(void);
  __attribute__ ((__dllimport__)) intptr_t _cwait(int *_TermStat,intptr_t _ProcHandle,int _Action);
  __attribute__ ((__dllimport__)) intptr_t _execl(const char *_Filename,const char *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _execle(const char *_Filename,const char *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _execlp(const char *_Filename,const char *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _execlpe(const char *_Filename,const char *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _execv(const char *_Filename,const char *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t _execve(const char *_Filename,const char *const *_ArgList,const char *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t _execvp(const char *_Filename,const char *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t _execvpe(const char *_Filename,const char *const *_ArgList,const char *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t _spawnl(int _Mode,const char *_Filename,const char *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _spawnle(int _Mode,const char *_Filename,const char *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _spawnlp(int _Mode,const char *_Filename,const char *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _spawnlpe(int _Mode,const char *_Filename,const char *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _spawnv(int _Mode,const char *_Filename,const char *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t _spawnve(int _Mode,const char *_Filename,const char *const *_ArgList,const char *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t _spawnvp(int _Mode,const char *_Filename,const char *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t _spawnvpe(int _Mode,const char *_Filename,const char *const *_ArgList,const char *const *_Env);
# 83 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\process.h" 3
  __attribute__ ((__dllimport__)) intptr_t _wexecl(const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wexecle(const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wexeclp(const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wexeclpe(const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wexecv(const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t _wexecve(const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t _wexecvp(const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t _wexecvpe(const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t _wspawnl(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wspawnle(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wspawnlp(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wspawnlpe(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wspawnv(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t _wspawnve(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t _wspawnvp(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t _wspawnvpe(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);






  void __security_init_cookie(void);




  void __security_check_cookie(uintptr_t _StackCookie);
  __attribute__((noreturn)) void __report_gsfailure(uintptr_t _StackCookie);

  extern uintptr_t __security_cookie;

  intptr_t _loaddll(char *_Filename);
  int _unloaddll(intptr_t _Handle);
  int ( * _getdllprocaddr(intptr_t _Handle,char *_ProcedureName,intptr_t _Ordinal))(void);
# 143 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\process.h" 3
  intptr_t cwait(int *_TermStat,intptr_t _ProcHandle,int _Action) ;

  int execl(const char *_Filename,const char *_ArgList,...) ;
  int execle(const char *_Filename,const char *_ArgList,...) ;
  int execlp(const char *_Filename,const char *_ArgList,...) ;
  int execlpe(const char *_Filename,const char *_ArgList,...) ;






  intptr_t spawnl(int,const char *_Filename,const char *_ArgList,...) ;
  intptr_t spawnle(int,const char *_Filename,const char *_ArgList,...) ;
  intptr_t spawnlp(int,const char *_Filename,const char *_ArgList,...) ;
  intptr_t spawnlpe(int,const char *_Filename,const char *_ArgList,...) ;
  int getpid(void) ;





  int execv(const char *_Filename,char *const _ArgList[]) ;
  int execve(const char *_Filename,char *const _ArgList[],char *const _Env[]) ;
  int execvp(const char *_Filename,char *const _ArgList[]) ;
  int execvpe(const char *_Filename,char *const _ArgList[],char *const _Env[]) ;






  intptr_t spawnv(int,const char *_Filename,char *const _ArgList[]) ;
  intptr_t spawnve(int,const char *_Filename,char *const _ArgList[],char *const _Env[]) ;
  intptr_t spawnvp(int,const char *_Filename,char *const _ArgList[]) ;
  intptr_t spawnvpe(int,const char *_Filename,char *const _ArgList[],char *const _Env[]) ;
# 11 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\unistd.h" 2 3

# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\getopt.h" 1 3
# 16 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\getopt.h" 3
# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 16 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\getopt.h" 2 3






extern int optind;
extern int optopt;
extern int opterr;


extern char *optarg;

extern int getopt(int nargc, char * const *nargv, const char *options);
# 12 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\unistd.h" 2 3
# 21 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\unistd.h" 3
int __attribute__ ((__nothrow__)) usleep(useconds_t useconds);







int ftruncate(int, off_t);
# 7 "src/bvh.h" 2



typedef struct bvh_node bvh_t;

struct bvh_node {
  float corner0[3];
  float corner1[3];
  bvh_t *left;
  bvh_t *right;
  int start_index;
  int stop_index;
};

typedef float tri_t[3][3];

bvh_t *bvh;
tri_t *tris;


void parse_bvh_file(char *file_name);
ssize_t getline_str(char **line, size_t *len, char **bvh_str);

void print_bvh();
void free_bvh();

void define_bvh_str();
# 4 "src/intersect.h" 2
# 1 "src/../lib/mathc.h" 1
# 24 "src/../lib/mathc.h"
# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/include\\stdbool.h" 1 3 4
# 25 "src/../lib/mathc.h" 2
# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 1 3
# 10 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
# 10 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3


# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 12 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 2 3


struct _exception;

#pragma pack(push,_CRT_PACKING)
# 79 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
 extern double * __imp__HUGE;
# 91 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  struct _exception {
    int type;
    const char *name;
    double arg1;
    double arg2;
    double retval;
  };

  void __mingw_raise_matherr (int typ, const char *name, double a1, double a2,
         double rslt);
  void __mingw_setusermatherr (int ( *)(struct _exception *));
  __attribute__ ((__dllimport__)) void __setusermatherr(int ( *)(struct _exception *));



  double sin(double _X);
  double cos(double _X);
  double tan(double _X);
  double sinh(double _X);
  double cosh(double _X);
  double tanh(double _X);
  double asin(double _X);
  double acos(double _X);
  double atan(double _X);
  double atan2(double _Y,double _X);
  double exp(double _X);
  double log(double _X);
  double log10(double _X);
  double pow(double _X,double _Y);
  double sqrt(double _X);
  double ceil(double _X);
  double floor(double _X);
  double fabs(double _X);
# 135 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  double ldexp(double _X,int _Y);
  double frexp(double _X,int *_Y);
  double modf(double _X,double *_Y);
  double fmod(double _X,double _Y);

  void sincos (double __x, double *p_sin, double *p_cos);
  void sincosl (long double __x, long double *p_sin, long double *p_cos);
  void sincosf (float __x, float *p_sin, float *p_cos);
# 162 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  struct _complex {
    double x;
    double y;
  };


  __attribute__ ((__dllimport__)) double _cabs(struct _complex _ComplexA);
  double _hypot(double _X,double _Y);
  __attribute__ ((__dllimport__)) double _j0(double _X);
  __attribute__ ((__dllimport__)) double _j1(double _X);
  __attribute__ ((__dllimport__)) double _jn(int _X,double _Y);
  __attribute__ ((__dllimport__)) double _y0(double _X);
  __attribute__ ((__dllimport__)) double _y1(double _X);
  __attribute__ ((__dllimport__)) double _yn(int _X,double _Y);


  __attribute__ ((__dllimport__)) int _matherr (struct _exception *);
# 189 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  __attribute__ ((__dllimport__)) double _chgsign (double _X);
  __attribute__ ((__dllimport__)) double _copysign (double _Number,double _Sign);
  __attribute__ ((__dllimport__)) double _logb (double);
  __attribute__ ((__dllimport__)) double _nextafter (double, double);
  __attribute__ ((__dllimport__)) double _scalb (double, long);
  __attribute__ ((__dllimport__)) int _finite (double);
  __attribute__ ((__dllimport__)) int _fpclass (double);
  __attribute__ ((__dllimport__)) int _isnan (double);






__attribute__ ((__dllimport__)) double j0 (double) ;
__attribute__ ((__dllimport__)) double j1 (double) ;
__attribute__ ((__dllimport__)) double jn (int, double) ;
__attribute__ ((__dllimport__)) double y0 (double) ;
__attribute__ ((__dllimport__)) double y1 (double) ;
__attribute__ ((__dllimport__)) double yn (int, double) ;

__attribute__ ((__dllimport__)) double chgsign (double);
# 219 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  __attribute__ ((__dllimport__)) int finite (double);
  __attribute__ ((__dllimport__)) int fpclass (double);
# 264 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
typedef float float_t;
typedef double double_t;
# 299 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern int __fpclassifyl (long double);
  extern int __fpclassifyf (float);
  extern int __fpclassify (double);
# 335 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern int __isnan (double);
  extern int __isnanf (float);
  extern int __isnanl (long double);
# 376 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern int __signbit (double);
  extern int __signbitf (float);
  extern int __signbitl (long double);
# 404 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern float sinf(float _X);
  extern long double sinl(long double);

  extern float cosf(float _X);
  extern long double cosl(long double);

  extern float tanf(float _X);
  extern long double tanl(long double);
  extern float asinf(float _X);
  extern long double asinl(long double);

  extern float acosf (float);
  extern long double acosl (long double);

  extern float atanf (float);
  extern long double atanl (long double);

  extern float atan2f (float, float);
  extern long double atan2l (long double, long double);


  extern float sinhf(float _X);



  extern long double sinhl(long double);

  extern float coshf(float _X);



  extern long double coshl(long double);

  extern float tanhf(float _X);



  extern long double tanhl(long double);



  extern double acosh (double);
  extern float acoshf (float);
  extern long double acoshl (long double);


  extern double asinh (double);
  extern float asinhf (float);
  extern long double asinhl (long double);


  extern double atanh (double);
  extern float atanhf (float);
  extern long double atanhl (long double);



  extern float expf(float _X);



  extern long double expl(long double);


  extern double exp2(double);
  extern float exp2f(float);
  extern long double exp2l(long double);



  extern double expm1(double);
  extern float expm1f(float);
  extern long double expm1l(long double);


  extern float frexpf(float _X,int *_Y);



  extern long double frexpl(long double,int *);




  extern int ilogb (double);
  extern int ilogbf (float);
  extern int ilogbl (long double);


  extern float ldexpf(float _X,int _Y);



  extern long double ldexpl (long double, int);


  extern float logf (float);
  extern long double logl(long double);


  extern float log10f (float);
  extern long double log10l(long double);


  extern double log1p(double);
  extern float log1pf(float);
  extern long double log1pl(long double);


  extern double log2 (double);
  extern float log2f (float);
  extern long double log2l (long double);


  extern double logb (double);
  extern float logbf (float);
  extern long double logbl (long double);
# 553 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern float modff (float, float*);
  extern long double modfl (long double, long double*);


  extern double scalbn (double, int);
  extern float scalbnf (float, int);
  extern long double scalbnl (long double, int);

  extern double scalbln (double, long);
  extern float scalblnf (float, long);
  extern long double scalblnl (long double, long);



  extern double cbrt (double);
  extern float cbrtf (float);
  extern long double cbrtl (long double);


  extern float fabsf (float x);
# 583 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern long double fabsl (long double);
# 595 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern double hypot (double, double) ;
  extern float hypotf (float x, float y);



  extern long double hypotl (long double, long double);


  extern float powf(float _X,float _Y);



  extern long double powl (long double, long double);


  extern float sqrtf (float);
  extern long double sqrtl(long double);


  extern double erf (double);
  extern float erff (float);
  extern long double erfl (long double);


  extern double erfc (double);
  extern float erfcf (float);
  extern long double erfcl (long double);


  extern double lgamma (double);
  extern float lgammaf (float);
  extern long double lgammal (long double);


  extern double tgamma (double);
  extern float tgammaf (float);
  extern long double tgammal (long double);


  extern float ceilf (float);
  extern long double ceill (long double);


  extern float floorf (float);
  extern long double floorl (long double);


  extern double nearbyint ( double);
  extern float nearbyintf (float);
  extern long double nearbyintl (long double);



extern double rint (double);
extern float rintf (float);
extern long double rintl (long double);


extern long lrint (double);
extern long lrintf (float);
extern long lrintl (long double);

__extension__ long long llrint (double);
__extension__ long long llrintf (float);
__extension__ long long llrintl (long double);
# 739 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern double round (double);
  extern float roundf (float);
  extern long double roundl (long double);


  extern long lround (double);
  extern long lroundf (float);
  extern long lroundl (long double);
  __extension__ long long llround (double);
  __extension__ long long llroundf (float);
  __extension__ long long llroundl (long double);



  extern double trunc (double);
  extern float truncf (float);
  extern long double truncl (long double);


  extern float fmodf (float, float);
  extern long double fmodl (long double, long double);


  extern double remainder (double, double);
  extern float remainderf (float, float);
  extern long double remainderl (long double, long double);


  extern double remquo(double, double, int *);
  extern float remquof(float, float, int *);
  extern long double remquol(long double, long double, int *);


  extern double copysign (double, double);
  extern float copysignf (float, float);
  extern long double copysignl (long double, long double);


  extern double nan(const char *tagp);
  extern float nanf(const char *tagp);
  extern long double nanl(const char *tagp);
# 788 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern double nextafter (double, double);
  extern float nextafterf (float, float);
  extern long double nextafterl (long double, long double);


  extern double nexttoward (double, long double);
  extern float nexttowardf (float, long double);
  extern long double nexttowardl (long double, long double);



  extern double fdim (double x, double y);
  extern float fdimf (float x, float y);
  extern long double fdiml (long double x, long double y);







  extern double fmax (double, double);
  extern float fmaxf (float, float);
  extern long double fmaxl (long double, long double);


  extern double fmin (double, double);
  extern float fminf (float, float);
  extern long double fminl (long double, long double);



  extern double fma (double, double, double);
  extern float fmaf (float, float, float);
  extern long double fmal (long double, long double, long double);
# 871 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
   __attribute__ ((__dllimport__)) float _copysignf (float _Number,float _Sign);
   __attribute__ ((__dllimport__)) float _chgsignf (float _X);
   __attribute__ ((__dllimport__)) float _logbf(float _X);
   __attribute__ ((__dllimport__)) float _nextafterf(float _X,float _Y);
   __attribute__ ((__dllimport__)) int _finitef(float _X);
   __attribute__ ((__dllimport__)) int _isnanf(float _X);
   __attribute__ ((__dllimport__)) int _fpclassf(float _X);



   extern long double _chgsignl (long double);
# 898 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
#pragma pack(pop)
# 26 "src/../lib/mathc.h" 2
# 49 "src/../lib/mathc.h"
# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/include\\stdint.h" 1 3 4
# 33 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/include\\stdint.h" 3 4
# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdint.h" 1 3 4
# 28 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdint.h" 3 4
# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3 4
# 28 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdint.h" 2 3 4




# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 31 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 3 4
typedef __typeof__(((int*)0)-((int*)0)) ptrdiff_t;



typedef __typeof__(sizeof(int)) size_t;




typedef unsigned short wchar_t;
# 32 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdint.h" 2 3 4



typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef short int16_t;
typedef unsigned short uint16_t;
typedef int int32_t;
typedef unsigned uint32_t;
__extension__ typedef long long int64_t;
__extension__ typedef unsigned long long uint64_t;


typedef signed char int_least8_t;
typedef unsigned char uint_least8_t;
typedef short int_least16_t;
typedef unsigned short uint_least16_t;
typedef int int_least32_t;
typedef unsigned uint_least32_t;
__extension__ typedef long long int_least64_t;
__extension__ typedef unsigned long long uint_least64_t;





typedef signed char int_fast8_t;
typedef unsigned char uint_fast8_t;
typedef short int_fast16_t;
typedef unsigned short uint_fast16_t;
typedef int int_fast32_t;
typedef unsigned int uint_fast32_t;
__extension__ typedef long long int_fast64_t;
__extension__ typedef unsigned long long uint_fast64_t;


__extension__ typedef long long intmax_t;
__extension__ typedef unsigned long long uintmax_t;
# 33 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/include\\stdint.h" 2 3 4
# 50 "src/../lib/mathc.h" 2


# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/include\\float.h" 1 3 4
# 33 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/include\\float.h" 3 4
# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\float.h" 1 3 4
# 28 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\float.h" 3 4
# 1 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3 4
# 28 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\float.h" 2 3 4
# 136 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\float.h" 3 4
__attribute__ ((__dllimport__)) unsigned int __attribute__ ((__nothrow__)) _controlfp (unsigned int unNew, unsigned int unMask) ;
__attribute__ ((__dllimport__)) unsigned int __attribute__ ((__nothrow__)) _control87 (unsigned int unNew, unsigned int unMask);


__attribute__ ((__dllimport__)) unsigned int __attribute__ ((__nothrow__)) _clearfp (void);
__attribute__ ((__dllimport__)) unsigned int __attribute__ ((__nothrow__)) _statusfp (void);
# 155 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\float.h" 3 4
void __attribute__ ((__nothrow__)) _fpreset (void);
void __attribute__ ((__nothrow__)) fpreset (void);


__attribute__ ((__dllimport__)) int * __attribute__ ((__nothrow__)) __fpecode(void);
# 33 "C:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/include\\float.h" 2 3 4
# 53 "src/../lib/mathc.h" 2
# 86 "src/../lib/mathc.h"
typedef int32_t mint_t;
# 109 "src/../lib/mathc.h"
typedef float mfloat_t;
# 159 "src/../lib/mathc.h"
struct vec2i {

 union {
  struct {
   mint_t x;
   mint_t y;
  };
  mint_t v[2];
 };




};

struct vec3i {

 union {
  struct {
   mint_t x;
   mint_t y;
   mint_t z;
  };
  mint_t v[3];
 };





};

struct vec4i {

 union {
  struct {
   mint_t x;
   mint_t y;
   mint_t z;
   mint_t w;
  };
  mint_t v[4];
 };






};



struct vec2 {

 union {
  struct {
   mfloat_t x;
   mfloat_t y;
  };
  mfloat_t v[2];
 };




};

struct vec3 {

 union {
  struct {
   mfloat_t x;
   mfloat_t y;
   mfloat_t z;
  };
  mfloat_t v[3];
 };





};

struct vec4 {

 union {
  struct {
   mfloat_t x;
   mfloat_t y;
   mfloat_t z;
   mfloat_t w;
  };
  mfloat_t v[4];
 };






};

struct quat {

 union {
  struct {
   mfloat_t x;
   mfloat_t y;
   mfloat_t z;
   mfloat_t w;
  };
  mfloat_t v[4];
 };






};






struct mat2 {

 union {
  struct {
   mfloat_t m11;
   mfloat_t m21;
   mfloat_t m12;
   mfloat_t m22;
  };
  mfloat_t v[4];
 };






};







struct mat3 {

 union {
  struct {
   mfloat_t m11;
   mfloat_t m21;
   mfloat_t m31;
   mfloat_t m12;
   mfloat_t m22;
   mfloat_t m32;
   mfloat_t m13;
   mfloat_t m23;
   mfloat_t m33;
  };
  mfloat_t v[9];
 };
# 339 "src/../lib/mathc.h"
};
# 348 "src/../lib/mathc.h"
struct mat4 {

 union {
  struct {
   mfloat_t m11;
   mfloat_t m21;
   mfloat_t m31;
   mfloat_t m41;
   mfloat_t m12;
   mfloat_t m22;
   mfloat_t m32;
   mfloat_t m42;
   mfloat_t m13;
   mfloat_t m23;
   mfloat_t m33;
   mfloat_t m43;
   mfloat_t m14;
   mfloat_t m24;
   mfloat_t m34;
   mfloat_t m44;
  };
  mfloat_t v[16];
 };
# 389 "src/../lib/mathc.h"
};




mint_t clampi(mint_t value, mint_t min, mint_t max);





_Bool nearly_equal(mfloat_t a, mfloat_t b, mfloat_t epsilon);
mfloat_t to_radians(mfloat_t degrees);
mfloat_t to_degrees(mfloat_t radians);
mfloat_t clampf(mfloat_t value, mfloat_t min, mfloat_t max);



_Bool vec2i_is_zero(mint_t *v0);
_Bool vec2i_is_equal(mint_t *v0, mint_t *v1);
mint_t *vec2i(mint_t *result, mint_t x, mint_t y);
mint_t *vec2i_assign(mint_t *result, mint_t *v0);

mint_t *vec2i_assign_vec2(mint_t *result, mfloat_t *v0);

mint_t *vec2i_zero(mint_t *result);
mint_t *vec2i_one(mint_t *result);
mint_t *vec2i_sign(mint_t *result, mint_t *v0);
mint_t *vec2i_add(mint_t *result, mint_t *v0, mint_t *v1);
mint_t *vec2i_add_i(mint_t *result, mint_t *v0, mint_t i);
mint_t *vec2i_subtract(mint_t *result, mint_t *v0, mint_t *v1);
mint_t *vec2i_subtract_i(mint_t *result, mint_t *v0, mint_t i);
mint_t *vec2i_multiply(mint_t *result, mint_t *v0, mint_t *v1);
mint_t *vec2i_multiply_i(mint_t *result, mint_t *v0, mint_t i);
mint_t *vec2i_divide(mint_t *result, mint_t *v0, mint_t *v1);
mint_t *vec2i_divide_i(mint_t *result, mint_t *v0, mint_t i);
mint_t *vec2i_snap(mint_t *result, mint_t *v0, mint_t *v1);
mint_t *vec2i_snap_i(mint_t *result, mint_t *v0, mint_t i);
mint_t *vec2i_negative(mint_t *result, mint_t *v0);
mint_t *vec2i_abs(mint_t *result, mint_t *v0);
mint_t *vec2i_max(mint_t *result, mint_t *v0, mint_t *v1);
mint_t *vec2i_min(mint_t *result, mint_t *v0, mint_t *v1);
mint_t *vec2i_clamp(mint_t *result, mint_t *v0, mint_t *v1, mint_t *v2);
mint_t *vec2i_tangent(mint_t *result, mint_t *v0);
_Bool vec3i_is_zero(mint_t *v0);
_Bool vec3i_is_equal(mint_t *v0, mint_t *v1);
mint_t *vec3i(mint_t *result, mint_t x, mint_t y, mint_t z);
mint_t *vec3i_assign(mint_t *result, mint_t *v0);

mint_t *vec3i_assign_vec3(mint_t *result, mfloat_t *v0);

mint_t *vec3i_zero(mint_t *result);
mint_t *vec3i_one(mint_t *result);
mint_t *vec3i_sign(mint_t *result, mint_t *v0);
mint_t *vec3i_add(mint_t *result, mint_t *v0, mint_t *v1);
mint_t *vec3i_add_i(mint_t *result, mint_t *v0, mint_t i);
mint_t *vec3i_subtract(mint_t *result, mint_t *v0, mint_t *v1);
mint_t *vec3i_subtract_i(mint_t *result, mint_t *v0, mint_t i);
mint_t *vec3i_multiply(mint_t *result, mint_t *v0, mint_t *v1);
mint_t *vec3i_multiply_i(mint_t *result, mint_t *v0, mint_t i);
mint_t *vec3i_divide(mint_t *result, mint_t *v0, mint_t *v1);
mint_t *vec3i_divide_i(mint_t *result, mint_t *v0, mint_t i);
mint_t *vec3i_snap(mint_t *result, mint_t *v0, mint_t *v1);
mint_t *vec3i_snap_i(mint_t *result, mint_t *v0, mint_t i);
mint_t *vec3i_cross(mint_t *result, mint_t *v0, mint_t *v1);
mint_t *vec3i_negative(mint_t *result, mint_t *v0);
mint_t *vec3i_abs(mint_t *result, mint_t *v0);
mint_t *vec3i_max(mint_t *result, mint_t *v0, mint_t *v1);
mint_t *vec3i_min(mint_t *result, mint_t *v0, mint_t *v1);
mint_t *vec3i_clamp(mint_t *result, mint_t *v0, mint_t *v1, mint_t *v2);
_Bool vec4i_is_zero(mint_t *v0);
_Bool vec4i_is_equal(mint_t *v0, mint_t *v1);
mint_t *vec4i(mint_t *result, mint_t x, mint_t y, mint_t z, mint_t w);
mint_t *vec4i_assign(mint_t *result, mint_t *v0);

mint_t *vec4i_assign_vec4(mint_t *result, mfloat_t *v0);

mint_t *vec4i_zero(mint_t *result);
mint_t *vec4i_one(mint_t *result);
mint_t *vec4i_sign(mint_t *result, mint_t *v0);
mint_t *vec4i_add(mint_t *result, mint_t *v0, mint_t *v1);
mint_t *vec4i_add_i(mint_t *result, mint_t *v0, mint_t i);
mint_t *vec4i_subtract(mint_t *result, mint_t *v0, mint_t *v1);
mint_t *vec4i_subtract_i(mint_t *result, mint_t *v0, mint_t i);
mint_t *vec4i_multiply(mint_t *result, mint_t *v0, mint_t *v1);
mint_t *vec4i_multiply_i(mint_t *result, mint_t *v0, mint_t i);
mint_t *vec4i_divide(mint_t *result, mint_t *v0, mint_t *v1);
mint_t *vec4i_divide_i(mint_t *result, mint_t *v0, mint_t i);
mint_t *vec4i_snap(mint_t *result, mint_t *v0, mint_t *v1);
mint_t *vec4i_snap_i(mint_t *result, mint_t *v0, mint_t i);
mint_t *vec4i_negative(mint_t *result, mint_t *v0);
mint_t *vec4i_abs(mint_t *result, mint_t *v0);
mint_t *vec4i_max(mint_t *result, mint_t *v0, mint_t *v1);
mint_t *vec4i_min(mint_t *result, mint_t *v0, mint_t *v1);
mint_t *vec4i_clamp(mint_t *result, mint_t *v0, mint_t *v1, mint_t *v2);


_Bool vec2_is_zero(mfloat_t *v0);
_Bool vec2_is_equal(mfloat_t *v0, mfloat_t *v1);
mfloat_t *vec2(mfloat_t *result, mfloat_t x, mfloat_t y);
mfloat_t *vec2_assign(mfloat_t *result, mfloat_t *v0);

mfloat_t *vec2_assign_vec2i(mfloat_t *result, mint_t *v0);

mfloat_t *vec2_zero(mfloat_t *result);
mfloat_t *vec2_one(mfloat_t *result);
mfloat_t *vec2_sign(mfloat_t *result, mfloat_t *v0);
mfloat_t *vec2_add(mfloat_t *result, mfloat_t *v0, mfloat_t *v1);
mfloat_t *vec2_add_f(mfloat_t *result, mfloat_t *v0, mfloat_t f);
mfloat_t *vec2_subtract(mfloat_t *result, mfloat_t *v0, mfloat_t *v1);
mfloat_t *vec2_subtract_f(mfloat_t *result, mfloat_t *v0, mfloat_t f);
mfloat_t *vec2_multiply(mfloat_t *result, mfloat_t *v0, mfloat_t *v1);
mfloat_t *vec2_multiply_f(mfloat_t *result, mfloat_t *v0, mfloat_t f);
mfloat_t *vec2_multiply_mat2(mfloat_t *result, mfloat_t *v0, mfloat_t *m0);
mfloat_t *vec2_divide(mfloat_t *result, mfloat_t *v0, mfloat_t *v1);
mfloat_t *vec2_divide_f(mfloat_t *result, mfloat_t *v0, mfloat_t f);
mfloat_t *vec2_snap(mfloat_t *result, mfloat_t *v0, mfloat_t *v1);
mfloat_t *vec2_snap_f(mfloat_t *result, mfloat_t *v0, mfloat_t f);
mfloat_t *vec2_negative(mfloat_t *result, mfloat_t *v0);
mfloat_t *vec2_abs(mfloat_t *result, mfloat_t *v0);
mfloat_t *vec2_floor(mfloat_t *result, mfloat_t *v0);
mfloat_t *vec2_ceil(mfloat_t *result, mfloat_t *v0);
mfloat_t *vec2_round(mfloat_t *result, mfloat_t *v0);
mfloat_t *vec2_max(mfloat_t *result, mfloat_t *v0, mfloat_t *v1);
mfloat_t *vec2_min(mfloat_t *result, mfloat_t *v0, mfloat_t *v1);
mfloat_t *vec2_clamp(mfloat_t *result, mfloat_t *v0, mfloat_t *v1, mfloat_t *v2);
mfloat_t *vec2_normalize(mfloat_t *result, mfloat_t *v0);
mfloat_t vec2_dot(mfloat_t *v0, mfloat_t *v1);
mfloat_t *vec2_project(mfloat_t *result, mfloat_t *v0, mfloat_t *v1);
mfloat_t *vec2_slide(mfloat_t *result, mfloat_t *v0, mfloat_t *normal);
mfloat_t *vec2_reflect(mfloat_t *result, mfloat_t *v0, mfloat_t *normal);
mfloat_t *vec2_tangent(mfloat_t *result, mfloat_t *v0);
mfloat_t *vec2_rotate(mfloat_t *result, mfloat_t *v0, mfloat_t f);
mfloat_t *vec2_lerp(mfloat_t *result, mfloat_t *v0, mfloat_t *v1, mfloat_t f);
mfloat_t *vec2_bezier3(mfloat_t *result, mfloat_t *v0, mfloat_t *v1, mfloat_t *v2, mfloat_t f);
mfloat_t *vec2_bezier4(mfloat_t *result, mfloat_t *v0, mfloat_t *v1, mfloat_t *v2, mfloat_t *v3, mfloat_t f);
mfloat_t vec2_angle(mfloat_t *v0);
mfloat_t vec2_length(mfloat_t *v0);
mfloat_t vec2_length_squared(mfloat_t *v0);
mfloat_t vec2_distance(mfloat_t *v0, mfloat_t *v1);
mfloat_t vec2_distance_squared(mfloat_t *v0, mfloat_t *v1);
_Bool vec2_linear_independent(mfloat_t *v0, mfloat_t *v1);
mfloat_t** vec2_orthonormalization(mfloat_t result[2][2], mfloat_t basis[2][2]);
_Bool vec3_is_zero(mfloat_t *v0);
_Bool vec3_is_equal(mfloat_t *v0, mfloat_t *v1);
mfloat_t *vec3(mfloat_t *result, mfloat_t x, mfloat_t y, mfloat_t z);
mfloat_t *vec3_assign(mfloat_t *result, mfloat_t *v0);

mfloat_t *vec3_assign_vec3i(mfloat_t *result, mint_t *v0);

mfloat_t *vec3_zero(mfloat_t *result);
mfloat_t *vec3_one(mfloat_t *result);
mfloat_t *vec3_sign(mfloat_t *result, mfloat_t *v0);
mfloat_t *vec3_add(mfloat_t *result, mfloat_t *v0, mfloat_t *v1);
mfloat_t *vec3_add_f(mfloat_t *result, mfloat_t *v0, mfloat_t f);
mfloat_t *vec3_subtract(mfloat_t *result, mfloat_t *v0, mfloat_t *v1);
mfloat_t *vec3_subtract_f(mfloat_t *result, mfloat_t *v0, mfloat_t f);
mfloat_t *vec3_multiply(mfloat_t *result, mfloat_t *v0, mfloat_t *v1);
mfloat_t *vec3_multiply_f(mfloat_t *result, mfloat_t *v0, mfloat_t f);
mfloat_t *vec3_multiply_mat3(mfloat_t *result, mfloat_t *v0, mfloat_t *m0);
mfloat_t *vec3_divide(mfloat_t *result, mfloat_t *v0, mfloat_t *v1);
mfloat_t *vec3_divide_f(mfloat_t *result, mfloat_t *v0, mfloat_t f);
mfloat_t *vec3_snap(mfloat_t *result, mfloat_t *v0, mfloat_t *v1);
mfloat_t *vec3_snap_f(mfloat_t *result, mfloat_t *v0, mfloat_t f);
mfloat_t *vec3_negative(mfloat_t *result, mfloat_t *v0);
mfloat_t *vec3_abs(mfloat_t *result, mfloat_t *v0);
mfloat_t *vec3_floor(mfloat_t *result, mfloat_t *v0);
mfloat_t *vec3_ceil(mfloat_t *result, mfloat_t *v0);
mfloat_t *vec3_round(mfloat_t *result, mfloat_t *v0);
mfloat_t *vec3_max(mfloat_t *result, mfloat_t *v0, mfloat_t *v1);
mfloat_t *vec3_min(mfloat_t *result, mfloat_t *v0, mfloat_t *v1);
mfloat_t *vec3_clamp(mfloat_t *result, mfloat_t *v0, mfloat_t *v1, mfloat_t *v2);
mfloat_t *vec3_cross(mfloat_t *result, mfloat_t *v0, mfloat_t *v1);
mfloat_t *vec3_normalize(mfloat_t *result, mfloat_t *v0);
mfloat_t vec3_dot(mfloat_t *v0, mfloat_t *v1);
mfloat_t *vec3_project(mfloat_t *result, mfloat_t *v0, mfloat_t *v1);
mfloat_t *vec3_slide(mfloat_t *result, mfloat_t *v0, mfloat_t *normal);
mfloat_t *vec3_reflect(mfloat_t *result, mfloat_t *v0, mfloat_t *normal);
mfloat_t *vec3_rotate(mfloat_t *result, mfloat_t *v0, mfloat_t *ra, mfloat_t f);
mfloat_t *vec3_lerp(mfloat_t *result, mfloat_t *v0, mfloat_t *v1, mfloat_t f);
mfloat_t *vec3_bezier3(mfloat_t *result, mfloat_t *v0, mfloat_t *v1, mfloat_t *v2, mfloat_t f);
mfloat_t *vec3_bezier4(mfloat_t *result, mfloat_t *v0, mfloat_t *v1, mfloat_t *v2, mfloat_t *v3, mfloat_t f);
mfloat_t vec3_length(mfloat_t *v0);
mfloat_t vec3_length_squared(mfloat_t *v0);
mfloat_t vec3_distance(mfloat_t *v0, mfloat_t *v1);
mfloat_t vec3_distance_squared(mfloat_t *v0, mfloat_t *v1);
_Bool vec3_linear_independent(mfloat_t *v0, mfloat_t *v1, mfloat_t *v2);
mfloat_t** vec3_orthonormalization(mfloat_t result[3][3], mfloat_t basis[3][3]);
_Bool vec4_is_zero(mfloat_t *v0);
_Bool vec4_is_equal(mfloat_t *v0, mfloat_t *v1);
mfloat_t *vec4(mfloat_t *result, mfloat_t x, mfloat_t y, mfloat_t z, mfloat_t w);
mfloat_t *vec4_assign(mfloat_t *result, mfloat_t *v0);

mfloat_t *vec4_assign_vec4i(mfloat_t *result, mint_t *v0);

mfloat_t *vec4_zero(mfloat_t *result);
mfloat_t *vec4_one(mfloat_t *result);
mfloat_t *vec4_sign(mfloat_t *result, mfloat_t *v0);
mfloat_t *vec4_add(mfloat_t *result, mfloat_t *v0, mfloat_t *v1);
mfloat_t *vec4_add_f(mfloat_t *result, mfloat_t *v0, mfloat_t f);
mfloat_t *vec4_subtract(mfloat_t *result, mfloat_t *v0, mfloat_t *v1);
mfloat_t *vec4_subtract_f(mfloat_t *result, mfloat_t *v0, mfloat_t f);
mfloat_t *vec4_multiply(mfloat_t *result, mfloat_t *v0, mfloat_t *v1);
mfloat_t *vec4_multiply_f(mfloat_t *result, mfloat_t *v0, mfloat_t f);
mfloat_t *vec4_multiply_mat4(mfloat_t *result, mfloat_t *v0, mfloat_t *m0);
mfloat_t *vec4_divide(mfloat_t *result, mfloat_t *v0, mfloat_t *v1);
mfloat_t *vec4_divide_f(mfloat_t *result, mfloat_t *v0, mfloat_t f);
mfloat_t *vec4_snap(mfloat_t *result, mfloat_t *v0, mfloat_t *v1);
mfloat_t *vec4_snap_f(mfloat_t *result, mfloat_t *v0, mfloat_t f);
mfloat_t *vec4_negative(mfloat_t *result, mfloat_t *v0);
mfloat_t *vec4_abs(mfloat_t *result, mfloat_t *v0);
mfloat_t *vec4_floor(mfloat_t *result, mfloat_t *v0);
mfloat_t *vec4_ceil(mfloat_t *result, mfloat_t *v0);
mfloat_t *vec4_round(mfloat_t *result, mfloat_t *v0);
mfloat_t *vec4_max(mfloat_t *result, mfloat_t *v0, mfloat_t *v1);
mfloat_t *vec4_min(mfloat_t *result, mfloat_t *v0, mfloat_t *v1);
mfloat_t *vec4_clamp(mfloat_t *result, mfloat_t *v0, mfloat_t *v1, mfloat_t *v2);
mfloat_t *vec4_normalize(mfloat_t *result, mfloat_t *v0);
mfloat_t *vec4_lerp(mfloat_t *result, mfloat_t *v0, mfloat_t *v1, mfloat_t f);
_Bool quat_is_zero(mfloat_t *q0);
_Bool quat_is_equal(mfloat_t *q0, mfloat_t *q1);
mfloat_t *quat(mfloat_t *result, mfloat_t x, mfloat_t y, mfloat_t z, mfloat_t w);
mfloat_t *quat_assign(mfloat_t *result, mfloat_t *q0);
mfloat_t *quat_zero(mfloat_t *result);
mfloat_t *quat_null(mfloat_t *result);
mfloat_t *quat_multiply(mfloat_t *result, mfloat_t *q0, mfloat_t *q1);
mfloat_t *quat_multiply_f(mfloat_t *result, mfloat_t *q0, mfloat_t f);
mfloat_t *quat_divide(mfloat_t *result, mfloat_t *q0, mfloat_t *q1);
mfloat_t *quat_divide_f(mfloat_t *result, mfloat_t *q0, mfloat_t f);
mfloat_t *quat_negative(mfloat_t *result, mfloat_t *q0);
mfloat_t *quat_conjugate(mfloat_t *result, mfloat_t *q0);
mfloat_t *quat_inverse(mfloat_t *result, mfloat_t *q0);
mfloat_t *quat_normalize(mfloat_t *result, mfloat_t *q0);
mfloat_t quat_dot(mfloat_t *q0, mfloat_t *q1);
mfloat_t *quat_power(mfloat_t *result, mfloat_t *q0, mfloat_t exponent);
mfloat_t *quat_from_axis_angle(mfloat_t *result, mfloat_t *v0, mfloat_t angle);
mfloat_t *quat_from_vec3(mfloat_t *result, mfloat_t *v0, mfloat_t *v1);
mfloat_t *quat_from_mat4(mfloat_t *result, mfloat_t *m0);
mfloat_t *quat_lerp(mfloat_t *result, mfloat_t *q0, mfloat_t *q1, mfloat_t f);
mfloat_t *quat_slerp(mfloat_t *result, mfloat_t *q0, mfloat_t *q1, mfloat_t f);
mfloat_t quat_length(mfloat_t *q0);
mfloat_t quat_length_squared(mfloat_t *q0);
mfloat_t quat_angle(mfloat_t *q0, mfloat_t *q1);
mfloat_t *mat2(mfloat_t *result, mfloat_t m11, mfloat_t m12, mfloat_t m21, mfloat_t m22);
mfloat_t *mat2_zero(mfloat_t *result);
mfloat_t *mat2_identity(mfloat_t *result);
mfloat_t mat2_determinant(mfloat_t *m0);
mfloat_t *mat2_assign(mfloat_t *result, mfloat_t *m0);
mfloat_t *mat2_negative(mfloat_t *result, mfloat_t *m0);
mfloat_t *mat2_transpose(mfloat_t *result, mfloat_t *m0);
mfloat_t *mat2_cofactor(mfloat_t *result, mfloat_t *m0);
mfloat_t *mat2_adjugate(mfloat_t *result, mfloat_t *m0);
mfloat_t *mat2_multiply(mfloat_t *result, mfloat_t *m0, mfloat_t *m1);
mfloat_t *mat2_multiply_f(mfloat_t *result, mfloat_t *m0, mfloat_t f);
mfloat_t *mat2_inverse(mfloat_t *result, mfloat_t *m0);
mfloat_t *mat2_scaling(mfloat_t *result, mfloat_t *v0);
mfloat_t *mat2_scale(mfloat_t *result, mfloat_t *m0, mfloat_t *v0);
mfloat_t *mat2_rotation_z(mfloat_t *result, mfloat_t f);
mfloat_t *mat2_lerp(mfloat_t *result, mfloat_t *m0, mfloat_t *m1, mfloat_t f);
mfloat_t *mat3(mfloat_t *result, mfloat_t m11, mfloat_t m12, mfloat_t m13, mfloat_t m21, mfloat_t m22, mfloat_t m23, mfloat_t m31, mfloat_t m32, mfloat_t m33);
mfloat_t *mat3_zero(mfloat_t *result);
mfloat_t *mat3_identity(mfloat_t *result);
mfloat_t mat3_determinant(mfloat_t *m0);
mfloat_t *mat3_assign(mfloat_t *result, mfloat_t *m0);
mfloat_t *mat3_negative(mfloat_t *result, mfloat_t *m0);
mfloat_t *mat3_transpose(mfloat_t *result, mfloat_t *m0);
mfloat_t *mat3_cofactor(mfloat_t *result, mfloat_t *m0);
mfloat_t *mat3_multiply(mfloat_t *result, mfloat_t *m0, mfloat_t *m1);
mfloat_t *mat3_multiply_f(mfloat_t *result, mfloat_t *m0, mfloat_t f);
mfloat_t *mat3_inverse(mfloat_t *result, mfloat_t *m0);
mfloat_t *mat3_scaling(mfloat_t *result, mfloat_t *v0);
mfloat_t *mat3_scale(mfloat_t *result, mfloat_t *m0, mfloat_t *v0);
mfloat_t *mat3_rotation_x(mfloat_t *result, mfloat_t f);
mfloat_t *mat3_rotation_y(mfloat_t *result, mfloat_t f);
mfloat_t *mat3_rotation_z(mfloat_t *result, mfloat_t f);
mfloat_t *mat3_rotation_axis(mfloat_t *result, mfloat_t *v0, mfloat_t f);
mfloat_t *mat3_rotation_quat(mfloat_t *result, mfloat_t *q0);
mfloat_t *mat3_lerp(mfloat_t *result, mfloat_t *m0, mfloat_t *m1, mfloat_t f);
mfloat_t *mat4(mfloat_t *result, mfloat_t m11, mfloat_t m12, mfloat_t m13, mfloat_t m14, mfloat_t m21, mfloat_t m22, mfloat_t m23, mfloat_t m24, mfloat_t m31, mfloat_t m32, mfloat_t m33, mfloat_t m34, mfloat_t m41, mfloat_t m42, mfloat_t m43, mfloat_t m44);
mfloat_t *mat4_zero(mfloat_t *result);
mfloat_t *mat4_identity(mfloat_t *result);
mfloat_t mat4_determinant(mfloat_t *m0);
mfloat_t *mat4_assign(mfloat_t *result, mfloat_t *m0);
mfloat_t *mat4_negative(mfloat_t *result, mfloat_t *m0);
mfloat_t *mat4_transpose(mfloat_t *result, mfloat_t *m0);
mfloat_t *mat4_cofactor(mfloat_t *result, mfloat_t *m0);
mfloat_t *mat4_rotation_x(mfloat_t *result, mfloat_t f);
mfloat_t *mat4_rotation_y(mfloat_t *result, mfloat_t f);
mfloat_t *mat4_rotation_z(mfloat_t *result, mfloat_t f);
mfloat_t *mat4_rotation_axis(mfloat_t *result, mfloat_t *v0, mfloat_t f);
mfloat_t *mat4_rotation_quat(mfloat_t *result, mfloat_t *q0);
mfloat_t *mat4_translation(mfloat_t *result, mfloat_t *m0, mfloat_t *v0);
mfloat_t *mat4_translate(mfloat_t *result, mfloat_t *m0, mfloat_t *v0);
mfloat_t *mat4_scaling(mfloat_t *result, mfloat_t *m0, mfloat_t *v0);
mfloat_t *mat4_scale(mfloat_t *result, mfloat_t *m0, mfloat_t *v0);
mfloat_t *mat4_multiply(mfloat_t *result, mfloat_t *m0, mfloat_t *m1);
mfloat_t *mat4_multiply_f(mfloat_t *result, mfloat_t *m0, mfloat_t f);
mfloat_t *mat4_inverse(mfloat_t *result, mfloat_t *m0);
mfloat_t *mat4_lerp(mfloat_t *result, mfloat_t *m0, mfloat_t *m1, mfloat_t f);
mfloat_t *mat4_look_at(mfloat_t *result, mfloat_t *position, mfloat_t *target, mfloat_t *up);
mfloat_t *mat4_ortho(mfloat_t *result, mfloat_t l, mfloat_t r, mfloat_t b, mfloat_t t, mfloat_t n, mfloat_t f);
mfloat_t *mat4_perspective(mfloat_t *result, mfloat_t fov_y, mfloat_t aspect, mfloat_t n, mfloat_t f);
mfloat_t *mat4_perspective_fov(mfloat_t *result, mfloat_t fov, mfloat_t w, mfloat_t h, mfloat_t n, mfloat_t f);
mfloat_t *mat4_perspective_infinite(mfloat_t *result, mfloat_t fov_y, mfloat_t aspect, mfloat_t n);




_Bool svec2i_is_zero(struct vec2i v0);
_Bool svec2i_is_equal(struct vec2i v0, struct vec2i v1);
struct vec2i svec2i(mint_t x, mint_t y);
struct vec2i svec2i_assign(struct vec2i v0);

struct vec2i svec2i_assign_vec2(struct vec2 v0);

struct vec2i svec2i_zero(void);
struct vec2i svec2i_one(void);
struct vec2i svec2i_sign(struct vec2i v0);
struct vec2i svec2i_add(struct vec2i v0, struct vec2i v1);
struct vec2i svec2i_add_i(struct vec2i v0, mint_t i);
struct vec2i svec2i_subtract(struct vec2i v0, struct vec2i v1);
struct vec2i svec2i_subtract_i(struct vec2i v0, mint_t i);
struct vec2i svec2i_multiply(struct vec2i v0, struct vec2i v1);
struct vec2i svec2i_multiply_i(struct vec2i v0, mint_t i);
struct vec2i svec2i_divide(struct vec2i v0, struct vec2i v1);
struct vec2i svec2i_divide_i(struct vec2i v0, mint_t i);
struct vec2i svec2i_snap(struct vec2i v0, struct vec2i v1);
struct vec2i svec2i_snap_i(struct vec2i v0, mint_t i);
struct vec2i svec2i_negative(struct vec2i v0);
struct vec2i svec2i_abs(struct vec2i v0);
struct vec2i svec2i_max(struct vec2i v0, struct vec2i v1);
struct vec2i svec2i_min(struct vec2i v0, struct vec2i v1);
struct vec2i svec2i_clamp(struct vec2i v0, struct vec2i v1, struct vec2i v2);
struct vec2i svec2i_tangent(struct vec2i v0);
_Bool svec3i_is_zero(struct vec3i v0);
_Bool svec3i_is_equal(struct vec3i v0, struct vec3i v1);
struct vec3i svec3i(mint_t x, mint_t y, mint_t z);
struct vec3i svec3i_assign(struct vec3i v0);

struct vec3i svec3i_assign_vec3(struct vec3 v0);

struct vec3i svec3i_zero(void);
struct vec3i svec3i_one(void);
struct vec3i svec3i_sign(struct vec3i v0);
struct vec3i svec3i_add(struct vec3i v0, struct vec3i v1);
struct vec3i svec3i_add_i(struct vec3i v0, mint_t i);
struct vec3i svec3i_subtract(struct vec3i v0, struct vec3i v1);
struct vec3i svec3i_subtract_i(struct vec3i v0, mint_t i);
struct vec3i svec3i_multiply(struct vec3i v0, struct vec3i v1);
struct vec3i svec3i_multiply_i(struct vec3i v0, mint_t i);
struct vec3i svec3i_divide(struct vec3i v0, struct vec3i v1);
struct vec3i svec3i_divide_i(struct vec3i v0, mint_t i);
struct vec3i svec3i_snap(struct vec3i v0, struct vec3i v1);
struct vec3i svec3i_snap_i(struct vec3i v0, mint_t i);
struct vec3i svec3i_cross(struct vec3i v0, struct vec3i v1);
struct vec3i svec3i_negative(struct vec3i v0);
struct vec3i svec3i_abs(struct vec3i v0);
struct vec3i svec3i_max(struct vec3i v0, struct vec3i v1);
struct vec3i svec3i_min(struct vec3i v0, struct vec3i v1);
struct vec3i svec3i_clamp(struct vec3i v0, struct vec3i v1, struct vec3i v2);
_Bool svec4i_is_zero(struct vec4i v0);
_Bool svec4i_is_equal(struct vec4i v0, struct vec4i v1);
struct vec4i svec4i(mint_t x, mint_t y, mint_t z, mint_t w);
struct vec4i svec4i_assign(struct vec4i v0);

struct vec4i svec4i_assign_vec4(struct vec4 v0);

struct vec4i svec4i_zero(void);
struct vec4i svec4i_one(void);
struct vec4i svec4i_sign(struct vec4i v0);
struct vec4i svec4i_add(struct vec4i v0, struct vec4i v1);
struct vec4i svec4i_add_i(struct vec4i v0, mint_t i);
struct vec4i svec4i_subtract(struct vec4i v0, struct vec4i v1);
struct vec4i svec4i_subtract_i(struct vec4i v0, mint_t i);
struct vec4i svec4i_multiply(struct vec4i v0, struct vec4i v1);
struct vec4i svec4i_multiply_i(struct vec4i v0, mint_t i);
struct vec4i svec4i_divide(struct vec4i v0, struct vec4i v1);
struct vec4i svec4i_divide_i(struct vec4i v0, mint_t i);
struct vec4i svec4i_snap(struct vec4i v0, struct vec4i v1);
struct vec4i svec4i_snap_i(struct vec4i v0, mint_t i);
struct vec4i svec4i_negative(struct vec4i v0);
struct vec4i svec4i_abs(struct vec4i v0);
struct vec4i svec4i_max(struct vec4i v0, struct vec4i v1);
struct vec4i svec4i_min(struct vec4i v0, struct vec4i v1);
struct vec4i svec4i_clamp(struct vec4i v0, struct vec4i v1, struct vec4i v2);


_Bool svec2_is_zero(struct vec2 v0);
_Bool svec2_is_equal(struct vec2 v0, struct vec2 v1);
struct vec2 svec2(mfloat_t x, mfloat_t y);
struct vec2 svec2_assign(struct vec2 v0);

struct vec2 svec2_assign_vec2i(struct vec2i v0);

struct vec2 svec2_zero(void);
struct vec2 svec2_one(void);
struct vec2 svec2_sign(struct vec2 v0);
struct vec2 svec2_add(struct vec2 v0, struct vec2 v1);
struct vec2 svec2_add_f(struct vec2 v0, mfloat_t f);
struct vec2 svec2_subtract(struct vec2 v0, struct vec2 v1);
struct vec2 svec2_subtract_f(struct vec2 v0, mfloat_t f);
struct vec2 svec2_multiply(struct vec2 v0, struct vec2 v1);
struct vec2 svec2_multiply_f(struct vec2 v0, mfloat_t f);
struct vec2 svec2_multiply_mat2(struct vec2 v0, struct mat2 m0);
struct vec2 svec2_divide(struct vec2 v0, struct vec2 v1);
struct vec2 svec2_divide_f(struct vec2 v0, mfloat_t f);
struct vec2 svec2_snap(struct vec2 v0, struct vec2 v1);
struct vec2 svec2_snap_f(struct vec2 v0, mfloat_t f);
struct vec2 svec2_negative(struct vec2 v0);
struct vec2 svec2_abs(struct vec2 v0);
struct vec2 svec2_floor(struct vec2 v0);
struct vec2 svec2_ceil(struct vec2 v0);
struct vec2 svec2_round(struct vec2 v0);
struct vec2 svec2_max(struct vec2 v0, struct vec2 v1);
struct vec2 svec2_min(struct vec2 v0, struct vec2 v1);
struct vec2 svec2_clamp(struct vec2 v0, struct vec2 v1, struct vec2 v2);
struct vec2 svec2_normalize(struct vec2 v0);
mfloat_t svec2_dot(struct vec2 v0, struct vec2 v1);
struct vec2 svec2_project(struct vec2 v0, struct vec2 v1);
struct vec2 svec2_slide(struct vec2 v0, struct vec2 normal);
struct vec2 svec2_reflect(struct vec2 v0, struct vec2 normal);
struct vec2 svec2_tangent(struct vec2 v0);
struct vec2 svec2_rotate(struct vec2 v0, mfloat_t f);
struct vec2 svec2_lerp(struct vec2 v0, struct vec2 v1, mfloat_t f);
struct vec2 svec2_bezier3(struct vec2 v0, struct vec2 v1, struct vec2 v2, mfloat_t f);
struct vec2 svec2_bezier4(struct vec2 v0, struct vec2 v1, struct vec2 v2, struct vec2 v3, mfloat_t f);
mfloat_t svec2_angle(struct vec2 v0);
mfloat_t svec2_length(struct vec2 v0);
mfloat_t svec2_length_squared(struct vec2 v0);
mfloat_t svec2_distance(struct vec2 v0, struct vec2 v1);
mfloat_t svec2_distance_squared(struct vec2 v0, struct vec2 v1);
_Bool svec3_is_zero(struct vec3 v0);
_Bool svec3_is_equal(struct vec3 v0, struct vec3 v1);
struct vec3 svec3(mfloat_t x, mfloat_t y, mfloat_t z);
struct vec3 svec3_assign(struct vec3 v0);

struct vec3 svec3_assign_vec3i(struct vec3i v0);

struct vec3 svec3_zero(void);
struct vec3 svec3_one(void);
struct vec3 svec3_sign(struct vec3 v0);
struct vec3 svec3_add(struct vec3 v0, struct vec3 v1);
struct vec3 svec3_add_f(struct vec3 v0, mfloat_t f);
struct vec3 svec3_subtract(struct vec3 v0, struct vec3 v1);
struct vec3 svec3_subtract_f(struct vec3 v0, mfloat_t f);
struct vec3 svec3_multiply(struct vec3 v0, struct vec3 v1);
struct vec3 svec3_multiply_f(struct vec3 v0, mfloat_t f);
struct vec3 svec3_multiply_mat3(struct vec3 v0, struct mat3 m0);
struct vec3 svec3_divide(struct vec3 v0, struct vec3 v1);
struct vec3 svec3_divide_f(struct vec3 v0, mfloat_t f);
struct vec3 svec3_snap(struct vec3 v0, struct vec3 v1);
struct vec3 svec3_snap_f(struct vec3 v0, mfloat_t f);
struct vec3 svec3_negative(struct vec3 v0);
struct vec3 svec3_abs(struct vec3 v0);
struct vec3 svec3_floor(struct vec3 v0);
struct vec3 svec3_ceil(struct vec3 v0);
struct vec3 svec3_round(struct vec3 v0);
struct vec3 svec3_max(struct vec3 v0, struct vec3 v1);
struct vec3 svec3_min(struct vec3 v0, struct vec3 v1);
struct vec3 svec3_clamp(struct vec3 v0, struct vec3 v1, struct vec3 v2);
struct vec3 svec3_cross(struct vec3 v0, struct vec3 v1);
struct vec3 svec3_normalize(struct vec3 v0);
mfloat_t svec3_dot(struct vec3 v0, struct vec3 v1);
struct vec3 svec3_project(struct vec3 v0, struct vec3 v1);
struct vec3 svec3_slide(struct vec3 v0, struct vec3 normal);
struct vec3 svec3_reflect(struct vec3 v0, struct vec3 normal);
struct vec3 svec3_rotate(struct vec3 v0, struct vec3 ra, mfloat_t f);
struct vec3 svec3_lerp(struct vec3 v0, struct vec3 v1, mfloat_t f);
struct vec3 svec3_bezier3(struct vec3 v0, struct vec3 v1, struct vec3 v2, mfloat_t f);
struct vec3 svec3_bezier4(struct vec3 v0, struct vec3 v1, struct vec3 v2, struct vec3 v3, mfloat_t f);
mfloat_t svec3_length(struct vec3 v0);
mfloat_t svec3_length_squared(struct vec3 v0);
mfloat_t svec3_distance(struct vec3 v0, struct vec3 v1);
mfloat_t svec3_distance_squared(struct vec3 v0, struct vec3 v1);
_Bool svec4_is_zero(struct vec4 v0);
_Bool svec4_is_equal(struct vec4 v0, struct vec4 v1);
struct vec4 svec4(mfloat_t x, mfloat_t y, mfloat_t z, mfloat_t w);
struct vec4 svec4_assign(struct vec4 v0);

struct vec4 svec4_assign_vec4i(struct vec4i v0);

struct vec4 svec4_zero(void);
struct vec4 svec4_one(void);
struct vec4 svec4_sign(struct vec4 v0);
struct vec4 svec4_add(struct vec4 v0, struct vec4 v1);
struct vec4 svec4_add_f(struct vec4 v0, mfloat_t f);
struct vec4 svec4_subtract(struct vec4 v0, struct vec4 v1);
struct vec4 svec4_subtract_f(struct vec4 v0, mfloat_t f);
struct vec4 svec4_multiply(struct vec4 v0, struct vec4 v1);
struct vec4 svec4_multiply_f(struct vec4 v0, mfloat_t f);
struct vec4 svec4_multiply_mat4(struct vec4 v0, struct mat4 m0);
struct vec4 svec4_divide(struct vec4 v0, struct vec4 v1);
struct vec4 svec4_divide_f(struct vec4 v0, mfloat_t f);
struct vec4 svec4_snap(struct vec4 v0, struct vec4 v1);
struct vec4 svec4_snap_f(struct vec4 v0, mfloat_t f);
struct vec4 svec4_negative(struct vec4 v0);
struct vec4 svec4_abs(struct vec4 v0);
struct vec4 svec4_floor(struct vec4 v0);
struct vec4 svec4_ceil(struct vec4 v0);
struct vec4 svec4_round(struct vec4 v0);
struct vec4 svec4_max(struct vec4 v0, struct vec4 v1);
struct vec4 svec4_min(struct vec4 v0, struct vec4 v1);
struct vec4 svec4_clamp(struct vec4 v0, struct vec4 v1, struct vec4 v2);
struct vec4 svec4_normalize(struct vec4 v0);
struct vec4 svec4_lerp(struct vec4 v0, struct vec4 v1, mfloat_t f);
_Bool squat_is_zero(struct quat q0);
_Bool squat_is_equal(struct quat q0, struct quat q1);
struct quat squat(mfloat_t x, mfloat_t y, mfloat_t z, mfloat_t w);
struct quat squat_assign(struct quat q0);
struct quat squat_zero(void);
struct quat squat_null(void);
struct quat squat_multiply(struct quat q0, struct quat q1);
struct quat squat_multiply_f(struct quat q0, mfloat_t f);
struct quat squat_divide(struct quat q0, struct quat q1);
struct quat squat_divide_f(struct quat q0, mfloat_t f);
struct quat squat_negative(struct quat q0);
struct quat squat_conjugate(struct quat q0);
struct quat squat_inverse(struct quat q0);
struct quat squat_normalize(struct quat q0);
mfloat_t squat_dot(struct quat q0, struct quat q1);
struct quat squat_power(struct quat q0, mfloat_t exponent);
struct quat squat_from_axis_angle(struct vec3 v0, mfloat_t angle);
struct quat squat_from_vec3(struct vec3 v0, struct vec3 v1);
struct quat squat_from_mat4(struct mat4 m0);
struct quat squat_lerp(struct quat q0, struct quat q1, mfloat_t f);
struct quat squat_slerp(struct quat q0, struct quat q1, mfloat_t f);
mfloat_t squat_length(struct quat q0);
mfloat_t squat_length_squared(struct quat q0);
mfloat_t squat_angle(struct quat q0, struct quat q1);
struct mat2 smat2(mfloat_t m11, mfloat_t m12, mfloat_t m21, mfloat_t m22);
struct mat2 smat2_zero(void);
struct mat2 smat2_identity(void);
mfloat_t smat2_determinant(struct mat2 m0);
struct mat2 smat2_assign(struct mat2 m0);
struct mat2 smat2_negative(struct mat2 m0);
struct mat2 smat2_transpose(struct mat2 m0);
struct mat2 smat2_cofactor(struct mat2 m0);
struct mat2 smat2_adjugate(struct mat2 m0);
struct mat2 smat2_multiply(struct mat2 m0, struct mat2 m1);
struct mat2 smat2_multiply_f(struct mat2 m0, mfloat_t f);
struct mat2 smat2_inverse(struct mat2 m0);
struct mat2 smat2_scaling(struct vec2 v0);
struct mat2 smat2_scale(struct mat2 m0, struct vec2 v0);
struct mat2 smat2_rotation_z(mfloat_t f);
struct mat2 smat2_lerp(struct mat2 m0, struct mat2 m1, mfloat_t f);
struct mat3 smat3(mfloat_t m11, mfloat_t m12, mfloat_t m13, mfloat_t m21, mfloat_t m22, mfloat_t m23, mfloat_t m31, mfloat_t m32, mfloat_t m33);
struct mat3 smat3_zero(void);
struct mat3 smat3_identity(void);
mfloat_t smat3_determinant(struct mat3 m0);
struct mat3 smat3_assign(struct mat3 m0);
struct mat3 smat3_negative(struct mat3 m0);
struct mat3 smat3_transpose(struct mat3 m0);
struct mat3 smat3_cofactor(struct mat3 m0);
struct mat3 smat3_multiply(struct mat3 m0, struct mat3 m1);
struct mat3 smat3_multiply_f(struct mat3 m0, mfloat_t f);
struct mat3 smat3_inverse(struct mat3 m0);
struct mat3 smat3_scaling(struct vec3 v0);
struct mat3 smat3_scale(struct mat3 m0, struct vec3 v0);
struct mat3 smat3_rotation_x(mfloat_t f);
struct mat3 smat3_rotation_y(mfloat_t f);
struct mat3 smat3_rotation_z(mfloat_t f);
struct mat3 smat3_rotation_axis(struct vec3 v0, mfloat_t f);
struct mat3 smat3_rotation_quat(struct quat q0);
struct mat3 smat3_lerp(struct mat3 m0, struct mat3 m1, mfloat_t f);
struct mat4 smat4(mfloat_t m11, mfloat_t m12, mfloat_t m13, mfloat_t m14, mfloat_t m21, mfloat_t m22, mfloat_t m23, mfloat_t m24, mfloat_t m31, mfloat_t m32, mfloat_t m33, mfloat_t m34, mfloat_t m41, mfloat_t m42, mfloat_t m43, mfloat_t m44);
struct mat4 smat4_zero(void);
struct mat4 smat4_identity(void);
mfloat_t smat4_determinant(struct mat4 m0);
struct mat4 smat4_assign(struct mat4 m0);
struct mat4 smat4_negative(struct mat4 m0);
struct mat4 smat4_transpose(struct mat4 m0);
struct mat4 smat4_cofactor(struct mat4 m0);
struct mat4 smat4_rotation_x(mfloat_t f);
struct mat4 smat4_rotation_y(mfloat_t f);
struct mat4 smat4_rotation_z(mfloat_t f);
struct mat4 smat4_rotation_axis(struct vec3 v0, mfloat_t f);
struct mat4 smat4_rotation_quat(struct quat q0);
struct mat4 smat4_translation(struct mat4 m0, struct vec3 v0);
struct mat4 smat4_translate(struct mat4 m0, struct vec3 v0);
struct mat4 smat4_scaling(struct mat4 m0, struct vec3 v0);
struct mat4 smat4_scale(struct mat4 m0, struct vec3 v0);
struct mat4 smat4_multiply(struct mat4 m0, struct mat4 m1);
struct mat4 smat4_multiply_f(struct mat4 m0, mfloat_t f);
struct mat4 smat4_inverse(struct mat4 m0);
struct mat4 smat4_lerp(struct mat4 m0, struct mat4 m1, mfloat_t f);
struct mat4 smat4_look_at(struct vec3 position, struct vec3 target, struct vec3 up);
struct mat4 smat4_ortho(mfloat_t l, mfloat_t r, mfloat_t b, mfloat_t t, mfloat_t n, mfloat_t f);
struct mat4 smat4_perspective(mfloat_t fov_y, mfloat_t aspect, mfloat_t n, mfloat_t f);
struct mat4 smat4_perspective_fov(mfloat_t fov, mfloat_t w, mfloat_t h, mfloat_t n, mfloat_t f);
struct mat4 smat4_perspective_infinite(mfloat_t fov_y, mfloat_t aspect, mfloat_t n);





_Bool psvec2i_is_zero(struct vec2i *v0);
_Bool psvec2i_is_equal(struct vec2i *v0, struct vec2i *v1);
struct vec2i *psvec2i(struct vec2i *result, mint_t x, mint_t y);
struct vec2i *psvec2i_assign(struct vec2i *result, struct vec2i *v0);

struct vec2i *psvec2i_assign_vec2(struct vec2i *result, struct vec2 *v0);

struct vec2i *psvec2i_zero(struct vec2i *result);
struct vec2i *psvec2i_one(struct vec2i *result);
struct vec2i *psvec2i_sign(struct vec2i *result, struct vec2i *v0);
struct vec2i *psvec2i_add(struct vec2i *result, struct vec2i *v0, struct vec2i *v1);
struct vec2i *psvec2i_add_i(struct vec2i *result, struct vec2i *v0, mint_t i);
struct vec2i *psvec2i_subtract(struct vec2i *result, struct vec2i *v0, struct vec2i *v1);
struct vec2i *psvec2i_subtract_i(struct vec2i *result, struct vec2i *v0, mint_t i);
struct vec2i *psvec2i_multiply(struct vec2i *result, struct vec2i *v0, struct vec2i *v1);
struct vec2i *psvec2i_multiply_i(struct vec2i *result, struct vec2i *v0, mint_t i);
struct vec2i *psvec2i_divide(struct vec2i *result, struct vec2i *v0, struct vec2i *v1);
struct vec2i *psvec2i_divide_i(struct vec2i *result, struct vec2i *v0, mint_t i);
struct vec2i *psvec2i_snap(struct vec2i *result, struct vec2i *v0, struct vec2i *v1);
struct vec2i *psvec2i_snap_i(struct vec2i *result, struct vec2i *v0, mint_t i);
struct vec2i *psvec2i_negative(struct vec2i *result, struct vec2i *v0);
struct vec2i *psvec2i_abs(struct vec2i *result, struct vec2i *v0);
struct vec2i *psvec2i_max(struct vec2i *result, struct vec2i *v0, struct vec2i *v1);
struct vec2i *psvec2i_min(struct vec2i *result, struct vec2i *v0, struct vec2i *v1);
struct vec2i *psvec2i_clamp(struct vec2i *result, struct vec2i *v0, struct vec2i *v1, struct vec2i *v2);
struct vec2i *psvec2i_tangent(struct vec2i *result, struct vec2i *v0);
_Bool psvec3i_is_zero(struct vec3i *v0);
_Bool psvec3i_is_equal(struct vec3i *v0, struct vec3i *v1);
struct vec3i *psvec3i(struct vec3i *result, mint_t x, mint_t y, mint_t z);
struct vec3i *psvec3i_assign(struct vec3i *result, struct vec3i *v0);

struct vec3i *psvec3i_assign_vec3(struct vec3i *result, struct vec3 *v0);

struct vec3i *psvec3i_zero(struct vec3i *result);
struct vec3i *psvec3i_one(struct vec3i *result);
struct vec3i *psvec3i_sign(struct vec3i *result, struct vec3i *v0);
struct vec3i *psvec3i_add(struct vec3i *result, struct vec3i *v0, struct vec3i *v1);
struct vec3i *psvec3i_add_i(struct vec3i *result, struct vec3i *v0, mint_t i);
struct vec3i *psvec3i_subtract(struct vec3i *result, struct vec3i *v0, struct vec3i *v1);
struct vec3i *psvec3i_subtract_i(struct vec3i *result, struct vec3i *v0, mint_t i);
struct vec3i *psvec3i_multiply(struct vec3i *result, struct vec3i *v0, struct vec3i *v1);
struct vec3i *psvec3i_multiply_i(struct vec3i *result, struct vec3i *v0, mint_t i);
struct vec3i *psvec3i_divide(struct vec3i *result, struct vec3i *v0, struct vec3i *v1);
struct vec3i *psvec3i_divide_i(struct vec3i *result, struct vec3i *v0, mint_t i);
struct vec3i *psvec3i_snap(struct vec3i *result, struct vec3i *v0, struct vec3i *v1);
struct vec3i *psvec3i_snap_i(struct vec3i *result, struct vec3i *v0, mint_t i);
struct vec3i *psvec3i_cross(struct vec3i *result, struct vec3i *v0, struct vec3i *v1);
struct vec3i *psvec3i_negative(struct vec3i *result, struct vec3i *v0);
struct vec3i *psvec3i_abs(struct vec3i *result, struct vec3i *v0);
struct vec3i *psvec3i_max(struct vec3i *result, struct vec3i *v0, struct vec3i *v1);
struct vec3i *psvec3i_min(struct vec3i *result, struct vec3i *v0, struct vec3i *v1);
struct vec3i *psvec3i_clamp(struct vec3i *result, struct vec3i *v0, struct vec3i *v1, struct vec3i *v2);
_Bool psvec4i_is_zero(struct vec4i *v0);
_Bool psvec4i_is_equal(struct vec4i *v0, struct vec4i *v1);
struct vec4i *psvec4i(struct vec4i *result, mint_t x, mint_t y, mint_t z, mint_t w);
struct vec4i *psvec4i_assign(struct vec4i *result, struct vec4i *v0);

struct vec4i *psvec4i_assign_vec4(struct vec4i *result, struct vec4 *v0);

struct vec4i *psvec4i_zero(struct vec4i *result);
struct vec4i *psvec4i_one(struct vec4i *result);
struct vec4i *psvec4i_sign(struct vec4i *result, struct vec4i *v0);
struct vec4i *psvec4i_add(struct vec4i *result, struct vec4i *v0, struct vec4i *v1);
struct vec4i *psvec4i_add_i(struct vec4i *result, struct vec4i *v0, mint_t i);
struct vec4i *psvec4i_subtract(struct vec4i *result, struct vec4i *v0, struct vec4i *v1);
struct vec4i *psvec4i_subtract_i(struct vec4i *result, struct vec4i *v0, mint_t i);
struct vec4i *psvec4i_multiply(struct vec4i *result, struct vec4i *v0, struct vec4i *v1);
struct vec4i *psvec4i_multiply_i(struct vec4i *result, struct vec4i *v0, mint_t i);
struct vec4i *psvec4i_divide(struct vec4i *result, struct vec4i *v0, struct vec4i *v1);
struct vec4i *psvec4i_divide_i(struct vec4i *result, struct vec4i *v0, mint_t i);
struct vec4i *psvec4i_snap(struct vec4i *result, struct vec4i *v0, struct vec4i *v1);
struct vec4i *psvec4i_snap_i(struct vec4i *result, struct vec4i *v0, mint_t i);
struct vec4i *psvec4i_negative(struct vec4i *result, struct vec4i *v0);
struct vec4i *psvec4i_abs(struct vec4i *result, struct vec4i *v0);
struct vec4i *psvec4i_max(struct vec4i *result, struct vec4i *v0, struct vec4i *v1);
struct vec4i *psvec4i_min(struct vec4i *result, struct vec4i *v0, struct vec4i *v1);
struct vec4i *psvec4i_clamp(struct vec4i *result, struct vec4i *v0, struct vec4i *v1, struct vec4i *v2);


_Bool psvec2_is_zero(struct vec2 *v0);
_Bool psvec2_is_equal(struct vec2 *v0, struct vec2 *v1);
struct vec2 *psvec2(struct vec2 *result, mfloat_t x, mfloat_t y);
struct vec2 *psvec2_assign(struct vec2 *result, struct vec2 *v0);

struct vec2 *psvec2_assign_vec2i(struct vec2 *result, struct vec2i *v0);

struct vec2 *psvec2_zero(struct vec2 *result);
struct vec2 *psvec2_one(struct vec2 *result);
struct vec2 *psvec2_sign(struct vec2 *result, struct vec2 *v0);
struct vec2 *psvec2_add(struct vec2 *result, struct vec2 *v0, struct vec2 *v1);
struct vec2 *psvec2_add_f(struct vec2 *result, struct vec2 *v0, mfloat_t f);
struct vec2 *psvec2_subtract(struct vec2 *result, struct vec2 *v0, struct vec2 *v1);
struct vec2 *psvec2_subtract_f(struct vec2 *result, struct vec2 *v0, mfloat_t f);
struct vec2 *psvec2_multiply(struct vec2 *result, struct vec2 *v0, struct vec2 *v1);
struct vec2 *psvec2_multiply_f(struct vec2 *result, struct vec2 *v0, mfloat_t f);
struct vec2 *psvec2_multiply_mat2(struct vec2 *result, struct vec2 *v0, struct mat2 *m0);
struct vec2 *psvec2_divide(struct vec2 *result, struct vec2 *v0, struct vec2 *v1);
struct vec2 *psvec2_divide_f(struct vec2 *result, struct vec2 *v0, mfloat_t f);
struct vec2 *psvec2_snap(struct vec2 *result, struct vec2 *v0, struct vec2 *v1);
struct vec2 *psvec2_snap_f(struct vec2 *result, struct vec2 *v0, mfloat_t f);
struct vec2 *psvec2_negative(struct vec2 *result, struct vec2 *v0);
struct vec2 *psvec2_abs(struct vec2 *result, struct vec2 *v0);
struct vec2 *psvec2_floor(struct vec2 *result, struct vec2 *v0);
struct vec2 *psvec2_ceil(struct vec2 *result, struct vec2 *v0);
struct vec2 *psvec2_round(struct vec2 *result, struct vec2 *v0);
struct vec2 *psvec2_max(struct vec2 *result, struct vec2 *v0, struct vec2 *v1);
struct vec2 *psvec2_min(struct vec2 *result, struct vec2 *v0, struct vec2 *v1);
struct vec2 *psvec2_clamp(struct vec2 *result, struct vec2 *v0, struct vec2 *v1, struct vec2 *v2);
struct vec2 *psvec2_normalize(struct vec2 *result, struct vec2 *v0);
mfloat_t psvec2_dot(struct vec2 *v0, struct vec2 *v1);
struct vec2 *psvec2_project(struct vec2 *result, struct vec2 *v0, struct vec2 *v1);
struct vec2 *psvec2_slide(struct vec2 *result, struct vec2 *v0, struct vec2 *normal);
struct vec2 *psvec2_reflect(struct vec2 *result, struct vec2 *v0, struct vec2 *normal);
struct vec2 *psvec2_tangent(struct vec2 *result, struct vec2 *v0);
struct vec2 *psvec2_rotate(struct vec2 *result, struct vec2 *v0, mfloat_t f);
struct vec2 *psvec2_lerp(struct vec2 *result, struct vec2 *v0, struct vec2 *v1, mfloat_t f);
struct vec2 *psvec2_bezier3(struct vec2 *result, struct vec2 *v0, struct vec2 *v1, struct vec2 *v2, mfloat_t f);
struct vec2 *psvec2_bezier4(struct vec2 *result, struct vec2 *v0, struct vec2 *v1, struct vec2 *v2, struct vec2 *v3, mfloat_t f);
mfloat_t psvec2_angle(struct vec2 *v0);
mfloat_t psvec2_length(struct vec2 *v0);
mfloat_t psvec2_length_squared(struct vec2 *v0);
mfloat_t psvec2_distance(struct vec2 *v0, struct vec2 *v1);
mfloat_t psvec2_distance_squared(struct vec2 *v0, struct vec2 *v1);
_Bool psvec3_is_zero(struct vec3 *v0);
_Bool psvec3_is_equal(struct vec3 *v0, struct vec3 *v1);
struct vec3 *psvec3(struct vec3 *result, mfloat_t x, mfloat_t y, mfloat_t z);
struct vec3 *psvec3_assign(struct vec3 *result, struct vec3 *v0);

struct vec3 *psvec3_assign_vec3i(struct vec3 *result, struct vec3i *v0);

struct vec3 *psvec3_zero(struct vec3 *result);
struct vec3 *psvec3_one(struct vec3 *result);
struct vec3 *psvec3_sign(struct vec3 *result, struct vec3 *v0);
struct vec3 *psvec3_add(struct vec3 *result, struct vec3 *v0, struct vec3 *v1);
struct vec3 *psvec3_add_f(struct vec3 *result, struct vec3 *v0, mfloat_t f);
struct vec3 *psvec3_subtract(struct vec3 *result, struct vec3 *v0, struct vec3 *v1);
struct vec3 *psvec3_subtract_f(struct vec3 *result, struct vec3 *v0, mfloat_t f);
struct vec3 *psvec3_multiply(struct vec3 *result, struct vec3 *v0, struct vec3 *v1);
struct vec3 *psvec3_multiply_f(struct vec3 *result, struct vec3 *v0, mfloat_t f);
struct vec3 *psvec3_multiply_mat3(struct vec3 *result, struct vec3 *v0, struct mat3 *m0);
struct vec3 *psvec3_divide(struct vec3 *result, struct vec3 *v0, struct vec3 *v1);
struct vec3 *psvec3_divide_f(struct vec3 *result, struct vec3 *v0, mfloat_t f);
struct vec3 *psvec3_snap(struct vec3 *result, struct vec3 *v0, struct vec3 *v1);
struct vec3 *psvec3_snap_f(struct vec3 *result, struct vec3 *v0, mfloat_t f);
struct vec3 *psvec3_negative(struct vec3 *result, struct vec3 *v0);
struct vec3 *psvec3_abs(struct vec3 *result, struct vec3 *v0);
struct vec3 *psvec3_floor(struct vec3 *result, struct vec3 *v0);
struct vec3 *psvec3_ceil(struct vec3 *result, struct vec3 *v0);
struct vec3 *psvec3_round(struct vec3 *result, struct vec3 *v0);
struct vec3 *psvec3_max(struct vec3 *result, struct vec3 *v0, struct vec3 *v1);
struct vec3 *psvec3_min(struct vec3 *result, struct vec3 *v0, struct vec3 *v1);
struct vec3 *psvec3_clamp(struct vec3 *result, struct vec3 *v0, struct vec3 *v1, struct vec3 *v2);
struct vec3 *psvec3_cross(struct vec3 *result, struct vec3 *v0, struct vec3 *v1);
struct vec3 *psvec3_normalize(struct vec3 *result, struct vec3 *v0);
mfloat_t psvec3_dot(struct vec3 *v0, struct vec3 *v1);
struct vec3 *psvec3_project(struct vec3 *result, struct vec3 *v0, struct vec3 *v1);
struct vec3 *psvec3_slide(struct vec3 *result, struct vec3 *v0, struct vec3 *normal);
struct vec3 *psvec3_reflect(struct vec3 *result, struct vec3 *v0, struct vec3 *normal);
struct vec3 *psvec3_rotate(struct vec3 *result, struct vec3 *v0, struct vec3 *ra, mfloat_t f);
struct vec3 *psvec3_lerp(struct vec3 *result, struct vec3 *v0, struct vec3 *v1, mfloat_t f);
struct vec3 *psvec3_bezier3(struct vec3 *result, struct vec3 *v0, struct vec3 *v1, struct vec3 *v2, mfloat_t f);
struct vec3 *psvec3_bezier4(struct vec3 *result, struct vec3 *v0, struct vec3 *v1, struct vec3 *v2, struct vec3 *v3, mfloat_t f);
mfloat_t psvec3_length(struct vec3 *v0);
mfloat_t psvec3_length_squared(struct vec3 *v0);
mfloat_t psvec3_distance(struct vec3 *v0, struct vec3 *v1);
mfloat_t psvec3_distance_squared(struct vec3 *v0, struct vec3 *v1);
_Bool psvec4_is_zero(struct vec4 *v0);
_Bool psvec4_is_equal(struct vec4 *v0, struct vec4 *v1);
struct vec4 *psvec4(struct vec4 *result, mfloat_t x, mfloat_t y, mfloat_t z, mfloat_t w);
struct vec4 *psvec4_assign(struct vec4 *result, struct vec4 *v0);

struct vec4 *psvec4_assign_vec4i(struct vec4 *result, struct vec4i *v0);

struct vec4 *psvec4_zero(struct vec4 *result);
struct vec4 *psvec4_one(struct vec4 *result);
struct vec4 *psvec4_sign(struct vec4 *result, struct vec4 *v0);
struct vec4 *psvec4_add(struct vec4 *result, struct vec4 *v0, struct vec4 *v1);
struct vec4 *psvec4_add_f(struct vec4 *result, struct vec4 *v0, mfloat_t f);
struct vec4 *psvec4_subtract(struct vec4 *result, struct vec4 *v0, struct vec4 *v1);
struct vec4 *psvec4_subtract_f(struct vec4 *result, struct vec4 *v0, mfloat_t f);
struct vec4 *psvec4_multiply(struct vec4 *result, struct vec4 *v0, struct vec4 *v1);
struct vec4 *psvec4_multiply_f(struct vec4 *result, struct vec4 *v0, mfloat_t f);
struct vec4 *psvec4_multiply_mat4(struct vec4 *result, struct vec4 *v0, struct mat4 *m0);
struct vec4 *psvec4_divide(struct vec4 *result, struct vec4 *v0, struct vec4 *v1);
struct vec4 *psvec4_divide_f(struct vec4 *result, struct vec4 *v0, mfloat_t f);
struct vec4 *psvec4_snap(struct vec4 *result, struct vec4 *v0, struct vec4 *v1);
struct vec4 *psvec4_snap_f(struct vec4 *result, struct vec4 *v0, mfloat_t f);
struct vec4 *psvec4_negative(struct vec4 *result, struct vec4 *v0);
struct vec4 *psvec4_abs(struct vec4 *result, struct vec4 *v0);
struct vec4 *psvec4_floor(struct vec4 *result, struct vec4 *v0);
struct vec4 *psvec4_ceil(struct vec4 *result, struct vec4 *v0);
struct vec4 *psvec4_round(struct vec4 *result, struct vec4 *v0);
struct vec4 *psvec4_max(struct vec4 *result, struct vec4 *v0, struct vec4 *v1);
struct vec4 *psvec4_min(struct vec4 *result, struct vec4 *v0, struct vec4 *v1);
struct vec4 *psvec4_clamp(struct vec4 *result, struct vec4 *v0, struct vec4 *v1, struct vec4 *v2);
struct vec4 *psvec4_normalize(struct vec4 *result, struct vec4 *v0);
struct vec4 *psvec4_lerp(struct vec4 *result, struct vec4 *v0, struct vec4 *v1, mfloat_t f);
_Bool psquat_is_zero(struct quat *q0);
_Bool psquat_is_equal(struct quat *q0, struct quat *q1);
struct quat *psquat(struct quat *result, mfloat_t x, mfloat_t y, mfloat_t z, mfloat_t w);
struct quat *psquat_assign(struct quat *result, struct quat *q0);
struct quat *psquat_zero(struct quat *result);
struct quat *psquat_null(struct quat *result);
struct quat *psquat_multiply(struct quat *result, struct quat *q0, struct quat *q1);
struct quat *psquat_multiply_f(struct quat *result, struct quat *q0, mfloat_t f);
struct quat *psquat_divide(struct quat *result, struct quat *q0, struct quat *q1);
struct quat *psquat_divide_f(struct quat *result, struct quat *q0, mfloat_t f);
struct quat *psquat_negative(struct quat *result, struct quat *q0);
struct quat *psquat_conjugate(struct quat *result, struct quat *q0);
struct quat *psquat_inverse(struct quat *result, struct quat *q0);
struct quat *psquat_normalize(struct quat *result, struct quat *q0);
mfloat_t psquat_dot(struct quat *q0, struct quat *q1);
struct quat *psquat_power(struct quat *result, struct quat *q0, mfloat_t exponent);
struct quat *psquat_from_axis_angle(struct quat *result, struct vec3 *v0, mfloat_t angle);
struct quat *psquat_from_vec3(struct quat *result, struct vec3 *v0, struct vec3 *v1);
struct quat *psquat_from_mat4(struct quat *result, struct mat4 *m0);
struct quat *psquat_lerp(struct quat *result, struct quat *q0, struct quat *q1, mfloat_t f);
struct quat *psquat_slerp(struct quat *result, struct quat *q0, struct quat *q1, mfloat_t f);
mfloat_t psquat_length(struct quat *q0);
mfloat_t psquat_length_squared(struct quat *q0);
mfloat_t psquat_angle(struct quat *q0, struct quat *q1);
struct mat2 *psmat2(struct mat2 *result, mfloat_t m11, mfloat_t m12, mfloat_t m21, mfloat_t m22);
struct mat2 *psmat2_zero(struct mat2 *result);
struct mat2 *psmat2_identity(struct mat2 *result);
mfloat_t psmat2_determinant(struct mat2 *m0);
struct mat2 *psmat2_assign(struct mat2 *result, struct mat2 *m0);
struct mat2 *psmat2_negative(struct mat2 *result, struct mat2 *m0);
struct mat2 *psmat2_transpose(struct mat2 *result, struct mat2 *m0);
struct mat2 *psmat2_cofactor(struct mat2 *result, struct mat2 *m0);
struct mat2 *psmat2_adjugate(struct mat2 *result, struct mat2 *m0);
struct mat2 *psmat2_multiply(struct mat2 *result, struct mat2 *m0, struct mat2 *m1);
struct mat2 *psmat2_multiply_f(struct mat2 *result, struct mat2 *m0, mfloat_t f);
struct mat2 *psmat2_inverse(struct mat2 *result, struct mat2 *m0);
struct mat2 *psmat2_scaling(struct mat2 *result, struct vec2 *v0);
struct mat2 *psmat2_scale(struct mat2 *result, struct mat2 *m0, struct vec2 *v0);
struct mat2 *psmat2_rotation_z(struct mat2 *result, mfloat_t f);
struct mat2 *psmat2_lerp(struct mat2 *result, struct mat2 *m0, struct mat2 *m1, mfloat_t f);
struct mat3 *psmat3(struct mat3 *result, mfloat_t m11, mfloat_t m12, mfloat_t m13, mfloat_t m21, mfloat_t m22, mfloat_t m23, mfloat_t m31, mfloat_t m32, mfloat_t m33);
struct mat3 *psmat3_zero(struct mat3 *result);
struct mat3 *psmat3_identity(struct mat3 *result);
mfloat_t psmat3_determinant(struct mat3 *m0);
struct mat3 *psmat3_assign(struct mat3 *result, struct mat3 *m0);
struct mat3 *psmat3_negative(struct mat3 *result, struct mat3 *m0);
struct mat3 *psmat3_transpose(struct mat3 *result, struct mat3 *m0);
struct mat3 *psmat3_cofactor(struct mat3 *result, struct mat3 *m0);
struct mat3 *psmat3_multiply(struct mat3 *result, struct mat3 *m0, struct mat3 *m1);
struct mat3 *psmat3_multiply_f(struct mat3 *result, struct mat3 *m0, mfloat_t f);
struct mat3 *psmat3_inverse(struct mat3 *result, struct mat3 *m0);
struct mat3 *psmat3_scaling(struct mat3 *result, struct vec3 *v0);
struct mat3 *psmat3_scale(struct mat3 *result, struct mat3 *m0, struct vec3 *v0);
struct mat3 *psmat3_rotation_x(struct mat3 *result, mfloat_t f);
struct mat3 *psmat3_rotation_y(struct mat3 *result, mfloat_t f);
struct mat3 *psmat3_rotation_z(struct mat3 *result, mfloat_t f);
struct mat3 *psmat3_rotation_axis(struct mat3 *result, struct vec3 *v0, mfloat_t f);
struct mat3 *psmat3_rotation_quat(struct mat3 *result, struct quat *q0);
struct mat3 *psmat3_lerp(struct mat3 *result, struct mat3 *m0, struct mat3 *m1, mfloat_t f);
struct mat4 *psmat4(struct mat4 *result, mfloat_t m11, mfloat_t m12, mfloat_t m13, mfloat_t m14, mfloat_t m21, mfloat_t m22, mfloat_t m23, mfloat_t m24, mfloat_t m31, mfloat_t m32, mfloat_t m33, mfloat_t m34, mfloat_t m41, mfloat_t m42, mfloat_t m43, mfloat_t m44);
struct mat4 *psmat4_zero(struct mat4 *result);
struct mat4 *psmat4_identity(struct mat4 *result);
mfloat_t psmat4_determinant(struct mat4 *m0);
struct mat4 *psmat4_assign(struct mat4 *result, struct mat4 *m0);
struct mat4 *psmat4_negative(struct mat4 *result, struct mat4 *m0);
struct mat4 *psmat4_transpose(struct mat4 *result, struct mat4 *m0);
struct mat4 *psmat4_cofactor(struct mat4 *result, struct mat4 *m0);
struct mat4 *psmat4_rotation_x(struct mat4 *result, mfloat_t f);
struct mat4 *psmat4_rotation_y(struct mat4 *result, mfloat_t f);
struct mat4 *psmat4_rotation_z(struct mat4 *result, mfloat_t f);
struct mat4 *psmat4_rotation_axis(struct mat4 *result, struct vec3 *v0, mfloat_t f);
struct mat4 *psmat4_rotation_quat(struct mat4 *result, struct quat *q0);
struct mat4 *psmat4_translation(struct mat4 *result, struct mat4 *m0, struct vec3 *v0);
struct mat4 *psmat4_translate(struct mat4 *result, struct mat4 *m0, struct vec3 *v0);
struct mat4 *psmat4_scaling(struct mat4 *result, struct mat4 *m0, struct vec3 *v0);
struct mat4 *psmat4_scale(struct mat4 *result, struct mat4 *m0, struct vec3 *v0);
struct mat4 *psmat4_multiply(struct mat4 *result, struct mat4 *m0, struct mat4 *m1);
struct mat4 *psmat4_multiply_f(struct mat4 *result, struct mat4 *m0, mfloat_t f);
struct mat4 *psmat4_inverse(struct mat4 *result, struct mat4 *m0);
struct mat4 *psmat4_lerp(struct mat4 *result, struct mat4 *m0, struct mat4 *m1, mfloat_t f);
struct mat4 *psmat4_look_at(struct mat4 *result, struct vec3 *position, struct vec3 *target, struct vec3 *up);
struct mat4 *psmat4_ortho(struct mat4 *result, mfloat_t l, mfloat_t r, mfloat_t b, mfloat_t t, mfloat_t n, mfloat_t f);
struct mat4 *psmat4_perspective(struct mat4 *result, mfloat_t fov_y, mfloat_t aspect, mfloat_t n, mfloat_t f);
struct mat4 *psmat4_perspective_fov(struct mat4 *result, mfloat_t fov, mfloat_t w, mfloat_t h, mfloat_t n, mfloat_t f);
struct mat4 *psmat4_perspective_infinite(struct mat4 *result, mfloat_t fov_y, mfloat_t aspect, mfloat_t n);




mfloat_t quadratic_ease_out(mfloat_t f);
mfloat_t quadratic_ease_in(mfloat_t f);
mfloat_t quadratic_ease_in_out(mfloat_t f);
mfloat_t cubic_ease_out(mfloat_t f);
mfloat_t cubic_ease_in(mfloat_t f);
mfloat_t cubic_ease_in_out(mfloat_t f);
mfloat_t quartic_ease_out(mfloat_t f);
mfloat_t quartic_ease_in(mfloat_t f);
mfloat_t quartic_ease_in_out(mfloat_t f);
mfloat_t quintic_ease_out(mfloat_t f);
mfloat_t quintic_ease_in(mfloat_t f);
mfloat_t quintic_ease_in_out(mfloat_t f);
mfloat_t sine_ease_out(mfloat_t f);
mfloat_t sine_ease_in(mfloat_t f);
mfloat_t sine_ease_in_out(mfloat_t f);
mfloat_t circular_ease_out(mfloat_t f);
mfloat_t circular_ease_in(mfloat_t f);
mfloat_t circular_ease_in_out(mfloat_t f);
mfloat_t exponential_ease_out(mfloat_t f);
mfloat_t exponential_ease_in(mfloat_t f);
mfloat_t exponential_ease_in_out(mfloat_t f);
mfloat_t elastic_ease_out(mfloat_t f);
mfloat_t elastic_ease_in(mfloat_t f);
mfloat_t elastic_ease_in_out(mfloat_t f);
mfloat_t back_ease_out(mfloat_t f);
mfloat_t back_ease_in(mfloat_t f);
mfloat_t back_ease_in_out(mfloat_t f);
mfloat_t bounce_ease_out(mfloat_t f);
mfloat_t bounce_ease_in(mfloat_t f);
mfloat_t bounce_ease_in_out(mfloat_t f);
# 5 "src/intersect.h" 2
# 1 "src/camera.h" 1
# 10 "src/camera.h"
typedef struct camera {
    struct vec3 origin;
    struct vec3 dir;
    struct mat3 c2w;
    size_t hpix;
    size_t vpix;
    float hfov;
    float vfov;
} camera_t;

typedef struct ray {
    struct vec3 origin;
    struct vec3 dir;
} ray_t;



ray_t* new_ray();


ray_t* get_ray_through_pixel(camera_t* cam, size_t x, size_t y, _Bool yes);
# 6 "src/intersect.h" 2






void swap(mfloat_t* a, mfloat_t* b);

mfloat_t intersect(ray_t* r, bvh_t* b);

mfloat_t intersect_box(ray_t* r, bvh_t* b);

mfloat_t intersect_tri(ray_t r, tri_t t);

mfloat_t intersect_kernel(ray_t r, tri_t[100], size_t num_tris);

mfloat_t vec3_dot(mfloat_t *v0, mfloat_t *v1);

mfloat_t *vec3_cross(mfloat_t *result, mfloat_t *v0, mfloat_t *v1);

mfloat_t *vec3_subtract(mfloat_t *result, mfloat_t *v0, mfloat_t *v1);
# 2 "src/intersect.c" 2


extern tri_t* tris;
extern bvh_t *bvh;

void swap(mfloat_t* a, mfloat_t* b) {
    *a=(mfloat_t) (*((uint32_t*) a)^*((uint32_t*)b));
    *b=(mfloat_t) (*((uint32_t*) a)^*((uint32_t*)b));
    *a=(mfloat_t) (*((uint32_t*) a)^*((uint32_t*)b));
}


mfloat_t intersect(ray_t* r, bvh_t* b) {
    volatile mfloat_t left, right, ret;
    mfloat_t small;
    size_t idx = 0;
    left = 0;
    right = 0;
    ret = 18643.0;
    small = ret;

    if (intersect_box(r,b) != 18643.0) {

        if (b->left != ((void*)0)) {
            left = intersect(r, b->left);
            right = intersect(r, b->right);
            return ((left > right) ? right : left);
        }

        else {
            return intersect_kernel(*r, &tris[b->start_index], b->stop_index - b->start_index);

            for (int i=b->start_index; i < b->stop_index; i++) {
                ret = intersect_tri(*r, tris[i]);
                if (ret < small) {
                    idx = i;
                    small = ret;
                }
            }
            return small;
        }
    }
    return 18643.0;
}


mfloat_t max(mfloat_t a, mfloat_t b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

mfloat_t min(mfloat_t a, mfloat_t b) {
    if (a > b) {
        return b;
    }
    else {
        return a;
    }
}

mfloat_t intersect_kernel(ray_t r, tri_t t[100], size_t num_tris) {_ssdm_SpecArrayDimSize(t, 100);

    mfloat_t small = 18643.0;
    mfloat_t ret = 18643.0;
    tri_t* cur = t;
    for (size_t i = 0; i < num_tris; i++) {
        ret = intersect_tri(r, *(cur+i));
        if (ret < small) {
            small = ret;
        }
    }
    return small;

}


mfloat_t intersect_box(ray_t* r, bvh_t* b) {

    mfloat_t tmin = -__builtin_inf();
    mfloat_t tmax = __builtin_inf();
    mfloat_t t1, t2;

    if (r->dir.x != 0.0) {

        t1 = (min(b->corner0[0], b->corner1[0]) - r->origin.x) / r->dir.x;
        t2 = (max(b->corner0[0], b->corner1[0]) - r->origin.x) / r->dir.x;

        tmin = max(tmin, min(t1, t2));
        tmax = min(tmax, max(t1, t2));
    }

    if (r->dir.y != 0.0) {

        t1 = (min(b->corner0[1], b->corner1[1]) - r->origin.y) / r->dir.y;
        t2 = (max(b->corner0[1], b->corner1[1]) - r->origin.y) / r->dir.y;

        tmin = max(tmin, min(t1, t2));
        tmax = min(tmax, max(t1, t2));
    }

    if (r->dir.z != 0.0) {

        t1 = (min(b->corner0[2], b->corner1[2]) - r->origin.z) / r->dir.z;
        t2 = (max(b->corner0[2], b->corner1[2]) - r->origin.z) / r->dir.z;

        tmin = max(tmin, min(t1, t2));
        tmax = min(tmax, max(t1, t2));
    }


    if (tmax < tmin) return 18643.0;

    if (tmin > 0 && tmax > 0) return 18643.0;

    return 18643.0 - 1;

}

mfloat_t intersect_tri(ray_t r, tri_t tri) {_ssdm_SpecArrayDimSize(tri, 3);
    mfloat_t* v0, *v1, *v2;
    v0 = (mfloat_t *) (&tri[0]);
    v1 = (mfloat_t *) (&tri[1]);
    v2 = (mfloat_t *) (&tri[2]);


    mfloat_t s[3];
    vec3_subtract(s, r.origin.v, v0);
    mfloat_t e1[3], e2[3];
    vec3_subtract(e1, v1, v0);
    vec3_subtract(e2, v2, v0);
    mfloat_t e1d[3], se2[3];
    vec3_cross(e1d, e1, r.dir.v);
    vec3_cross(se2, s, e2);
    mfloat_t denom = vec3_dot(e1d, e2);
    mfloat_t uvt[3];
    if (denom != 0) {
        uvt[0] = -1/denom * vec3_dot(se2, r.dir.v);
        uvt[1] = 1/denom * vec3_dot(e1d, s);
        uvt[2] = -1/denom * vec3_dot(se2, e1);
    }
    else {
        uvt[0] = -1;
        uvt[1] = -1;
        uvt[2] = -1;
    }

    if (uvt[0] < 0 || uvt[1] < 0 ||
        uvt[0] > 1 || uvt[1] > 1 ||
        uvt[0] + uvt[1] > 1) {
        return 18643.0;
    }

    if (uvt[2] > 0) {
        return 18643.0;
    }

    return fabsf(uvt[2]);
}

mfloat_t vec3_dot(mfloat_t *v0, mfloat_t *v1)
{
 return v0[0] * v1[0] + v0[1] * v1[1] + v0[2] * v1[2];
}

mfloat_t *vec3_cross(mfloat_t *result, mfloat_t *v0, mfloat_t *v1)
{
 mfloat_t cross[3];
 cross[0] = v0[1] * v1[2] - v0[2] * v1[1];
 cross[1] = v0[2] * v1[0] - v0[0] * v1[2];
 cross[2] = v0[0] * v1[1] - v0[1] * v1[0];
 result[0] = cross[0];
 result[1] = cross[1];
 result[2] = cross[2];
 return result;
}

mfloat_t *vec3_subtract(mfloat_t *result, mfloat_t *v0, mfloat_t *v1)
{
 result[0] = v0[0] - v1[0];


 return result;
}
