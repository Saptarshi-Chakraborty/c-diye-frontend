#ifndef PRG3_C
#define PRG3_C

#include "Prg2.c"

// Enum to tag the type
enum Type {
    HTML_TYPE,
    TEXTBOX_TYPE,
};

// Union to hold any of the struct types
union Data {
    HTML html;
    TEXTBOX textbox;
};

// Struct to hold the union and its type tag
struct TaggedData {
    enum Type type;
    union Data data;
};

#endif // PRG3_C
