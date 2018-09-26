/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#include "utils.h"
#include "index.h"
#include "VkSpecializationMapEntry.h"

Nan::Persistent<v8::FunctionTemplate> _VkSpecializationMapEntry::constructor;

_VkSpecializationMapEntry::_VkSpecializationMapEntry() {
  
}

_VkSpecializationMapEntry::~_VkSpecializationMapEntry() {
  //printf("VkSpecializationMapEntry deconstructed!!\n");
}

void _VkSpecializationMapEntry::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkSpecializationMapEntry::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkSpecializationMapEntry").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("constantID").ToLocalChecked(), GetconstantID, SetconstantID, ctor);
  SetPrototypeAccessor(proto, Nan::New("offset").ToLocalChecked(), Getoffset, Setoffset, ctor);
  SetPrototypeAccessor(proto, Nan::New("size").ToLocalChecked(), Getsize, Setsize, ctor);
  Nan::Set(target, Nan::New("VkSpecializationMapEntry").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkSpecializationMapEntry::New) {
  if (info.IsConstructCall()) {
    _VkSpecializationMapEntry* self = new _VkSpecializationMapEntry();
    self->Wrap(info.Holder());
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkSpecializationMapEntry constructor cannot be invoked without 'new'");
  }
};

// constantID
NAN_GETTER(_VkSpecializationMapEntry::GetconstantID) {
  _VkSpecializationMapEntry *self = Nan::ObjectWrap::Unwrap<_VkSpecializationMapEntry>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.constantID));
}NAN_SETTER(_VkSpecializationMapEntry::SetconstantID) {
  _VkSpecializationMapEntry *self = Nan::ObjectWrap::Unwrap<_VkSpecializationMapEntry>(info.This());
  self->instance.constantID = static_cast<uint32_t>(value->NumberValue());
}// offset
NAN_GETTER(_VkSpecializationMapEntry::Getoffset) {
  _VkSpecializationMapEntry *self = Nan::ObjectWrap::Unwrap<_VkSpecializationMapEntry>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.offset));
}NAN_SETTER(_VkSpecializationMapEntry::Setoffset) {
  _VkSpecializationMapEntry *self = Nan::ObjectWrap::Unwrap<_VkSpecializationMapEntry>(info.This());
  self->instance.offset = static_cast<uint32_t>(value->NumberValue());
}// size
NAN_GETTER(_VkSpecializationMapEntry::Getsize) {
  _VkSpecializationMapEntry *self = Nan::ObjectWrap::Unwrap<_VkSpecializationMapEntry>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.size));
}NAN_SETTER(_VkSpecializationMapEntry::Setsize) {
  _VkSpecializationMapEntry *self = Nan::ObjectWrap::Unwrap<_VkSpecializationMapEntry>(info.This());
  self->instance.size = static_cast<size_t>(value->NumberValue());
}