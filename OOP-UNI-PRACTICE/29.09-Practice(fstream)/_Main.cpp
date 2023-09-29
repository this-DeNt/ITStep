#include "framework.h"

int main(int argc, char* argv[]) {

    std::ifstream _htmlFile("index.html", std::ios::in);

    if (!_htmlFile.is_open()) {

        return -1;
    }

    size_t _ClosingCount = 0;
    size_t _OpeningCount = 0;
    char _ReadCh = 0;

    do {

        _htmlFile.get(_ReadCh);

        if (_ReadCh == '<') {

            ++_OpeningCount;
        }
        if (_ReadCh == '>') {

            ++_ClosingCount;
        }

    } while(!_htmlFile.eof());

    if (_ClosingCount == _OpeningCount) {

        std::cout << "File is correct" << std::endl;
    }

    if (_ClosingCount != _OpeningCount) {

        std::cout << (((_ClosingCount - _OpeningCount) < 0) ? ((_ClosingCount - _OpeningCount) * (-1)) : (_ClosingCount - _OpeningCount)) << std::endl;
    }

    _htmlFile.close();

}