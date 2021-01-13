#include <eosio/chain/ibc_data.hpp>

using namespace std;

ibc_data* ibc_data::_instance = nullptr;

ibc_data* ibc_data::getInstance(void) {

    if(_instance == nullptr)
        _instance = new ibc_data;

    return _instance;

}

void ibc_data::setAccount(string p_account) {

    account.assign(p_account);

    std::cout << "ibc_data::setAccount: " << account ;

}

void ibc_data::setOsbAmount(uint64_t p_osbAmount) {

    osbAmount = p_osbAmount;

    std::cout << "ibc_data::setOsbAmount: " << osbAmount;

}

void ibc_data::setDatAmount(uint64_t p_datAmount) {

    datAmount = p_datAmount;

    std::cout << "ibc_data::setDatAmount: " << datAmount;

}

string ibc_data::getAccount() {

    return account;

}

uint64_t ibc_data::getOsbAmount() {

    return osbAmount;

}

uint64_t ibc_data::getDatAmount() {

    return datAmount;

}