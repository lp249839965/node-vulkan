/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#include "VkRenderPass.h"

Nan::Persistent<v8::FunctionTemplate> _VkRenderPass::constructor;

_VkRenderPass::_VkRenderPass() {}
_VkRenderPass::~_VkRenderPass() {}

void _VkRenderPass::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // Constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkRenderPass::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkRenderPass").ToLocalChecked());

  // Prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();

  Nan::Set(target, Nan::New("VkRenderPass").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkRenderPass::New) {
  _VkRenderPass* self = new _VkRenderPass();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};
