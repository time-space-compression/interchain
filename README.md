# OASISBloc - The Oracle of Blockchain

## Domain Chain

[![Build status](https://badge.buildkite.com/370fe5c79410f7d695e4e34c500b4e86e3ac021c6b1f739e20.svg?branch=master)](https://buildkite.com/EOSIO/eosio)

This project is forked from https://github.com/EOSIO/eos

Welcome to the OASISBloc source code repository! 
OASISBloc is the 1st blockchainized data platform for trading
useful data and value between real businesses.

Domain Chains are partners of the OASISBloc, enabling OASISBloc to build a global data trading platform that overcomes the industry and geographic limitations of the OASISBloc.
Numerous Domain Chains from various business types build a decent ecosystem that shares and trades practical data through the OASISBloc platform to create synergy.

Every Domain Chain plays a given role as a fundamental and core member of the OASISBloc platform and receives various benefits:


1. Cooperate with the requirements for Domain Chains project development/operation and healthy operation of the platform.
2. Discuss and implement the improvement proposal and situation check of the Domain Chain project proposed by OIC.
3. Payback a portion of generated profits from Domain Chain operations to discover and support new Domain Chains.


OASISBloc is released under the open source MIT license and is offered “AS IS” without warranty of any kind, express or implied. OASISBloc is a code-fork from EOSIO, and the OASISBloc platform is operating by using our own "ePoA(equitable Proof of Authority)" consensus algorithm. Any security provided by the OASISBloc software depends in part on how it is used, configured, and deployed. OASISBloc is built upon many third-party libraries such as WABT (Apache License) and WAVM (BSD 3-clause) which are also provided “AS IS” without warranty of any kind. Without limiting the generality of the foregoing, Foundation OASIS LTD. makes no representation or guarantee that OASISBloc or any third-party libraries will perform as intended or will be free of errors, bugs or faulty code. Both may fail in large or small ways that could completely or partially limit functionality or compromise computer systems. If you use or implement OASISBloc Domain Chain, you do so at your own risk. In no event will Foundation OASIS LTD. be liable to any party for any damages whatsoever, even if it had been advised of the possibility of damage.  

Foundation OASIS LTD. is neither launching nor operating any initial public blockchains based upon the OASISBloc software. This release refers only to version 1.0 of our open source software. We caution those who wish to use blockchains built on OASISBloc to carefully vet the companies and organizations launching blockchains based on OASISBloc before disclosing any private keys to their derivative software.


#### Ubuntu 18.04 Boost install
```sh
$ sudo apt-get update
$ sudo apt-get install build-essential g++ python-dev autotools-dev libicu-dev build-essential libbz2-dev libboost-all-dev
$ wget -O boost_1_67_0.tar.gz https://sourceforge.net/projects/boost/files/boost/1.67.0/boost_1_67_0.tar.gz/download
$ tar xzvf boost_1_67_0.tar.gz
$ cd boost_1_67_0/
$ ./bootstrap.sh
$ sudo ./b2 install
```
#### Ubuntu 18.04 required libraries for domainchain 
```sh
$ sudo apt-get install doxygen libgmp3-dev libusb-1.0-0-dev openssl libssl-dev
```
#### Ubuntu 18.04 curl install
```sh
$ git clone https://github.com/curl/curl.git
$ cd curl
$ sudo cmake CMakeLists.txt
$ sudo make install
```
#### Ubuntu 18.04 clang-4.0, lldb-4.0 install
```sh
$ sudo apt-add-repository "deb http://apt.llvm.org/trusty/ llvm-toolchain-trusty-4.0 main"
$ sudo apt-get update
$ sudo apt-get install clang-4.0 lldb-4.0
```
#### Ubuntu 18.04 oasischain source build
```sh
$ git clone https://github.com/OASISBloc/oasischain.git --recursive
$ cd oasischain
$ cmake CMakeLists.txt
$ sudo make install
```
## Supported Operating Systems
OASISBloc currently supports the following operating systems:  
1. Amazon 2017.09 and higher
2. Centos 7
3. Fedora 25 and higher (Fedora 27 recommended)
4. Mint 18
5. Ubuntu 16.04
6. Ubuntu 18.04
7. MacOS Darwin 10.12 and higher (MacOS 10.14.x recommended)


## Resources
1. [Website](https://www.oasisbloc.io/)
1. [Community Telegram Group](https://t.me/oasisbloc)
1. [Wallet](https://wallet.oasisbloc.io/)


## License

[MIT](./LICENSE)

## Important

See LICENSE for copyright and license terms.  Foundation OASIS LTD. makes its contribution on a voluntary basis as a member of the OASISBloc community and is not responsible for ensuring the overall performance of the software or any related applications.  We make no representation, warranty, guarantee or undertaking in respect of the software or any related documentation, whether expressed or implied, including but not limited to the warranties or merchantability, fitness for a particular purpose and noninfringement. In no event shall we be liable for any claim, damages or other liability, whether in an action of contract, tort or otherwise, arising from, out of or in connection with the software or documentation or the use or other dealings in the software or documentation.  Any test results or performance figures are indicative and will not reflect performance under all conditions.  Any reference to any third party or third-party product, service or other resource is not an endorsement or recommendation by Block.one.  We are not responsible, and disclaim any and all responsibility and liability, for your use of or reliance on any of these resources. Third-party resources may be updated, changed or terminated at any time, so the information here may be out of date or inaccurate.
