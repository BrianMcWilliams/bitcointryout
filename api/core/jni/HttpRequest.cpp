// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.idl

#include "HttpRequest.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

HttpRequest::HttpRequest() = default;

HttpRequest::~HttpRequest() = default;

auto HttpRequest::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<HttpRequest>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.method)),
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.body)),
                                                           ::djinni::get(::djinni::Map<::djinni::String, ::djinni::String>::fromCpp(jniEnv, c.headers)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto HttpRequest::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 4);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<HttpRequest>::get();
    return {::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_method)),
            ::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_body)),
            ::djinni::Map<::djinni::String, ::djinni::String>::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_headers))};
}

}  // namespace djinni_generated
