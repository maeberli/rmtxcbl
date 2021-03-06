// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rmtxcbl.proto

#ifndef PROTOBUF_rmtxcbl_2eproto__INCLUDED
#define PROTOBUF_rmtxcbl_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

namespace rmtxcbl {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_rmtxcbl_2eproto();
void protobuf_AssignDesc_rmtxcbl_2eproto();
void protobuf_ShutdownFile_rmtxcbl_2eproto();

class RmtxcblMessage;
class Executable;
class OutStream;
class ExecutableState;

enum RmtxcblMessage_Type {
  RmtxcblMessage_Type_EXEC = 1,
  RmtxcblMessage_Type_OUTSTREAM = 2,
  RmtxcblMessage_Type_STATE = 3
};
bool RmtxcblMessage_Type_IsValid(int value);
const RmtxcblMessage_Type RmtxcblMessage_Type_Type_MIN = RmtxcblMessage_Type_EXEC;
const RmtxcblMessage_Type RmtxcblMessage_Type_Type_MAX = RmtxcblMessage_Type_STATE;
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
enum ExecutableState_State {
  ExecutableState_State_TRANSFERED = 1,
  ExecutableState_State_STARTED = 2,
  ExecutableState_State_STOPPED = 3
};
bool ExecutableState_State_IsValid(int value);
const ExecutableState_State ExecutableState_State_State_MIN = ExecutableState_State_TRANSFERED;
const ExecutableState_State ExecutableState_State_State_MAX = ExecutableState_State_STOPPED;
const int ExecutableState_State_State_ARRAYSIZE = ExecutableState_State_State_MAX + 1;

const ::google::protobuf::EnumDescriptor* ExecutableState_State_descriptor();
inline const ::std::string& ExecutableState_State_Name(ExecutableState_State value) {
  return ::google::protobuf::internal::NameOfEnum(
    ExecutableState_State_descriptor(), value);
}
inline bool ExecutableState_State_Parse(
    const ::std::string& name, ExecutableState_State* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ExecutableState_State>(
    ExecutableState_State_descriptor(), name, value);
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
  static const Type OUTSTREAM = RmtxcblMessage_Type_OUTSTREAM;
  static const Type STATE = RmtxcblMessage_Type_STATE;
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
  
  // optional .rmtxcbl.OutStream outstream = 3;
  inline bool has_outstream() const;
  inline void clear_outstream();
  static const int kOutstreamFieldNumber = 3;
  inline const ::rmtxcbl::OutStream& outstream() const;
  inline ::rmtxcbl::OutStream* mutable_outstream();
  inline ::rmtxcbl::OutStream* release_outstream();
  
  // optional .rmtxcbl.ExecutableState executableState = 4;
  inline bool has_executablestate() const;
  inline void clear_executablestate();
  static const int kExecutableStateFieldNumber = 4;
  inline const ::rmtxcbl::ExecutableState& executablestate() const;
  inline ::rmtxcbl::ExecutableState* mutable_executablestate();
  inline ::rmtxcbl::ExecutableState* release_executablestate();
  
  // @@protoc_insertion_point(class_scope:rmtxcbl.RmtxcblMessage)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_executable();
  inline void clear_has_executable();
  inline void set_has_outstream();
  inline void clear_has_outstream();
  inline void set_has_executablestate();
  inline void clear_has_executablestate();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::rmtxcbl::Executable* executable_;
  ::rmtxcbl::OutStream* outstream_;
  ::rmtxcbl::ExecutableState* executablestate_;
  int type_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];
  
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

class OutStream : public ::google::protobuf::Message {
 public:
  OutStream();
  virtual ~OutStream();
  
  OutStream(const OutStream& from);
  
  inline OutStream& operator=(const OutStream& from) {
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
  static const OutStream& default_instance();
  
  void Swap(OutStream* other);
  
  // implements Message ----------------------------------------------
  
  OutStream* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const OutStream& from);
  void MergeFrom(const OutStream& from);
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
  
  // optional string out = 1;
  inline bool has_out() const;
  inline void clear_out();
  static const int kOutFieldNumber = 1;
  inline const ::std::string& out() const;
  inline void set_out(const ::std::string& value);
  inline void set_out(const char* value);
  inline void set_out(const char* value, size_t size);
  inline ::std::string* mutable_out();
  inline ::std::string* release_out();
  
