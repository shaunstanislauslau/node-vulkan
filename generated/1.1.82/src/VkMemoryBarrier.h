/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#ifndef __VK_VKMEMORYBARRIER_H__
#define __VK_VKMEMORYBARRIER_H__

#include <nan.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkMemoryBarrier: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(GetsrcAccessMask);
    static NAN_SETTER(SetsrcAccessMask);
    
    static NAN_GETTER(GetdstAccessMask);
    static NAN_SETTER(SetdstAccessMask);
    

    // real instance
    VkMemoryBarrier instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkMemoryBarrier();
    ~_VkMemoryBarrier();

};

#endif