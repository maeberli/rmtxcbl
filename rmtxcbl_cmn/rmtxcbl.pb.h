// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rmtxcbl.proto

#ifndef PROTOBUF_rmtxcbl_2eproto__INCLUDED
#define PROTOBUF_rmtxcbl_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace rmtxcbl {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_rmtxcbl_2eproto();
void protobuf_AssignDesc_rmtxcbl_2eproto();
void protobuf_ShutdownFile_rmtxcbl_2eproto();

class RmtxcblMessage;
class Executable;
class Stream;

enum RmtxcblMessage_Type {
  RmtxcblMessage_Type_EXEC = 1,
  RmtxcblMessage_Type_STREAM = 2
};
bool RmtxcblMessage_Type_IsValid(int value);
const RmtxcblMessage_Type RmtxcblMessage_Type_Type_MIN = RmtxcblMessage_Type_EXEC;
const RmtxcblMessage_Type RmtxcblMessage_Type_Type_MAX = RmtxcblMessage_Type_STREAM;
const int RmtxcblMessage_Type_Type_ARRAYSIZE = RmtxcblMessage_Type_Type_MAX + 1;

const ::google::protobuf::EnumDescriptor* RmtxcblMessage_Type_descriptor();
inline const ::std::string& RmtxcblMessage_Type_Name(RmtxcblMessage_Type value) {
  return ::google::protobuf::internal::NameOfEnum(
    RmtxcblMessage_Type_descriptor(), value);
}
inline bool RmtxcblMessage_Type_Parse(
    const ::std::string& name, RmtxcblMessage_Type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<RmtxcblMessage_Type>(
    RmtxcblMessage_Type_descriptor(), name, value);
}
// ===================================================================

class RmtxcblMessage : public ::google::protobuf::Message {
 public:
  RmtxcblMessage();
  virtual ~RmtxcblMessage();

  RmtxcblMessage(const RmtxcblMessage& from);

  inline RmtxcblMessage& operator=(const RmtxcblMessage& from) {
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
  static const RmtxcblMessage& default_instance();

  void Swap(RmtxcblMessage* other);

  // implements Message ----------------------------------------------

  RmtxcblMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RmtxcblMessage& from);
  void MergeFrom(const RmtxcblMessage& from);
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

  typedef RmtxcblMessage_Type Type;
  static const Type EXEC = RmtxcblMessage_Type_EXEC;
  static const Type STREAM = RmtxcblMessage_Type_STREAM;
  static inline bool Type_IsValid(int value) {
    return RmtxcblMessage_Type_IsValid(value);
  }
  static const Type Type_MIN =
    RmtxcblMessage_Type_Type_MIN;
  static const Type Type_MAX =
    RmtxcblMessage_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    RmtxcblMessage_Type_Type_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Type_descriptor() {
    return RmtxcblMessage_Type_descriptor();
  }
  static inline const ::std::string& Type_Name(Type value) {
    return RmtxcblMessage_Type_Name(value);
  }
  static inline bool Type_Parse(const ::std::string& name,
      Type* value) {
    return RmtxcblMessage_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required .rmtxcbl.RmtxcblMessage.Type type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::rmtxcbl::RmtxcblMessage_Type type() const;
  inline void set_type(::rmtxcbl::RmtxcblMessage_Type value);

  // optional .rmtxcbl.Executable executable = 2;
  inline bool has_executable() const;
  inline void clear_executable();
  static const int kExecutableFieldNumber = 2;
  inline const ::rmtxcbl::Executable& executable() const;
  inline ::rmtxcbl::Executable* mutable_executable();
  inline ::rmtxcbl::Executable* release_executable();
  inline void set_allocated_executable(::rmtxcbl::Executable* executable);

  // optional .rmtxcbl.Stream stream = 3;
  inline bool has_stream() const;
  inline void clear_stream();
  static const int kStreamFieldNumber = 3;
  inline const ::rmtxcbl::Stream& stream() const;
  inline ::rmtxcbl::Stream* mutable_stream();
  inline ::rmtxcbl::Stream* release_stream();
  inline void set_allocated_stream(::rmtxcbl::Stream* stream);

  // @@protoc_insertion_point(class_scope:rmtxcbl.RmtxcblMessage)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_executable();
  inline void clear_has_executable();
  inline void set_has_stream();
  inline void clear_has_stream();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::rmtxcbl::Executable* executable_;
  ::rmtxcbl::Stream* stream_;
  int type_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_rmtxcbl_2eproto();
  friend void protobuf_AssignDesc_rmtxcbl_2eproto();
  friend void protobuf_ShutdownFile_rmtxcbl_2eproto();

  void InitAsDefaultInstance();
  static RmtxcblMessage* default_instance_;
};
// -------------------------------------------------------------------

class Executable : public ::google::protobuf::Message {
 public:
  Executable();
  virtual ~Executable();

  Executable(const Executable& from);

  inline Executable& operator=(const Executable& from) {
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
  static const Executable& default_instance();

  void Swap(Executable* other);

  // implements Message ----------------------------------------------

  Executable* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Executable& from);
  void MergeFrom(const Executable& from);
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

  // required bytes exec = 1;
  inline bool has_exec() const;
  inline void clear_exec();
  static const int kExecFieldNumber = 1;
  inline const ::std::string& exec() const;
  inline void set_exec(const ::std::string& value);
  inline void set_exec(const char* value);
  inline void set_exec(const void* value, size_t size);
  inline ::std::string* mutable_exec();
  inline ::std::string* release_exec();
  inline void set_allocated_exec(::std::string* exec);

  // optional string label = 2;
  inline bool has_label() const;
  inline void clear_label();
  static const int kLabelFieldNumber = 2;
  inline const ::std::string& label() const;
  inline void set_label(const ::std::string& value);
  inline void set_label(const char* value);
  inline void set_label(const char* value, size_t size);
  inline ::std::string* mutable_label();
  inline ::std::string* release_label();
  inline void set_allocated_label(::std::string* label);

  // @@protoc_insertion_point(class_scope:rmtxcbl.Executable)
 private:
  inline void set_has_exec();
  inline void clear_has_exec();
  inline void set_has_label();
  inline void clear_has_label();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* exec_;
  ::std::string* label_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_rmtxcbl_2eproto();
  friend void protobuf_AssignDesc_rmtxcbl_2eproto();
  friend void protobuf_ShutdownFile_rmtxcbl_2eproto();

  void InitAsDefaultInstance();
  static Executable* default_instance_;
};
// -------------------------------------------------------------------

class Stream : public ::google::protobuf::Message {
 public:
  Stream();
  virtual ~Stream();

  Stream(const Stream& from);

  inline Stream& operator=(const Stream& from) {
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
  static const Stream& default_instance();

  void Swap(Stream* other);

  // implements Message ----------------------------------------------

  Stream* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Stream& from);
  void MergeFrom(const Stream& from);
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

  // optional string in = 1;
  inline bool has_in() const;
  inline void clear_in();
  static const int kInFieldNumber = 1;
  inline const ::std::string& in() const;
  inline void set_in(const ::std::string& value);
  inline void set_in(const char* value);
  inline void set_in(const char* value, size_t size);
  inline ::std::string* mutable_in();
  inline ::std::string* release_in();
  inline void set_allocated_in(::std::string* in);

  // optional string out = 2;
  inline bool has_out() const;
  inline void clear_out();
  static const int kOutFieldNumber = 2;
  inline const ::std::string& out() const;
  inline void set_out(const ::std::string& value);
  inline void set_out(const char* value);
  inline void set_out(const char* value, size_t size);
  inline ::std::string* mutable_out();
  inline ::std::string* release_out();
  inline void set_allocated_out(::std::string* out);