  // @@protoc_insertion_point(class_scope:rmtxcbl.OutStream)
 private:
  inline void set_has_out();
  inline void clear_has_out();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* out_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_rmtxcbl_2eproto();
  friend void protobuf_AssignDesc_rmtxcbl_2eproto();
  friend void protobuf_ShutdownFile_rmtxcbl_2eproto();
  
  void InitAsDefaultInstance();
  static OutStream* default_instance_;
};
// -------------------------------------------------------------------

class ExecutableState : public ::google::protobuf::Message {
 public:
  ExecutableState();
  virtual ~ExecutableState();
  
  ExecutableState(const ExecutableState& from);
  
  inline ExecutableState& operator=(const ExecutableState& from) {
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
  static const ExecutableState& default_instance();
  
  void Swap(ExecutableState* other);
  
  // implements Message ----------------------------------------------
  
  ExecutableState* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ExecutableState& from);
  void MergeFrom(const ExecutableState& from);
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
  
  typedef ExecutableState_State State;
  static const State TRANSFERED = ExecutableState_State_TRANSFERED;
  static const State STARTED = ExecutableState_State_STARTED;
  static const State STOPPED = ExecutableState_State_STOPPED;
  static inline bool State_IsValid(int value) {
    return ExecutableState_State_IsValid(value);
  }
  static const State State_MIN =
    ExecutableState_State_State_MIN;
  static const State State_MAX =
    ExecutableState_State_State_MAX;
  static const int State_ARRAYSIZE =
    ExecutableState_State_State_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  State_descriptor() {
    return ExecutableState_State_descriptor();
  }
  static inline const ::std::string& State_Name(State value) {
    return ExecutableState_State_Name(value);
  }
  static inline bool State_Parse(const ::std::string& name,
      State* value) {
    return ExecutableState_State_Parse(name, value);
  }
  
  // accessors -------------------------------------------------------
  
  // required .rmtxcbl.ExecutableState.State state = 1;
  inline bool has_state() const;
  inline void clear_state();
  static const int kStateFieldNumber = 1;
  inline ::rmtxcbl::ExecutableState_State state() const;
  inline void set_state(::rmtxcbl::ExecutableState_State value);
  
  // optional string description = 2;
  inline bool has_description() const;
  inline void clear_description();
  static const int kDescriptionFieldNumber = 2;
  inline const ::std::string& description() const;
  inline void set_description(const ::std::string& value);
  inline void set_description(const char* value);
  inline void set_description(const char* value, size_t size);
  inline ::std::string* mutable_description();
  inline ::std::string* release_description();
  
  // @@protoc_insertion_point(class_scope:rmtxcbl.ExecutableState)
 private:
  inline void set_has_state();
  inline void clear_has_state();
  inline void set_has_description();
  inline void clear_has_description();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* description_;
  int state_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_rmtxcbl_2eproto();
  friend void protobuf_AssignDesc_rmtxcbl_2eproto();
  friend void protobuf_ShutdownFile_rmtxcbl_2eproto();
  
