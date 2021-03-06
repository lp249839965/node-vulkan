/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#ifndef __VK_VKRENDERPASSCREATEINFO_H__
#define __VK_VKRENDERPASSCREATEINFO_H__

#include <nan.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkRenderPassCreateInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(Getflags);
    static NAN_SETTER(Setflags);
    
    static NAN_GETTER(GetattachmentCount);
    static NAN_SETTER(SetattachmentCount);
    
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pAttachments;
    static NAN_GETTER(GetpAttachments);
    static NAN_SETTER(SetpAttachments);
    
    static NAN_GETTER(GetsubpassCount);
    static NAN_SETTER(SetsubpassCount);
    
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pSubpasses;
    static NAN_GETTER(GetpSubpasses);
    static NAN_SETTER(SetpSubpasses);
    
    static NAN_GETTER(GetdependencyCount);
    static NAN_SETTER(SetdependencyCount);
    
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pDependencies;
    static NAN_GETTER(GetpDependencies);
    static NAN_SETTER(SetpDependencies);
    

    // real instance
    VkRenderPassCreateInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkRenderPassCreateInfo();
    ~_VkRenderPassCreateInfo();

};

#endif