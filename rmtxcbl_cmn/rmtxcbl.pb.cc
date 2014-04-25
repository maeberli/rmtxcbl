// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rmtxcbl.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "rmtxcbl.pb.h"

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

namespace rmtxcbl {

namespace {

const ::google::protobuf::Descriptor* executable_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  executable_reflection_ = NULL;
const ::google::protobuf::Descriptor* stream_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  stream_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_rmtxcbl_2eproto() {
  protobuf_AddDesc_rmtxcbl_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "rmtxcbl.proto");
  GOOGLE_CHECK(file != NULL);
  executable_descriptor_ = file->message_type(0);
  static const int executable_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(executable, exec_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(executable, label_),
  };
  executable_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      executable_descriptor_,
      executable::default_instance_,
      executable_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(executable, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(executable, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(executable));
  stream_descriptor_ = file->message_type(1);
  static const int stream_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(stream, out_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(stream, err_),
  };
  stream_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      stream_descriptor_,
      stream::default_instance_,
      stream_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(stream, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(stream, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(stream));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_rmtxcbl_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    executable_descriptor_, &executable::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    stream_descriptor_, &stream::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_rmtxcbl_2eproto() {
  delete executable::default_instance_;
  delete executable_reflection_;
  delete stream::default_instance_;
  delete stream_reflection_;
}

void protobuf_AddDesc_rmtxcbl_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rrmtxcbl.proto\022\007rmtxcbl\")\n\nexecutable\022\014"
    "\n\004exec\030\001 \002(\014\022\r\n\005label\030\002 \001(\t\"\"\n\006stream\022\013\n"
    "\003out\030\001 \001(\t\022\013\n\003err\030\002 \001(\t", 103);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "rmtxcbl.proto", &protobuf_RegisterTypes);
  executable::default_instance_ = new executable();
  stream::default_instance_ = new stream();
  executable::default_instance_->InitAsDefaultInstance();
  stream::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_rmtxcbl_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_rmtxcbl_2eproto {
  StaticDescriptorInitializer_rmtxcbl_2eproto() {
    protobuf_AddDesc_rmtxcbl_2eproto();
  }
} static_descriptor_initializer_rmtxcbl_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int executable::kExecFieldNumber;
const int executable::kLabelFieldNumber;
#endif  // !_MSC_VER

executable::executable()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void executable::InitAsDefaultInstance() {
}

executable::executable(const executable& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void executable::SharedCtor() {
  _cached_size_ = 0;
  exec_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  label_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

executable::~executable() {
  SharedDtor();
}

void executable::SharedDtor() {
  if (exec_ != &::google::protobuf::internal::kEmptyString) {
    delete exec_;
  }
  if (label_ != &::google::protobuf::internal::kEmptyString) {
    delete label_;
  }
  if (this != default_instance_) {
  }
}

void executable::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* executable::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return executable_descriptor_;
}

const executable& executable::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_rmtxcbl_2eproto();
  return *default_instance_;
}

executable* executable::default_instance_ = NULL;

executable* executable::New() const {
  return new executable;
}

void executable::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_exec()) {
      if (exec_ != &::google::protobuf::internal::kEmptyString) {
        exec_->clear();
      }
    }
    if (has_label()) {
      if (label_ != &::google::protobuf::internal::kEmptyString) {
        label_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool executable::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required bytes exec = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_exec()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_label;
        break;
      }

      // optional string label = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_label:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_label()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->label().data(), this->label().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void executable::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required bytes exec = 1;
  if (has_exec()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      1, this->exec(), output);
  }

  // optional string label = 2;
  if (has_label()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->label().data(), this->label().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->label(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* executable::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required bytes exec = 1;
  if (has_exec()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->exec(), target);
  }

  // optional string label = 2;
  if (has_label()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->label().data(), this->label().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->label(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int executable::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required bytes exec = 1;
    if (has_exec()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->exec());
    }

    // optional string label = 2;
    if (has_label()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->label());
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

void executable::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const executable* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const executable*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void executable::MergeFrom(const executable& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_exec()) {
      set_exec(from.exec());
    }
    if (from.has_label()) {
      set_label(from.label());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void executable::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void executable::CopyFrom(const executable& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool executable::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void executable::Swap(executable* other) {
  if (other != this) {
    std::swap(exec_, other->exec_);
    std::swap(label_, other->label_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata executable::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = executable_descriptor_;
  metadata.reflection = executable_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int stream::kOutFieldNumber;
const int stream::kErrFieldNumber;
#endif  // !_MSC_VER

stream::stream()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void stream::InitAsDefaultInstance() {
}

stream::stream(const stream& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void stream::SharedCtor() {
  _cached_size_ = 0;
  out_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  err_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

stream::~stream() {
  SharedDtor();
}

void stream::SharedDtor() {
  if (out_ != &::google::protobuf::internal::kEmptyString) {
    delete out_;
  }
  if (err_ != &::google::protobuf::internal::kEmptyString) {
    delete err_;
  }
  if (this != default_instance_) {
  }
}

void stream::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* stream::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return stream_descriptor_;
}

const stream& stream::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_rmtxcbl_2eproto();
  return *default_instance_;
}

stream* stream::default_instance_ = NULL;

stream* stream::New() const {
  return new stream;
}

void stream::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_out()) {
      if (out_ != &::google::protobuf::internal::kEmptyString) {
        out_->clear();
      }
    }
    if (has_err()) {
      if (err_ != &::google::protobuf::internal::kEmptyString) {
        err_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool stream::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string out = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_out()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->out().data(), this->out().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_err;
        break;
      }

      // optional string err = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_err:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_err()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->err().data(), this->err().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void stream::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string out = 1;
  if (has_out()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->out().data(), this->out().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->out(), output);
  }

  // optional string err = 2;
  if (has_err()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->err().data(), this->err().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->err(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* stream::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional string out = 1;
  if (has_out()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->out().data(), this->out().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->out(), target);
  }

  // optional string err = 2;
  if (has_err()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->err().data(), this->err().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->err(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int stream::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string out = 1;
    if (has_out()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->out());
    }

    // optional string err = 2;
    if (has_err()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->err());
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

void stream::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const stream* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const stream*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void stream::MergeFrom(const stream& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_out()) {
      set_out(from.out());
    }
    if (from.has_err()) {
      set_err(from.err());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void stream::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void stream::CopyFrom(const stream& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool stream::IsInitialized() const {

  return true;
}

void stream::Swap(stream* other) {
  if (other != this) {
    std::swap(out_, other->out_);
    std::swap(err_, other->err_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata stream::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = stream_descriptor_;
  metadata.reflection = stream_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace rmtxcbl

// @@protoc_insertion_point(global_scope)