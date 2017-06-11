// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CRequestPvpRooms.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "CRequestPvpRooms.pb.h"

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

const ::google::protobuf::Descriptor* CRequestPvpRooms_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CRequestPvpRooms_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_CRequestPvpRooms_2eproto() {
  protobuf_AddDesc_CRequestPvpRooms_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "CRequestPvpRooms.proto");
  GOOGLE_CHECK(file != NULL);
  CRequestPvpRooms_descriptor_ = file->message_type(0);
  static const int CRequestPvpRooms_offsets_[1] = {
  };
  CRequestPvpRooms_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CRequestPvpRooms_descriptor_,
      CRequestPvpRooms::default_instance_,
      CRequestPvpRooms_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CRequestPvpRooms, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CRequestPvpRooms, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CRequestPvpRooms));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_CRequestPvpRooms_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CRequestPvpRooms_descriptor_, &CRequestPvpRooms::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_CRequestPvpRooms_2eproto() {
  delete CRequestPvpRooms::default_instance_;
  delete CRequestPvpRooms_reflection_;
}

void protobuf_AddDesc_CRequestPvpRooms_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\026CRequestPvpRooms.proto\"\022\n\020CRequestPvpR"
    "oomsB7\n\"com.thanple.gs.common.nio.protoc"
    "olB\021_CRequestPvpRooms", 101);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "CRequestPvpRooms.proto", &protobuf_RegisterTypes);
  CRequestPvpRooms::default_instance_ = new CRequestPvpRooms();
  CRequestPvpRooms::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_CRequestPvpRooms_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_CRequestPvpRooms_2eproto {
  StaticDescriptorInitializer_CRequestPvpRooms_2eproto() {
    protobuf_AddDesc_CRequestPvpRooms_2eproto();
  }
} static_descriptor_initializer_CRequestPvpRooms_2eproto_;

// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

CRequestPvpRooms::CRequestPvpRooms()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:CRequestPvpRooms)
}

void CRequestPvpRooms::InitAsDefaultInstance() {
}

CRequestPvpRooms::CRequestPvpRooms(const CRequestPvpRooms& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:CRequestPvpRooms)
}

void CRequestPvpRooms::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CRequestPvpRooms::~CRequestPvpRooms() {
  // @@protoc_insertion_point(destructor:CRequestPvpRooms)
  SharedDtor();
}

void CRequestPvpRooms::SharedDtor() {
  if (this != default_instance_) {
  }
}

void CRequestPvpRooms::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CRequestPvpRooms::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CRequestPvpRooms_descriptor_;
}

const CRequestPvpRooms& CRequestPvpRooms::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_CRequestPvpRooms_2eproto();
  return *default_instance_;
}

CRequestPvpRooms* CRequestPvpRooms::default_instance_ = NULL;

CRequestPvpRooms* CRequestPvpRooms::New() const {
  return new CRequestPvpRooms;
}

void CRequestPvpRooms::Clear() {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CRequestPvpRooms::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:CRequestPvpRooms)
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
  // @@protoc_insertion_point(parse_success:CRequestPvpRooms)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:CRequestPvpRooms)
  return false;
#undef DO_
}

void CRequestPvpRooms::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:CRequestPvpRooms)
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:CRequestPvpRooms)
}

::google::protobuf::uint8* CRequestPvpRooms::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:CRequestPvpRooms)
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:CRequestPvpRooms)
  return target;
}

int CRequestPvpRooms::ByteSize() const {
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

void CRequestPvpRooms::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CRequestPvpRooms* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CRequestPvpRooms*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CRequestPvpRooms::MergeFrom(const CRequestPvpRooms& from) {
  GOOGLE_CHECK_NE(&from, this);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CRequestPvpRooms::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CRequestPvpRooms::CopyFrom(const CRequestPvpRooms& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CRequestPvpRooms::IsInitialized() const {

  return true;
}

void CRequestPvpRooms::Swap(CRequestPvpRooms* other) {
  if (other != this) {
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CRequestPvpRooms::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CRequestPvpRooms_descriptor_;
  metadata.reflection = CRequestPvpRooms_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
