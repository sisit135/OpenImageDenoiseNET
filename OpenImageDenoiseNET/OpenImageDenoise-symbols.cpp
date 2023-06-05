#include <oidn.h>
#include <new>

unsigned int (*_0)(int, const char*) = &::oidnGetPhysicalDeviceUInt;
void (*_1)(struct OIDNDeviceImpl*, const char*, bool) = &::oidnSetDevice1b;
void (*_2)(struct OIDNDeviceImpl*, const char*, int) = &::oidnSetDevice1i;
void (*_3)(struct OIDNDeviceImpl*, const char*, unsigned int) = &::oidnSetDeviceUInt;
bool (*_4)(struct OIDNDeviceImpl*, const char*) = &::oidnGetDevice1b;
unsigned int (*_5)(struct OIDNDeviceImpl*, const char*) = &::oidnGetDeviceUInt;
int (*_6)(struct OIDNDeviceImpl*, const char*) = &::oidnGetDevice1i;
void (*_7)(struct OIDNFilterImpl*, const char*) = &::oidnRemoveFilterImage;
void (*_8)(struct OIDNFilterImpl*, const char*) = &::oidnRemoveFilterData;
void (*_9)(struct OIDNFilterImpl*, const char*, bool) = &::oidnSetFilter1b;
bool (*_10)(struct OIDNFilterImpl*, const char*) = &::oidnGetFilter1b;
void (*_11)(struct OIDNFilterImpl*, const char*, int) = &::oidnSetFilter1i;
int (*_12)(struct OIDNFilterImpl*, const char*) = &::oidnGetFilter1i;
void (*_13)(struct OIDNFilterImpl*, const char*, float) = &::oidnSetFilter1f;
float (*_14)(struct OIDNFilterImpl*, const char*) = &::oidnGetFilter1f;
