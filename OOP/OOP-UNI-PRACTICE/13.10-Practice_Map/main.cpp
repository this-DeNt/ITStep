#include <iostream>
#include <map>
#include <string>
#include <cstring>

void add(std::map<int, std::string>* _InputMap, std::string _InputWord, size_t* _InputKC);
void del(std::map<int, std::string>* _InputMap, int _InputKey, size_t* _InputKC);
int search(std::map<int, std::string>* _InputMap, size_t* _InputKC, std::string _InputWord);
void redact(std::map<int, std::string>* _InputMap, size_t* _InputKC, int _InputKey, std::string _InputWord);
int menu();
void sMenu();
typedef std::pair<int, std::string> newPair;

int main(int argc, char* argv[]) {

    std::map<int, std::string> dict;
    size_t keyCount = 0;

    sMenu();
}

void add(std::                             map<int, std::string> *_InputMap, std::string _InputWord, size_t* _InputKC)
{
    ++*(_InputKC);
    _InputMap->insert(std::pair<int, std::string>(*(_InputKC), _InputWord));
}

void del(std::map<int, std::string> *_InputMap, int _InputKey, size_t* _InputKC)
{
    _InputMap->erase(_InputMap->find(_InputKey));
    --*(_InputKC);
}

int search(std::map<int, std::string> *_InputMap, size_t *_InputKC, std::string _InputWord)
{
    for (auto i = _InputMap->begin(); i != _InputMap->end(); i++) {

        if (i->second == _InputWord) {

            return i->first;
        }
    }

    return -1;
}

void redact(std::map<int, std::string> *_InputMap, size_t *_InputKC, int _InputKey, std::string _InputWord)
{
    for (auto i = _InputMap->begin(); i != _InputMap->end(); i++) {

        if (i->first == _InputKey) {

            i->second = _InputWord;
        }
    }
}

int menu()
{
    std::cout << "Choice: " << std::endl << "1. Add" << std::endl << "2. Del" << std::endl << "3. Redact" << std::endl << "4. Search " << std::endl << "> ";
    int i;
    std::cin >> i;

    return i;
}

void sMenu()
{
    switch(menu()) {

        case 1:

            //add();
            break;

        case 2:

            //del();
            break;

        case 3:

            //redact();
            break;

        case 4:

            //search();
            break;

        default:

            break;
    }
}
