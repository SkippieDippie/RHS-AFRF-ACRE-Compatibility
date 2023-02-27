#define QUOTE(var) #var

#define DOUBLES(var1,var2) var1##_##var2

#define TRIPLES(var1,var2,var3) var1##_##var2##_##var3

#define QUADRUPLES(var1,var2,var3,var4) var1##_##var2##_##var3##_##var4

#if __has_include("\z\greenmag\addons\main\script_component.hpp")
#define GREENMAG_LOADED 1
#else
#define GREENMAG_LOADED 0
#endif

#if __has_include("\rhsafrf\addons\rhs_main\script_component.hpp")
#define RHS_AFRF_LOADED 1
#else
#define RHS_AFRF_LOADED 0
#endif

#if __has_include("\rhsusf\addons\rhsusf_main\script_component.hpp")
#define RHS_USAF_LOADED 1
#else
#define RHS_USAF_LOADED 0
#endif
