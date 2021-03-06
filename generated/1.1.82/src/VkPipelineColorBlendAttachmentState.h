/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#ifndef __VK_VKPIPELINECOLORBLENDATTACHMENTSTATE_H__
#define __VK_VKPIPELINECOLORBLENDATTACHMENTSTATE_H__

#include <nan.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPipelineColorBlendAttachmentState: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetblendEnable);
    static NAN_SETTER(SetblendEnable);
    
    static NAN_GETTER(GetsrcColorBlendFactor);
    static NAN_SETTER(SetsrcColorBlendFactor);
    
    static NAN_GETTER(GetdstColorBlendFactor);
    static NAN_SETTER(SetdstColorBlendFactor);
    
    static NAN_GETTER(GetcolorBlendOp);
    static NAN_SETTER(SetcolorBlendOp);
    
    static NAN_GETTER(GetsrcAlphaBlendFactor);
    static NAN_SETTER(SetsrcAlphaBlendFactor);
    
    static NAN_GETTER(GetdstAlphaBlendFactor);
    static NAN_SETTER(SetdstAlphaBlendFactor);
    
    static NAN_GETTER(GetalphaBlendOp);
    static NAN_SETTER(SetalphaBlendOp);
    
    static NAN_GETTER(GetcolorWriteMask);
    static NAN_SETTER(SetcolorWriteMask);
    

    // real instance
    VkPipelineColorBlendAttachmentState instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkPipelineColorBlendAttachmentState();
    ~_VkPipelineColorBlendAttachmentState();

};

#endif