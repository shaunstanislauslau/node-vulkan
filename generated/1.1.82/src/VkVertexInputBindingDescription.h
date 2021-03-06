/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#ifndef __VK_VKVERTEXINPUTBINDINGDESCRIPTION_H__
#define __VK_VKVERTEXINPUTBINDINGDESCRIPTION_H__

#include <nan.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkVertexInputBindingDescription: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(Getbinding);
    static NAN_SETTER(Setbinding);
    
    static NAN_GETTER(Getstride);
    static NAN_SETTER(Setstride);
    
    static NAN_GETTER(GetinputRate);
    static NAN_SETTER(SetinputRate);
    

    // real instance
    VkVertexInputBindingDescription instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkVertexInputBindingDescription();
    ~_VkVertexInputBindingDescription();

};

#endif