  void InitAsDefaultInstance();
  static ExecutableState* default_instance_;
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
  GOOGLE_DCHECK(::rmtxcbl::RmtxcblMessage_Type_IsValid(value));
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

// optional .rmtxcbl.OutStream outstream = 3;
inline bool RmtxcblMessage::has_outstream() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RmtxcblMessage::set_has_outstream() {
  _has_bits_[0] |= 0x00000004u;
}
inline void RmtxcblMessage::clear_has_outstream() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void RmtxcblMessage::clear_outstream() {
  if (outstream_ != NULL) outstream_->::rmtxcbl::OutStream::Clear();
  clear_has_outstream();
}
inline const ::rmtxcbl::OutStream& RmtxcblMessage::outstream() const {
  return outstream_ != NULL ? *outstream_ : *default_instance_->outstream_;
}
inline ::rmtxcbl::OutStream* RmtxcblMessage::mutable_outstream() {
  set_has_outstream();
  if (outstream_ == NULL) outstream_ = new ::rmtxcbl::OutStream;
  return outstream_;
}
inline ::rmtxcbl::OutStream* RmtxcblMessage::release_outstream() {
  clear_has_outstream();
  ::rmtxcbl::OutStream* temp = outstream_;
  outstream_ = NULL;
  return temp;
}

// optional .rmtxcbl.ExecutableState executableState = 4;
inline bool RmtxcblMessage::has_executablestate() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void RmtxcblMessage::set_has_executablestate() {
  _has_bits_[0] |= 0x00000008u;
}
inline void RmtxcblMessage::clear_has_executablestate() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void RmtxcblMessage::clear_executablestate() {
  if (executablestate_ != NULL) executablestate_->::rmtxcbl::ExecutableState::Clear();
  clear_has_executablestate();
}
inline const ::rmtxcbl::ExecutableState& RmtxcblMessage::executablestate() const {
  return executablestate_ != NULL ? *executablestate_ : *default_instance_->executablestate_;
}
inline ::rmtxcbl::ExecutableState* RmtxcblMessage::mutable_executablestate() {
  set_has_executablestate();
  if (executablestate_ == NULL) executablestate_ = new ::rmtxcbl::ExecutableState;
  return executablestate_;
}
inline ::rmtxcbl::ExecutableState* RmtxcblMessage::release_executablestate() {
  clear_has_executablestate();
  ::rmtxcbl::ExecutableState* temp = executablestate_;
  executablestate_ = NULL;
  return temp;
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

// -------------------------------------------------------------------

// OutStream

// optional string out = 1;
inline bool OutStream::has_out() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void OutStream::set_has_out() {
  _has_bits_[0] |= 0x00000001u;
}
inline void OutStream::clear_has_out() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void OutStream::clear_out() {
  if (out_ != &::google::protobuf::internal::kEmptyString) {
    out_->clear();
  }
  clear_has_out();
}
inline const ::std::string& OutStream::out() const {
  return *out_;
}
inline void OutStream::set_out(const ::std::string& value) {
  set_has_out();
  if (out_ == &::google::protobuf::internal::kEmptyString) {
    out_ = new ::std::string;
  }
  out_->assign(value);
}
inline void OutStream::set_out(const char* value) {
  set_has_out();
  if (out_ == &::google::protobuf::internal::kEmptyString) {
    out_ = new ::std::string;
  }
  out_->assign(value);
}
inline void OutStream::set_out(const char* value, size_t size) {
  set_has_out();
  if (out_ == &::google::protobuf::internal::kEmptyString) {
    out_ = new ::std::string;
  }
  out_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* OutStream::mutable_out() {
  set_has_out();
  if (out_ == &::google::protobuf::internal::kEmptyString) {
    out_ = new ::std::string;
  }
  return out_;
}
inline ::std::string* OutStream::release_out() {
  clear_has_out();
  if (out_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = out_;
    out_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// ExecutableState

// required .rmtxcbl.ExecutableState.State state = 1;
inline bool ExecutableState::has_state() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ExecutableState::set_has_state() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ExecutableState::clear_has_state() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ExecutableState::clear_state() {
  state_ = 1;
  clear_has_state();
}
inline ::rmtxcbl::ExecutableState_State ExecutableState::state() const {
  return static_cast< ::rmtxcbl::ExecutableState_State >(state_);
}
inline void ExecutableState::set_state(::rmtxcbl::ExecutableState_State value) {
  GOOGLE_DCHECK(::rmtxcbl::ExecutableState_State_IsValid(value));
  set_has_state();
  state_ = value;
}

// optional string description = 2;
inline bool ExecutableState::has_description() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ExecutableState::set_has_description() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ExecutableState::clear_has_description() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ExecutableState::clear_description() {
  if (description_ != &::google::protobuf::internal::kEmptyString) {
    description_->clear();
  }
  clear_has_description();
}
inline const ::std::string& ExecutableState::description() const {
  return *description_;
}
inline void ExecutableState::set_description(const ::std::string& value) {
  set_has_description();
  if (description_ == &::google::protobuf::internal::kEmptyString) {
    description_ = new ::std::string;
  }
  description_->assign(value);
}
inline void ExecutableState::set_description(const char* value) {
  set_has_description();
  if (description_ == &::google::protobuf::internal::kEmptyString) {
    description_ = new ::std::string;
  }
  description_->assign(value);
}
inline void ExecutableState::set_description(const char* value, size_t size) {
  set_has_description();
  if (description_ == &::google::protobuf::internal::kEmptyString) {
    description_ = new ::std::string;
  }
  description_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ExecutableState::mutable_description() {
  set_has_description();
  if (description_ == &::google::protobuf::internal::kEmptyString) {
    description_ = new ::std::string;
  }
  return description_;
}
inline ::std::string* ExecutableState::release_description() {
  clear_has_description();
  if (description_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = description_;
    description_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
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
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::rmtxcbl::ExecutableState_State>() {
  return ::rmtxcbl::ExecutableState_State_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_rmtxcbl_2eproto__INCLUDED
