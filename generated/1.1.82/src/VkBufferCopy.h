/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#ifndef __VK_VKBUFFERCOPY_H__
#define __VK_VKBUFFERCOPY_H__

#include <nan.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkBufferCopy: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsrcOffset);
    static NAN_SETTER(SetsrcOffset);
    
    static NAN_GETTER(GetdstOffset);
    static NAN_SETTER(SetdstOffset);
    
    static NAN_GETTER(Getsize);
    static NAN_SETTER(Setsize);
    

    // real instance
    VkBufferCopy instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkBufferCopy();
    ~_VkBufferCopy();

};

#endif