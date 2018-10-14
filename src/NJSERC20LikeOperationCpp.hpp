// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from erc20.djinni

#ifndef DJINNI_GENERATED_NJSERC20LIKEOPERATION_HPP
#define DJINNI_GENERATED_NJSERC20LIKEOPERATION_HPP


#include "../include/OperationType.hpp"
#include "NJSAmountCpp.hpp"
#include <chrono>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../include/ERC20LikeOperation.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSERC20LikeOperation: public Nan::ObjectWrap {
public:

    static void Initialize(Local<Object> target);
    virtual ~NJSERC20LikeOperation() {};
    NJSERC20LikeOperation(const std::shared_ptr<ledger::core::api::ERC20LikeOperation> &iERC20LikeOperation):_ERC20LikeOperation(iERC20LikeOperation){};

    static Handle<Object> wrap(const std::shared_ptr<ledger::core::api::ERC20LikeOperation> &object);
    static Nan::Persistent<ObjectTemplate> ERC20LikeOperation_prototype;
    std::shared_ptr<ledger::core::api::ERC20LikeOperation> getCppImpl(){return _ERC20LikeOperation;};

private:
    /** Get the hash of the transaction. */
    static NAN_METHOD(getHash);

    /** Get the nonce of the transaction : sequence number issued by originating EOA */
    static NAN_METHOD(getNonce);

    /** Get Gas price (in wei) */
    static NAN_METHOD(getGasPrice);

    /** Get start gas (in wei) : maximum amount of gas the originator is willing to pay */
    static NAN_METHOD(getGasLimit);

    /** Used gas (in wei) : used gas during this transaction */
    static NAN_METHOD(getUsedGas);

    /** Get source ETH address */
    static NAN_METHOD(getSender);

    /** Get destination ETH address */
    static NAN_METHOD(getReceiver);

    /** Get amount of ether to send */
    static NAN_METHOD(getValue);

    /** Get binary data payload */
    static NAN_METHOD(getData);

    /**
     * Get the time when the transaction was issued or the time of the block including
     * this transaction
     */
    static NAN_METHOD(getTime);

    static NAN_METHOD(getOperationType);

    static NAN_METHOD(getStatus);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
    std::shared_ptr<ledger::core::api::ERC20LikeOperation> _ERC20LikeOperation;
};
#endif //DJINNI_GENERATED_NJSERC20LIKEOPERATION_HPP
