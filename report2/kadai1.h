typedef struct kamoku {
  int day;
  int period;
  char* name;
} Kamoku;

extern Kamoku list[];
extern char* youbi[];

void printkamoku(Kamoku *k);
int compkamoku(Kamoku* p, Kamoku* q);
Kamoku* find(int day, int period, Kamoku* list);
void printtable(Kamoku* l);


