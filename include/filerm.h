#include <stdbool.h>

typedef struct
{
    bool help;
    bool recursively;
    bool hidden;
    char* pattern;
    char* directory;
}
parameters;

void print_help(void);
void exit_on_syntax_error(void);


const char* help = R"(filerm.py - utility that removes only files but does not affect directories

usage:
    python3 filerm.py [-rhi] [-p PATTERN] [DIRECTORY]

    DIRECTORY is "./" by default

flags:
    -r, --recursively
        remove files from all child directories

    -h, --help
        print this help message

    -i, --hidden
        affect hidden files (remove files that begin with '.')

    -p, --pattern
        simple pattern that can match part of file name or the whole file name,
        for example pattern "[a-z, A-Z, 0-9]*.jpeg" will affect only files that end with ".jpeg",
        and pattern "non_important_file.txt" will affect only files named "non_important_file.txt"
)";
