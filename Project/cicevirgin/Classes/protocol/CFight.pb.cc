// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CFight.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "CFight.pb.h"

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

const ::google::protobuf::Descriptor* CFight_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CFight_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_CFight_2eproto() {
  protobuf_AddDesc_CFight_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "CFight.proto");
  GOOGLE_CHECK(file != NULL);
  CFight_descriptor_ = file->message_type(0);
  static const int CFight_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CFight, fighthtype_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CFight, skilltype_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CFight, fighthid_),
  };
  CFight_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CFight_descriptor_,
      CFight::default_instance_,
      CFight_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CFight, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CFight, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CFight));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_CFight_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CFight_descriptor_, &CFight::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_CFight_2eproto() {
  delete CFight::default_instance_;
  delete CFight_reflection_;
}

void protobuf_AddDesc_CFight_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014CFight.proto\"A\n\006CFight\022\022\n\nfighthType\030\001"
    " \002(\005\022\021\n\tskillType\030\002 \002(\005\022\020\n\010fighthId\030\003 \002("
    "\005B-\n\"com.thanple.gs.common.nio.protocolB"
    "\007_CFight", 128);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "CFight.proto", &protobuf_RegisterTypes);
  CFight::default_instance_ = new CFight();
  CFight::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_CFight_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_CFight_2eproto {
  StaticDescriptorInitializer_CFight_2eproto() {
    protobuf_AddDesc_CFight_2eproto();
  }
} static_descriptor_initializer_CFight_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int CFight::kFighthTypeFieldNumber;
const int CFight::kSkillTypeFieldNumber;
const int CFight::kFighthIdFieldNumber;
#endif  // !_MSC_VER

CFight::CFight()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:CFight)
}

void CFight::InitAsDefaultInstance() {
}

CFight::CFight(const CFight& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:CFight)
}

void CFight::SharedCtor() {
  _cached_size_ = 0;
  fighthtype_ = 0;
  skilltype_ = 0;
  fighthid_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CFight::~CFight() {
  // @@protoc_insertion_point(destructor:CFight)
  SharedDtor();
}

void CFight::SharedDtor() {
  if (this != default_instance_) {
  }
}

void CFight::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CFight::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CFight_descriptor_;
}

const CFight& CFight::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_CFight_2eproto();
  return *default_instance_;
}

CFight* CFight::default_instance_ = NULL;

CFight* CFight::New() const {
  return new CFight;
}

void CFight::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<CFight*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  ZR_(fighthtype_, fighthid_);

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CFight::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:CFight)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 fighthType = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &fighthtype_)));
          set_has_fighthtype();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_skillType;
        break;
      }

      // required int32 skillType = 2;
      case 2: {
        if (tag == 16) {
         parse_skillType:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &skilltype_)));
          set_has_skilltype();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_fighthId;
        break;
      }

      // required int32 fighthId = 3;
      case 3: {
        if (tag == 24) {
         parse_fighthId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &fighthid_)));
          set_has_fighthid();
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
  // @@protoc_insertion_point(parse_success:CFight)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:CFight)
  return false;
#undef DO_
}

void CFight::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:CFight)
  // required int32 fighthType = 1;
  if (has_fighthtype()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->fighthtype(), output);
  }

  // required int32 skillType = 2;
  if (has_skilltype()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->skilltype(), output);
  }

  // required int32 fighthId = 3;
  if (has_fighthid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->fighthid(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:CFight)
}

::google::protobuf::uint8* CFight::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:CFight)
  // required int32 fighthType = 1;
  if (has_fighthtype()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->fighthtype(), target);
  }

  // required int32 skillType = 2;
  if (has_skilltype()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->skilltype(), target);
  }

  // required int32 fighthId = 3;
  if (has_fighthid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->fighthid(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:CFight)
  return target;
}

int CFight::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 fighthType = 1;
    if (has_fighthtype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->fighthtype());
    }

    // required int32 skillType = 2;
    if (has_skilltype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->skilltype());
    }

    // required int32 fighthId = 3;
    if (has_fighthid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->fighthid());
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

void CFight::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CFight* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CFight*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CFight::MergeFrom(const CFight& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_fighthtype()) {
      set_fighthtype(from.fighthtype());
    }
    if (from.has_skilltype()) {
      set_skilltype(from.skilltype());
    }
    if (from.has_fighthid()) {
      set_fighthid(from.fighthid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CFight::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CFight::CopyFrom(const CFight& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CFight::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void CFight::Swap(CFight* other) {
  if (other != this) {
    std::swap(fighthtype_, other->fighthtype_);
    std::swap(skilltype_, other->skilltype_);
    std::swap(fighthid_, other->fighthid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CFight::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CFight_descriptor_;
  metadata.reflection = CFight_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)