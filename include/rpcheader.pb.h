// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rpcheader.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_rpcheader_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_rpcheader_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_rpcheader_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_rpcheader_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_rpcheader_2eproto;
namespace mprpc {
class RpcHeader;
class RpcHeaderDefaultTypeInternal;
extern RpcHeaderDefaultTypeInternal _RpcHeader_default_instance_;
}  // namespace mprpc
PROTOBUF_NAMESPACE_OPEN
template<> ::mprpc::RpcHeader* Arena::CreateMaybeMessage<::mprpc::RpcHeader>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace mprpc {

// ===================================================================

class RpcHeader PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mprpc.RpcHeader) */ {
 public:
  inline RpcHeader() : RpcHeader(nullptr) {};
  virtual ~RpcHeader();

  RpcHeader(const RpcHeader& from);
  RpcHeader(RpcHeader&& from) noexcept
    : RpcHeader() {
    *this = ::std::move(from);
  }

  inline RpcHeader& operator=(const RpcHeader& from) {
    CopyFrom(from);
    return *this;
  }
  inline RpcHeader& operator=(RpcHeader&& from) noexcept {
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
  static const RpcHeader& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RpcHeader* internal_default_instance() {
    return reinterpret_cast<const RpcHeader*>(
               &_RpcHeader_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(RpcHeader& a, RpcHeader& b) {
    a.Swap(&b);
  }
  inline void Swap(RpcHeader* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(RpcHeader* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline RpcHeader* New() const final {
    return CreateMaybeMessage<RpcHeader>(nullptr);
  }

  RpcHeader* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<RpcHeader>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const RpcHeader& from);
  void MergeFrom(const RpcHeader& from);
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
  void InternalSwap(RpcHeader* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mprpc.RpcHeader";
  }
  protected:
  explicit RpcHeader(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_rpcheader_2eproto);
    return ::descriptor_table_rpcheader_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kServiceNameFieldNumber = 1,
    kMethodNameFieldNumber = 2,
    kParamSizeFieldNumber = 3,
  };
  // bytes serviceName = 1;
  void clear_servicename();
  const std::string& servicename() const;
  void set_servicename(const std::string& value);
  void set_servicename(std::string&& value);
  void set_servicename(const char* value);
  void set_servicename(const void* value, size_t size);
  std::string* mutable_servicename();
  std::string* release_servicename();
  void set_allocated_servicename(std::string* servicename);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_servicename();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_servicename(
      std::string* servicename);
  private:
  const std::string& _internal_servicename() const;
  void _internal_set_servicename(const std::string& value);
  std::string* _internal_mutable_servicename();
  public:

  // bytes methodName = 2;
  void clear_methodname();
  const std::string& methodname() const;
  void set_methodname(const std::string& value);
  void set_methodname(std::string&& value);
  void set_methodname(const char* value);
  void set_methodname(const void* value, size_t size);
  std::string* mutable_methodname();
  std::string* release_methodname();
  void set_allocated_methodname(std::string* methodname);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_methodname();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_methodname(
      std::string* methodname);
  private:
  const std::string& _internal_methodname() const;
  void _internal_set_methodname(const std::string& value);
  std::string* _internal_mutable_methodname();
  public:

  // uint32 paramSize = 3;
  void clear_paramsize();
  ::PROTOBUF_NAMESPACE_ID::uint32 paramsize() const;
  void set_paramsize(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_paramsize() const;
  void _internal_set_paramsize(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:mprpc.RpcHeader)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr servicename_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr methodname_;
  ::PROTOBUF_NAMESPACE_ID::uint32 paramsize_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_rpcheader_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RpcHeader

// bytes serviceName = 1;
inline void RpcHeader::clear_servicename() {
  servicename_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& RpcHeader::servicename() const {
  // @@protoc_insertion_point(field_get:mprpc.RpcHeader.serviceName)
  return _internal_servicename();
}
inline void RpcHeader::set_servicename(const std::string& value) {
  _internal_set_servicename(value);
  // @@protoc_insertion_point(field_set:mprpc.RpcHeader.serviceName)
}
inline std::string* RpcHeader::mutable_servicename() {
  // @@protoc_insertion_point(field_mutable:mprpc.RpcHeader.serviceName)
  return _internal_mutable_servicename();
}
inline const std::string& RpcHeader::_internal_servicename() const {
  return servicename_.Get();
}
inline void RpcHeader::_internal_set_servicename(const std::string& value) {
  
  servicename_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void RpcHeader::set_servicename(std::string&& value) {
  
  servicename_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:mprpc.RpcHeader.serviceName)
}
inline void RpcHeader::set_servicename(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  servicename_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:mprpc.RpcHeader.serviceName)
}
inline void RpcHeader::set_servicename(const void* value,
    size_t size) {
  
  servicename_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:mprpc.RpcHeader.serviceName)
}
inline std::string* RpcHeader::_internal_mutable_servicename() {
  
  return servicename_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* RpcHeader::release_servicename() {
  // @@protoc_insertion_point(field_release:mprpc.RpcHeader.serviceName)
  return servicename_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void RpcHeader::set_allocated_servicename(std::string* servicename) {
  if (servicename != nullptr) {
    
  } else {
    
  }
  servicename_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), servicename,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:mprpc.RpcHeader.serviceName)
}
inline std::string* RpcHeader::unsafe_arena_release_servicename() {
  // @@protoc_insertion_point(field_unsafe_arena_release:mprpc.RpcHeader.serviceName)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return servicename_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void RpcHeader::unsafe_arena_set_allocated_servicename(
    std::string* servicename) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (servicename != nullptr) {
    
  } else {
    
  }
  servicename_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      servicename, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:mprpc.RpcHeader.serviceName)
}

// bytes methodName = 2;
inline void RpcHeader::clear_methodname() {
  methodname_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& RpcHeader::methodname() const {
  // @@protoc_insertion_point(field_get:mprpc.RpcHeader.methodName)
  return _internal_methodname();
}
inline void RpcHeader::set_methodname(const std::string& value) {
  _internal_set_methodname(value);
  // @@protoc_insertion_point(field_set:mprpc.RpcHeader.methodName)
}
inline std::string* RpcHeader::mutable_methodname() {
  // @@protoc_insertion_point(field_mutable:mprpc.RpcHeader.methodName)
  return _internal_mutable_methodname();
}
inline const std::string& RpcHeader::_internal_methodname() const {
  return methodname_.Get();
}
inline void RpcHeader::_internal_set_methodname(const std::string& value) {
  
  methodname_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void RpcHeader::set_methodname(std::string&& value) {
  
  methodname_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:mprpc.RpcHeader.methodName)
}
inline void RpcHeader::set_methodname(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  methodname_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:mprpc.RpcHeader.methodName)
}
inline void RpcHeader::set_methodname(const void* value,
    size_t size) {
  
  methodname_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:mprpc.RpcHeader.methodName)
}
inline std::string* RpcHeader::_internal_mutable_methodname() {
  
  return methodname_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* RpcHeader::release_methodname() {
  // @@protoc_insertion_point(field_release:mprpc.RpcHeader.methodName)
  return methodname_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void RpcHeader::set_allocated_methodname(std::string* methodname) {
  if (methodname != nullptr) {
    
  } else {
    
  }
  methodname_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), methodname,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:mprpc.RpcHeader.methodName)
}
inline std::string* RpcHeader::unsafe_arena_release_methodname() {
  // @@protoc_insertion_point(field_unsafe_arena_release:mprpc.RpcHeader.methodName)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return methodname_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void RpcHeader::unsafe_arena_set_allocated_methodname(
    std::string* methodname) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (methodname != nullptr) {
    
  } else {
    
  }
  methodname_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      methodname, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:mprpc.RpcHeader.methodName)
}

// uint32 paramSize = 3;
inline void RpcHeader::clear_paramsize() {
  paramsize_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 RpcHeader::_internal_paramsize() const {
  return paramsize_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 RpcHeader::paramsize() const {
  // @@protoc_insertion_point(field_get:mprpc.RpcHeader.paramSize)
  return _internal_paramsize();
}
inline void RpcHeader::_internal_set_paramsize(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  paramsize_ = value;
}
inline void RpcHeader::set_paramsize(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_paramsize(value);
  // @@protoc_insertion_point(field_set:mprpc.RpcHeader.paramSize)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace mprpc

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_rpcheader_2eproto
