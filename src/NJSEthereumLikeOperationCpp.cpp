// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ethereum_like_wallet.djinni

#include "NJSEthereumLikeOperationCpp.hpp"
#include "NJSObjectWrapper.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSEthereumLikeOperation::getTransaction) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSEthereumLikeOperation::getTransaction needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::EthereumLikeOperation>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeOperation::getTransaction : implementation of EthereumLikeOperation is not valid");
    }

    auto result = cpp_impl->getTransaction();

    //Wrap result in node object
    auto arg_0 = NJSEthereumLikeTransaction::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}

NAN_METHOD(NJSEthereumLikeOperation::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSEthereumLikeOperation function can only be called as constructor (use New)");
    }
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSEthereumLikeOperation::EthereumLikeOperation_prototype;

Local<Object> NJSEthereumLikeOperation::wrap(const std::shared_ptr<ledger::core::api::EthereumLikeOperation> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(EthereumLikeOperation_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        djinni::js::ObjectWrapper<ledger::core::api::EthereumLikeOperation>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSEthereumLikeOperation::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

NAN_METHOD(NJSEthereumLikeOperation::isNull) {
    auto cpp_implementation = djinni::js::ObjectWrapper<ledger::core::api::EthereumLikeOperation>::Unwrap(info.This());
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSEthereumLikeOperation::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSEthereumLikeOperation::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSEthereumLikeOperation").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"getTransaction", getTransaction);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);
    //Set object prototype
    EthereumLikeOperation_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSEthereumLikeOperation").ToLocalChecked(), func_template->GetFunction());
}
