// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from addresses.djinni

#ifndef DJINNI_GENERATED_NJSETHEREUMLIKEADDRESS_HPP
#define DJINNI_GENERATED_NJSETHEREUMLIKEADDRESS_HPP


#include "../include/EthereumLikeNetworkParameters.hpp"
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../include/EthereumLikeAddress.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSEthereumLikeAddress final {
public:

    static void Initialize(Local<Object> target);
    NJSEthereumLikeAddress() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::EthereumLikeAddress> &object);
    static Nan::Persistent<ObjectTemplate> EthereumLikeAddress_prototype;

private:
    /**
     * Gets the version of the address
     * @return The version of the address
     */
    static NAN_METHOD(getVersion);

    /**
     * Gets the raw keccak hash of the public key (truncated to 20 bytes)
     * @return The 20 bytes of the public key keccak hash
     */
    static NAN_METHOD(getKeccakHash);

    /**
     * Gets the network parameters used for serializing the address
     * @return The network parameters of the address
     */
    static NAN_METHOD(getNetworkParameters);

    /**
     * Encodes keccak with respect to EIP55
     * @return The EIP55 encoding
     */
    static NAN_METHOD(toEIP55);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSETHEREUMLIKEADDRESS_HPP