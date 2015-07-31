/* lexobjle.c */
ObjToLexEntry *ObjToLexEntryCreate(char *features, LexEntry *le, ThetaRole *theta_roles, ObjToLexEntry *next);
int ObjToLexEntryClearLastused(ObjToLexEntry *ole, Discourse *dc);
Bool FeatureTaskOK(char *features, Obj *task);
void ConToThetaFilled(Obj *obj, int *theta_filled);
void ThetaRoleToThetaFilled(ThetaRole *theta_roles, int *theta_filled);
Bool ThetaRoleMatch(int *theta_filled, ThetaRole *theta_roles, int relaxed);
ObjToLexEntry *ObjToLexEntryGet3(Obj *obj, Obj *value_prop, char *features, char *not_usagefeat, int subcat, int paruniv, int *theta_filled, int pass_two, Discourse *dc);
ObjToLexEntry *ObjToLexEntryGet2(Obj *obj, Obj *value_prop, char *features, char *not_usagefeat, int subcat, int paruniv, int *theta_filled, Discourse *dc);
ObjToLexEntry *ObjToLexEntryGet1B(Obj *obj, Obj *value_prop, char *features, char *not_usagefeat, int subcat, int paruniv, int *theta_filled, Discourse *dc);
ObjToLexEntry *ObjToLexEntryGet1A(Obj *obj, Obj *value_prop, char *features, char *not_usagefeat, int subcat, int paruniv, int *theta_filled, Discourse *dc);
ObjToLexEntry *ObjToLexEntryGet1(Obj *obj, Obj *value_prop, char *features, int subcat, int paruniv, int *theta_filled, Discourse *dc);
LexEntry *ObjToLexEntryGet(Obj *obj, int pos, int paruniv, Discourse *dc);
LexEntryToObj *LexEntryToObjCreate(char *features, Obj *obj, ThetaRole *theta_roles, LexEntryToObj *next);
int StyleToInt(int style);
Float StyleScore(int consider_style, int expected_style);
Float DialectScore(int consider_dialect, int expected_dialect);
Float LexEntryToObjScore(LexEntryToObj *leo, Discourse *dc);
LexEntry *ObjToAbbrev(Obj *obj, int force, Discourse *dc);
void ObjToLexEntryPrint(FILE *stream, ObjToLexEntry *ole);
