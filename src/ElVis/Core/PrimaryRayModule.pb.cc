// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PrimaryRayModule.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "PrimaryRayModule.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace ElVis {
namespace Serialization {

namespace {

const ::google::protobuf::Descriptor* PrimaryRayModule_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PrimaryRayModule_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_PrimaryRayModule_2eproto() {
  protobuf_AddDesc_PrimaryRayModule_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "PrimaryRayModule.proto");
  GOOGLE_CHECK(file != NULL);
  PrimaryRayModule_descriptor_ = file->message_type(0);
  static const int PrimaryRayModule_offsets_[1] = {
  };
  PrimaryRayModule_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      PrimaryRayModule_descriptor_,
      PrimaryRayModule::default_instance_,
      PrimaryRayModule_offsets_,
      -1,
      -1,
      -1,
      sizeof(PrimaryRayModule),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PrimaryRayModule, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PrimaryRayModule, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_PrimaryRayModule_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      PrimaryRayModule_descriptor_, &PrimaryRayModule::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_PrimaryRayModule_2eproto() {
  delete PrimaryRayModule::default_instance_;
  delete PrimaryRayModule_reflection_;
}

void protobuf_AddDesc_PrimaryRayModule_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\026PrimaryRayModule.proto\022\023ElVis.Serializ"
    "ation\"\022\n\020PrimaryRayModuleb\006proto3", 73);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "PrimaryRayModule.proto", &protobuf_RegisterTypes);
  PrimaryRayModule::default_instance_ = new PrimaryRayModule();
  PrimaryRayModule::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_PrimaryRayModule_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_PrimaryRayModule_2eproto {
  StaticDescriptorInitializer_PrimaryRayModule_2eproto() {
    protobuf_AddDesc_PrimaryRayModule_2eproto();
  }
} static_descriptor_initializer_PrimaryRayModule_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

PrimaryRayModule::PrimaryRayModule()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ElVis.Serialization.PrimaryRayModule)
}

void PrimaryRayModule::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

PrimaryRayModule::PrimaryRayModule(const PrimaryRayModule& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:ElVis.Serialization.PrimaryRayModule)
}

void PrimaryRayModule::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
}

PrimaryRayModule::~PrimaryRayModule() {
  // @@protoc_insertion_point(destructor:ElVis.Serialization.PrimaryRayModule)
  SharedDtor();
}

void PrimaryRayModule::SharedDtor() {
  if (this != default_instance_) {
  }
}

void PrimaryRayModule::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PrimaryRayModule::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PrimaryRayModule_descriptor_;
}

const PrimaryRayModule& PrimaryRayModule::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_PrimaryRayModule_2eproto();
  return *default_instance_;
}

PrimaryRayModule* PrimaryRayModule::default_instance_ = NULL;

PrimaryRayModule* PrimaryRayModule::New(::google::protobuf::Arena* arena) const {
  PrimaryRayModule* n = new PrimaryRayModule;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PrimaryRayModule::Clear() {
}

bool PrimaryRayModule::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ElVis.Serialization.PrimaryRayModule)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0 ||
        ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
  }
success:
  // @@protoc_insertion_point(parse_success:ElVis.Serialization.PrimaryRayModule)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ElVis.Serialization.PrimaryRayModule)
  return false;
#undef DO_
}

void PrimaryRayModule::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ElVis.Serialization.PrimaryRayModule)
  // @@protoc_insertion_point(serialize_end:ElVis.Serialization.PrimaryRayModule)
}

::google::protobuf::uint8* PrimaryRayModule::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:ElVis.Serialization.PrimaryRayModule)
  // @@protoc_insertion_point(serialize_to_array_end:ElVis.Serialization.PrimaryRayModule)
  return target;
}

int PrimaryRayModule::ByteSize() const {
  int total_size = 0;

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PrimaryRayModule::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const PrimaryRayModule* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const PrimaryRayModule>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PrimaryRayModule::MergeFrom(const PrimaryRayModule& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
}

void PrimaryRayModule::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PrimaryRayModule::CopyFrom(const PrimaryRayModule& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PrimaryRayModule::IsInitialized() const {

  return true;
}

void PrimaryRayModule::Swap(PrimaryRayModule* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PrimaryRayModule::InternalSwap(PrimaryRayModule* other) {
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata PrimaryRayModule::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PrimaryRayModule_descriptor_;
  metadata.reflection = PrimaryRayModule_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PrimaryRayModule

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Serialization
}  // namespace ElVis

// @@protoc_insertion_point(global_scope)