  // optional string err = 3;
  inline bool has_err() const;
  inline void clear_err();
  static const int kErrFieldNumber = 3;
  inline const ::std::string& err() const;
  inline void set_err(const ::std::string& value);
  inline void set_err(const char* value);
  inline void set_err(const char* value, size_t size);
  inline ::std::string* mutable_err();
  inline ::std::string* release_err();
  inline void set_allocated_err(::std::string* err);

  // @@protoc_insertion_point(class_scope:rmtxcbl.Stream)
 private:
  inline void set_has_in();
  inline void clear_has_in();
  inline void set_has_out();
  inline void clear_has_out();
  inline void set_has_err();
  inline void clear_has_err();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* in_;
  ::std::string* out_;
  ::std::string* err_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_rmtxcbl_2eproto();
  friend void protobuf_AssignDesc_rmtxcbl_2eproto();
  friend void protobuf_ShutdownFile_rmtxcbl_2eproto();

  void InitAsDefaultInstance();
  static Stream* default_instance_;
};
// ===================================================================


// ===================================================================

// RmtxcblMessage

// required .rmtxcbl.RmtxcblMessage.Type type = 1;
inline bool RmtxcblMessage::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RmtxcblMessage::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RmtxcblMessage::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RmtxcblMessage::clear_type() {
  type_ = 1;
  clear_has_type();
}
inline ::rmtxcbl::RmtxcblMessage_Type RmtxcblMessage::type() const {
  return static_cast< ::rmtxcbl::RmtxcblMessage_Type >(type_);
}
inline void RmtxcblMessage::set_type(::rmtxcbl::RmtxcblMessage_Type value) {
  assert(::rmtxcbl::RmtxcblMessage_Type_IsValid(value));
  set_has_type();
  type_ = value;
}

// optional .rmtxcbl.Executable executable = 2;
inline bool RmtxcblMessage::has_executable() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RmtxcblMessage::set_has_executable() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RmtxcblMessage::clear_has_executable() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RmtxcblMessage::clear_executable() {
  if (executable_ != NULL) executable_->::rmtxcbl::Executable::Clear();
  clear_has_executable();
}
inline const ::rmtxcbl::Executable& RmtxcblMessage::executable() const {
  return executable_ != NULL ? *executable_ : *default_instance_->executable_;
}
inline ::rmtxcbl::Executable* RmtxcblMessage::mutable_executable() {
  set_has_executable();
  if (executable_ == NULL) executable_ = new ::rmtxcbl::Executable;
  return executable_;
}
inline ::rmtxcbl::Executable* RmtxcblMessage::release_executable() {
  clear_has_executable();
  ::rmtxcbl::Executable* temp = executable_;
  executable_ = NULL;
  return temp;
}
inline void RmtxcblMessage::set_allocated_executable(::rmtxcbl::Executable* executable) {
  delete executable_;
  executable_ = executable;
  if (executable) {
    set_has_executable();
  } else {
    clear_has_executable();
  }
}

// optional .rmtxcbl.Stream stream = 3;
inline bool RmtxcblMessage::has_stream() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RmtxcblMessage::set_has_stream() {
  _has_bits_[0] |= 0x00000004u;
}
inline void RmtxcblMessage::clear_has_stream() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void RmtxcblMessage::clear_stream() {
  if (stream_ != NULL) stream_->::rmtxcbl::Stream::Clear();
  clear_has_stream();
}
inline const ::rmtxcbl::Stream& RmtxcblMessage::stream() const {
  return stream_ != NULL ? *stream_ : *default_instance_->stream_;
}
inline ::rmtxcbl::Stream* RmtxcblMessage::mutable_stream() {
  set_has_stream();
  if (stream_ == NULL) stream_ = new ::rmtxcbl::Stream;
  return stream_;
}
inline ::rmtxcbl::Stream* RmtxcblMessage::release_stream() {
  clear_has_stream();
  ::rmtxcbl::Stream* temp = stream_;
  stream_ = NULL;
  return temp;
}
inline void RmtxcblMessage::set_allocated_stream(::rmtxcbl::Stream* stream) {
  delete stream_;
  stream_ = stream;
  if (stream) {
    set_has_stream();
  } else {
    clear_has_stream();
  }
}

// -------------------------------------------------------------------

// Executable

// required bytes exec = 1;
inline bool Executable::has_exec() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Executable::set_has_exec() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Executable::clear_has_exec() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Executable::clear_exec() {
  if (exec_ != &::google::protobuf::internal::kEmptyString) {
    exec_->clear();
  }
  clear_has_exec();
}
inline const ::std::string& Executable::exec() const {
  return *exec_;
}
inline void Executable::set_exec(const ::std::string& value) {
  set_has_exec();
  if (exec_ == &::google::protobuf::internal::kEmptyString) {
    exec_ = new ::std::string;
  }
  exec_->assign(value);
}
inline void Executable::set_exec(const char* value) {
  set_has_exec();
  if (exec_ == &::google::protobuf::internal::kEmptyString) {
    exec_ = new ::std::string;
  }
  exec_->assign(value);
}
inline void Executable::set_exec(const void* value, size_t size) {
  set_has_exec();
  if (exec_ == &::google::protobuf::internal::kEmptyString) {
    exec_ = new ::std::string;
  }
  exec_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Executable::mutable_exec() {
  set_has_exec();
  if (exec_ == &::google::protobuf::internal::kEmptyString) {
    exec_ = new ::std::string;
  }
  return exec_;
}
inline ::std::string* Executable::release_exec() {
  clear_has_exec();
  if (exec_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = exec_;
    exec_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Executable::set_allocated_exec(::std::string* exec) {
  if (exec_ != &::google::protobuf::internal::kEmptyString) {
    delete exec_;
  }
  if (exec) {
    set_has_exec();
    exec_ = exec;
  } else {
    clear_has_exec();
    exec_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string label = 2;
inline bool Executable::has_label() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Executable::set_has_label() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Executable::clear_has_label() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Executable::clear_label() {
  if (label_ != &::google::protobuf::internal::kEmptyString) {
    label_->clear();
  }
  clear_has_label();
}
inline const ::std::string& Executable::label() const {
  return *label_;
}
inline void Executable::set_label(const ::std::string& value) {
  set_has_label();
  if (label_ == &::google::protobuf::internal::kEmptyString) {
    label_ = new ::std::string;
  }
  label_->assign(value);
}
inline void Executable::set_label(const char* value) {
  set_has_label();
  if (label_ == &::google::protobuf::internal::kEmptyString) {
    label_ = new ::std::string;
  }
  label_->assign(value);
}
inline void Executable::set_label(const char* value, size_t size) {
  set_has_label();
  if (label_ == &::google::protobuf::internal::kEmptyString) {
    label_ = new ::std::string;
  }
  label_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Executable::mutable_label() {
  set_has_label();
  if (label_ == &::google::protobuf::internal::kEmptyString) {
    label_ = new ::std::string;
  }
  return label_;
}
inline ::std::string* Executable::release_label() {
  clear_has_label();
  if (label_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = label_;
    label_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Executable::set_allocated_label(::std::string* label) {
  if (label_ != &::google::protobuf::internal::kEmptyString) {
    delete label_;
  }
  if (label) {
    set_has_label();
    label_ = label;
  } else {
    clear_has_label();
    label_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// Stream

// optional string in = 1;
inline bool Stream::has_in() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Stream::set_has_in() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Stream::clear_has_in() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Stream::clear_in() {
  if (in_ != &::google::protobuf::internal::kEmptyString) {
    in_->clear();
  }
  clear_has_in();
}
inline const ::std::string& Stream::in() const {
  return *in_;
}
inline void Stream::set_in(const ::std::string& value) {
  set_has_in();
  if (in_ == &::google::protobuf::internal::kEmptyString) {
    in_ = new ::std::string;
  }
  in_->assign(value);
}
inline void Stream::set_in(const char* value) {
  set_has_in();
  if (in_ == &::google::protobuf::internal::kEmptyString) {
    in_ = new ::std::string;
  }
  in_->assign(value);
}
inline void Stream::set_in(const char* value, size_t size) {
  set_has_in();
  if (in_ == &::google::protobuf::internal::kEmptyString) {
    in_ = new ::std::string;
  }
  in_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Stream::mutable_in() {
  set_has_in();
  if (in_ == &::google::protobuf::internal::kEmptyString) {
    in_ = new ::std::string;
  }
  return in_;
}
inline ::std::string* Stream::release_in() {
  clear_has_in();
  if (in_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = in_;
    in_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Stream::set_allocated_in(::std::string* in) {
  if (in_ != &::google::protobuf::internal::kEmptyString) {
    delete in_;
  }
  if (in) {
    set_has_in();
    in_ = in;
  } else {
    clear_has_in();
    in_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string out = 2;
inline bool Stream::has_out() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Stream::set_has_out() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Stream::clear_has_out() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Stream::clear_out() {
  if (out_ != &::google::protobuf::internal::kEmptyString) {
    out_->clear();
  }
  clear_has_out();
}
inline const ::std::string& Stream::out() const {
  return *out_;
}
inline void Stream::set_out(const ::std::string& value) {
  set_has_out();
  if (out_ == &::google::protobuf::internal::kEmptyString) {
    out_ = new ::std::string;
  }
  out_->assign(value);
}
inline void Stream::set_out(const char* value) {
  set_has_out();
  if (out_ == &::google::protobuf::internal::kEmptyString) {
    out_ = new ::std::string;
  }
  out_->assign(value);
}
inline void Stream::set_out(const char* value, size_t size) {
  set_has_out();
  if (out_ == &::google::protobuf::internal::kEmptyString) {
    out_ = new ::std::string;
  }
  out_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Stream::mutable_out() {
  set_has_out();
  if (out_ == &::google::protobuf::internal::kEmptyString) {
    out_ = new ::std::string;
  }
  return out_;
}
inline ::std::string* Stream::release_out() {
  clear_has_out();
  if (out_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = out_;
    out_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Stream::set_allocated_out(::std::string* out) {
  if (out_ != &::google::protobuf::internal::kEmptyString) {
    delete out_;
  }
  if (out) {
    set_has_out();
    out_ = out;
  } else {
    clear_has_out();
    out_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string err = 3;
inline bool Stream::has_err() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Stream::set_has_err() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Stream::clear_has_err() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Stream::clear_err() {
  if (err_ != &::google::protobuf::internal::kEmptyString) {
    err_->clear();
  }
  clear_has_err();
}
inline const ::std::string& Stream::err() const {
  return *err_;
}
inline void Stream::set_err(const ::std::string& value) {
  set_has_err();
  if (err_ == &::google::protobuf::internal::kEmptyString) {
    err_ = new ::std::string;
  }
  err_->assign(value);
}
inline void Stream::set_err(const char* value) {
  set_has_err();
  if (err_ == &::google::protobuf::internal::kEmptyString) {
    err_ = new ::std::string;
  }
  err_->assign(value);
}
inline void Stream::set_err(const char* value, size_t size) {
  set_has_err();
  if (err_ == &::google::protobuf::internal::kEmptyString) {
    err_ = new ::std::string;
  }
  err_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Stream::mutable_err() {
  set_has_err();
  if (err_ == &::google::protobuf::internal::kEmptyString) {
    err_ = new ::std::string;
  }
  return err_;
}
inline ::std::string* Stream::release_err() {
  clear_has_err();
  if (err_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = err_;
    err_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Stream::set_allocated_err(::std::string* err) {
  if (err_ != &::google::protobuf::internal::kEmptyString) {
    delete err_;
  }
  if (err) {
    set_has_err();
    err_ = err;
  } else {
    clear_has_err();
    err_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace rmtxcbl

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::rmtxcbl::RmtxcblMessage_Type>() {
  return ::rmtxcbl::RmtxcblMessage_Type_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_rmtxcbl_2eproto__INCLUDED
