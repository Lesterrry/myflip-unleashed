#include "random_name.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <furi.h>

void set_random_name(char* name, uint8_t max_name_size) {
    const char* prefix[] = {
        "fuzzy",
        "fluffy",
        "cute",
        "liquid",
        "unknown",
        "anon",
        "thick",
        "horny",
        "my",
        "your",
        "leaky",
        "ultra",
        "possessed",
        "abnoxious",
        "disgusting",
        "random",
        "strange",
        "tasty",
        "fried",
        "explosive",
        "hot",
    };

    const char* suffix[] = {
        "amogus",
        "minion",
        "tail",
        "fox",
        "design",
        "flip",
        "fin",
        "dog",
        "puppy",
        "pager",
        "laptop",
        "pda",
        "toilet",
        "diarrhea",
        "gore",
        "salad",
        "door",
        "thing",
        "bolt",
        "mom",
        "slave",
        "monkey",
        "salad",
        "cabbage",
        "sausage",
    };

    uint8_t prefix_i = rand() % COUNT_OF(prefix);
    uint8_t suffix_i = rand() % COUNT_OF(suffix);

    snprintf(name, max_name_size, "%s_%s", prefix[prefix_i], suffix[suffix_i]);
    // Set first symbol to upper case
    name[0] = name[0] - 0x20;
}