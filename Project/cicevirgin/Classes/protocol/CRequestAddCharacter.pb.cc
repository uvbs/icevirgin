// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CRequestAddCharacter.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "CRequestAddCharacter.pb.h"

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

namespace {

const ::google::protobuf::Descriptor* CRequestAddCharacter_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CRequestAddCharacter_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_CRequestAddCharacter_2eproto() {
  protobuf_AddDesc_CRequestAddCharacter_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "CRequestAddCharacter.proto");
  GOOGLE_CHECK(file != NULL);
  CRequestAddCharacter_descriptor_ = file->message_type(0);
  static const int CRequestAddCharacter_offsets_[1] = {
  };
  CRequestAddCharacter_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CRequestAddCharacter_descriptor_,
      CRequestAddCharacter::default_instance_,
      CRequestAddCharacter_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CRequestAddCharacter, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CRequestAddCharacter, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CRequestAddCharacter));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_CRequestAddCharacter_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CRequestAddCharacter_descriptor_, &CRequestAddCharacter::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_CRequestAddCharacter_2eproto() {
  delete CRequestAddCharacter::default_instance_;
  delete CRequestAddCharacter_reflection_;
}

void protobuf_AddDesc_CRequestAddCharacter_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\032CRequestAddCharacter.proto\"\026\n\024CRequest"
    "AddCharacterB;\n\"com.thanple.gs.common.ni"
    "o.protocolB\025_CRequestAddCharacter", 113);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "CRequestAddCharacter.proto", &protobuf_RegisterTypes);
  CRequestAddCharacter::default_instance_ = new CRequestAddCharacter();
  CRequestAddCharacter::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_CRequestAddCharacter_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_CRequestAddCharacter_2eproto {
  StaticDescriptorInitializer_CRequestAddCharacter_2eproto() {
    protobuf_AddDesc_CRequestAddCharacter_2eproto();
  }
} static_descriptor_initializer_CRequestAddCharacter_2eproto_;

// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

CRequestAddCharacter::CRequestAddCharacter()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:CRequestAddCharacter)
}

void CRequestAddCharacter::InitAsDefaultInstance() {
}

CRequestAddCharacter::CRequestAddCharacter(const CRequestAddCharacter& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:CRequestAddCharacter)
}

void CRequestAddCharacter::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CRequestAddCharacter::~CRequestAddCharacter() {
  // @@protoc_insertion_point(destructor:CRequestAddCharacter)
  SharedDtor();
}

void CRequestAddCharacter::SharedDtor() {
  if (this != default_instance_) {
  }
}

void CRequestAddCharacter::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CRequestAddCharacter::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CRequestAddCharacter_descriptor_;
}

const CRequestAddCharacter& CRequestAddCharacter::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_CRequestAddCharacter_2eproto();
  return *default_instance_;
}

CRequestAddCharacter* CRequestAddCharacter::default_instance_ = NULL;

CRequestAddCharacter* CRequestAddCharacter::New() const {
  return new CRequestAddCharacter;
}

void CRequestAddCharacter::Clear() {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CRequestAddCharacter::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:CRequestAddCharacter)
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
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, mutable_unknown_fields()));
  }
success:
  // @@protoc_insertion_point(parse_success:CRequestAddCharacter)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:CRequestAddCharacter)
  return false;
#undef DO_
}

void CRequestAddCharacter::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:CRequestAddCharacter)
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:CRequestAddCharacter)
}

::google::protobuf::uint8* CRequestAddCharacter::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:CRequestAddCharacter)
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:CRequestAddCharacter)
  return target;
}

int CRequestAddCharacter::ByteSize() const {
  int total_size = 0;

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CRequestAddCharacter::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CRequestAddCharacter* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CRequestAddCharacter*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CRequestAddCharacter::MergeFrom(const CRequestAddCharacter& from) {
  GOOGLE_CHECK_NE(&from, this);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CRequestAddCharacter::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CRequestAddCharacter::CopyFrom(const CRequestAddCharacter& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CRequestAddCharacter::IsInitialized() const {

  return true;
}

void CRequestAddCharacter::Swap(CRequestAddCharacter* other) {
  if (other != this) {
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CRequestAddCharacter::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CRequestAddCharacter_descriptor_;
  metadata.reflection = CRequestAddCharacter_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
