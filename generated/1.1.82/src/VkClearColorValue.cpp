/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#include "utils.h"
#include <string.h>
#include "index.h"
#include "VkClearColorValue.h"

Nan::Persistent<v8::FunctionTemplate> _VkClearColorValue::constructor;

_VkClearColorValue::_VkClearColorValue() {
  
}

_VkClearColorValue::~_VkClearColorValue() {
  //printf("VkClearColorValue deconstructed!!\n");
}

void _VkClearColorValue::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkClearColorValue::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkClearColorValue").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("float32").ToLocalChecked(), Getfloat32, Setfloat32, ctor);
  SetPrototypeAccessor(proto, Nan::New("int32").ToLocalChecked(), Getint32, Setint32, ctor);
  SetPrototypeAccessor(proto, Nan::New("uint32").ToLocalChecked(), Getuint32, Setuint32, ctor);
  Nan::Set(target, Nan::New("VkClearColorValue").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkClearColorValue::New) {
  if (info.IsConstructCall()) {
    _VkClearColorValue* self = new _VkClearColorValue();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = info[0]->ToObject();
      v8::Local<v8::String> sAccess0 = Nan::New("float32").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("int32").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("uint32").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkClearColorValue constructor cannot be invoked without 'new'");
  }
};

// float32
NAN_GETTER(_VkClearColorValue::Getfloat32) {
  _VkClearColorValue *self = Nan::ObjectWrap::Unwrap<_VkClearColorValue>(info.This());
  if (self->float32.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    info.GetReturnValue().Set(Nan::New(self->float32));
  }
}NAN_SETTER(_VkClearColorValue::Setfloat32) {
  _VkClearColorValue *self = Nan::ObjectWrap::Unwrap<_VkClearColorValue>(info.This());
  
    // js
    if (value->IsArray() || value->IsArrayBufferView()) {
      v8::Handle<v8::Array> arr = v8::Handle<v8::Array>::Cast(value);
      Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> obj(arr);
      self->float32 = obj;
    } else {
      if (!self->float32.IsEmpty()) self->float32.Empty();
    }
  
  // vulkan
  if (!(value->IsNull())) {
    memcpy(self->instance.float32, createArrayOfV8Numbers<float>(value), sizeof(float) * 4);
  } else {
    memset(&self->instance.float32, 0, sizeof(float));
  }
}// int32
NAN_GETTER(_VkClearColorValue::Getint32) {
  _VkClearColorValue *self = Nan::ObjectWrap::Unwrap<_VkClearColorValue>(info.This());
  if (self->int32.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    info.GetReturnValue().Set(Nan::New(self->int32));
  }
}NAN_SETTER(_VkClearColorValue::Setint32) {
  _VkClearColorValue *self = Nan::ObjectWrap::Unwrap<_VkClearColorValue>(info.This());
  
    // js
    if (value->IsArray() || value->IsArrayBufferView()) {
      v8::Handle<v8::Array> arr = v8::Handle<v8::Array>::Cast(value);
      Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> obj(arr);
      self->int32 = obj;
    } else {
      if (!self->int32.IsEmpty()) self->int32.Empty();
    }
  
  // vulkan
  if (!(value->IsNull())) {
    memcpy(self->instance.int32, createArrayOfV8Numbers<int32_t>(value), sizeof(int32_t) * 4);
  } else {
    memset(&self->instance.int32, 0, sizeof(int32_t));
  }
}// uint32
NAN_GETTER(_VkClearColorValue::Getuint32) {
  _VkClearColorValue *self = Nan::ObjectWrap::Unwrap<_VkClearColorValue>(info.This());
  if (self->uint32.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    info.GetReturnValue().Set(Nan::New(self->uint32));
  }
}NAN_SETTER(_VkClearColorValue::Setuint32) {
  _VkClearColorValue *self = Nan::ObjectWrap::Unwrap<_VkClearColorValue>(info.This());
  
    // js
    if (value->IsArray() || value->IsArrayBufferView()) {
      v8::Handle<v8::Array> arr = v8::Handle<v8::Array>::Cast(value);
      Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> obj(arr);
      self->uint32 = obj;
    } else {
      if (!self->uint32.IsEmpty()) self->uint32.Empty();
    }
  
  // vulkan
  if (!(value->IsNull())) {
    memcpy(self->instance.uint32, createArrayOfV8Numbers<uint32_t>(value), sizeof(uint32_t) * 4);
  } else {
    memset(&self->instance.uint32, 0, sizeof(uint32_t));
  }
}