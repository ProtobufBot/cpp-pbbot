// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: onebot_base.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_onebot_5fbase_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_onebot_5fbase_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3015000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3015006 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_onebot_5fbase_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_onebot_5fbase_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_onebot_5fbase_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_onebot_5fbase_2eproto_metadata_getter(int index);
namespace onebot {
class Message;
struct MessageDefaultTypeInternal;
extern MessageDefaultTypeInternal _Message_default_instance_;
class Message_DataEntry_DoNotUse;
struct Message_DataEntry_DoNotUseDefaultTypeInternal;
extern Message_DataEntry_DoNotUseDefaultTypeInternal _Message_DataEntry_DoNotUse_default_instance_;
}  // namespace onebot
PROTOBUF_NAMESPACE_OPEN
template<> ::onebot::Message* Arena::CreateMaybeMessage<::onebot::Message>(Arena*);
template<> ::onebot::Message_DataEntry_DoNotUse* Arena::CreateMaybeMessage<::onebot::Message_DataEntry_DoNotUse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace onebot {

// ===================================================================

class Message_DataEntry_DoNotUse : public ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<Message_DataEntry_DoNotUse, 
    std::string, std::string,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING> {
public:
  typedef ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<Message_DataEntry_DoNotUse, 
    std::string, std::string,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING> SuperType;
  Message_DataEntry_DoNotUse();
  explicit constexpr Message_DataEntry_DoNotUse(
      ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);
  explicit Message_DataEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  void MergeFrom(const Message_DataEntry_DoNotUse& other);
  static const Message_DataEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const Message_DataEntry_DoNotUse*>(&_Message_DataEntry_DoNotUse_default_instance_); }
  static bool ValidateKey(std::string* s) {
    return ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(s->data(), static_cast<int>(s->size()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE, "onebot.Message.DataEntry.key");
 }
  static bool ValidateValue(std::string* s) {
    return ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(s->data(), static_cast<int>(s->size()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE, "onebot.Message.DataEntry.value");
 }
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& other) final;
  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_onebot_5fbase_2eproto);
    return ::descriptor_table_onebot_5fbase_2eproto.file_level_metadata[0];
  }

  public:
};

// -------------------------------------------------------------------

class Message PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:onebot.Message) */ {
 public:
  inline Message() : Message(nullptr) {}
  virtual ~Message();
  explicit constexpr Message(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Message(const Message& from);
  Message(Message&& from) noexcept
    : Message() {
    *this = ::std::move(from);
  }

  inline Message& operator=(const Message& from) {
    CopyFrom(from);
    return *this;
  }
  inline Message& operator=(Message&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Message& default_instance() {
    return *internal_default_instance();
  }
  static inline const Message* internal_default_instance() {
    return reinterpret_cast<const Message*>(
               &_Message_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Message& a, Message& b) {
    a.Swap(&b);
  }
  inline void Swap(Message* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Message* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Message* New() const final {
    return CreateMaybeMessage<Message>(nullptr);
  }

  Message* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Message>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Message& from);
  void MergeFrom(const Message& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Message* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "onebot.Message";
  }
  protected:
  explicit Message(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_onebot_5fbase_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  enum : int {
    kDataFieldNumber = 2,
    kTypeFieldNumber = 1,
  };
  // map<string, string> data = 2;
  int data_size() const;
  private:
  int _internal_data_size() const;
  public:
  void clear_data();
  private:
  const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
      _internal_data() const;
  ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
      _internal_mutable_data();
  public:
  const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
      data() const;
  ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
      mutable_data();

  // string type = 1;
  void clear_type();
  const std::string& type() const;
  void set_type(const std::string& value);
  void set_type(std::string&& value);
  void set_type(const char* value);
  void set_type(const char* value, size_t size);
  std::string* mutable_type();
  std::string* release_type();
  void set_allocated_type(std::string* type);
  private:
  const std::string& _internal_type() const;
  void _internal_set_type(const std::string& value);
  std::string* _internal_mutable_type();
  public:

  // @@protoc_insertion_point(class_scope:onebot.Message)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::MapField<
      Message_DataEntry_DoNotUse,
      std::string, std::string,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING> data_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_onebot_5fbase_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Message

// string type = 1;
inline void Message::clear_type() {
  type_.ClearToEmpty();
}
inline const std::string& Message::type() const {
  // @@protoc_insertion_point(field_get:onebot.Message.type)
  return _internal_type();
}
inline void Message::set_type(const std::string& value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:onebot.Message.type)
}
inline std::string* Message::mutable_type() {
  // @@protoc_insertion_point(field_mutable:onebot.Message.type)
  return _internal_mutable_type();
}
inline const std::string& Message::_internal_type() const {
  return type_.Get();
}
inline void Message::_internal_set_type(const std::string& value) {
  
  type_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void Message::set_type(std::string&& value) {
  
  type_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:onebot.Message.type)
}
inline void Message::set_type(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  type_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:onebot.Message.type)
}
inline void Message::set_type(const char* value,
    size_t size) {
  
  type_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:onebot.Message.type)
}
inline std::string* Message::_internal_mutable_type() {
  
  return type_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* Message::release_type() {
  // @@protoc_insertion_point(field_release:onebot.Message.type)
  return type_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Message::set_allocated_type(std::string* type) {
  if (type != nullptr) {
    
  } else {
    
  }
  type_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), type,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:onebot.Message.type)
}

// map<string, string> data = 2;
inline int Message::_internal_data_size() const {
  return data_.size();
}
inline int Message::data_size() const {
  return _internal_data_size();
}
inline void Message::clear_data() {
  data_.Clear();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
Message::_internal_data() const {
  return data_.GetMap();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
Message::data() const {
  // @@protoc_insertion_point(field_map:onebot.Message.data)
  return _internal_data();
}
inline ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
Message::_internal_mutable_data() {
  return data_.MutableMap();
}
inline ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
Message::mutable_data() {
  // @@protoc_insertion_point(field_mutable_map:onebot.Message.data)
  return _internal_mutable_data();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace onebot

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_onebot_5fbase_2eproto