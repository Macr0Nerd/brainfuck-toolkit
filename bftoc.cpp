#include <iostream>
#include <fstream>
#include <string>
#include <exception>


int main(int argc, char *argv[]) {
    std::string filename;

    for (int i = 0; i < argc; ++i) {
        std::string tmp(argv[i]);

        if (tmp.size() >= 4 && tmp.substr(tmp.size()-3, 3) == ".bf") {
            filename = tmp;
        }
    }

    std::ifstream inf(filename);

    if (inf.good()) {
        std::string outName;
        char op;

        std::cout << "Enter outfile name (e.g. a.c): ";
        getline(std::cin, outName);

        if (outName.empty()) outName = "a.c";

        std::ofstream of(outName);

        if (of.good()) {
            of << "#include <stdio.h>\n";
            of << "#include <stdlib.h>\n";
            of << "\n";
            of << "int main(int argc, char *argv[]) {\n";
            //of << "setbuf(stdout, NULL);\n";
            of << "char *bfPtr = (char*) calloc (30000, sizeof(char));\n";
            of << "char *freePtr = bfPtr;\n";
            of << "unsigned int cnt = 0;\n";
            of << "\n";

            while (inf >> op) {
                switch (op) {
                    case '>':
                        of << "/* > */ if(cnt != 29999){ ++bfPtr; ++cnt;}\n";
                        break;
                    case '<':
                        of << "/* < */ if(cnt != 0){ --bfPtr; --cnt;}\n";
                        break;
                    case '+':
                        of << "/* + */ ++*bfPtr;\n";
                        break;
                    case '-':
                        of << "/* - */ --*bfPtr;\n";
                        break;
                    case '[':
                        of << "/* [ */ while (*bfPtr != 0){\n";
                        break;
                    case ']':
                        of << "/* ] */ }\n";
                        break;
                    case ',':
                        of << "/* , */ *bfPtr = getchar();\n";
                        break;
                    case '.':
                        of << "/* . */ putchar(*bfPtr); fflush(stdout);\n";
                        break;
                    default:
                        std::cerr << "Unexpected operand!" << std::endl << std::flush;
                        break;
                }
            }

            of << "free(freePtr);\n";
            of << "return 0;\n";
            of << "}";
        }

        std::cout << "File processing has finished!" << std::endl << std::flush;
    } else {
        throw "Unable to open .bf file";
    }
    return 0;
}