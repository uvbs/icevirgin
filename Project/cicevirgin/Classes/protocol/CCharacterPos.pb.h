// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CCharacterPos.proto

#ifndef PROTOBUF_CCharacterPos_2eproto__INCLUDED
#define PROTOBUF_CCharacterPos_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_CCharacterPos_2eproto();
void protobuf_AssignDesc_CCharacterPos_2eproto();
void protobuf_ShutdownFile_CCharacterPos_2eproto();

class CCharacterPos;

// ===================================================================

class CCharacterPos : public ::google::protobuf::Message {
 public:
  CCharacterPos();
  virtual ~CCharacterPos();

  CCharacterPos(const CCharacterPos& from);

  inline CCharacterPos& operator=(const CCharacterPos& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CCharacterPos& default_instance();

  void Swap(CCharacterPos* other);

  // implements Message ----------------------------------------------

  CCharacterPos* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CCharacterPos& from);
  void MergeFrom(const CCharacterPos& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required float x = 1;
  inline bool has_x() const;
  inline void clear_x();
  static const int kXFieldNumber = 1;
  inline float x() const;
  inline void set_x(float value);

  // required float y = 2;
  inline bool has_y() const;
  inline void clear_y();
  static const int kYFieldNumber = 2;
  inline float y() const;
  inline void set_y(float value);

  // required int32 direction = 3;
  inline bool has_direction() const;
  inline void clear_direction();
  static const int kDirectionFieldNumber = 3;
  inline ::google::protobuf::int32 direction() const;
  inline void set_direction(::google::protobuf::int32 value);

  // required int32 status = 4;
  inline bool has_status() const;
  inline void clear_status();
  static const int kStatusFieldNumber = 4;
  inline ::google::protobuf::int32 status() const;
  inline void set_status(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:CCharacterPos)
 private:
  inline void set_has_x();
  inline void clear_has_x();
  inline void set_has_y();
  inline void clear_has_y();
  inline void set_has_direction();
  inline void clear_has_direction();
  inline void set_has_status();
  inline void clear_has_status();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  float x_;
  float y_;
  ::google::protobuf::int32 direction_;
  ::google::protobuf::int32 status_;
  friend void  protobuf_AddDesc_CCharacterPos_2eproto();
  friend void protobuf_AssignDesc_CCharacterPos_2eproto();
  friend void protobuf_ShutdownFile_CCharacterPos_2eproto();

  void InitAsDefaultInstance();
  static CCharacterPos* default_instance_;
};
// ===================================================================


// ===================================================================

// CCharacterPos

// required float x = 1;
inline bool CCharacterPos::has_x() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CCharacterPos::set_has_x() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CCharacterPos::clear_has_x() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CCharacterPos::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline float CCharacterPos::x() const {
  // @@protoc_insertion_point(field_get:CCharacterPos.x)
  return x_;
}
inline void CCharacterPos::set_x(float value) {
  set_has_x();
  x_ = value;
  // @@protoc_insertion_point(field_set:CCharacterPos.x)
}

// required float y = 2;
inline bool CCharacterPos::has_y() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CCharacterPos::set_has_y() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CCharacterPos::clear_has_y() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CCharacterPos::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline float CCharacterPos::y() const {
  // @@protoc_insertion_point(field_get:CCharacterPos.y)
  return y_;
}
inline void CCharacterPos::set_y(float value) {
  set_has_y();
  y_ = value;
  // @@protoc_insertion_point(field_set:CCharacterPos.y)
}

// required int32 direction = 3;
inline bool CCharacterPos::has_direction() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CCharacterPos::set_has_direction() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CCharacterPos::clear_has_direction() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CCharacterPos::clear_direction() {
  direction_ = 0;
  clear_has_direction();
}
inline ::google::protobuf::int32 CCharacterPos::direction() const {
  // @@protoc_insertion_point(field_get:CCharacterPos.direction)
  return direction_;
}
inline void CCharacterPos::set_direction(::google::protobuf::int32 value) {
  set_has_direction();
  direction_ = value;
  // @@protoc_insertion_point(field_set:CCharacterPos.direction)
}

// required int32 status = 4;
inline bool CCharacterPos::has_status() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void CCharacterPos::set_has_status() {
  _has_bits_[0] |= 0x00000008u;
}
inline void CCharacterPos::clear_has_status() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void CCharacterPos::clear_status() {
  status_ = 0;
  clear_has_status();
}
inline ::google::protobuf::int32 CCharacterPos::status() const {
  // @@protoc_insertion_point(field_get:CCharacterPos.status)
  return status_;
}
inline void CCharacterPos::set_status(::google::protobuf::int32 value) {
  set_has_status();
  status_ = value;
  // @@protoc_insertion_point(field_set:CCharacterPos.status)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_CCharacterPos_2eproto__INCLUDED