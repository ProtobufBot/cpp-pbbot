// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: onebot_base.proto

#include "onebot_base.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace onebot {
constexpr Message_DataEntry_DoNotUse::Message_DataEntry_DoNotUse(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized){}
struct Message_DataEntry_DoNotUseDefaultTypeInternal {
  constexpr Message_DataEntry_DoNotUseDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~Message_DataEntry_DoNotUseDefaultTypeInternal() {}
  union {
    Message_DataEntry_DoNotUse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT Message_DataEntry_DoNotUseDefaultTypeInternal _Message_DataEntry_DoNotUse_default_instance_;
constexpr Message::Message(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : data_(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{})
  , type_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct MessageDefaultTypeInternal {
  constexpr MessageDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~MessageDefaultTypeInternal() {}
  union {
    Message _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT MessageDefaultTypeInternal _Message_default_instance_;
}  // namespace onebot
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_onebot_5fbase_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_onebot_5fbase_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_onebot_5fbase_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_onebot_5fbase_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::onebot::Message_DataEntry_DoNotUse, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::onebot::Message_DataEntry_DoNotUse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::onebot::Message_DataEntry_DoNotUse, key_),
  PROTOBUF_FIELD_OFFSET(::onebot::Message_DataEntry_DoNotUse, value_),
  0,
  1,
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::onebot::Message, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::onebot::Message, type_),
  PROTOBUF_FIELD_OFFSET(::onebot::Message, data_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::onebot::Message_DataEntry_DoNotUse)},
  { 9, -1, sizeof(::onebot::Message)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::onebot::_Message_DataEntry_DoNotUse_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::onebot::_Message_default_instance_),
};

const char descriptor_table_protodef_onebot_5fbase_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\021onebot_base.proto\022\006onebot\"m\n\007Message\022\014"
  "\n\004type\030\001 \001(\t\022\'\n\004data\030\002 \003(\0132\031.onebot.Mess"
  "age.DataEntry\032+\n\tDataEntry\022\013\n\003key\030\001 \001(\t\022"
  "\r\n\005value\030\002 \001(\t:\0028\001b\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_onebot_5fbase_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_onebot_5fbase_2eproto = {
  false, false, 146, descriptor_table_protodef_onebot_5fbase_2eproto, "onebot_base.proto", 
  &descriptor_table_onebot_5fbase_2eproto_once, nullptr, 0, 2,
  schemas, file_default_instances, TableStruct_onebot_5fbase_2eproto::offsets,
  file_level_metadata_onebot_5fbase_2eproto, file_level_enum_descriptors_onebot_5fbase_2eproto, file_level_service_descriptors_onebot_5fbase_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK ::PROTOBUF_NAMESPACE_ID::Metadata
descriptor_table_onebot_5fbase_2eproto_metadata_getter(int index) {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_onebot_5fbase_2eproto);
  return descriptor_table_onebot_5fbase_2eproto.file_level_metadata[index];
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_onebot_5fbase_2eproto(&descriptor_table_onebot_5fbase_2eproto);
namespace onebot {

// ===================================================================

Message_DataEntry_DoNotUse::Message_DataEntry_DoNotUse() {}
Message_DataEntry_DoNotUse::Message_DataEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
    : SuperType(arena) {}
void Message_DataEntry_DoNotUse::MergeFrom(const Message_DataEntry_DoNotUse& other) {
  MergeFromInternal(other);
}
::PROTOBUF_NAMESPACE_ID::Metadata Message_DataEntry_DoNotUse::GetMetadata() const {
  return GetMetadataStatic();
}
void Message_DataEntry_DoNotUse::MergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::Message& other) {
  ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom(other);
}


// ===================================================================

class Message::_Internal {
 public:
};

Message::Message(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  data_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:onebot.Message)
}
Message::Message(const Message& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  data_.MergeFrom(from.data_);
  type_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_type().empty()) {
    type_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_type(), 
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:onebot.Message)
}

void Message::SharedCtor() {
type_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

Message::~Message() {
  // @@protoc_insertion_point(destructor:onebot.Message)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Message::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  type_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Message::ArenaDtor(void* object) {
  Message* _this = reinterpret_cast< Message* >(object);
  (void)_this;
}
void Message::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Message::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Message::Clear() {
// @@protoc_insertion_point(message_clear_start:onebot.Message)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  data_.Clear();
  type_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Message::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string type = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_type();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "onebot.Message.type"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // map<string, string> data = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(&data_, ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Message::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:onebot.Message)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string type = 1;
  if (this->type().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_type().data(), static_cast<int>(this->_internal_type().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "onebot.Message.type");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_type(), target);
  }

  // map<string, string> data = 2;
  if (!this->_internal_data().empty()) {
    typedef ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::PROTOBUF_NAMESPACE_ID::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
          p->first.data(), static_cast<int>(p->first.length()),
          ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
          "onebot.Message.DataEntry.key");
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
          p->second.data(), static_cast<int>(p->second.length()),
          ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
          "onebot.Message.DataEntry.value");
      }
    };

    if (stream->IsSerializationDeterministic() &&
        this->_internal_data().size() > 1) {
      ::std::unique_ptr<SortItem[]> items(
          new SortItem[this->_internal_data().size()]);
      typedef ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >::size_type size_type;
      size_type n = 0;
      for (::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >::const_iterator
          it = this->_internal_data().begin();
          it != this->_internal_data().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      for (size_type i = 0; i < n; i++) {
        target = Message_DataEntry_DoNotUse::Funcs::InternalSerialize(2, items[static_cast<ptrdiff_t>(i)]->first, items[static_cast<ptrdiff_t>(i)]->second, target, stream);
        Utf8Check::Check(&(*items[static_cast<ptrdiff_t>(i)]));
      }
    } else {
      for (::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >::const_iterator
          it = this->_internal_data().begin();
          it != this->_internal_data().end(); ++it) {
        target = Message_DataEntry_DoNotUse::Funcs::InternalSerialize(2, it->first, it->second, target, stream);
        Utf8Check::Check(&(*it));
      }
    }
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:onebot.Message)
  return target;
}

size_t Message::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:onebot.Message)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // map<string, string> data = 2;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->_internal_data_size());
  for (::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >::const_iterator
      it = this->_internal_data().begin();
      it != this->_internal_data().end(); ++it) {
    total_size += Message_DataEntry_DoNotUse::Funcs::ByteSizeLong(it->first, it->second);
  }

  // string type = 1;
  if (this->type().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_type());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Message::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:onebot.Message)
  GOOGLE_DCHECK_NE(&from, this);
  const Message* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Message>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:onebot.Message)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:onebot.Message)
    MergeFrom(*source);
  }
}

void Message::MergeFrom(const Message& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:onebot.Message)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  data_.MergeFrom(from.data_);
  if (from.type().size() > 0) {
    _internal_set_type(from._internal_type());
  }
}

void Message::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:onebot.Message)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Message::CopyFrom(const Message& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:onebot.Message)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Message::IsInitialized() const {
  return true;
}

void Message::InternalSwap(Message* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  data_.Swap(&other->data_);
  type_.Swap(&other->type_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata Message::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace onebot
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::onebot::Message_DataEntry_DoNotUse* Arena::CreateMaybeMessage< ::onebot::Message_DataEntry_DoNotUse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::onebot::Message_DataEntry_DoNotUse >(arena);
}
template<> PROTOBUF_NOINLINE ::onebot::Message* Arena::CreateMaybeMessage< ::onebot::Message >(Arena* arena) {
  return Arena::CreateMessageInternal< ::onebot::Message >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
