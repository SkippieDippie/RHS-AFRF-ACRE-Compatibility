#define QUOTE(var) #var

#define DOUBLES(var1,var2) var1##_##var2

#define TRIPLES(var1,var2,var3) var1##_##var2##_##var3

#define QUADRUPLES(var1,var2,var3,var4) var1##_##var2##_##var3##_##var4

#define AMMO_CLASS(CLNAME) DOUBLES(CVO_greenmag_ammo,CLNAME)
#define QAMMO_CLASS(CLNAME) QUOTE(AMMO_CLASS(CLNAME))

#define BELT_CLASS(CLNAME) DOUBLES(CVO_greenmag_beltlinked,CLNAME)
#define QBELT_CLASS(CLNAME) QUOTE(BELT_CLASS(CLNAME))

#define CESTRING(CLNAME) QUOTE(DOUBLES($STR_CVO_greenmag,CLNAME))
#define CESTRING(PREFIX,CLNAME) QUOTE(TRIPLES($STR_CVO_greenmag,PREFIX,CLNAME))
#define CESTRING(PREFIX,CLNAME,POSTFIX) QUOTE(QUADRUPLES($STR_CVO_greenmag,PREFIX,CLNAME,POSTFIX))

#define LSTRING(LNAME) localize QUOTE(DOUBLES(STR_CVO_greenmag,LNAME))
