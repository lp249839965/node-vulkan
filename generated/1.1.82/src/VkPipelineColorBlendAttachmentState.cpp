/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#include "utils.h"
#include "index.h"
#include "VkPipelineColorBlendAttachmentState.h"

Nan::Persistent<v8::FunctionTemplate> _VkPipelineColorBlendAttachmentState::constructor;

_VkPipelineColorBlendAttachmentState::_VkPipelineColorBlendAttachmentState() {
  
}

_VkPipelineColorBlendAttachmentState::~_VkPipelineColorBlendAttachmentState() {
  //printf("VkPipelineColorBlendAttachmentState deconstructed!!\n");
}

void _VkPipelineColorBlendAttachmentState::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPipelineColorBlendAttachmentState::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPipelineColorBlendAttachmentState").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("blendEnable").ToLocalChecked(), GetblendEnable, SetblendEnable, ctor);
  SetPrototypeAccessor(proto, Nan::New("srcColorBlendFactor").ToLocalChecked(), GetsrcColorBlendFactor, SetsrcColorBlendFactor, ctor);
  SetPrototypeAccessor(proto, Nan::New("dstColorBlendFactor").ToLocalChecked(), GetdstColorBlendFactor, SetdstColorBlendFactor, ctor);
  SetPrototypeAccessor(proto, Nan::New("colorBlendOp").ToLocalChecked(), GetcolorBlendOp, SetcolorBlendOp, ctor);
  SetPrototypeAccessor(proto, Nan::New("srcAlphaBlendFactor").ToLocalChecked(), GetsrcAlphaBlendFactor, SetsrcAlphaBlendFactor, ctor);
  SetPrototypeAccessor(proto, Nan::New("dstAlphaBlendFactor").ToLocalChecked(), GetdstAlphaBlendFactor, SetdstAlphaBlendFactor, ctor);
  SetPrototypeAccessor(proto, Nan::New("alphaBlendOp").ToLocalChecked(), GetalphaBlendOp, SetalphaBlendOp, ctor);
  SetPrototypeAccessor(proto, Nan::New("colorWriteMask").ToLocalChecked(), GetcolorWriteMask, SetcolorWriteMask, ctor);
  Nan::Set(target, Nan::New("VkPipelineColorBlendAttachmentState").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkPipelineColorBlendAttachmentState::New) {
  if (info.IsConstructCall()) {
    _VkPipelineColorBlendAttachmentState* self = new _VkPipelineColorBlendAttachmentState();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = info[0]->ToObject();
      v8::Local<v8::String> sAccess0 = Nan::New("blendEnable").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("srcColorBlendFactor").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("dstColorBlendFactor").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("colorBlendOp").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("srcAlphaBlendFactor").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("dstAlphaBlendFactor").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("alphaBlendOp").ToLocalChecked();
      v8::Local<v8::String> sAccess7 = Nan::New("colorWriteMask").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      if (obj->Has(sAccess7)) info.This()->Set(sAccess7, obj->Get(sAccess7));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPipelineColorBlendAttachmentState constructor cannot be invoked without 'new'");
  }
};

// blendEnable
NAN_GETTER(_VkPipelineColorBlendAttachmentState::GetblendEnable) {
  _VkPipelineColorBlendAttachmentState *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendAttachmentState>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.blendEnable));
}NAN_SETTER(_VkPipelineColorBlendAttachmentState::SetblendEnable) {
  _VkPipelineColorBlendAttachmentState *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendAttachmentState>(info.This());
  self->instance.blendEnable = static_cast<uint32_t>(value->NumberValue());
}// srcColorBlendFactor
NAN_GETTER(_VkPipelineColorBlendAttachmentState::GetsrcColorBlendFactor) {
  _VkPipelineColorBlendAttachmentState *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendAttachmentState>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.srcColorBlendFactor));
}NAN_SETTER(_VkPipelineColorBlendAttachmentState::SetsrcColorBlendFactor) {
  _VkPipelineColorBlendAttachmentState *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendAttachmentState>(info.This());
  self->instance.srcColorBlendFactor = static_cast<VkBlendFactor>((int32_t)value->NumberValue());
}// dstColorBlendFactor
NAN_GETTER(_VkPipelineColorBlendAttachmentState::GetdstColorBlendFactor) {
  _VkPipelineColorBlendAttachmentState *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendAttachmentState>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.dstColorBlendFactor));
}NAN_SETTER(_VkPipelineColorBlendAttachmentState::SetdstColorBlendFactor) {
  _VkPipelineColorBlendAttachmentState *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendAttachmentState>(info.This());
  self->instance.dstColorBlendFactor = static_cast<VkBlendFactor>((int32_t)value->NumberValue());
}// colorBlendOp
NAN_GETTER(_VkPipelineColorBlendAttachmentState::GetcolorBlendOp) {
  _VkPipelineColorBlendAttachmentState *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendAttachmentState>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.colorBlendOp));
}NAN_SETTER(_VkPipelineColorBlendAttachmentState::SetcolorBlendOp) {
  _VkPipelineColorBlendAttachmentState *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendAttachmentState>(info.This());
  self->instance.colorBlendOp = static_cast<VkBlendOp>((int32_t)value->NumberValue());
}// srcAlphaBlendFactor
NAN_GETTER(_VkPipelineColorBlendAttachmentState::GetsrcAlphaBlendFactor) {
  _VkPipelineColorBlendAttachmentState *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendAttachmentState>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.srcAlphaBlendFactor));
}NAN_SETTER(_VkPipelineColorBlendAttachmentState::SetsrcAlphaBlendFactor) {
  _VkPipelineColorBlendAttachmentState *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendAttachmentState>(info.This());
  self->instance.srcAlphaBlendFactor = static_cast<VkBlendFactor>((int32_t)value->NumberValue());
}// dstAlphaBlendFactor
NAN_GETTER(_VkPipelineColorBlendAttachmentState::GetdstAlphaBlendFactor) {
  _VkPipelineColorBlendAttachmentState *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendAttachmentState>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.dstAlphaBlendFactor));
}NAN_SETTER(_VkPipelineColorBlendAttachmentState::SetdstAlphaBlendFactor) {
  _VkPipelineColorBlendAttachmentState *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendAttachmentState>(info.This());
  self->instance.dstAlphaBlendFactor = static_cast<VkBlendFactor>((int32_t)value->NumberValue());
}// alphaBlendOp
NAN_GETTER(_VkPipelineColorBlendAttachmentState::GetalphaBlendOp) {
  _VkPipelineColorBlendAttachmentState *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendAttachmentState>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.alphaBlendOp));
}NAN_SETTER(_VkPipelineColorBlendAttachmentState::SetalphaBlendOp) {
  _VkPipelineColorBlendAttachmentState *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendAttachmentState>(info.This());
  self->instance.alphaBlendOp = static_cast<VkBlendOp>((int32_t)value->NumberValue());
}// colorWriteMask
NAN_GETTER(_VkPipelineColorBlendAttachmentState::GetcolorWriteMask) {
  _VkPipelineColorBlendAttachmentState *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendAttachmentState>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.colorWriteMask));
}NAN_SETTER(_VkPipelineColorBlendAttachmentState::SetcolorWriteMask) {
  _VkPipelineColorBlendAttachmentState *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendAttachmentState>(info.This());
  self->instance.colorWriteMask = static_cast<VkColorComponentFlags>((int32_t)value->NumberValue());
}