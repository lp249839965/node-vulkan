/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#ifndef __VK_VKPHYSICALDEVICESPARSEPROPERTIES_H__
#define __VK_VKPHYSICALDEVICESPARSEPROPERTIES_H__

#include <nan.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPhysicalDeviceSparseProperties: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetresidencyStandard2DBlockShape);
    static NAN_GETTER(GetresidencyStandard2DMultisampleBlockShape);
    static NAN_GETTER(GetresidencyStandard3DBlockShape);
    static NAN_GETTER(GetresidencyAlignedMipSize);
    static NAN_GETTER(GetresidencyNonResidentStrict);

    // real instance
    VkPhysicalDeviceSparseProperties instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkPhysicalDeviceSparseProperties();
    ~_VkPhysicalDeviceSparseProperties();

};

#endif