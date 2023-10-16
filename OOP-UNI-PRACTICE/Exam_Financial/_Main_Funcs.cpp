#include "../Exam_Financial/.framework/examframework.h"
#include "../Exam_Financial/.framework/examclassframework.h"


int menu() {

    std::cout << "Financial Control Menu: " << std::endl << "====================" << std::endl << "1. Add new Card(Debit/Credit)" << std::endl << "2. View all" << std::endl
              << "3. Deposit" << std::endl << "4. Add Spending" << std::endl << "5. View Speding Logs" << std::endl << "6. View Ratings" << std::endl << "7. Save and Exit" << std::endl << "> ";

              int choice;
              std::cin >> choice;

    if (choice > 7 || choice <= 0) {

        std::cout << "Invalid input" << std::endl;

        menu();
    }

    return choice;
}

void Add(Wallet* _InputWallet) {

    int choice;

    std::cout << "Debit - 1" << std::endl << "Credit - 2" <<std::endl<< "> ";

    std::cin >> choice;

    std::string _InputBank;
    std::string _InputManu;
    std::string _InputOrg;

    Card* ptr = nullptr;

    switch (choice)
    {
    case 1:

        long long _InputNum;
        std::cout << "Enter Card Number: ";
        std::cin >> _InputNum;

        u_short _CVV;
        std::cout << "Enter CVV Number: ";
        std::cin >> _CVV;

        ExpDate _InputExp;
        std::cout << "Enter Experation Date: ";
        std::cin >> _InputExp._day;
        std::cin >> _InputExp._month;
        std::cin >> _InputExp._year;

        std::cout << "Enter Bank: ";
        std::cin >> _InputBank;

        std::cout << "Enter Card Manufacturer: ";
        std::cin >> _InputManu;

        double _InputAmount;
        std::cout << "Enter Card Amount: ";
        std::cin >> _InputAmount;

        std::cout << "Enter Organisation: ";
        std::cin >> _InputOrg;

        double _InputIncome;
        std::cout << "Enter Income: ";
        std::cin >> _InputIncome;

        ptr = new Debit(_InputNum, _CVV, _InputExp, _InputBank, _InputManu, _InputAmount, _InputOrg,_InputIncome);
        _InputWallet->pushCard(ptr);
        
        ptr = nullptr;

        system("pause");
        break;
    
    case 2:

        long long _InputNumc;
        std::cout << "Enter Card Number: ";
        std::cin >> _InputNumc;

        u_short _CVVc;
        std::cout << "Enter CVV Number: ";
        std::cin >> _CVVc;

        ExpDate _InputExpc;
        std::cout << "Enter Experation Date: ";
        std::cin >> _InputExpc._day;
        std::cin >> _InputExpc._month;
        std::cin >> _InputExpc._year;

        std::cout << "Enter Bank: ";
        std::cin >> _InputBank;

        std::cout << "Enter Card Manufacturer: ";
        std::cin >> _InputManu;

        double _InputAmountc;
        std::cout << "Enter Card Amount: ";
        std::cin >> _InputAmountc;

        double _InputCredAmount;
        std::cout << "Enter Credit Amount: ";
        std::cin >> _InputCredAmount;

        double _InputCredScore;
        std::cout << "Enter Credit Score: ";
        std::cin >> _InputCredScore;

        double _InputCredLim;
        std::cout << "Enter Credit Lim: ";
        std::cin >> _InputCredLim;

        ptr = new Credit(_InputNumc, _CVVc, _InputExpc, _InputBank, _InputManu, _InputAmountc, _InputCredLim,_InputCredScore, _InputCredAmount);
        _InputWallet->pushCard(ptr);
        
        ptr = nullptr;

        system("pause");

    break;

    default:

        std::cout << "Invalid Choice" << std::endl;
        Add(_InputWallet);
        break;
    }

    delete ptr;
}

void viewAll(Wallet* _InputWallet) {

    _InputWallet->print();

    std::cout << "Press any key to continue..." << std::endl;
    std::getchar();
}

void deposit(Wallet* _InputWallet, int Idx) {

    if (_InputWallet->getWalletSize() < Idx) {

        std::cout << "Invalid Idx" << std::endl;

        return;
    }

    double _Input;
    std::cout << "Enter deposited amount: ";
    std::cin >> _Input;

    _InputWallet->getWallet().at(Idx)->setAmount(_Input);
}

void addS(Logs* logs) {

    Categories testCats;

    double _InputAm;
    long long _InputCard;
    ExpDate _InputDate;

    std::cout << "Enter Spent Amount: ";
    std::cin >> _InputAm;

    std::cout << "Enter used Card: ";
    std::cin >> _InputCard;

    std::cout << "Enter Date (DD/MM/YYYY): ";
    std::cin >> _InputDate._day;
    std::cin >> _InputDate._month;
    std::cin >> _InputDate._year;

    std::cout << "Enter category: " << std::endl;

    for (auto i = testCats._catTree.begin(); i != testCats._catTree.end(); i++) {

        std::cout << i->first << " - " << i->second << std::endl;
    }

    int _InputKey;

    std::cout << "> ";
    std::cin >> _InputKey;

    Log* ptr = new Log(_InputAm, _InputCard, _InputDate, testCats.getCat(_InputKey));
    logs->pushLog(ptr);
    delete ptr;

}

void viewLogs(Logs* logs) {

    logs->printLogs();
}

void viewR(Logs* logs) {

    int choice;
    std::cout << "Ratings: " << std::endl << "1. Day rates" << std::endl << "2. Month Rates" <<std::endl <<"3. Day(Category) Rates" << std::endl << "4. Month(Category) Rates" << std::endl
              << "> ";

    std::cin >> choice;
    std::string cat;

    switch (choice)
    {
    case 1:

        int _dayI;
        std::cout << "Input Day: ";
        std::cin >> _dayI;
        logs->getDayRate(_dayI);
        break;
    case 2:

        int _monthI;
        std::cout << "Input month: ";
        std::cin >> _monthI;
        logs->getMonthRate(_monthI);
        break;

    case 3:

        int _dayIc;
        std::cout << "Input day: ";
        std::cin >> _dayIc;
        std::cout << "Input Category: ";
        std::cin >> cat;
        logs->getDayCatRate(_dayIc, cat);
        break;

    case 4:

        int _monthIc;
        std::cout << "Input month: ";
        std::cin >> _monthIc;
        std::cout << "Input Category: ";
        std::cin >> cat;
        logs->getMonthCatRate(_monthIc, cat);
        break;

    default:
        break;
    }
}

void printMenu(Wallet* wallet, Logs* logs) {

        FileOut testfile(*logs);

        switch (menu())
        {
        case 1:
            Add(wallet);
            printMenu(wallet, logs);
            break;
        
        case 2:
            viewAll(wallet);
            printMenu(wallet, logs);
            break;

        case 3:
            int idx;
            std::cout << "Enter idx: ";
            std::cin >> idx;

            deposit(wallet, idx);
            printMenu(wallet, logs);
            break;

        case 4:

            addS(logs);
            printMenu(wallet, logs);
            break;

        case 5:

            viewLogs(logs);
            printMenu(wallet, logs);
            break;

        case 6:

            viewR(logs);
            printMenu(wallet, logs);
            break;

        case 7:

            testfile.out();
            std::cout << "Logs saved " << std::endl;
            exit(0);
        default:


            break;
        }
}