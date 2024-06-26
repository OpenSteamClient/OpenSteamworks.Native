// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: webuimessages_systemmanager.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_webuimessages_5fsystemmanager_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_webuimessages_5fsystemmanager_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3015000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3015003 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/service.h>
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/descriptor.pb.h>
#include "steammessages_base.pb.h"
#include "webuimessages_base.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_webuimessages_5fsystemmanager_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_webuimessages_5fsystemmanager_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[4]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_webuimessages_5fsystemmanager_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_webuimessages_5fsystemmanager_2eproto_metadata_getter(int index);
class CSystemManager_Hibernate_Request;
struct CSystemManager_Hibernate_RequestDefaultTypeInternal;
extern CSystemManager_Hibernate_RequestDefaultTypeInternal _CSystemManager_Hibernate_Request_default_instance_;
class CSystemManager_Hibernate_Response;
struct CSystemManager_Hibernate_ResponseDefaultTypeInternal;
extern CSystemManager_Hibernate_ResponseDefaultTypeInternal _CSystemManager_Hibernate_Response_default_instance_;
class CSystemManager_WriteFile_Request;
struct CSystemManager_WriteFile_RequestDefaultTypeInternal;
extern CSystemManager_WriteFile_RequestDefaultTypeInternal _CSystemManager_WriteFile_Request_default_instance_;
class CSystemManager_WriteFile_Response;
struct CSystemManager_WriteFile_ResponseDefaultTypeInternal;
extern CSystemManager_WriteFile_ResponseDefaultTypeInternal _CSystemManager_WriteFile_Response_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::CSystemManager_Hibernate_Request* Arena::CreateMaybeMessage<::CSystemManager_Hibernate_Request>(Arena*);
template<> ::CSystemManager_Hibernate_Response* Arena::CreateMaybeMessage<::CSystemManager_Hibernate_Response>(Arena*);
template<> ::CSystemManager_WriteFile_Request* Arena::CreateMaybeMessage<::CSystemManager_WriteFile_Request>(Arena*);
template<> ::CSystemManager_WriteFile_Response* Arena::CreateMaybeMessage<::CSystemManager_WriteFile_Response>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class CSystemManager_Hibernate_Request PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:CSystemManager_Hibernate_Request) */ {
 public:
  inline CSystemManager_Hibernate_Request() : CSystemManager_Hibernate_Request(nullptr) {}
  virtual ~CSystemManager_Hibernate_Request();
  explicit constexpr CSystemManager_Hibernate_Request(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CSystemManager_Hibernate_Request(const CSystemManager_Hibernate_Request& from);
  CSystemManager_Hibernate_Request(CSystemManager_Hibernate_Request&& from) noexcept
    : CSystemManager_Hibernate_Request() {
    *this = ::std::move(from);
  }

  inline CSystemManager_Hibernate_Request& operator=(const CSystemManager_Hibernate_Request& from) {
    CopyFrom(from);
    return *this;
  }
  inline CSystemManager_Hibernate_Request& operator=(CSystemManager_Hibernate_Request&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
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
  static const CSystemManager_Hibernate_Request& default_instance() {
    return *internal_default_instance();
  }
  static inline const CSystemManager_Hibernate_Request* internal_default_instance() {
    return reinterpret_cast<const CSystemManager_Hibernate_Request*>(
               &_CSystemManager_Hibernate_Request_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CSystemManager_Hibernate_Request& a, CSystemManager_Hibernate_Request& b) {
    a.Swap(&b);
  }
  inline void Swap(CSystemManager_Hibernate_Request* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CSystemManager_Hibernate_Request* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CSystemManager_Hibernate_Request* New() const final {
    return CreateMaybeMessage<CSystemManager_Hibernate_Request>(nullptr);
  }

  CSystemManager_Hibernate_Request* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CSystemManager_Hibernate_Request>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CSystemManager_Hibernate_Request& from);
  void MergeFrom(const CSystemManager_Hibernate_Request& from);
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
  void InternalSwap(CSystemManager_Hibernate_Request* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "CSystemManager_Hibernate_Request";
  }
  protected:
  explicit CSystemManager_Hibernate_Request(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_webuimessages_5fsystemmanager_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:CSystemManager_Hibernate_Request)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_webuimessages_5fsystemmanager_2eproto;
};
// -------------------------------------------------------------------

class CSystemManager_Hibernate_Response PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:CSystemManager_Hibernate_Response) */ {
 public:
  inline CSystemManager_Hibernate_Response() : CSystemManager_Hibernate_Response(nullptr) {}
  virtual ~CSystemManager_Hibernate_Response();
  explicit constexpr CSystemManager_Hibernate_Response(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CSystemManager_Hibernate_Response(const CSystemManager_Hibernate_Response& from);
  CSystemManager_Hibernate_Response(CSystemManager_Hibernate_Response&& from) noexcept
    : CSystemManager_Hibernate_Response() {
    *this = ::std::move(from);
  }

  inline CSystemManager_Hibernate_Response& operator=(const CSystemManager_Hibernate_Response& from) {
    CopyFrom(from);
    return *this;
  }
  inline CSystemManager_Hibernate_Response& operator=(CSystemManager_Hibernate_Response&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
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
  static const CSystemManager_Hibernate_Response& default_instance() {
    return *internal_default_instance();
  }
  static inline const CSystemManager_Hibernate_Response* internal_default_instance() {
    return reinterpret_cast<const CSystemManager_Hibernate_Response*>(
               &_CSystemManager_Hibernate_Response_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(CSystemManager_Hibernate_Response& a, CSystemManager_Hibernate_Response& b) {
    a.Swap(&b);
  }
  inline void Swap(CSystemManager_Hibernate_Response* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CSystemManager_Hibernate_Response* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CSystemManager_Hibernate_Response* New() const final {
    return CreateMaybeMessage<CSystemManager_Hibernate_Response>(nullptr);
  }

  CSystemManager_Hibernate_Response* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CSystemManager_Hibernate_Response>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CSystemManager_Hibernate_Response& from);
  void MergeFrom(const CSystemManager_Hibernate_Response& from);
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
  void InternalSwap(CSystemManager_Hibernate_Response* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "CSystemManager_Hibernate_Response";
  }
  protected:
  explicit CSystemManager_Hibernate_Response(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_webuimessages_5fsystemmanager_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:CSystemManager_Hibernate_Response)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_webuimessages_5fsystemmanager_2eproto;
};
// -------------------------------------------------------------------

class CSystemManager_WriteFile_Request PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:CSystemManager_WriteFile_Request) */ {
 public:
  inline CSystemManager_WriteFile_Request() : CSystemManager_WriteFile_Request(nullptr) {}
  virtual ~CSystemManager_WriteFile_Request();
  explicit constexpr CSystemManager_WriteFile_Request(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CSystemManager_WriteFile_Request(const CSystemManager_WriteFile_Request& from);
  CSystemManager_WriteFile_Request(CSystemManager_WriteFile_Request&& from) noexcept
    : CSystemManager_WriteFile_Request() {
    *this = ::std::move(from);
  }

  inline CSystemManager_WriteFile_Request& operator=(const CSystemManager_WriteFile_Request& from) {
    CopyFrom(from);
    return *this;
  }
  inline CSystemManager_WriteFile_Request& operator=(CSystemManager_WriteFile_Request&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
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
  static const CSystemManager_WriteFile_Request& default_instance() {
    return *internal_default_instance();
  }
  static inline const CSystemManager_WriteFile_Request* internal_default_instance() {
    return reinterpret_cast<const CSystemManager_WriteFile_Request*>(
               &_CSystemManager_WriteFile_Request_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(CSystemManager_WriteFile_Request& a, CSystemManager_WriteFile_Request& b) {
    a.Swap(&b);
  }
  inline void Swap(CSystemManager_WriteFile_Request* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CSystemManager_WriteFile_Request* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CSystemManager_WriteFile_Request* New() const final {
    return CreateMaybeMessage<CSystemManager_WriteFile_Request>(nullptr);
  }

  CSystemManager_WriteFile_Request* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CSystemManager_WriteFile_Request>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CSystemManager_WriteFile_Request& from);
  void MergeFrom(const CSystemManager_WriteFile_Request& from);
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
  void InternalSwap(CSystemManager_WriteFile_Request* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "CSystemManager_WriteFile_Request";
  }
  protected:
  explicit CSystemManager_WriteFile_Request(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_webuimessages_5fsystemmanager_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPathFieldNumber = 1,
    kDataFieldNumber = 2,
  };
  // optional string path = 1;
  bool has_path() const;
  private:
  bool _internal_has_path() const;
  public:
  void clear_path();
  const std::string& path() const;
  void set_path(const std::string& value);
  void set_path(std::string&& value);
  void set_path(const char* value);
  void set_path(const char* value, size_t size);
  std::string* mutable_path();
  std::string* release_path();
  void set_allocated_path(std::string* path);
  private:
  const std::string& _internal_path() const;
  void _internal_set_path(const std::string& value);
  std::string* _internal_mutable_path();
  public:

  // optional bytes data = 2;
  bool has_data() const;
  private:
  bool _internal_has_data() const;
  public:
  void clear_data();
  const std::string& data() const;
  void set_data(const std::string& value);
  void set_data(std::string&& value);
  void set_data(const char* value);
  void set_data(const void* value, size_t size);
  std::string* mutable_data();
  std::string* release_data();
  void set_allocated_data(std::string* data);
  private:
  const std::string& _internal_data() const;
  void _internal_set_data(const std::string& value);
  std::string* _internal_mutable_data();
  public:

  // @@protoc_insertion_point(class_scope:CSystemManager_WriteFile_Request)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr path_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr data_;
  friend struct ::TableStruct_webuimessages_5fsystemmanager_2eproto;
};
// -------------------------------------------------------------------

class CSystemManager_WriteFile_Response PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:CSystemManager_WriteFile_Response) */ {
 public:
  inline CSystemManager_WriteFile_Response() : CSystemManager_WriteFile_Response(nullptr) {}
  virtual ~CSystemManager_WriteFile_Response();
  explicit constexpr CSystemManager_WriteFile_Response(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CSystemManager_WriteFile_Response(const CSystemManager_WriteFile_Response& from);
  CSystemManager_WriteFile_Response(CSystemManager_WriteFile_Response&& from) noexcept
    : CSystemManager_WriteFile_Response() {
    *this = ::std::move(from);
  }

  inline CSystemManager_WriteFile_Response& operator=(const CSystemManager_WriteFile_Response& from) {
    CopyFrom(from);
    return *this;
  }
  inline CSystemManager_WriteFile_Response& operator=(CSystemManager_WriteFile_Response&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
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
  static const CSystemManager_WriteFile_Response& default_instance() {
    return *internal_default_instance();
  }
  static inline const CSystemManager_WriteFile_Response* internal_default_instance() {
    return reinterpret_cast<const CSystemManager_WriteFile_Response*>(
               &_CSystemManager_WriteFile_Response_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(CSystemManager_WriteFile_Response& a, CSystemManager_WriteFile_Response& b) {
    a.Swap(&b);
  }
  inline void Swap(CSystemManager_WriteFile_Response* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CSystemManager_WriteFile_Response* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CSystemManager_WriteFile_Response* New() const final {
    return CreateMaybeMessage<CSystemManager_WriteFile_Response>(nullptr);
  }

  CSystemManager_WriteFile_Response* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CSystemManager_WriteFile_Response>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CSystemManager_WriteFile_Response& from);
  void MergeFrom(const CSystemManager_WriteFile_Response& from);
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
  void InternalSwap(CSystemManager_WriteFile_Response* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "CSystemManager_WriteFile_Response";
  }
  protected:
  explicit CSystemManager_WriteFile_Response(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_webuimessages_5fsystemmanager_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:CSystemManager_WriteFile_Response)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_webuimessages_5fsystemmanager_2eproto;
};
// ===================================================================

class SystemManager_Stub;

class SystemManager : public ::PROTOBUF_NAMESPACE_ID::Service {
 protected:
  // This class should be treated as an abstract interface.
  inline SystemManager() {};
 public:
  virtual ~SystemManager();

  typedef SystemManager_Stub Stub;

  static const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* descriptor();

  virtual void Hibernate(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                       const ::CSystemManager_Hibernate_Request* request,
                       ::CSystemManager_Hibernate_Response* response,
                       ::google::protobuf::Closure* done);
  virtual void WriteFile(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                       const ::CSystemManager_WriteFile_Request* request,
                       ::CSystemManager_WriteFile_Response* response,
                       ::google::protobuf::Closure* done);

  // implements Service ----------------------------------------------

  const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* GetDescriptor();
  void CallMethod(const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method,
                  ::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                  const ::PROTOBUF_NAMESPACE_ID::Message* request,
                  ::PROTOBUF_NAMESPACE_ID::Message* response,
                  ::google::protobuf::Closure* done);
  const ::PROTOBUF_NAMESPACE_ID::Message& GetRequestPrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const;
  const ::PROTOBUF_NAMESPACE_ID::Message& GetResponsePrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const;

 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(SystemManager);
};

class SystemManager_Stub : public SystemManager {
 public:
  SystemManager_Stub(::PROTOBUF_NAMESPACE_ID::RpcChannel* channel);
  SystemManager_Stub(::PROTOBUF_NAMESPACE_ID::RpcChannel* channel,
                   ::PROTOBUF_NAMESPACE_ID::Service::ChannelOwnership ownership);
  ~SystemManager_Stub();

  inline ::PROTOBUF_NAMESPACE_ID::RpcChannel* channel() { return channel_; }

  // implements SystemManager ------------------------------------------

  void Hibernate(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                       const ::CSystemManager_Hibernate_Request* request,
                       ::CSystemManager_Hibernate_Response* response,
                       ::google::protobuf::Closure* done);
  void WriteFile(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                       const ::CSystemManager_WriteFile_Request* request,
                       ::CSystemManager_WriteFile_Response* response,
                       ::google::protobuf::Closure* done);
 private:
  ::PROTOBUF_NAMESPACE_ID::RpcChannel* channel_;
  bool owns_channel_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(SystemManager_Stub);
};


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CSystemManager_Hibernate_Request

// -------------------------------------------------------------------

// CSystemManager_Hibernate_Response

// -------------------------------------------------------------------

// CSystemManager_WriteFile_Request

// optional string path = 1;
inline bool CSystemManager_WriteFile_Request::_internal_has_path() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool CSystemManager_WriteFile_Request::has_path() const {
  return _internal_has_path();
}
inline void CSystemManager_WriteFile_Request::clear_path() {
  path_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& CSystemManager_WriteFile_Request::path() const {
  // @@protoc_insertion_point(field_get:CSystemManager_WriteFile_Request.path)
  return _internal_path();
}
inline void CSystemManager_WriteFile_Request::set_path(const std::string& value) {
  _internal_set_path(value);
  // @@protoc_insertion_point(field_set:CSystemManager_WriteFile_Request.path)
}
inline std::string* CSystemManager_WriteFile_Request::mutable_path() {
  // @@protoc_insertion_point(field_mutable:CSystemManager_WriteFile_Request.path)
  return _internal_mutable_path();
}
inline const std::string& CSystemManager_WriteFile_Request::_internal_path() const {
  return path_.Get();
}
inline void CSystemManager_WriteFile_Request::_internal_set_path(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  path_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void CSystemManager_WriteFile_Request::set_path(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  path_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:CSystemManager_WriteFile_Request.path)
}
inline void CSystemManager_WriteFile_Request::set_path(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  path_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:CSystemManager_WriteFile_Request.path)
}
inline void CSystemManager_WriteFile_Request::set_path(const char* value,
    size_t size) {
  _has_bits_[0] |= 0x00000001u;
  path_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:CSystemManager_WriteFile_Request.path)
}
inline std::string* CSystemManager_WriteFile_Request::_internal_mutable_path() {
  _has_bits_[0] |= 0x00000001u;
  return path_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* CSystemManager_WriteFile_Request::release_path() {
  // @@protoc_insertion_point(field_release:CSystemManager_WriteFile_Request.path)
  if (!_internal_has_path()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return path_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void CSystemManager_WriteFile_Request::set_allocated_path(std::string* path) {
  if (path != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  path_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), path,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:CSystemManager_WriteFile_Request.path)
}

// optional bytes data = 2;
inline bool CSystemManager_WriteFile_Request::_internal_has_data() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool CSystemManager_WriteFile_Request::has_data() const {
  return _internal_has_data();
}
inline void CSystemManager_WriteFile_Request::clear_data() {
  data_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& CSystemManager_WriteFile_Request::data() const {
  // @@protoc_insertion_point(field_get:CSystemManager_WriteFile_Request.data)
  return _internal_data();
}
inline void CSystemManager_WriteFile_Request::set_data(const std::string& value) {
  _internal_set_data(value);
  // @@protoc_insertion_point(field_set:CSystemManager_WriteFile_Request.data)
}
inline std::string* CSystemManager_WriteFile_Request::mutable_data() {
  // @@protoc_insertion_point(field_mutable:CSystemManager_WriteFile_Request.data)
  return _internal_mutable_data();
}
inline const std::string& CSystemManager_WriteFile_Request::_internal_data() const {
  return data_.Get();
}
inline void CSystemManager_WriteFile_Request::_internal_set_data(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void CSystemManager_WriteFile_Request::set_data(std::string&& value) {
  _has_bits_[0] |= 0x00000002u;
  data_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:CSystemManager_WriteFile_Request.data)
}
inline void CSystemManager_WriteFile_Request::set_data(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000002u;
  data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:CSystemManager_WriteFile_Request.data)
}
inline void CSystemManager_WriteFile_Request::set_data(const void* value,
    size_t size) {
  _has_bits_[0] |= 0x00000002u;
  data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:CSystemManager_WriteFile_Request.data)
}
inline std::string* CSystemManager_WriteFile_Request::_internal_mutable_data() {
  _has_bits_[0] |= 0x00000002u;
  return data_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* CSystemManager_WriteFile_Request::release_data() {
  // @@protoc_insertion_point(field_release:CSystemManager_WriteFile_Request.data)
  if (!_internal_has_data()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return data_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void CSystemManager_WriteFile_Request::set_allocated_data(std::string* data) {
  if (data != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  data_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), data,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:CSystemManager_WriteFile_Request.data)
}

// -------------------------------------------------------------------

// CSystemManager_WriteFile_Response

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_webuimessages_5fsystemmanager_2eproto
