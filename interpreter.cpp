#include <iostream>
#include <fstream>
#include <string>
#include <exception>
#include <stack>

#define HEAP_SIZE 30000

std::string loop;
std::stack<std::string> stack;
bool looper = false;

void opParse(const char &c, char **p);

int main(int argc, char *argv[]) {
    setbuf(stdout, NULL);

    std::string filename;
    char op;
    char * bfPtr;
    bfPtr = new char [HEAP_SIZE];

    for (int i = 0; i < argc; ++i) {
        std::string tmp(argv[i]);

        if(tmp.substr(tmp.size()-3, 3) == ".bf"){
            filename = tmp;
        }
    }

    std::ifstream inf(filename);

    if(inf.good()) {
        while (inf >> op) {
            opParse(op, &bfPtr);
        }
    }

    putchar(*bfPtr);

    inf.close();

    return 0;
}

void opParse(const char &c, char **p) {
southpark:
    if (looper) loop.push_back(c);

    switch(c){
        case '>':
            ++*p;
            break;
        case '<':
            --*p;
            break;
        case '+':
            ++**p;
            break;
        case '-':
            --**p;
            break;
        case '[':
            looper = true;
            stack.push(loop);
            loop.clear();
            break;
        case ']':
            if (looper) {
                looper = false;

                while (**p) {
                    for (char i : loop) {
                        opParse(i, &*p);
                    }
                }

                loop.clear();
                loop = stack.top();
                stack.pop();
                break;
            } else {
                break;
            }
        case ',':
            std::cin >> **p;
            break;
        case '.':
            putchar(**p);
            break;
        default:
            std::cerr << "Non-valid operation!" << std::endl << std::flush;
            break;
    }
}