/* reptrip.c */
TripLeg *TripLegCreate(Bool start, Obj *action, Obj *driver, Obj *transporter, Obj *script, Obj *grid, Obj *from, Obj *to, Obj *wormhole, GridSubspace *path, Ts *depart, Ts *arrive, Obj *cost, TripLeg *next, Bool print);
void TripLegFree(TripLeg *tl);
TripLeg *TripLegLast(TripLeg *legs);
TripLeg *TripLegAppend(TripLeg *tl1, TripLeg *tl2);
TripLeg *TripLegCopyAll(TripLeg *tl);
TripLeg *TripLegNextSegment(TripLeg *tl);
void TripLegPrint(FILE *stream, TripLeg *tl);
void TripLegShortPrint(FILE *stream, TripLeg *tl);
void TripLegPrintAll(FILE *stream, TripLeg *tl);
Trip *TripCreate(TripLeg *legs, Obj *cost, Ts *depart, Ts *arrive, Trip *next);
void TripFree(Trip *tr);
Obj *FinanceAdd(Obj *a1, Obj *a2);
Trip *TripAppendEach(Trip *head, Trip *tails, Trip *r);
void TripPrint(FILE *stream, Trip *tr);
void TripPrintAll(FILE *stream, Trip *tr);
Bool Trip3(int leave_immed, Obj *actor, Obj *obj1, Obj *obj2, Ts *leave_after, Ts *arrive_before, Obj *polity1, Obj *grid1, GridCoord row1, GridCoord col1, Obj *polity2, Obj *grid2, GridCoord row2, GridCoord col2, int drive_ok, Trip *in_tr, Trip **out_tr);
Bool Trip2(int leave_immed, Obj *actor, Obj *obj1, Obj *obj2, Ts *leave_after, Ts *arrive_before, Obj *polity1, Obj *grid1, GridCoord row1, GridCoord col1, int drive_ok, Trip *in_tr, Trip **out_tr);
Bool Trip1(int leave_immed, Obj *actor, Obj *obj1, Obj *obj2, Ts *leave_after, Ts *arrive_before, int drive_ok, Trip *in_tr, Trip **out_tr);
Trip *TripFind(Obj *actor, Obj *obj1, Obj *obj2, Ts *leave_after, Ts *arrive_before);
Bool TripGridTraverse(int leave_immed, Obj *action, Ts *sched_arrive, Obj *actor, Obj *driver, Obj *transporter, Obj *script, Obj *prop, Obj *obj1, Obj *obj2, Ts *leave_after, Ts *arrive_before, Obj *polity1, Obj *grid1, GridCoord row1, GridCoord col1, Obj *polity2, Obj *grid2, GridCoord row2, GridCoord col2, Obj *cost, Trip *in_tr, Trip **out_tr);
TripLeg *TripGridTraverse1(Bool start, Obj *action, Obj *prop, Obj *actor, Obj *driver, Obj *transporter, Obj *script, Obj *obj1, Obj *obj2, Obj *grid, GridCoord row1, GridCoord col1, GridCoord row2, GridCoord col2, Float speed, Obj *cost, Ts *depart);
Bool TripDrive(Obj *actor, Obj *obj1, Obj *obj2, Ts *leave_after, Ts *arrive_before, Obj *polity1, Obj *grid1, GridCoord row1, GridCoord col1, Obj *polity2, Obj *grid2, GridCoord row2, GridCoord col2, Trip *in_tr, Trip **out_tr);
Bool TripGetDepArr(Obj *script, Obj *prop, Ts *leave_after, Ts *arrive_before, Dur *checkdurp, Ts *checkin, Ts *depart, Ts *arrive);
Bool TripTransport1(Obj *script, Obj *prop, Obj *traversal_action, Obj *t1, Obj *t2, Obj *polity_t1, Obj *grid_t1, GridCoord row_t1, GridCoord col_t1, Obj *able, Obj *trip_class, Obj *actor, Obj *obj1, Obj *obj2, Ts *leave_after, Ts *arrive_before, Obj *polity1, Obj *grid1, GridCoord row1, GridCoord col1, Obj *polity2, Obj *grid2, GridCoord row2, GridCoord col2, int drive_ok, Trip *in_tr, Trip **out_tr);
Bool TripTransport(Obj *trip_class, Obj *actor, Obj *obj1, Obj *obj2, Ts *leave_after, Ts *arrive_before, Obj *polity1, Obj *grid1, GridCoord row1, GridCoord col1, Obj *polity2, Obj *grid2, GridCoord row2, GridCoord col2, int drive_ok, Trip *in_tr, Trip **out_tr);
