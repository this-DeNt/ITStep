#include "_File_Out.h"

FileOut::FileOut(const Logs _InputLogs)
{
    _logs = new Logs(_InputLogs);
}

void FileOut::out()
{
    _out.open("Logs.txt");
    
    for (int i = 0; i < _logs->getLogsSize(); i++) {

        _out << "=========================" << std::endl << "Spent Amount: " << _logs->getLog(i)->getAmount() << std::endl << " from card: " << _logs->getLog(i)->getNum() << std::endl << _logs->getLog(i)->getDate() 
             << "\t" << _logs->getLog(i)->getCat() << std::endl << "=========================" << std::endl;
    }

    _out.close();
}