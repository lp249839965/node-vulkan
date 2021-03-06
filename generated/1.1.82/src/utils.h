/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#include <nan.h>
#include "index.h"

#define VULKAN_ASSERT(func) { VkResult res = func; TRAP(res >= VK_SUCCESS); }

inline void SetPrototypeAccessor(
  v8::Local<v8::ObjectTemplate> tpl,
  v8::Local<v8::String> name,
  Nan::GetterCallback getter,
  Nan::SetterCallback setter,
  v8::Local<v8::FunctionTemplate> ctor
) {
  Nan::SetAccessor(
    tpl,
    name,
    getter,
    setter,
    v8::Local<v8::Value>(),
    v8::DEFAULT,
    v8::None,
    v8::AccessorSignature::New(v8::Isolate::GetCurrent(), ctor)
  );
};

inline char* copyV8String(v8::Handle<v8::Value> val) {
  Nan::Utf8String utf8(val->ToString());
  int len = utf8.length() + 1;
  char *str = (char *) calloc(sizeof(char), len);
  strncpy(str, *utf8, len);
  return str;
};

inline char** createArrayOfV8Strings(v8::Local<v8::Value> value) {
  v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
  std::vector<char *>* data = new std::vector<char *>;
  for (unsigned int ii = 0; ii < array->Length(); ++ii) {
    char *copy = copyV8String(Nan::Get(array, ii).ToLocalChecked());
    data->push_back(copy);
  };
  return data->data();
};

template<typename T>
inline T* createArrayOfV8Numbers(v8::Local<v8::Value> value) {
  v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
  std::vector<T>* data = new std::vector<T>;
  for (unsigned int ii = 0; ii < array->Length(); ++ii) {
    T num = static_cast<T>(Nan::Get(array, ii).ToLocalChecked()->NumberValue());
    data->push_back(num);
  };
  return data->data();
};

template<typename S, typename T>
inline S* createArrayOfV8Objects(v8::Local<v8::Value> value) {
  v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
  std::vector<S*>* data = new std::vector<S*>;
  for (unsigned int ii = 0; ii < array->Length(); ++ii) {
    v8::Handle<v8::Value> item = Nan::Get(array, ii).ToLocalChecked();
    T* result = Nan::ObjectWrap::Unwrap<T>(item->ToObject());
    data->push_back(&result->instance);
  };
  return *data->data();
};


template<typename S, typename T>
inline S* createArrayOfV8Handles(v8::Local<v8::Value> value) {
  v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
  S *data = new S[array->Length()];
  for (unsigned int ii = 0; ii < array->Length(); ++ii) {
    v8::Handle<v8::Value> item = Nan::Get(array, ii).ToLocalChecked();
    T* result = Nan::ObjectWrap::Unwrap<T>(item->ToObject());
    data[ii] = result->instance;
  };
  return data;
};

template<typename S, typename T>
inline S* copyArrayOfV8Objects(v8::Local<v8::Value> value) {
  v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
  std::vector<S>* data = new std::vector<S>;
  for (unsigned int ii = 0; ii < array->Length(); ++ii) {
    v8::Handle<v8::Value> item = Nan::Get(array, ii).ToLocalChecked();
    T* result = Nan::ObjectWrap::Unwrap<T>(item->ToObject());
    data->push_back(result->instance);
  };
  return data->data();
};

template<typename T>
inline T* getTypedArrayData(v8::Local<v8::Object> obj, int *len = nullptr) {
  T *data = nullptr;
  if (len) *len = 0;
  if (!obj->IsArrayBufferView()) {
    Nan::ThrowError("Argument must be an ArrayBufferView");
    return data;
  }
  v8::Local<v8::ArrayBufferView> arr = v8::Local<v8::ArrayBufferView>::Cast(obj);
  if (len) *len = arr->ByteLength() / sizeof(T);
  data = reinterpret_cast<T*>(arr->Buffer()->GetContents().Data());
  return data;
};

/*
template<typename T>
inline T* getTypedArrayData(v8::Local<v8::Value> value) {
  v8::Local<v8::Uint32Array> arr = value.As<v8::Uint32Array>();
  Nan::TypedArrayContents<T> dest(arr);
  return arr;
};
*/

/*
template<typename A, typename B>
void inline reflectNumericArray(A* receiver, B vkMember) {
  v8::Local<v8::Array> array = v8::Array::New();
  for (unsigned int ii = 0; ii < array->Length(); ++ii) {
    v8::Handle<v8::Value> item = Nan::Get(array, ii).ToLocalChecked();
    T* result = Nan::ObjectWrap::Unwrap<T>(item->ToObject());
    data[ii] = result->instance;
  };
  return data.data();
};
*/