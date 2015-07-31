/* lexalgm.c */
LexEntry *AlgMorphInflectWord(char *word, int lang, int pos, char *features, HashTable *ht);
void AlgMorphGetRoot(char *word, int gender, int number, int pos, int lang, char *root);
int AlgMorphMap(char *in, int len, char *from, char *to, char *out);
void AlgMorphGetEnglishVerbRoot(char *infl, char *root);
void AlgMorphGetEnglishNounRoot(char *infl, char *root);
void AlgMorphGetFrenchAdjNounRoot(char *infl, char *root);
void AlgMorphGetFrenchVerbRoot(char *infl, char *root);
void AlgMorphRoot(char *root, char *features, int gender, int pos, int lang);
void AlgMorphTool(void);
void AlgMorphFrench(void);
void AlgMorphFrenchVerbUi(FILE *stream);
int AlgMorphGuessConj(char *inf, char *stem_result);
void AlgMorphFrenchVerbPrint(FILE *stream, char *inf);
void AlgMorphFrenchVerbPrint1(FILE *stream, char *stem, int conj, int tense, int mood);
void AlgMorphFrenchVerbPrint2(FILE *stream, char *stem, int conj, int tense, int mood, int person, int number, int gender);
void AlgMorphFrenchVerb(char *stem, int conj, int tense, int mood, int person, int number, int gender, char *result);
void AlgMorphFrenchAdjUi(FILE *stream);
void AlgMorphFrenchAdjNounPrint(FILE *stream, char *stem, int pos);
void AlgMorphFrenchAdjNounPrint1(FILE *stream, char *stem, int conj, int gender, int number, int pos);
void AlgMorphAdjNounConjMsg(FILE *stream);
void AlgMorphFrenchAdjNoun(char *stem, int conj, int gender, int number, char *result);
void AlgMorphFrenchNounUi(FILE *stream);
void AlgMorphFrenchNounPrint(FILE *stream, char *stem, int gender);
void AlgMorphEnglish(void);
void AlgMorphEnglishVerbUi(FILE *stream);
void AlgMorphEnglishVerbPrint(FILE *stream, char *stem);
void AlgMorphEnglishVerbPrint1(FILE *stream, char *stem, int tense, int mood, int person, int number);
void AlgMorphEnglishVerb(char *stem, int tense, int mood, int person, int number, char *result);
void AlgMorphEnglishNounUi(FILE *stream);
void AlgMorphEnglishNounPrint(FILE *stream, char *stem);
