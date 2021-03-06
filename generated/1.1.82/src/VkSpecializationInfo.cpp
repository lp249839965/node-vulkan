/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#include "utils.h"
#include "index.h"
#include "VkSpecializationInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkSpecializationInfo::constructor;

_VkSpecializationInfo::_VkSpecializationInfo() {
  
}

_VkSpecializationInfo::~_VkSpecializationInfo() {
  //printf("VkSpecializationInfo deconstructed!!\n");
}

void _VkSpecializationInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkSpecializationInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkSpecializationInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("mapEntryCount").ToLocalChecked(), GetmapEntryCount, SetmapEntryCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pMapEntries").ToLocalChecked(), GetpMapEntries, SetpMapEntries, ctor);
  SetPrototypeAccessor(proto, Nan::New("dataSize").ToLocalChecked(), GetdataSize, SetdataSize, ctor);
  SetPrototypeAccessor(proto, Nan::New("pData").ToLocalChecked(), GetpData, SetpData, ctor);
  Nan::Set(target, Nan::New("VkSpecializationInfo").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkSpecializationInfo::New) {
  if (info.IsConstructCall()) {
    _VkSpecializationInfo* self = new _VkSpecializationInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = info[0]->ToObject();
      v8::Local<v8::String> sAccess0 = Nan::New("mapEntryCount").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("pMapEntries").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("dataSize").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("pData").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkSpecializationInfo constructor cannot be invoked without 'new'");
  }
};

// mapEntryCount
NAN_GETTER(_VkSpecializationInfo::GetmapEntryCount) {
  _VkSpecializationInfo *self = Nan::ObjectWrap::Unwrap<_VkSpecializationInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.mapEntryCount));
}NAN_SETTER(_VkSpecializationInfo::SetmapEntryCount) {
  _VkSpecializationInfo *self = Nan::ObjectWrap::Unwrap<_VkSpecializationInfo>(info.This());
  self->instance.mapEntryCount = static_cast<uint32_t>(value->NumberValue());
}// pMapEntries
NAN_GETTER(_VkSpecializationInfo::GetpMapEntries) {
  _VkSpecializationInfo *self = Nan::ObjectWrap::Unwrap<_VkSpecializationInfo>(info.This());
  if (self->pMapEntries.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pMapEntries);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkSpecializationInfo::SetpMapEntries) {
  _VkSpecializationInfo *self = Nan::ObjectWrap::Unwrap<_VkSpecializationInfo>(info.This());
  
    // js
    if (value->IsArray() || value->IsArrayBufferView()) {
      v8::Handle<v8::Array> arr = v8::Handle<v8::Array>::Cast(value);
      Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> obj(arr);
      self->pMapEntries = obj;
    } else {
      if (!self->pMapEntries.IsEmpty()) self->pMapEntries.Empty();
    }
  
  // vulkan
  if (!(value->IsNull())) {
    self->instance.pMapEntries = copyArrayOfV8Objects<VkSpecializationMapEntry, _VkSpecializationMapEntry>(value);
  } else {
    self->instance.pMapEntries = nullptr;
  }
}// dataSize
NAN_GETTER(_VkSpecializationInfo::GetdataSize) {
  _VkSpecializationInfo *self = Nan::ObjectWrap::Unwrap<_VkSpecializationInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.dataSize));
}NAN_SETTER(_VkSpecializationInfo::SetdataSize) {
  _VkSpecializationInfo *self = Nan::ObjectWrap::Unwrap<_VkSpecializationInfo>(info.This());
  self->instance.dataSize = static_cast<size_t>(value->NumberValue());
}// pData
NAN_GETTER(_VkSpecializationInfo::GetpData) {
  _VkSpecializationInfo *self = Nan::ObjectWrap::Unwrap<_VkSpecializationInfo>(info.This());
}NAN_SETTER(_VkSpecializationInfo::SetpData) {
  _VkSpecializationInfo *self = Nan::ObjectWrap::Unwrap<_VkSpecializationInfo>(info.This());
}