#include <iostream>
#include <string>

using namespace std;

class ibc_data {

public:
    //ibc_data() {}
    //~ibc_data() {}
    static ibc_data* _instance;

    string account;
    uint64_t osbAmount;
    uint64_t datAmount;

//public:
    static ibc_data* getInstance();

    void setAccount(string p_account);
    void setOsbAmount(uint64_t p_osbAmount);
    void setDatAmount(uint64_t p_datAmount);

    string getAccount();
    uint64_t getOsbAmount();
    uint64_t getDatAmount();

};



