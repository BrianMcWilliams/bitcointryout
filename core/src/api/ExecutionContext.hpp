// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.idl

#pragma once

#include <memory>

class Runnable;

class ExecutionContext {
public:
    virtual ~ExecutionContext() {}

    virtual void execute(const std::shared_ptr<Runnable> & runnable) = 0;
};
