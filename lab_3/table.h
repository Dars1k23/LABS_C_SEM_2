#ifndef TABLE_H
#define TABLE_H

typedef char* KeyType;
typedef unsigned int InfoType;
typedef unsigned int IndexType;

typedef struct KeySpace{
    Keytype key;
    InfoType *info;
    struct KeySpace *next;

} KeySpace;

typedef struct Table{
    KeySpace *head;
    IndexType csize;
};

Table *init_table();
TableStatus table_insert(Table *table, const char *key, InfoType value);
TableStatus table_remove(Table *table, const char *key);
TableStatus table_search(const Table *table, const char *key, **KeySpace result_copy);
TableStatus table_search_range(const Table *table, const char *key1, const char *key2, Table **result_table);
TableStatus table_import(Table *table, const char *filename);
void table_free(Table *table);
void keyspace_free(KeySpace *head);

#endif
