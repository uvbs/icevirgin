// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CEnterPvpRoom.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "CEnterPvpRoom.pb.h"

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

const ::google::protobuf::Descriptor* CEnterPvpRoom_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CEnterPvpRoom_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_CEnterPvpRoom_2eproto() {
  protobuf_AddDesc_CEnterPvpRoom_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "CEnterPvpRoom.proto");
  GOOGLE_CHECK(file != NULL);
  CEnterPvpRoom_descriptor_ = file->message_type(0);
  static const int CEnterPvpRoom_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CEnterPvpRoom, instanceid_),
  };
  CEnterPvpRoom_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CEnterPvpRoom_descriptor_,
      CEnterPvpRoom::default_instance_,
      CEnterPvpRoom_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CEnterPvpRoom, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CEnterPvpRoom, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CEnterPvpRoom));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_CEnterPvpRoom_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CEnterPvpRoom_descriptor_, &CEnterPvpRoom::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_CEnterPvpRoom_2eproto() {
  delete CEnterPvpRoom::default_instance_;
  delete CEnterPvpRoom_reflection_;
}

void protobuf_AddDesc_CEnterPvpRoom_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023CEnterPvpRoom.proto\"#\n\rCEnterPvpRoom\022\022"
    "\n\ninstanceId\030\001 \002(\005B4\n\"com.thanple.gs.com"
    "mon.nio.protocolB\016_CEnterPvpRoom", 112);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "CEnterPvpRoom.proto", &protobuf_RegisterTypes);
  CEnterPvpRoom::default_instance_ = new CEnterPvpRoom();
  CEnterPvpRoom::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_CEnterPvpRoom_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_CEnterPvpRoom_2eproto {
  StaticDescriptorInitializer_CEnterPvpRoom_2eproto() {
    protobuf_AddDesc_CEnterPvpRoom_2eproto();
  }
} static_descriptor_initializer_CEnterPvpRoom_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int CEnterPvpRoom::kInstanceIdFieldNumber;
#endif  // !_MSC_VER

CEnterPvpRoom::CEnterPvpRoom()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:CEnterPvpRoom)
}

void CEnterPvpRoom::InitAsDefaultInstance() {
}

CEnterPvpRoom::CEnterPvpRoom(const CEnterPvpRoom& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:CEnterPvpRoom)
}

void CEnterPvpRoom::SharedCtor() {
  _cached_size_ = 0;
  instanceid_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CEnterPvpRoom::~CEnterPvpRoom() {
  // @@protoc_insertion_point(destructor:CEnterPvpRoom)
  SharedDtor();
}

void CEnterPvpRoom::SharedDtor() {
  if (this != default_instance_) {
  }
}

void CEnterPvpRoom::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CEnterPvpRoom::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CEnterPvpRoom_descriptor_;
}

const CEnterPvpRoom& CEnterPvpRoom::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_CEnterPvpRoom_2eproto();
  return *default_instance_;
}

CEnterPvpRoom* CEnterPvpRoom::default_instance_ = NULL;

CEnterPvpRoom* CEnterPvpRoom::New() const {
  return new CEnterPvpRoom;
}

void CEnterPvpRoom::Clear() {
  instanceid_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CEnterPvpRoom::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:CEnterPvpRoom)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 instanceId = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &instanceid_)));
          set_has_instanceid();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:CEnterPvpRoom)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:CEnterPvpRoom)
  return false;
#undef DO_
}

void CEnterPvpRoom::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:CEnterPvpRoom)
  // required int32 instanceId = 1;
  if (has_instanceid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->instanceid(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:CEnterPvpRoom)
}

::google::protobuf::uint8* CEnterPvpRoom::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:CEnterPvpRoom)
  // required int32 instanceId = 1;
  if (has_instanceid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->instanceid(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:CEnterPvpRoom)
  return target;
}

int CEnterPvpRoom::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 instanceId = 1;
    if (has_instanceid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->instanceid());
    }

  }
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

void CEnterPvpRoom::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CEnterPvpRoom* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CEnterPvpRoom*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CEnterPvpRoom::MergeFrom(const CEnterPvpRoom& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_instanceid()) {
      set_instanceid(from.instanceid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CEnterPvpRoom::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CEnterPvpRoom::CopyFrom(const CEnterPvpRoom& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CEnterPvpRoom::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void CEnterPvpRoom::Swap(CEnterPvpRoom* other) {
  if (other != this) {
    std::swap(instanceid_, other->instanceid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CEnterPvpRoom::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CEnterPvpRoom_descriptor_;
  metadata.reflection = CEnterPvpRoom_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)