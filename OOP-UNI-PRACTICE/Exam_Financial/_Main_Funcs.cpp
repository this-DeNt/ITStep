#include <D:/Uni-Prog-Pc/OOP-UNI-PRACTICE/Exam_Financial/.framework/examclassframework.h>
#include <D:/Uni-Prog-Pc/OOP-UNI-PRACTICE/Exam_Financial/.framework/examframework.h> 

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

    switch (choice)
    {
    case 1:


        break;
    
    case 2:

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

        double _InputCredAmount;
        std::cout << "Enter Credit Amount: ";
        std::cin >> _InputCredAmount;

        double _InputCredScore;
        std::cout << "Enter Credit Score: ";
        std::cin >> _InputCredScore;

        double _InputCredLim;
        std::cout << "Enter Credit Lim: ";
        std::cin >> _InputCredLim;

        Card* ptr;
        ptr = new Credit(_InputNum, _CVV, _InputExp, _InputBank, _InputManu, _InputAmount, _InputCredAmount,_InputCredScore, _InputCredLim);
        _InputWallet->pushCard(ptr);
        
        delete ptr;

    break;

    default:

        std::cout << "Invalid Choice" << std::endl;
        Add(_InputWallet);
        break;
    }
}

void viewAll(Wallet* _InputWallet) {

    _InputWallet->print();
}

void deposit(Wallet* _InputWallet, int Idx) {

    if (_InputWallet->getWalletSize() > Idx || Idx < 0) {

        std::cout << "Invalid Idx" << std::endl;

        return;
    }

    for (auto i = 0; i < _InputWallet->getWalletSize(); i++) {

        if (i == Idx) {

            double _aInput;

            std::cout << "Input Amount: ";
            std::cin >> _aInput;

            _InputWallet->getWallet()[i]->setAmount(_aInput);

            return;
        }
    }
}

void printMenu(Wallet* wallet, Logs* logs) {


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
        default:


            break;
        }
}