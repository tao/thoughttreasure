/* repobjl.c */
void ObjListInit(void);
ObjList *ObjListCreate(Obj *obj, ObjList *next);
ObjList *ObjListCreateString(char *s, ObjList *next);
ObjListList *ObjListListCreate(ObjList *objs, ObjListList *next);
ObjList *ObjListCreateSP(Obj *obj, Float score, LexEntryToObj *leo, PNode *pn, Anaphor *anaphors, ObjList *next);
ObjList *ObjListCreateSPFrom(Obj *obj, PNode *pn, ObjList *p, ObjList *next);
ObjList *ObjListCreateSPCombine(Obj *obj, PNode *pn, ObjList *p, ObjList *q, ObjList *next);
ObjList *ObjListCreateShort(Obj *obj, ObjList *next);
void ObjListFree(ObjList *objs);
void ObjListFreeObjs(ObjList *objs);
void ObjListListFree(ObjList *objs);
void ObjListFreePNodes(ObjList *objs);
void ObjListFreeFirst(ObjList *objs);
ObjList *ObjListCopy(ObjList *objs);
ObjList *ObjListReverse(ObjList *objs);
ObjList *ObjListSubtractSimilar(ObjList *objs1, ObjList *objs2);
ObjList *ObjListReverseDest(ObjList *objs);
ObjList *ObjListCollectRels(ObjList *objs, Obj *rel);
ObjList *ObjListReplicateNTimes(ObjList *objs, int n);
ObjList *ObjListReplicateNTimesAnaphors(ObjList *objs, int n);
Obj *ObjListHead(ObjList *objs, Obj *def);
ObjList *ObjListLast(ObjList *objs);
int ObjListLen(ObjList *objs);
Bool ObjListIsLengthOne(ObjList *objs);
int ObjListIsOK(ObjList *objs);
Bool ObjListIn(Obj *obj, ObjList *objs);
Obj *ObjListIth(ObjList *objs, int i);
Obj *ObjListMostRecent(ObjList *objs);
Bool ObjList_AndISA(Obj *anc, ObjList *des);
ObjList *ObjListCommonAncestors1(Obj *obj1, ObjList *objs2, int depth, int maxdepth, ObjList *r);
ObjList *ObjListCommonAncestors(ObjList *objs);
Obj *ObjListCommonAncestor(ObjList *objs);
Obj *ObjListRelFind(ObjList *objs, Obj *rel);
Bool ObjListInDeep(ObjList *objs, Obj *obj);
Bool ObjListISADeep(Obj *anc, ObjList *desc);
ObjListList *ObjListListCartesianProduct(ObjListList *old, ObjList *new);
ObjList *ObjListListISACondenseDest(ObjList *objs);
Obj *ObjListFindRelation(Obj *class, ObjList *props, Obj **rel, Obj **of_obj, Float *weight, int *iobji);
Obj *ObjListFindGenitive(ObjList *props);
ObjList *ObjListEnsureProductOfDest(ObjList *objs, Obj *brand);
Bool ObjListNonEmpty(ObjList *p);
Obj *ObjListRandomElemFree(ObjList *objs);
ObjList *ObjListRandomize(ObjList *objs);
ObjListList *ObjListPartition(ObjList *objs);
ObjList *ObjListAppend(ObjList *objs1, ObjList *objs2);
ObjList *ObjListAppendNonequalSP(ObjList *objs1, ObjList *objs2, PNode *pn, Float pn_score);
void ObjListSetPNodeSP(ObjList *objs, PNode *pn);
void ObjListSetScoreSP(ObjList *objs, Float score);
ObjList *ObjListAppendNonsimilar(ObjList *objs1, ObjList *objs2);
ObjList *ObjListAppendNonequal(ObjList *objs1, ObjList *objs2);
ObjList *ObjListUniquify(ObjList *objs);
ObjList *ObjListTenseAddSP(ObjList *objs, Obj *tense);
ObjList *ObjListWrap(ObjList *objs, Obj *wrap);
ObjList *ObjListUniquifyDest(ObjList *objs);
ObjList *ObjListAddIfNotIn(ObjList *objs, Obj *obj);
ObjList *ObjListAddIfNotInObjList(ObjList *objs, ObjList *objs1);
ObjList *ObjListAddIfSimilarNotIn(ObjList *objs, Obj *obj);
ObjList *ObjListRemove(ObjList *objs, Obj *obj);
ObjList *ObjListIncrement(ObjList *objs, Obj *obj);
void ObjListISACount(ObjList *anc, ObjList *des);
void ObjListListISACount(ObjListList *anc, ObjList *des);
void ObjListAttributeCount(Ts *ts, TsRange *tsr, ObjList *attrs, ObjList *des);
void ObjListListAttributeCount(Ts *ts, TsRange *tsr, ObjListList *anc, ObjList *des);
Obj *ObjListMax(ObjList *objs, int *max_n);
int ObjListSum(ObjList *objs);
Float ObjListAvg(ObjList *objs);
Float ObjListVariance(ObjList *objs);
Float ObjListSd(ObjList *objs);
Float ObjListCutScore(ObjList *cut);
ObjList *ObjListListBestCut(ObjListList *cut);
void ObjListSetTsRange(ObjList *objs, TsRange *tsr);
ObjList *ObjListAppendDestructive(ObjList *objs1, ObjList *objs2);
Anaphor *ObjListSPAnaphorAppend(ObjList *objs);
ObjList *ObjListRemoveMoreGeneral(ObjList *objs, Obj *obj);
ObjList *ObjListRemoveLessGeneralISA(ObjList *objs);
ObjList *ObjListRemoveInDeep(ObjList *objs, Obj *obj);
ObjList *ObjListUniquifySpecSP(ObjList *objs);
ObjList *ObjListUniquifySpecDestSP(ObjList *objs);
ObjList *ObjListAppendNonsimilarSP(ObjList *objs1, ObjList *objs2);
ObjList *ObjListUniquifyDestSP(ObjList *objs);
Float ObjListSPScoreCombine(ObjList *objs);
void ObjListSPScoreCombineWith(ObjList *objs, Float score);
ObjList *ObjListMapAdd(ObjList *map, Obj *from, Obj *to);
Obj *ObjListMapLookup(ObjList *map, Obj *from);
Obj *ObjListMapLookupInv(ObjList *map, Obj *to);
void ObjListMapPrint(FILE *stream, ObjList *map);
Bool ObjListSimilarIn(Obj *obj, ObjList *objs);
Bool ObjListSimilar(ObjList *objs1, ObjList *objs2);
Obj **ObjListToArray(ObjList *objs, size_t *numelem, size_t *size);
ObjList *ObjListArrayToList(Obj **arr, size_t numelem);
ObjList *ObjListSort(ObjList *objs, int (*compar)(const void *, const void *));
int ObjStartTsGT(const void *obj1, const void *obj2);
ObjList *ObjListSortByStartTs(ObjList *objs);
int ObjStartTsrGT(const void *obj1, const void *obj2);
ObjList *ObjListSortByTsRange(ObjList *objs);
Float ObjListScoreMax(ObjList *objs);
ObjList *ObjListScoreSortPrune1(ObjList *objs, int maxlen);
ObjList *ObjListScoreSortPrune(ObjList *objs, int maxlen);
Obj *ObjListScoreHighest(ObjList *objs);
void SPPrint(FILE *stream, SP *sp);
void SPInit(SP *sp);
void ObjListPrint1(FILE *stream, ObjList *objs, int show_tsr, int show_count, int show_score, int show_sp);
void ObjListPrint(FILE *stream, ObjList *objs);
void ObjListListPrint(FILE *stream, ObjListList *objs, int show_tsr, int show_count, int show_score);
void ObjListPrintSpace(FILE *stream, ObjList *objs, int show_tsr);
void ObjListPrintNames(FILE *stream, ObjList *objs);
void ObjListPrettyPrint1(FILE *stream, ObjList *objs, int show_tsr, int show_addr, int indicate_pn, int html);
void ObjListPrettyPrint(FILE *stream, ObjList *objs);
