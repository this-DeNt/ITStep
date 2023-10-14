#include "_Log_Class.h"

Log::Log(double _InputAm, long long _InputCard, ExpDate _InputDate, std::string _cInput):_SPENT_AMOUNT(_InputAm)
{
    _cardNum = _InputCard;
    _spendingDate = _InputDate;
    _category = _cInput;
}

void Log::print()
{
    std::cout << "Spent Amount: " << _SPENT_AMOUNT << " from card: " << _cardNum << std::endl << _spendingDate << std::endl;
}

double Log::getAmount()
{
    return _SPENT_AMOUNT;
}

ExpDate Log::getDate()
{
    return _spendingDate;
}

void Logs::sortLogs()
{
    for (auto i = 0; i < _logs.size() - 1; i++) {

        bool swapped = 0;

        for (auto j = 0; j < _logs.size() - i - 1; j++) {

            if (_logs[j]->getAmount() > _logs[j + 1]->getAmount()) {

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

    for (auto i = 0; i < 3;i++) {

        if (_logs[i]->getDate()._day == _InputDay) {

            _logs[i]->print();
        }
    }
}

void Logs::getMonthRate(u_short _InputMonth)
{
    if (12 < _InputMonth || 0 > _InputMonth) {

        std::cout << "Invalid Month" << std::endl;

        return;
    }

    sortLogs();

    for (auto i = 0; i < 3; i++) {

        if (_logs[i]->getDate()._month == _InputMonth) {

            _logs[i]->print();
        }
    }
}
