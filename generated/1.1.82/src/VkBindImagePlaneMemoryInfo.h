/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#ifndef __VK_VKBINDIMAGEPLANEMEMORYINFO_H__
#define __VK_VKBINDIMAGEPLANEMEMORYINFO_H__

#include <nan.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkBindImagePlaneMemoryInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(GetplaneAspect);
    static NAN_SETTER(SetplaneAspect);
    

    // real instance
    VkBindImagePlaneMemoryInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkBindImagePlaneMemoryInfo();
    ~_VkBindImagePlaneMemoryInfo();

};

#endif