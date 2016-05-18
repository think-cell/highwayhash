#ifndef THIRD_PARTY_HIGHWAYHASH_TYPES_H_
#define THIRD_PARTY_HIGHWAYHASH_TYPES_H_

#ifdef __cplusplus
namespace highwayhash {
#endif

// cstdint's uint64_t is unsigned long on Linux; we need 'unsigned long long'
// for interoperability with other software.
typedef unsigned long long uint64;

typedef unsigned int uint32;

#ifdef __cplusplus
}  // namespace highwayhash
#endif

#endif  // THIRD_PARTY_HIGHWAYHASH_TYPES_H_
