#include "_Log_Class.h"

Log::Log(const double _InputAm, long long _InputCard, ExpDate _InputDate, std::string _cInput):_SPENT_AMOUNT(_InputAm)
{
    _cardNum = _InputCard;
    _spendingDate = _InputDate;
    _category = _cInput;
}

void Log::print()
{
    std::cout << "Spent Amount: " << _SPENT_AMOUNT << std::endl << " from card: " << _cardNum << std::endl << _spendingDate << "\t" << _category << std::endl;
}

long long Log::getNum()
{
    return _cardNum;
}

double Log::getAmount()
{
    return _SPENT_AMOUNT;
}

ExpDate Log::getDate()
{
    return _spendingDate;
}

std::string Log::getCat()
{
    return _category;
}


void Logs::sortLogs()
{
    for (auto i = 0; i < _logs.size() - 1; i++) {

        bool swapped = 0;

        for (auto j = 0; j < _logs.size() - i - 1; j++) {

            if (_logs[j]->getAmount() < _logs[j + 1]->getAmount()) {

                Log* temp = _logs[j];
                _logs[j] = _logs[j + 1];
                _logs[j + 1] = temp;

                swapped = 1;
            }
        }

        if (!swapped) {

            break;
        }
    }
}

Logs::Logs(const Logs &_InputLogs)
{
    this->_logs = _InputLogs._logs;
}

Log *Logs::getLog(size_t idx)
{
    return _logs.at(idx);
}

size_t Logs::getLogsSize()
{
    return _logs.size();
}

void Logs::printLogs()
{
    for (auto i = 0; i < _logs.size(); i++) {

        std::cout << "==============" << std::endl;
        _logs[i]->print();
        std::cout << "==============" << std::endl;
    }
}

void Logs::pushLog(Log* _InputLog)
{
    _logs.push_back(_InputLog);
}

void Logs::getDayRate(u_short _InputDay)
{
    if (30 < _InputDay || 0 > _InputDay) {

        std::cout << "Invalid Day" << std::endl;

        return;
    }

    sortLogs();

    std::cout << "Top 3 by the " << _InputDay << std::endl;

    for (auto i = _logs.begin(); i != _logs.end(); i++) {
        
    }
}

void Logs::getMonthRate(u_short _InputMonth)
{
    if (12 < _InputMonth || 0 > _InputMonth) {

        std::cout << "Invalid Month" << std::endl;

        return;
    }

    sortLogs();

    std::cout << "Top 3 by the " << _InputMonth << ": " << std::endl;

    for (auto i = 0; i < 3; i++) {

        std::cout << "===" << i + 1 << "===" << std::endl;

        if (_logs[i]->getDate()._month == _InputMonth) {

            _logs[i]->print();
        }
    }
}

void Logs::getDayCatRate(u_short _InputDay, std::string _cInput)
{
    if (30 < _InputDay || 0 > _InputDay) {

        std::cout << "Invalid Day" << std::endl;

        return;
    }

    sortLogs();

    std::cout << "Top 3 by the " << _InputDay << " and " << _cInput << std::endl;

    for (auto i = 0; i < 3;i++) {

        std::cout << "===" << i + 1 << "===" << std::endl;

        if (_logs[i]->getDate()._day == _InputDay && _logs[i]->getCat() == _cInput) {

            _logs[i]->print();
        }
    }
}

void Logs::getMonthCatRate(u_short _InputMonth, std::string _cInput)
{
    if (12 < _InputMonth || 0 > _InputMonth) {

        std::cout << "Invalid Month" << std::endl;

        return;
    }

    sortLogs();

    std::cout << "Top 3 by the " << _InputMonth << " and "<< _cInput << std::endl;

    for (auto i = 0; i < 3; i++) {

        std::cout << "===" << i + 1 << "===" << std::endl;

        if (_logs[i]->getDate()._month == _InputMonth && _logs[i]->getCat() == _cInput) {

            _logs[i]->print();
        }
    }
}
