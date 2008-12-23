# 1 "/tmp/tmpxft_00001019_00000000-1_GPUdriver.cudafe1.cpp"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "/tmp/tmpxft_00001019_00000000-1_GPUdriver.cudafe1.cpp"
# 1 "GPUdriver.cu"
# 152 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/stddef.h" 3
typedef int ptrdiff_t;
# 214 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/stddef.h" 3
typedef unsigned long size_t;
# 1 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 1 3
# 69 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 3
# 1 "/usr/local/cuda/bin/../include/cuda_runtime_api.h" 1 3
# 54 "/usr/local/cuda/bin/../include/cuda_runtime_api.h" 3
# 1 "/usr/local/cuda/bin/../include/host_defines.h" 1 3
# 55 "/usr/local/cuda/bin/../include/cuda_runtime_api.h" 2 3
# 1 "/usr/local/cuda/bin/../include/builtin_types.h" 1 3
# 42 "/usr/local/cuda/bin/../include/builtin_types.h" 3
# 1 "/usr/local/cuda/bin/../include/device_types.h" 1 3
# 46 "/usr/local/cuda/bin/../include/device_types.h" 3
enum cudaRoundMode
{
  cudaRoundNearest,
  cudaRoundZero,
  cudaRoundPosInf,
  cudaRoundMinInf
};
# 43 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/driver_types.h" 1 3
# 59 "/usr/local/cuda/bin/../include/driver_types.h" 3
enum cudaError
{
  cudaSuccess = 0,
  cudaErrorMissingConfiguration,
  cudaErrorMemoryAllocation,
  cudaErrorInitializationError,
  cudaErrorLaunchFailure,
  cudaErrorPriorLaunchFailure,
  cudaErrorLaunchTimeout,
  cudaErrorLaunchOutOfResources,
  cudaErrorInvalidDeviceFunction,
  cudaErrorInvalidConfiguration,
  cudaErrorInvalidDevice,
  cudaErrorInvalidValue,
  cudaErrorInvalidPitchValue,
  cudaErrorInvalidSymbol,
  cudaErrorMapBufferObjectFailed,
  cudaErrorUnmapBufferObjectFailed,
  cudaErrorInvalidHostPointer,
  cudaErrorInvalidDevicePointer,
  cudaErrorInvalidTexture,
  cudaErrorInvalidTextureBinding,
  cudaErrorInvalidChannelDescriptor,
  cudaErrorInvalidMemcpyDirection,
  cudaErrorAddressOfConstant,
  cudaErrorTextureFetchFailed,
  cudaErrorTextureNotBound,
  cudaErrorSynchronizationError,
  cudaErrorInvalidFilterSetting,
  cudaErrorInvalidNormSetting,
  cudaErrorMixedDeviceExecution,
  cudaErrorCudartUnloading,
  cudaErrorUnknown,
  cudaErrorNotYetImplemented,
  cudaErrorMemoryValueTooLarge,
  cudaErrorInvalidResourceHandle,
  cudaErrorNotReady,
  cudaErrorStartupFailure = 0x7f,
  cudaErrorApiFailureBase = 10000
};


enum cudaChannelFormatKind
{
  cudaChannelFormatKindSigned,
  cudaChannelFormatKindUnsigned,
  cudaChannelFormatKindFloat
};


struct cudaChannelFormatDesc
{
  int x;
  int y;
  int z;
  int w;
  enum cudaChannelFormatKind f;
};


struct cudaArray;


enum cudaMemcpyKind
{
  cudaMemcpyHostToHost = 0,
  cudaMemcpyHostToDevice,
  cudaMemcpyDeviceToHost,
  cudaMemcpyDeviceToDevice
};


struct cudaPitchedPtr
{
  void *ptr;
  size_t pitch;
  size_t xsize;
  size_t ysize;
};


struct cudaExtent
{
  size_t width;
  size_t height;
  size_t depth;
};


struct cudaPos
{
  size_t x;
  size_t y;
  size_t z;
};


struct cudaMemcpy3DParms
{
  struct cudaArray *srcArray;
  struct cudaPos srcPos;
  struct cudaPitchedPtr srcPtr;

  struct cudaArray *dstArray;
  struct cudaPos dstPos;
  struct cudaPitchedPtr dstPtr;

  struct cudaExtent extent;
  enum cudaMemcpyKind kind;
};


struct cudaDeviceProp
{
  char name[256];
  size_t totalGlobalMem;
  size_t sharedMemPerBlock;
  int regsPerBlock;
  int warpSize;
  size_t memPitch;
  int maxThreadsPerBlock;
  int maxThreadsDim[3];
  int maxGridSize[3];
  int clockRate;
  size_t totalConstMem;
  int major;
  int minor;
  size_t textureAlignment;
  int deviceOverlap;
  int multiProcessorCount;
  int __cudaReserved[40];
};
# 219 "/usr/local/cuda/bin/../include/driver_types.h" 3
typedef enum cudaError cudaError_t;


typedef int cudaStream_t;


typedef int cudaEvent_t;
# 44 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/texture_types.h" 1 3
# 46 "/usr/local/cuda/bin/../include/texture_types.h" 3
enum cudaTextureAddressMode
{
  cudaAddressModeWrap,
  cudaAddressModeClamp
};


enum cudaTextureFilterMode
{
  cudaFilterModePoint,
  cudaFilterModeLinear
};


enum cudaTextureReadMode
{
  cudaReadModeElementType,
  cudaReadModeNormalizedFloat
};


struct textureReference
{
  int normalized;
  enum cudaTextureFilterMode filterMode;
  enum cudaTextureAddressMode addressMode[3];
  struct cudaChannelFormatDesc channelDesc;
  int __cudaReserved[16];
};
# 45 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/vector_types.h" 1 3
# 45 "/usr/local/cuda/bin/../include/vector_types.h" 3
# 1 "/usr/local/cuda/bin/../include/host_defines.h" 1 3
# 46 "/usr/local/cuda/bin/../include/vector_types.h" 2 3
# 54 "/usr/local/cuda/bin/../include/vector_types.h" 3
struct char1
{
  signed char x;
};


struct uchar1
{
  unsigned char x;
};


struct char2
{
  signed char x, y;
};


struct uchar2
{
  unsigned char x, y;
};


struct char3
{
  signed char x, y, z;
};


struct uchar3
{
  unsigned char x, y, z;
};


struct char4
{
  signed char x, y, z, w;
};


struct uchar4
{
  unsigned char x, y, z, w;
};


struct short1
{
  short x;
};


struct ushort1
{
  unsigned short x;
};


struct short2
{
  short x, y;
};


struct ushort2
{
  unsigned short x, y;
};


struct short3
{
  short x, y, z;
};


struct ushort3
{
  unsigned short x, y, z;
};


struct short4
{
  short x, y, z, w;
};


struct ushort4
{
  unsigned short x, y, z, w;
};


struct int1
{
  int x;
};


struct uint1
{
  unsigned int x;
};


struct int2
{
  int x, y;
};


struct uint2
{
  unsigned int x, y;
};


struct int3
{
  int x, y, z;
};


struct uint3
{
  unsigned int x, y, z;
};


struct int4
{
  int x, y, z, w;
};


struct uint4
{
  unsigned int x, y, z, w;
};


struct long1
{
  long int x;
};


struct ulong1
{
  unsigned long x;
};


struct



      

                                             long2
{
  long int x, y;
};


struct



      

                                                      ulong2
{
  unsigned long int x, y;
};




struct long3
{
  long int x, y, z;
};


struct ulong3
{
  unsigned long int x, y, z;
};


struct long4
{
  long int x, y, z, w;
};


struct ulong4
{
  unsigned long int x, y, z, w;
};




struct float1
{
  float x;
};


struct float2
{
  float x, y;
};


struct float3
{
  float x, y, z;
};


struct float4
{
  float x, y, z, w;
};


struct double1
{
  double x;
};


struct double2
{
  double x, y;
};
# 304 "/usr/local/cuda/bin/../include/vector_types.h" 3
typedef struct char1 char1;

typedef struct uchar1 uchar1;

typedef struct char2 char2;

typedef struct uchar2 uchar2;

typedef struct char3 char3;

typedef struct uchar3 uchar3;

typedef struct char4 char4;

typedef struct uchar4 uchar4;

typedef struct short1 short1;

typedef struct ushort1 ushort1;

typedef struct short2 short2;

typedef struct ushort2 ushort2;

typedef struct short3 short3;

typedef struct ushort3 ushort3;

typedef struct short4 short4;

typedef struct ushort4 ushort4;

typedef struct int1 int1;

typedef struct uint1 uint1;

typedef struct int2 int2;

typedef struct uint2 uint2;

typedef struct int3 int3;

typedef struct uint3 uint3;

typedef struct int4 int4;

typedef struct uint4 uint4;

typedef struct long1 long1;

typedef struct ulong1 ulong1;

typedef struct long2 long2;

typedef struct ulong2 ulong2;

typedef struct long3 long3;

typedef struct ulong3 ulong3;

typedef struct long4 long4;

typedef struct ulong4 ulong4;

typedef struct float1 float1;

typedef struct float2 float2;

typedef struct float3 float3;

typedef struct float4 float4;

typedef struct double1 double1;

typedef struct double2 double2;
# 387 "/usr/local/cuda/bin/../include/vector_types.h" 3
typedef struct dim3 dim3;


struct dim3
{
    unsigned int x, y, z;

    dim3(unsigned int x = 1, unsigned int y = 1, unsigned int z = 1) : x(x), y(y), z(z) {}
    dim3(uint3 v) : x(v.x), y(v.y), z(v.z) {}
    operator uint3(void) { uint3 t; t.x = x; t.y = y; t.z = z; return t; }

};
# 45 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 56 "/usr/local/cuda/bin/../include/cuda_runtime_api.h" 2 3
# 79 "/usr/local/cuda/bin/../include/cuda_runtime_api.h" 3
extern "C" {
# 88 "/usr/local/cuda/bin/../include/cuda_runtime_api.h" 3
extern cudaError_t cudaMalloc3D(struct cudaPitchedPtr* pitchDevPtr, struct cudaExtent extent);
extern cudaError_t cudaMalloc3DArray(struct cudaArray** arrayPtr, const struct cudaChannelFormatDesc* desc, struct cudaExtent extent);
extern cudaError_t cudaMemset3D(struct cudaPitchedPtr pitchDevPtr, int value, struct cudaExtent extent);
extern cudaError_t cudaMemcpy3D(const struct cudaMemcpy3DParms *p);
extern cudaError_t cudaMemcpy3DAsync(const struct cudaMemcpy3DParms *p, cudaStream_t stream);
# 101 "/usr/local/cuda/bin/../include/cuda_runtime_api.h" 3
extern cudaError_t cudaMalloc(void **devPtr, size_t size);
extern cudaError_t cudaMallocHost(void **ptr, size_t size);
extern cudaError_t cudaMallocPitch(void **devPtr, size_t *pitch, size_t width, size_t height);
extern cudaError_t cudaMallocArray(struct cudaArray **array, const struct cudaChannelFormatDesc *desc, size_t width, size_t height );
extern cudaError_t cudaFree(void *devPtr);
extern cudaError_t cudaFreeHost(void *ptr);
extern cudaError_t cudaFreeArray(struct cudaArray *array);
# 116 "/usr/local/cuda/bin/../include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy(void *dst, const void *src, size_t count, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpyToArray(struct cudaArray *dst, size_t wOffset, size_t hOffset, const void *src, size_t count, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpyFromArray(void *dst, const struct cudaArray *src, size_t wOffset, size_t hOffset, size_t count, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpyArrayToArray(struct cudaArray *dst, size_t wOffsetDst, size_t hOffsetDst, const struct cudaArray *src, size_t wOffsetSrc, size_t hOffsetSrc, size_t count, enum cudaMemcpyKind kind );
extern cudaError_t cudaMemcpy2D(void *dst, size_t dpitch, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpy2DToArray(struct cudaArray *dst, size_t wOffset, size_t hOffset, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpy2DFromArray(void *dst, size_t dpitch, const struct cudaArray *src, size_t wOffset, size_t hOffset, size_t width, size_t height, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpy2DArrayToArray(struct cudaArray *dst, size_t wOffsetDst, size_t hOffsetDst, const struct cudaArray *src, size_t wOffsetSrc, size_t hOffsetSrc, size_t width, size_t height, enum cudaMemcpyKind kind );
extern cudaError_t cudaMemcpyToSymbol(const char *symbol, const void *src, size_t count, size_t offset , enum cudaMemcpyKind kind );
extern cudaError_t cudaMemcpyFromSymbol(void *dst, const char *symbol, size_t count, size_t offset , enum cudaMemcpyKind kind );







extern cudaError_t cudaMemcpyAsync(void *dst, const void *src, size_t count, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpyToArrayAsync(struct cudaArray *dst, size_t wOffset, size_t hOffset, const void *src, size_t count, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpyFromArrayAsync(void *dst, const struct cudaArray *src, size_t wOffset, size_t hOffset, size_t count, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpy2DAsync(void *dst, size_t dpitch, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpy2DToArrayAsync(struct cudaArray *dst, size_t wOffset, size_t hOffset, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpy2DFromArrayAsync(void *dst, size_t dpitch, const struct cudaArray *src, size_t wOffset, size_t hOffset, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpyToSymbolAsync(const char *symbol, const void *src, size_t count, size_t offset, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpyFromSymbolAsync(void *dst, const char *symbol, size_t count, size_t offset, enum cudaMemcpyKind kind, cudaStream_t stream);







extern cudaError_t cudaMemset(void *mem, int c, size_t count);
extern cudaError_t cudaMemset2D(void *mem, size_t pitch, int c, size_t width, size_t height);







extern cudaError_t cudaGetSymbolAddress(void **devPtr, const char *symbol);
extern cudaError_t cudaGetSymbolSize(size_t *size, const char *symbol);







extern cudaError_t cudaGetDeviceCount(int *count);
extern cudaError_t cudaGetDeviceProperties(struct cudaDeviceProp *prop, int device);
extern cudaError_t cudaChooseDevice(int *device, const struct cudaDeviceProp *prop);
extern cudaError_t cudaSetDevice(int device);
extern cudaError_t cudaGetDevice(int *device);







extern cudaError_t cudaBindTexture(size_t *offset, const struct textureReference *texref, const void *devPtr, const struct cudaChannelFormatDesc *desc, size_t size );
extern cudaError_t cudaBindTextureToArray(const struct textureReference *texref, const struct cudaArray *array, const struct cudaChannelFormatDesc *desc);
extern cudaError_t cudaUnbindTexture(const struct textureReference *texref);
extern cudaError_t cudaGetTextureAlignmentOffset(size_t *offset, const struct textureReference *texref);
extern cudaError_t cudaGetTextureReference(const struct textureReference **texref, const char *symbol);







extern cudaError_t cudaGetChannelDesc(struct cudaChannelFormatDesc *desc, const struct cudaArray *array);
extern struct cudaChannelFormatDesc cudaCreateChannelDesc(int x, int y, int z, int w, enum cudaChannelFormatKind f);







extern cudaError_t cudaGetLastError(void);
extern const char* cudaGetErrorString(cudaError_t error);







extern cudaError_t cudaConfigureCall(dim3 gridDim, dim3 blockDim, size_t sharedMem , cudaStream_t stream );
extern cudaError_t cudaSetupArgument(const void *arg, size_t size, size_t offset);
extern cudaError_t cudaLaunch(const char *symbol);







extern cudaError_t cudaStreamCreate(cudaStream_t *stream);
extern cudaError_t cudaStreamDestroy(cudaStream_t stream);
extern cudaError_t cudaStreamSynchronize(cudaStream_t stream);
extern cudaError_t cudaStreamQuery(cudaStream_t stream);







extern cudaError_t cudaEventCreate(cudaEvent_t *event);
extern cudaError_t cudaEventRecord(cudaEvent_t event, cudaStream_t stream);
extern cudaError_t cudaEventQuery(cudaEvent_t event);
extern cudaError_t cudaEventSynchronize(cudaEvent_t event);
extern cudaError_t cudaEventDestroy(cudaEvent_t event);
extern cudaError_t cudaEventElapsedTime(float *ms, cudaEvent_t start, cudaEvent_t end);







extern cudaError_t cudaSetDoubleForDevice(double *d);
extern cudaError_t cudaSetDoubleForHost(double *d);







extern cudaError_t cudaThreadExit(void);
extern cudaError_t cudaThreadSynchronize(void);


}
# 70 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 2 3
# 1 "/usr/local/cuda/bin/../include/crt/storage_class.h" 1 3
# 71 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 2 3
# 216 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/stddef.h" 2 3
# 88 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc3D(cudaPitchedPtr *, cudaExtent);
# 89 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc3DArray(cudaArray **, const cudaChannelFormatDesc *, cudaExtent);
# 90 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset3D(cudaPitchedPtr, int, cudaExtent);
# 91 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3D(const cudaMemcpy3DParms *);
# 92 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3DAsync(const cudaMemcpy3DParms *, cudaStream_t);
# 101 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc(void **, size_t);
# 102 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocHost(void **, size_t);
# 103 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocPitch(void **, size_t *, size_t, size_t);
# 104 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocArray(cudaArray **, const cudaChannelFormatDesc *, size_t, size_t = (1));
# 105 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFree(void *);
# 106 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFreeHost(void *);
# 107 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFreeArray(cudaArray *);
# 116 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy(void *, const void *, size_t, cudaMemcpyKind);
# 117 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToArray(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind);
# 118 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromArray(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind);
# 119 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice);
# 120 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2D(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind);
# 121 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DToArray(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind);
# 122 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DFromArray(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind);
# 123 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice);
# 124 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToSymbol(const char *, const void *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyHostToDevice);
# 125 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromSymbol(void *, const char *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyDeviceToHost);
# 133 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyAsync(void *, const void *, size_t, cudaMemcpyKind, cudaStream_t);
# 134 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind, cudaStream_t);
# 135 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromArrayAsync(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t);
# 136 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DAsync(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t);
# 137 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t);
# 138 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DFromArrayAsync(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t);
# 139 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToSymbolAsync(const char *, const void *, size_t, size_t, cudaMemcpyKind, cudaStream_t);
# 140 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromSymbolAsync(void *, const char *, size_t, size_t, cudaMemcpyKind, cudaStream_t);
# 148 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset(void *, int, size_t);
# 149 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset2D(void *, size_t, int, size_t, size_t);
# 157 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSymbolAddress(void **, const char *);
# 158 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSymbolSize(size_t *, const char *);
# 166 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDeviceCount(int *);
# 167 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDeviceProperties(cudaDeviceProp *, int);
# 168 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaChooseDevice(int *, const cudaDeviceProp *);
# 169 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDevice(int);
# 170 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDevice(int *);
# 178 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTexture(size_t *, const textureReference *, const void *, const cudaChannelFormatDesc *, size_t = (((2147483647) * 2U) + 1U));
# 179 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTextureToArray(const textureReference *, const cudaArray *, const cudaChannelFormatDesc *);
# 180 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaUnbindTexture(const textureReference *);
# 181 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetTextureAlignmentOffset(size_t *, const textureReference *);
# 182 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetTextureReference(const textureReference **, const char *);
# 190 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetChannelDesc(cudaChannelFormatDesc *, const cudaArray *);
# 191 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaChannelFormatDesc cudaCreateChannelDesc(int, int, int, int, cudaChannelFormatKind);
# 199 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetLastError();
# 200 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" const char *cudaGetErrorString(cudaError_t);
# 208 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaConfigureCall(dim3, dim3, size_t = (0), cudaStream_t = (0));
# 209 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetupArgument(const void *, size_t, size_t);
# 210 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaLaunch(const char *);
# 218 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamCreate(cudaStream_t *);
# 219 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamDestroy(cudaStream_t);
# 220 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamSynchronize(cudaStream_t);
# 221 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamQuery(cudaStream_t);
# 229 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventCreate(cudaEvent_t *);
# 230 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventRecord(cudaEvent_t, cudaStream_t);
# 231 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventQuery(cudaEvent_t);
# 232 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventSynchronize(cudaEvent_t);
# 233 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventDestroy(cudaEvent_t);
# 234 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventElapsedTime(float *, cudaEvent_t, cudaEvent_t);
# 242 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDoubleForDevice(double *);
# 243 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDoubleForHost(double *);
# 251 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadExit();
# 252 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSynchronize();
# 57 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<class T> inline cudaChannelFormatDesc cudaCreateChannelDesc()
# 58 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 59 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 60 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 62 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char> ()
# 63 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 64 "/usr/local/cuda/bin/../include/channel_descriptor.h"
auto int e = (((int)sizeof(char)) * 8);
# 69 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 71 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 73 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< signed char> ()
# 74 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 75 "/usr/local/cuda/bin/../include/channel_descriptor.h"
auto int e = (((int)sizeof(signed char)) * 8);
# 77 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 78 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 80 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned char> ()
# 81 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 82 "/usr/local/cuda/bin/../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned char)) * 8);
# 84 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 85 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 87 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char1> ()
# 88 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 89 "/usr/local/cuda/bin/../include/channel_descriptor.h"
auto int e = (((int)sizeof(signed char)) * 8);
# 91 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 92 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 94 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar1> ()
# 95 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 96 "/usr/local/cuda/bin/../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned char)) * 8);
# 98 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 99 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 101 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char2> ()
# 102 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 103 "/usr/local/cuda/bin/../include/channel_descriptor.h"
auto int e = (((int)sizeof(signed char)) * 8);
# 105 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 106 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 108 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar2> ()
# 109 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 110 "/usr/local/cuda/bin/../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned char)) * 8);
# 112 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 113 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 115 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char4> ()
# 116 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 117 "/usr/local/cuda/bin/../include/channel_descriptor.h"
auto int e = (((int)sizeof(signed char)) * 8);
# 119 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 120 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 122 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar4> ()
# 123 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 124 "/usr/local/cuda/bin/../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned char)) * 8);
# 126 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 127 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 129 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short> ()
# 130 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 131 "/usr/local/cuda/bin/../include/channel_descriptor.h"
auto int e = (((int)sizeof(short)) * 8);
# 133 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 134 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 136 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned short> ()
# 137 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 138 "/usr/local/cuda/bin/../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned short)) * 8);
# 140 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 141 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 143 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short1> ()
# 144 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 145 "/usr/local/cuda/bin/../include/channel_descriptor.h"
auto int e = (((int)sizeof(short)) * 8);
# 147 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 148 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 150 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort1> ()
# 151 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 152 "/usr/local/cuda/bin/../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned short)) * 8);
# 154 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 155 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 157 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short2> ()
# 158 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 159 "/usr/local/cuda/bin/../include/channel_descriptor.h"
auto int e = (((int)sizeof(short)) * 8);
# 161 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 162 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 164 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort2> ()
# 165 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 166 "/usr/local/cuda/bin/../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned short)) * 8);
# 168 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 169 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 171 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short4> ()
# 172 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 173 "/usr/local/cuda/bin/../include/channel_descriptor.h"
auto int e = (((int)sizeof(short)) * 8);
# 175 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 176 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 178 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort4> ()
# 179 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 180 "/usr/local/cuda/bin/../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned short)) * 8);
# 182 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 183 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 185 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int> ()
# 186 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 187 "/usr/local/cuda/bin/../include/channel_descriptor.h"
auto int e = (((int)sizeof(int)) * 8);
# 189 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 190 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 192 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned> ()
# 193 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 194 "/usr/local/cuda/bin/../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned)) * 8);
# 196 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 197 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 199 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int1> ()
# 200 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 201 "/usr/local/cuda/bin/../include/channel_descriptor.h"
auto int e = (((int)sizeof(int)) * 8);
# 203 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 204 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 206 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint1> ()
# 207 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 208 "/usr/local/cuda/bin/../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned)) * 8);
# 210 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 211 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 213 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int2> ()
# 214 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 215 "/usr/local/cuda/bin/../include/channel_descriptor.h"
auto int e = (((int)sizeof(int)) * 8);
# 217 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 218 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 220 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint2> ()
# 221 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 222 "/usr/local/cuda/bin/../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned)) * 8);
# 224 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 225 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 227 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int4> ()
# 228 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 229 "/usr/local/cuda/bin/../include/channel_descriptor.h"
auto int e = (((int)sizeof(int)) * 8);
# 231 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 232 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 234 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint4> ()
# 235 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 236 "/usr/local/cuda/bin/../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned)) * 8);
# 238 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 239 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 243 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< long> ()
# 244 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 245 "/usr/local/cuda/bin/../include/channel_descriptor.h"
auto int e = (((int)sizeof(long)) * 8);
# 247 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 248 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 250 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned long> ()
# 251 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 252 "/usr/local/cuda/bin/../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned long)) * 8);
# 254 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 255 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 257 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< long1> ()
# 258 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 259 "/usr/local/cuda/bin/../include/channel_descriptor.h"
auto int e = (((int)sizeof(long)) * 8);
# 261 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 262 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 264 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ulong1> ()
# 265 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 266 "/usr/local/cuda/bin/../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned long)) * 8);
# 268 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 269 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 271 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< long2> ()
# 272 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 273 "/usr/local/cuda/bin/../include/channel_descriptor.h"
auto int e = (((int)sizeof(long)) * 8);
# 275 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 276 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 278 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ulong2> ()
# 279 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 280 "/usr/local/cuda/bin/../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned long)) * 8);
# 282 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 283 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 285 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< long4> ()
# 286 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 287 "/usr/local/cuda/bin/../include/channel_descriptor.h"
auto int e = (((int)sizeof(long)) * 8);
# 289 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 290 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 292 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ulong4> ()
# 293 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 294 "/usr/local/cuda/bin/../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned long)) * 8);
# 296 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 297 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 301 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float> ()
# 302 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 303 "/usr/local/cuda/bin/../include/channel_descriptor.h"
auto int e = (((int)sizeof(float)) * 8);
# 305 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 306 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 308 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float1> ()
# 309 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 310 "/usr/local/cuda/bin/../include/channel_descriptor.h"
auto int e = (((int)sizeof(float)) * 8);
# 312 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 313 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 315 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float2> ()
# 316 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 317 "/usr/local/cuda/bin/../include/channel_descriptor.h"
auto int e = (((int)sizeof(float)) * 8);
# 319 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat);
# 320 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 322 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float4> ()
# 323 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 324 "/usr/local/cuda/bin/../include/channel_descriptor.h"
auto int e = (((int)sizeof(float)) * 8);
# 326 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat);
# 327 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 94 "/usr/local/cuda/bin/../include/texture_types.h"
template<class T, int dim = 1, cudaTextureReadMode = cudaReadModeElementType>
# 95 "/usr/local/cuda/bin/../include/texture_types.h"
struct texture : public textureReference {
# 97 "/usr/local/cuda/bin/../include/texture_types.h"
texture(int norm = 0, cudaTextureFilterMode
# 98 "/usr/local/cuda/bin/../include/texture_types.h"
fMode = cudaFilterModePoint, cudaTextureAddressMode
# 99 "/usr/local/cuda/bin/../include/texture_types.h"
aMode = cudaAddressModeClamp)
# 100 "/usr/local/cuda/bin/../include/texture_types.h"
{
# 101 "/usr/local/cuda/bin/../include/texture_types.h"
(this->normalized) = norm;
# 102 "/usr/local/cuda/bin/../include/texture_types.h"
(this->filterMode) = fMode;
# 103 "/usr/local/cuda/bin/../include/texture_types.h"
((this->addressMode)[0]) = aMode;
# 104 "/usr/local/cuda/bin/../include/texture_types.h"
((this->addressMode)[1]) = aMode;
# 105 "/usr/local/cuda/bin/../include/texture_types.h"
((this->addressMode)[2]) = aMode;
# 106 "/usr/local/cuda/bin/../include/texture_types.h"
(this->channelDesc) = cudaCreateChannelDesc< T> ();
# 107 "/usr/local/cuda/bin/../include/texture_types.h"
}
# 109 "/usr/local/cuda/bin/../include/texture_types.h"
texture(int norm, cudaTextureFilterMode
# 110 "/usr/local/cuda/bin/../include/texture_types.h"
fMode, cudaTextureAddressMode
# 111 "/usr/local/cuda/bin/../include/texture_types.h"
aMode, cudaChannelFormatDesc
# 112 "/usr/local/cuda/bin/../include/texture_types.h"
desc)
# 113 "/usr/local/cuda/bin/../include/texture_types.h"
{
# 114 "/usr/local/cuda/bin/../include/texture_types.h"
(this->normalized) = norm;
# 115 "/usr/local/cuda/bin/../include/texture_types.h"
(this->filterMode) = fMode;
# 116 "/usr/local/cuda/bin/../include/texture_types.h"
((this->addressMode)[0]) = aMode;
# 117 "/usr/local/cuda/bin/../include/texture_types.h"
((this->addressMode)[1]) = aMode;
# 118 "/usr/local/cuda/bin/../include/texture_types.h"
((this->addressMode)[2]) = aMode;
# 119 "/usr/local/cuda/bin/../include/texture_types.h"
(this->channelDesc) = desc;
# 120 "/usr/local/cuda/bin/../include/texture_types.h"
}
# 121 "/usr/local/cuda/bin/../include/texture_types.h"
};
# 54 "/usr/local/cuda/bin/../include/driver_functions.h"
static inline cudaPitchedPtr make_cudaPitchedPtr(void *d, size_t p, size_t xsz, size_t ysz)
# 55 "/usr/local/cuda/bin/../include/driver_functions.h"
{
# 56 "/usr/local/cuda/bin/../include/driver_functions.h"
auto cudaPitchedPtr s;
# 58 "/usr/local/cuda/bin/../include/driver_functions.h"
(s.ptr) = d;
# 59 "/usr/local/cuda/bin/../include/driver_functions.h"
(s.pitch) = p;
# 60 "/usr/local/cuda/bin/../include/driver_functions.h"
(s.xsize) = xsz;
# 61 "/usr/local/cuda/bin/../include/driver_functions.h"
(s.ysize) = ysz;
# 63 "/usr/local/cuda/bin/../include/driver_functions.h"
return s;
# 64 "/usr/local/cuda/bin/../include/driver_functions.h"
}
# 66 "/usr/local/cuda/bin/../include/driver_functions.h"
static inline cudaPos make_cudaPos(size_t x, size_t y, size_t z)
# 67 "/usr/local/cuda/bin/../include/driver_functions.h"
{
# 68 "/usr/local/cuda/bin/../include/driver_functions.h"
auto cudaPos p;
# 70 "/usr/local/cuda/bin/../include/driver_functions.h"
(p.x) = x;
# 71 "/usr/local/cuda/bin/../include/driver_functions.h"
(p.y) = y;
# 72 "/usr/local/cuda/bin/../include/driver_functions.h"
(p.z) = z;
# 74 "/usr/local/cuda/bin/../include/driver_functions.h"
return p;
# 75 "/usr/local/cuda/bin/../include/driver_functions.h"
}
# 77 "/usr/local/cuda/bin/../include/driver_functions.h"
static inline cudaExtent make_cudaExtent(size_t w, size_t h, size_t d)
# 78 "/usr/local/cuda/bin/../include/driver_functions.h"
{
# 79 "/usr/local/cuda/bin/../include/driver_functions.h"
auto cudaExtent e;
# 81 "/usr/local/cuda/bin/../include/driver_functions.h"
(e.width) = w;
# 82 "/usr/local/cuda/bin/../include/driver_functions.h"
(e.height) = h;
# 83 "/usr/local/cuda/bin/../include/driver_functions.h"
(e.depth) = d;
# 85 "/usr/local/cuda/bin/../include/driver_functions.h"
return e;
# 86 "/usr/local/cuda/bin/../include/driver_functions.h"
}
# 54 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline char1 make_char1(signed char x)
# 55 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 56 "/usr/local/cuda/bin/../include/vector_functions.h"
auto char1 t; (t.x) = x; return t;
# 57 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 59 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uchar1 make_uchar1(unsigned char x)
# 60 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 61 "/usr/local/cuda/bin/../include/vector_functions.h"
auto uchar1 t; (t.x) = x; return t;
# 62 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 64 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline char2 make_char2(signed char x, signed char y)
# 65 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 66 "/usr/local/cuda/bin/../include/vector_functions.h"
auto char2 t; (t.x) = x; (t.y) = y; return t;
# 67 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 69 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uchar2 make_uchar2(unsigned char x, unsigned char y)
# 70 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 71 "/usr/local/cuda/bin/../include/vector_functions.h"
auto uchar2 t; (t.x) = x; (t.y) = y; return t;
# 72 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 74 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline char3 make_char3(signed char x, signed char y, signed char z)
# 75 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 76 "/usr/local/cuda/bin/../include/vector_functions.h"
auto char3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 77 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 79 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z)
# 80 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 81 "/usr/local/cuda/bin/../include/vector_functions.h"
auto uchar3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 82 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 84 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline char4 make_char4(signed char x, signed char y, signed char z, signed char w)
# 85 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 86 "/usr/local/cuda/bin/../include/vector_functions.h"
auto char4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 87 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 89 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w)
# 90 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 91 "/usr/local/cuda/bin/../include/vector_functions.h"
auto uchar4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 92 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 94 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline short1 make_short1(short x)
# 95 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 96 "/usr/local/cuda/bin/../include/vector_functions.h"
auto short1 t; (t.x) = x; return t;
# 97 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 99 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ushort1 make_ushort1(unsigned short x)
# 100 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 101 "/usr/local/cuda/bin/../include/vector_functions.h"
auto ushort1 t; (t.x) = x; return t;
# 102 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 104 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline short2 make_short2(short x, short y)
# 105 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 106 "/usr/local/cuda/bin/../include/vector_functions.h"
auto short2 t; (t.x) = x; (t.y) = y; return t;
# 107 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 109 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ushort2 make_ushort2(unsigned short x, unsigned short y)
# 110 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 111 "/usr/local/cuda/bin/../include/vector_functions.h"
auto ushort2 t; (t.x) = x; (t.y) = y; return t;
# 112 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 114 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline short3 make_short3(short x, short y, short z)
# 115 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 116 "/usr/local/cuda/bin/../include/vector_functions.h"
auto short3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 117 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 119 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z)
# 120 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 121 "/usr/local/cuda/bin/../include/vector_functions.h"
auto ushort3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 122 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 124 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline short4 make_short4(short x, short y, short z, short w)
# 125 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 126 "/usr/local/cuda/bin/../include/vector_functions.h"
auto short4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 127 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 129 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w)
# 130 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 131 "/usr/local/cuda/bin/../include/vector_functions.h"
auto ushort4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 132 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 134 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline int1 make_int1(int x)
# 135 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 136 "/usr/local/cuda/bin/../include/vector_functions.h"
auto int1 t; (t.x) = x; return t;
# 137 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 139 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uint1 make_uint1(unsigned x)
# 140 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 141 "/usr/local/cuda/bin/../include/vector_functions.h"
auto uint1 t; (t.x) = x; return t;
# 142 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 144 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline int2 make_int2(int x, int y)
# 145 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 146 "/usr/local/cuda/bin/../include/vector_functions.h"
auto int2 t; (t.x) = x; (t.y) = y; return t;
# 147 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 149 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uint2 make_uint2(unsigned x, unsigned y)
# 150 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 151 "/usr/local/cuda/bin/../include/vector_functions.h"
auto uint2 t; (t.x) = x; (t.y) = y; return t;
# 152 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 154 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline int3 make_int3(int x, int y, int z)
# 155 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 156 "/usr/local/cuda/bin/../include/vector_functions.h"
auto int3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 157 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 159 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uint3 make_uint3(unsigned x, unsigned y, unsigned z)
# 160 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 161 "/usr/local/cuda/bin/../include/vector_functions.h"
auto uint3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 162 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 164 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline int4 make_int4(int x, int y, int z, int w)
# 165 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 166 "/usr/local/cuda/bin/../include/vector_functions.h"
auto int4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 167 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 169 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w)
# 170 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 171 "/usr/local/cuda/bin/../include/vector_functions.h"
auto uint4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 172 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 174 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline long1 make_long1(long x)
# 175 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 176 "/usr/local/cuda/bin/../include/vector_functions.h"
auto long1 t; (t.x) = x; return t;
# 177 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 179 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulong1 make_ulong1(unsigned long x)
# 180 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 181 "/usr/local/cuda/bin/../include/vector_functions.h"
auto ulong1 t; (t.x) = x; return t;
# 182 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 184 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline long2 make_long2(long x, long y)
# 185 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 186 "/usr/local/cuda/bin/../include/vector_functions.h"
auto long2 t; (t.x) = x; (t.y) = y; return t;
# 187 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 189 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulong2 make_ulong2(unsigned long x, unsigned long y)
# 190 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 191 "/usr/local/cuda/bin/../include/vector_functions.h"
auto ulong2 t; (t.x) = x; (t.y) = y; return t;
# 192 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 196 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline long3 make_long3(long x, long y, long z)
# 197 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 198 "/usr/local/cuda/bin/../include/vector_functions.h"
auto long3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 199 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 201 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z)
# 202 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 203 "/usr/local/cuda/bin/../include/vector_functions.h"
auto ulong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 204 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 206 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline long4 make_long4(long x, long y, long z, long w)
# 207 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 208 "/usr/local/cuda/bin/../include/vector_functions.h"
auto long4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 209 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 211 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w)
# 212 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 213 "/usr/local/cuda/bin/../include/vector_functions.h"
auto ulong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 214 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 218 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline float1 make_float1(float x)
# 219 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 220 "/usr/local/cuda/bin/../include/vector_functions.h"
auto float1 t; (t.x) = x; return t;
# 221 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 223 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline float2 make_float2(float x, float y)
# 224 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 225 "/usr/local/cuda/bin/../include/vector_functions.h"
auto float2 t; (t.x) = x; (t.y) = y; return t;
# 226 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 228 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline float3 make_float3(float x, float y, float z)
# 229 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 230 "/usr/local/cuda/bin/../include/vector_functions.h"
auto float3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 231 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 233 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline float4 make_float4(float x, float y, float z, float w)
# 234 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 235 "/usr/local/cuda/bin/../include/vector_functions.h"
auto float4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 236 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 238 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline double1 make_double1(double x)
# 239 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 240 "/usr/local/cuda/bin/../include/vector_functions.h"
auto double1 t; (t.x) = x; return t;
# 241 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 243 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline double2 make_double2(double x, double y)
# 244 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 245 "/usr/local/cuda/bin/../include/vector_functions.h"
auto double2 t; (t.x) = x; (t.y) = y; return t;
# 246 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 37 "/usr/include/i386/_types.h" 3
typedef signed char __int8_t;
# 41 "/usr/include/i386/_types.h" 3
typedef unsigned char __uint8_t;
# 42 "/usr/include/i386/_types.h" 3
typedef short __int16_t;
# 43 "/usr/include/i386/_types.h" 3
typedef unsigned short __uint16_t;
# 44 "/usr/include/i386/_types.h" 3
typedef int __int32_t;
# 45 "/usr/include/i386/_types.h" 3
typedef unsigned __uint32_t;
# 46 "/usr/include/i386/_types.h" 3
typedef long long __int64_t;
# 47 "/usr/include/i386/_types.h" 3
typedef unsigned long long __uint64_t;
# 49 "/usr/include/i386/_types.h" 3
typedef long __darwin_intptr_t;
# 50 "/usr/include/i386/_types.h" 3
typedef unsigned __darwin_natural_t;
# 70 "/usr/include/i386/_types.h" 3
typedef int __darwin_ct_rune_t;
# 79 "/usr/include/i386/_types.h" 3
typedef
# 76 "/usr/include/i386/_types.h" 3
union __mbstate_t {
# 77 "/usr/include/i386/_types.h" 3
char __mbstate8[128];
# 78 "/usr/include/i386/_types.h" 3
long long _mbstateL;
# 79 "/usr/include/i386/_types.h" 3
} __mbstate_t;
# 81 "/usr/include/i386/_types.h" 3
typedef __mbstate_t __darwin_mbstate_t;
# 84 "/usr/include/i386/_types.h" 3
typedef int __darwin_ptrdiff_t;
# 90 "/usr/include/i386/_types.h" 3
typedef unsigned long __darwin_size_t;
# 96 "/usr/include/i386/_types.h" 3
typedef __builtin_va_list __darwin_va_list;
# 102 "/usr/include/i386/_types.h" 3
typedef int __darwin_wchar_t;
# 107 "/usr/include/i386/_types.h" 3
typedef __darwin_wchar_t __darwin_rune_t;
# 110 "/usr/include/i386/_types.h" 3
typedef int __darwin_wint_t;
# 115 "/usr/include/i386/_types.h" 3
typedef unsigned long __darwin_clock_t;
# 116 "/usr/include/i386/_types.h" 3
typedef __uint32_t __darwin_socklen_t;
# 117 "/usr/include/i386/_types.h" 3
typedef long __darwin_ssize_t;
# 118 "/usr/include/i386/_types.h" 3
typedef long __darwin_time_t;
# 58 "/usr/include/sys/_types.h" 3
struct __darwin_pthread_handler_rec {
# 60 "/usr/include/sys/_types.h" 3
void (*__routine)(void *);
# 61 "/usr/include/sys/_types.h" 3
void *__arg;
# 62 "/usr/include/sys/_types.h" 3
__darwin_pthread_handler_rec *__next;
# 63 "/usr/include/sys/_types.h" 3
};
# 64 "/usr/include/sys/_types.h" 3
struct _opaque_pthread_attr_t { long __sig; char __opaque[36]; };
# 65 "/usr/include/sys/_types.h" 3
struct _opaque_pthread_cond_t { long __sig; char __opaque[24]; };
# 66 "/usr/include/sys/_types.h" 3
struct _opaque_pthread_condattr_t { long __sig; char __opaque[4]; };
# 67 "/usr/include/sys/_types.h" 3
struct _opaque_pthread_mutex_t { long __sig; char __opaque[40]; };
# 68 "/usr/include/sys/_types.h" 3
struct _opaque_pthread_mutexattr_t { long __sig; char __opaque[8]; };
# 69 "/usr/include/sys/_types.h" 3
struct _opaque_pthread_once_t { long __sig; char __opaque[4]; };
# 70 "/usr/include/sys/_types.h" 3
struct _opaque_pthread_rwlock_t { long __sig; char __opaque[124]; };
# 71 "/usr/include/sys/_types.h" 3
struct _opaque_pthread_rwlockattr_t { long __sig; char __opaque[12]; };
# 72 "/usr/include/sys/_types.h" 3
struct _opaque_pthread_t { long __sig; __darwin_pthread_handler_rec *__cleanup_stack; char __opaque[596]; };
# 94 "/usr/include/sys/_types.h" 3
typedef __int64_t __darwin_blkcnt_t;
# 95 "/usr/include/sys/_types.h" 3
typedef __int32_t __darwin_blksize_t;
# 96 "/usr/include/sys/_types.h" 3
typedef __int32_t __darwin_dev_t;
# 97 "/usr/include/sys/_types.h" 3
typedef unsigned __darwin_fsblkcnt_t;
# 98 "/usr/include/sys/_types.h" 3
typedef unsigned __darwin_fsfilcnt_t;
# 99 "/usr/include/sys/_types.h" 3
typedef __uint32_t __darwin_gid_t;
# 100 "/usr/include/sys/_types.h" 3
typedef __uint32_t __darwin_id_t;
# 101 "/usr/include/sys/_types.h" 3
typedef __uint64_t __darwin_ino64_t;
# 105 "/usr/include/sys/_types.h" 3
typedef __uint32_t __darwin_ino_t;
# 107 "/usr/include/sys/_types.h" 3
typedef __darwin_natural_t __darwin_mach_port_name_t;
# 108 "/usr/include/sys/_types.h" 3
typedef __darwin_mach_port_name_t __darwin_mach_port_t;
# 109 "/usr/include/sys/_types.h" 3
typedef __uint16_t __darwin_mode_t;
# 110 "/usr/include/sys/_types.h" 3
typedef __int64_t __darwin_off_t;
# 111 "/usr/include/sys/_types.h" 3
typedef __int32_t __darwin_pid_t;
# 113 "/usr/include/sys/_types.h" 3
typedef _opaque_pthread_attr_t __darwin_pthread_attr_t;
# 115 "/usr/include/sys/_types.h" 3
typedef _opaque_pthread_cond_t __darwin_pthread_cond_t;
# 117 "/usr/include/sys/_types.h" 3
typedef _opaque_pthread_condattr_t __darwin_pthread_condattr_t;
# 118 "/usr/include/sys/_types.h" 3
typedef unsigned long __darwin_pthread_key_t;
# 120 "/usr/include/sys/_types.h" 3
typedef _opaque_pthread_mutex_t __darwin_pthread_mutex_t;
# 122 "/usr/include/sys/_types.h" 3
typedef _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;
# 124 "/usr/include/sys/_types.h" 3
typedef _opaque_pthread_once_t __darwin_pthread_once_t;
# 126 "/usr/include/sys/_types.h" 3
typedef _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;
# 128 "/usr/include/sys/_types.h" 3
typedef _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;
# 130 "/usr/include/sys/_types.h" 3
typedef _opaque_pthread_t *__darwin_pthread_t;
# 131 "/usr/include/sys/_types.h" 3
typedef __uint32_t __darwin_sigset_t;
# 132 "/usr/include/sys/_types.h" 3
typedef __int32_t __darwin_suseconds_t;
# 133 "/usr/include/sys/_types.h" 3
typedef __uint32_t __darwin_uid_t;
# 134 "/usr/include/sys/_types.h" 3
typedef __uint32_t __darwin_useconds_t;
# 135 "/usr/include/sys/_types.h" 3
typedef unsigned char __darwin_uuid_t[16];
# 29 "/usr/include/_types.h" 3
typedef int __darwin_nl_item;
# 30 "/usr/include/_types.h" 3
typedef int __darwin_wctrans_t;
# 34 "/usr/include/_types.h" 3
typedef unsigned long __darwin_wctype_t;
# 88 "/usr/include/sys/_structs.h" 3
struct timespec {
# 90 "/usr/include/sys/_structs.h" 3
__darwin_time_t tv_sec;
# 91 "/usr/include/sys/_structs.h" 3
long tv_nsec;
# 92 "/usr/include/sys/_structs.h" 3
};
# 77 "/usr/include/time.h" 3
typedef __darwin_clock_t clock_t;
# 87 "/usr/include/time.h" 3
typedef __darwin_time_t time_t;
# 90 "/usr/include/time.h" 3
struct tm {
# 91 "/usr/include/time.h" 3
int tm_sec;
# 92 "/usr/include/time.h" 3
int tm_min;
# 93 "/usr/include/time.h" 3
int tm_hour;
# 94 "/usr/include/time.h" 3
int tm_mday;
# 95 "/usr/include/time.h" 3
int tm_mon;
# 96 "/usr/include/time.h" 3
int tm_year;
# 97 "/usr/include/time.h" 3
int tm_wday;
# 98 "/usr/include/time.h" 3
int tm_yday;
# 99 "/usr/include/time.h" 3
int tm_isdst;
# 100 "/usr/include/time.h" 3
long tm_gmtoff;
# 101 "/usr/include/time.h" 3
char *tm_zone;
# 102 "/usr/include/time.h" 3
};
# 113 "/usr/include/time.h" 3
extern char *tzname[];
# 116 "/usr/include/time.h" 3
extern int getdate_err;
# 120 "/usr/include/time.h" 3
extern int daylight;
# 123 "/usr/include/time.h" 3
extern "C" char *asctime(const tm *);
# 124 "/usr/include/time.h" 3
extern "C" __attribute__((__weak__)) clock_t clock() __asm__("_clock");
# 125 "/usr/include/time.h" 3
extern "C" char *ctime(const time_t *);
# 126 "/usr/include/time.h" 3
extern "C" double difftime(time_t, time_t);
# 127 "/usr/include/time.h" 3
extern "C" tm *getdate(const char *);
# 128 "/usr/include/time.h" 3
extern "C" tm *gmtime(const time_t *);
# 129 "/usr/include/time.h" 3
extern "C" tm *localtime(const time_t *);
# 130 "/usr/include/time.h" 3
extern "C" time_t mktime(tm *) __asm__("_mktime");
# 131 "/usr/include/time.h" 3
extern "C" size_t strftime(char *, size_t, const char *, const tm *) __asm__("_strftime");
# 132 "/usr/include/time.h" 3
extern "C" char *strptime(const char *, const char *, tm *) __asm__("_strptime");
# 133 "/usr/include/time.h" 3
extern "C" time_t time(time_t *);
# 136 "/usr/include/time.h" 3
extern "C" void tzset();
# 140 "/usr/include/time.h" 3
extern "C" char *asctime_r(const tm *, char *);
# 141 "/usr/include/time.h" 3
extern "C" char *ctime_r(const time_t *, char *);
# 142 "/usr/include/time.h" 3
extern "C" tm *gmtime_r(const time_t *, tm *);
# 143 "/usr/include/time.h" 3
extern "C" tm *localtime_r(const time_t *, tm *);
# 146 "/usr/include/time.h" 3
extern "C" time_t posix2time(time_t);
# 148 "/usr/include/time.h" 3
extern "C" char *timezone(int, int);
# 150 "/usr/include/time.h" 3
extern "C" void tzsetwall();
# 151 "/usr/include/time.h" 3
extern "C" time_t time2posix(time_t);
# 152 "/usr/include/time.h" 3
extern "C" time_t timelocal(tm *const);
# 153 "/usr/include/time.h" 3
extern "C" time_t timegm(tm *const);
# 157 "/usr/include/time.h" 3
extern "C" int nanosleep(const timespec *, timespec *) __asm__("_nanosleep");
# 70 "/usr/include/string.h" 3
typedef __darwin_ssize_t ssize_t;
# 81 "/usr/include/string.h" 3
extern "C" void *memchr(const void *, int, size_t);
# 82 "/usr/include/string.h" 3
extern "C" int memcmp(const void *, const void *, size_t);
# 83 "/usr/include/string.h" 3
extern "C" __attribute__((__weak__)) void *memcpy(void *, const void *, size_t);
# 84 "/usr/include/string.h" 3
extern "C" void *memmove(void *, const void *, size_t);
# 85 "/usr/include/string.h" 3
extern "C" __attribute__((__weak__)) void *memset(void *, int, size_t);
# 87 "/usr/include/string.h" 3
extern "C" char *stpcpy(char *, const char *);
# 88 "/usr/include/string.h" 3
extern "C" char *strcasestr(const char *, const char *);
# 90 "/usr/include/string.h" 3
extern "C" char *strcat(char *, const char *);
# 91 "/usr/include/string.h" 3
extern "C" char *strchr(const char *, int);
# 92 "/usr/include/string.h" 3
extern "C" int strcmp(const char *, const char *);
# 93 "/usr/include/string.h" 3
extern "C" int strcoll(const char *, const char *);
# 94 "/usr/include/string.h" 3
extern "C" char *strcpy(char *, const char *);
# 95 "/usr/include/string.h" 3
extern "C" size_t strcspn(const char *, const char *);
# 96 "/usr/include/string.h" 3
extern "C" char *strerror(int) __asm__("_strerror");
# 97 "/usr/include/string.h" 3
extern "C" int strerror_r(int, char *, size_t);
# 98 "/usr/include/string.h" 3
extern "C" size_t strlen(const char *);
# 99 "/usr/include/string.h" 3
extern "C" char *strncat(char *, const char *, size_t);
# 100 "/usr/include/string.h" 3
extern "C" int strncmp(const char *, const char *, size_t);
# 101 "/usr/include/string.h" 3
extern "C" char *strncpy(char *, const char *, size_t);
# 103 "/usr/include/string.h" 3
extern "C" char *strnstr(const char *, const char *, size_t);
# 105 "/usr/include/string.h" 3
extern "C" char *strpbrk(const char *, const char *);
# 106 "/usr/include/string.h" 3
extern "C" char *strrchr(const char *, int);
# 107 "/usr/include/string.h" 3
extern "C" size_t strspn(const char *, const char *);
# 108 "/usr/include/string.h" 3
extern "C" char *strstr(const char *, const char *);
# 109 "/usr/include/string.h" 3
extern "C" char *strtok(char *, const char *);
# 110 "/usr/include/string.h" 3
extern "C" size_t strxfrm(char *, const char *, size_t);
# 114 "/usr/include/string.h" 3
extern "C" void *memccpy(void *, const void *, int, size_t);
# 115 "/usr/include/string.h" 3
extern "C" char *strtok_r(char *, const char *, char **);
# 116 "/usr/include/string.h" 3
extern "C" char *strdup(const char *);
# 118 "/usr/include/string.h" 3
extern "C" int bcmp(const void *, const void *, size_t);
# 119 "/usr/include/string.h" 3
extern "C" void bcopy(const void *, void *, size_t);
# 120 "/usr/include/string.h" 3
extern "C" void bzero(void *, size_t);
# 121 "/usr/include/string.h" 3
extern "C" int ffs(int);
# 122 "/usr/include/string.h" 3
extern "C" int ffsl(long);
# 123 "/usr/include/string.h" 3
extern "C" int fls(int);
# 124 "/usr/include/string.h" 3
extern "C" int flsl(long);
# 125 "/usr/include/string.h" 3
extern "C" char *index(const char *, int);
# 126 "/usr/include/string.h" 3
extern "C" void memset_pattern4(void *, const void *, size_t);
# 127 "/usr/include/string.h" 3
extern "C" void memset_pattern8(void *, const void *, size_t);
# 128 "/usr/include/string.h" 3
extern "C" void memset_pattern16(void *, const void *, size_t);
# 129 "/usr/include/string.h" 3
extern "C" char *rindex(const char *, int);
# 130 "/usr/include/string.h" 3
extern "C" int strcasecmp(const char *, const char *);
# 131 "/usr/include/string.h" 3
extern "C" size_t strlcat(char *, const char *, size_t);
# 132 "/usr/include/string.h" 3
extern "C" size_t strlcpy(char *, const char *, size_t);
# 133 "/usr/include/string.h" 3
extern "C" void strmode(int, char *);
# 134 "/usr/include/string.h" 3
extern "C" int strncasecmp(const char *, const char *, size_t);
# 135 "/usr/include/string.h" 3
extern "C" char *strsep(char **, const char *);
# 136 "/usr/include/string.h" 3
extern "C" char *strsignal(int);
# 137 "/usr/include/string.h" 3
extern "C" void swab(const void *, void *, ssize_t);
# 56 "/usr/local/cuda/bin/../include/common_functions.h"
extern "C" __attribute__((__weak__)) clock_t clock() __asm__("_clock");
# 59 "/usr/local/cuda/bin/../include/common_functions.h"
extern "C" __attribute__((__weak__)) void *memset(void *, int, size_t);
# 62 "/usr/local/cuda/bin/../include/common_functions.h"
extern "C" __attribute__((__weak__)) void *memcpy(void *, const void *, size_t);
# 65 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) int abs(int) __attribute__((__const__));
# 67 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) long labs(long) __attribute__((__const__));
# 69 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) long long llabs(long long);
# 71 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double fabs(double);
# 73 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float fabsf(float);
# 76 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) int min(int, int);
# 78 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) unsigned umin(unsigned, unsigned);
# 80 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float fminf(float, float);
# 82 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double fmin(double, double);
# 85 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) int max(int, int);
# 87 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) unsigned umax(unsigned, unsigned);
# 89 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float fmaxf(float, float);
# 91 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double fmax(double, double);
# 94 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double sin(double);
# 96 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float sinf(float);
# 99 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double cos(double);
# 101 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float cosf(float);
# 104 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) void sincos(double, double *, double *);
# 106 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) void sincosf(float, float *, float *);
# 109 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double tan(double);
# 111 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float tanf(float);
# 114 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double sqrt(double);
# 116 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float sqrtf(float);
# 119 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double rsqrt(double);
# 121 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float rsqrtf(float);
# 124 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double exp2(double);
# 126 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float exp2f(float);
# 129 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double exp10(double);
# 131 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float exp10f(float);
# 134 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double expm1(double);
# 136 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float expm1f(float);
# 139 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double log2(double);
# 141 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float log2f(float);
# 144 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double log10(double);
# 146 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float log10f(float);
# 149 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double log(double);
# 151 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float logf(float);
# 154 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double log1p(double);
# 156 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float log1pf(float);
# 159 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double floor(double);
# 161 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float floorf(float);
# 164 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double exp(double);
# 166 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float expf(float);
# 169 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double cosh(double);
# 171 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float coshf(float);
# 174 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double sinh(double);
# 176 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float sinhf(float);
# 179 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double tanh(double);
# 181 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float tanhf(float);
# 184 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double acosh(double);
# 186 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float acoshf(float);
# 189 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double asinh(double);
# 191 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float asinhf(float);
# 194 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double atanh(double);
# 196 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float atanhf(float);
# 199 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double ldexp(double, int);
# 201 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float ldexpf(float, int);
# 204 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double logb(double);
# 206 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float logbf(float);
# 209 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) int ilogb(double);
# 211 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) int ilogbf(float);
# 214 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double scalbn(double, int);
# 216 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float scalbnf(float, int);
# 219 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double scalbln(double, long);
# 221 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float scalblnf(float, long);
# 224 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double frexp(double, int *);
# 226 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float frexpf(float, int *);
# 229 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double round(double);
# 231 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float roundf(float);
# 234 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) long lround(double);
# 236 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) long lroundf(float);
# 239 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) long long llround(double);
# 241 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) long long llroundf(float);
# 244 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double rint(double);
# 246 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float rintf(float);
# 249 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) long lrint(double);
# 251 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) long lrintf(float);
# 254 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) long long llrint(double);
# 256 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) long long llrintf(float);
# 259 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double nearbyint(double);
# 261 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float nearbyintf(float);
# 264 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double ceil(double);
# 266 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float ceilf(float);
# 269 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double trunc(double);
# 271 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float truncf(float);
# 274 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double fdim(double, double);
# 276 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float fdimf(float, float);
# 279 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double atan2(double, double);
# 281 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float atan2f(float, float);
# 284 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double atan(double);
# 286 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float atanf(float);
# 289 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double asin(double);
# 291 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float asinf(float);
# 294 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double acos(double);
# 296 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float acosf(float);
# 299 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double hypot(double, double);
# 301 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float hypotf(float, float);
# 304 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double cbrt(double);
# 306 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float cbrtf(float);
# 309 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double pow(double, double);
# 311 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float powf(float, float);
# 314 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double modf(double, double *);
# 316 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float modff(float, float *);
# 319 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double fmod(double, double);
# 321 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float fmodf(float, float);
# 324 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double remainder(double, double);
# 326 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float remainderf(float, float);
# 329 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double remquo(double, double, int *);
# 331 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float remquof(float, float, int *);
# 334 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double erf(double);
# 336 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float erff(float);
# 339 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double erfc(double);
# 341 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float erfcf(float);
# 344 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double lgamma(double);
# 346 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float lgammaf(float);
# 349 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double tgamma(double);
# 351 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float tgammaf(float);
# 354 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double copysign(double, double);
# 356 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float copysignf(float, float);
# 359 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double nextafter(double, double);
# 361 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float nextafterf(float, float);
# 364 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double nan(const char *);
# 366 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float nanf(const char *);
# 369 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __isinf(double);
# 371 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __isinff(float);
# 374 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __isnan(double);
# 376 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __isnanf(float);
# 381 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __isfinited(double);
# 383 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __isfinitef(float);
# 385 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __signbitd(double);
# 399 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __signbitf(float);
# 402 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) double fma(double, double, double);
# 404 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) float fmaf(float, float, float);
# 49 "/usr/include/architecture/i386/math.h" 3
extern "C" { typedef float float_t; }
# 50 "/usr/include/architecture/i386/math.h" 3
extern "C" { typedef double double_t; }
# 83 "/usr/include/architecture/i386/math.h" 3
enum __cuda__FP_NAN {
# 84 "/usr/include/architecture/i386/math.h" 3
_FP_NAN = 1,
# 85 "/usr/include/architecture/i386/math.h" 3
_FP_INFINITE,
# 86 "/usr/include/architecture/i386/math.h" 3
_FP_ZERO,
# 87 "/usr/include/architecture/i386/math.h" 3
_FP_NORMAL,
# 88 "/usr/include/architecture/i386/math.h" 3
_FP_SUBNORMAL,
# 89 "/usr/include/architecture/i386/math.h" 3
_FP_SUPERNORMAL
# 90 "/usr/include/architecture/i386/math.h" 3
};
# 117 "/usr/include/architecture/i386/math.h" 3
extern "C" unsigned __math_errhandling();
# 137 "/usr/include/architecture/i386/math.h" 3
extern "C" int __fpclassifyf(float);
# 138 "/usr/include/architecture/i386/math.h" 3
extern "C" int __fpclassifyd(double);
# 139 "/usr/include/architecture/i386/math.h" 3
extern "C" int __fpclassify(long double);
# 172 "/usr/include/architecture/i386/math.h" 3
extern "C" { static inline int __inline_isfinitef(float) __attribute__((__always_inline__)); }
# 173 "/usr/include/architecture/i386/math.h" 3
extern "C" { static inline int __inline_isfinited(double) __attribute__((__always_inline__)); }
# 174 "/usr/include/architecture/i386/math.h" 3
extern "C" { static inline int __inline_isfinite(long double) __attribute__((__always_inline__)); }
# 175 "/usr/include/architecture/i386/math.h" 3
extern "C" { static inline int __inline_isinff(float) __attribute__((__always_inline__)); }
# 176 "/usr/include/architecture/i386/math.h" 3
extern "C" { static inline int __inline_isinfd(double) __attribute__((__always_inline__)); }
# 177 "/usr/include/architecture/i386/math.h" 3
extern "C" { static inline int __inline_isinf(long double) __attribute__((__always_inline__)); }
# 178 "/usr/include/architecture/i386/math.h" 3
extern "C" { static inline int __inline_isnanf(float) __attribute__((__always_inline__)); }
# 179 "/usr/include/architecture/i386/math.h" 3
extern "C" { static inline int __inline_isnand(double) __attribute__((__always_inline__)); }
# 180 "/usr/include/architecture/i386/math.h" 3
extern "C" { static inline int __inline_isnan(long double) __attribute__((__always_inline__)); }
# 181 "/usr/include/architecture/i386/math.h" 3
extern "C" { static inline int __inline_isnormalf(float) __attribute__((__always_inline__)); }
# 182 "/usr/include/architecture/i386/math.h" 3
extern "C" { static inline int __inline_isnormald(double) __attribute__((__always_inline__)); }
# 183 "/usr/include/architecture/i386/math.h" 3
extern "C" { static inline int __inline_isnormal(long double) __attribute__((__always_inline__)); }
# 184 "/usr/include/architecture/i386/math.h" 3
extern "C" { static inline int __inline_signbitf(float) __attribute__((__always_inline__)); }
# 185 "/usr/include/architecture/i386/math.h" 3
extern "C" { static inline int __inline_signbitd(double) __attribute__((__always_inline__)); }
# 186 "/usr/include/architecture/i386/math.h" 3
extern "C" { static inline int __inline_signbit(long double) __attribute__((__always_inline__)); }
# 188 "/usr/include/architecture/i386/math.h" 3
extern "C" { static inline __attribute__((__always_inline__)) int __inline_isinff(float __x) { return __builtin_fabsf(__x) == __builtin_inff(); } }
# 189 "/usr/include/architecture/i386/math.h" 3
extern "C" { static inline __attribute__((__always_inline__)) int __inline_isinfd(double __x) { return __builtin_fabs(__x) == __builtin_inf(); } }
# 190 "/usr/include/architecture/i386/math.h" 3
extern "C" { static inline __attribute__((__always_inline__)) int __inline_isinf(long double __x) { return __builtin_fabsl(__x) == __builtin_infl(); } }
# 191 "/usr/include/architecture/i386/math.h" 3
extern "C" { static inline __attribute__((__always_inline__)) int __inline_isfinitef(float __x) { return (__x == __x) && (__builtin_fabsf(__x) != __builtin_inff()); } }
# 192 "/usr/include/architecture/i386/math.h" 3
extern "C" { static inline __attribute__((__always_inline__)) int __inline_isfinited(double __x) { return (__x == __x) && (__builtin_fabs(__x) != __builtin_inf()); } }
# 193 "/usr/include/architecture/i386/math.h" 3
extern "C" { static inline __attribute__((__always_inline__)) int __inline_isfinite(long double __x) { return (__x == __x) && (__builtin_fabsl(__x) != __builtin_infl()); } }
# 194 "/usr/include/architecture/i386/math.h" 3
extern "C" { static inline __attribute__((__always_inline__)) int __inline_isnanf(float __x) { return __x != __x; } }
# 195 "/usr/include/architecture/i386/math.h" 3
extern "C" { static inline __attribute__((__always_inline__)) int __inline_isnand(double __x) { return __x != __x; } }
# 196 "/usr/include/architecture/i386/math.h" 3
extern "C" { static inline __attribute__((__always_inline__)) int __inline_isnan(long double __x) { return __x != __x; } }
# 197 "/usr/include/architecture/i386/math.h" 3
extern "C" { static inline __attribute__((__always_inline__)) int __inline_signbitf(float __x) { auto union { float __f; unsigned __u; } __u; (__u.__f) = __x; return (int)((__u.__u) >> 31); } }
# 198 "/usr/include/architecture/i386/math.h" 3
extern "C" { static inline __attribute__((__always_inline__)) int __inline_signbitd(double __x) { auto union { double __f; unsigned __u[2]; } __u; (__u.__f) = __x; return (int)(((__u.__u)[1]) >> 31); } }
# 199 "/usr/include/architecture/i386/math.h" 3
extern "C" { static inline __attribute__((__always_inline__)) int __inline_signbit(long double __x) { auto union { long double __ld; struct { unsigned __m[2]; short __sexp; } __p; } __u; (__u.__ld) = __x; return (int)(((unsigned short)((__u.__p).__sexp)) >> 15); } }
# 200 "/usr/include/architecture/i386/math.h" 3
extern "C" { static inline __attribute__((__always_inline__)) int __inline_isnormalf(float __x) { auto float fabsf = __builtin_fabsf(__x); if (__x != __x) { return 0; } return (fabsf < __builtin_inff()) && (fabsf >= (1.175494351e-38F)); } }
# 201 "/usr/include/architecture/i386/math.h" 3
extern "C" { static inline __attribute__((__always_inline__)) int __inline_isnormald(double __x) { auto double fabsf = __builtin_fabs(__x); if (__x != __x) { return 0; } return (fabsf < __builtin_inf()) && (fabsf >= (2.225073858507201383e-308)); } }
# 202 "/usr/include/architecture/i386/math.h" 3
extern "C" { static inline __attribute__((__always_inline__)) int __inline_isnormal(long double __x) { auto long double fabsf = __builtin_fabsl(__x); if (__x != __x) { return 0; } return (fabsf < __builtin_infl()) && (fabsf >= (3.3621031431120935063e-4932L)); } }
# 262 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double acos(double);
# 263 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float acosf(float);
# 265 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double asin(double);
# 266 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float asinf(float);
# 268 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double atan(double);
# 269 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float atanf(float);
# 271 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double atan2(double, double);
# 272 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float atan2f(float, float);
# 274 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double cos(double);
# 275 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float cosf(float);
# 277 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double sin(double);
# 278 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float sinf(float);
# 280 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double tan(double);
# 281 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float tanf(float);
# 283 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double acosh(double);
# 284 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float acoshf(float);
# 286 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double asinh(double);
# 287 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float asinhf(float);
# 289 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double atanh(double);
# 290 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float atanhf(float);
# 292 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double cosh(double);
# 293 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float coshf(float);
# 295 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double sinh(double);
# 296 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float sinhf(float);
# 298 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double tanh(double);
# 299 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float tanhf(float);
# 301 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double exp(double);
# 302 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float expf(float);
# 304 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double exp2(double);
# 305 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float exp2f(float);
# 307 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double expm1(double);
# 308 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float expm1f(float);
# 310 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double log(double);
# 311 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float logf(float);
# 313 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double log10(double);
# 314 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float log10f(float);
# 316 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double log2(double);
# 317 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float log2f(float);
# 319 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double log1p(double);
# 320 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float log1pf(float);
# 322 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double logb(double);
# 323 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float logbf(float);
# 325 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double modf(double, double *);
# 326 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float modff(float, float *);
# 328 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double ldexp(double, int);
# 329 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float ldexpf(float, int);
# 331 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double frexp(double, int *);
# 332 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float frexpf(float, int *);
# 334 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) int ilogb(double);
# 335 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) int ilogbf(float);
# 337 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double scalbn(double, int);
# 338 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float scalbnf(float, int);
# 340 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double scalbln(double, long);
# 341 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float scalblnf(float, long);
# 343 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double fabs(double);
# 344 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float fabsf(float);
# 346 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double cbrt(double);
# 347 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float cbrtf(float);
# 349 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double hypot(double, double);
# 350 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float hypotf(float, float);
# 352 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double pow(double, double);
# 353 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float powf(float, float);
# 355 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double sqrt(double);
# 356 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float sqrtf(float);
# 358 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double erf(double);
# 359 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float erff(float);
# 361 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double erfc(double);
# 362 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float erfcf(float);
# 364 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double lgamma(double);
# 365 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float lgammaf(float);
# 367 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double tgamma(double);
# 368 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float tgammaf(float);
# 370 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double ceil(double);
# 371 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float ceilf(float);
# 373 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double floor(double);
# 374 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float floorf(float);
# 376 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double nearbyint(double);
# 377 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float nearbyintf(float);
# 379 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double rint(double);
# 380 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float rintf(float);
# 382 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) long lrint(double);
# 383 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) long lrintf(float);
# 385 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double round(double);
# 386 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float roundf(float);
# 388 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) long lround(double);
# 389 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) long lroundf(float);
# 394 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) long long llrint(double);
# 395 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) long long llrintf(float);
# 397 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) long long llround(double);
# 398 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) long long llroundf(float);
# 402 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double trunc(double);
# 403 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float truncf(float);
# 405 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double fmod(double, double);
# 406 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float fmodf(float, float);
# 408 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double remainder(double, double);
# 409 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float remainderf(float, float);
# 411 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double remquo(double, double, int *);
# 412 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float remquof(float, float, int *);
# 414 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double copysign(double, double);
# 415 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float copysignf(float, float);
# 417 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double nan(const char *);
# 418 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float nanf(const char *);
# 420 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double nextafter(double, double);
# 421 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float nextafterf(float, float);
# 423 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double fdim(double, double);
# 424 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float fdimf(float, float);
# 426 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double fmax(double, double);
# 427 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float fmaxf(float, float);
# 429 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double fmin(double, double);
# 430 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float fminf(float, float);
# 432 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) double fma(double, double, double);
# 433 "/usr/include/architecture/i386/math.h" 3
extern "C" __attribute__((__weak__)) float fmaf(float, float, float);
# 435 "/usr/include/architecture/i386/math.h" 3
extern "C" long double acosl(long double);
# 436 "/usr/include/architecture/i386/math.h" 3
extern "C" long double asinl(long double);
# 437 "/usr/include/architecture/i386/math.h" 3
extern "C" long double atanl(long double);
# 438 "/usr/include/architecture/i386/math.h" 3
extern "C" long double atan2l(long double, long double);
# 439 "/usr/include/architecture/i386/math.h" 3
extern "C" long double cosl(long double);
# 440 "/usr/include/architecture/i386/math.h" 3
extern "C" long double sinl(long double);
# 441 "/usr/include/architecture/i386/math.h" 3
extern "C" long double tanl(long double);
# 442 "/usr/include/architecture/i386/math.h" 3
extern "C" long double acoshl(long double);
# 443 "/usr/include/architecture/i386/math.h" 3
extern "C" long double asinhl(long double);
# 444 "/usr/include/architecture/i386/math.h" 3
extern "C" long double atanhl(long double);
# 445 "/usr/include/architecture/i386/math.h" 3
extern "C" long double coshl(long double);
# 446 "/usr/include/architecture/i386/math.h" 3
extern "C" long double sinhl(long double);
# 447 "/usr/include/architecture/i386/math.h" 3
extern "C" long double tanhl(long double);
# 448 "/usr/include/architecture/i386/math.h" 3
extern "C" long double expl(long double);
# 449 "/usr/include/architecture/i386/math.h" 3
extern "C" long double exp2l(long double);
# 450 "/usr/include/architecture/i386/math.h" 3
extern "C" long double expm1l(long double);
# 451 "/usr/include/architecture/i386/math.h" 3
extern "C" long double logl(long double);
# 452 "/usr/include/architecture/i386/math.h" 3
extern "C" long double log10l(long double);
# 453 "/usr/include/architecture/i386/math.h" 3
extern "C" long double log2l(long double);
# 454 "/usr/include/architecture/i386/math.h" 3
extern "C" long double log1pl(long double);
# 455 "/usr/include/architecture/i386/math.h" 3
extern "C" long double logbl(long double);
# 456 "/usr/include/architecture/i386/math.h" 3
extern "C" long double modfl(long double, long double *);
# 457 "/usr/include/architecture/i386/math.h" 3
extern "C" long double ldexpl(long double, int);
# 458 "/usr/include/architecture/i386/math.h" 3
extern "C" long double frexpl(long double, int *);
# 459 "/usr/include/architecture/i386/math.h" 3
extern "C" int ilogbl(long double);
# 460 "/usr/include/architecture/i386/math.h" 3
extern "C" long double scalbnl(long double, int);
# 461 "/usr/include/architecture/i386/math.h" 3
extern "C" long double scalblnl(long double, long);
# 462 "/usr/include/architecture/i386/math.h" 3
extern "C" long double fabsl(long double);
# 463 "/usr/include/architecture/i386/math.h" 3
extern "C" long double cbrtl(long double);
# 464 "/usr/include/architecture/i386/math.h" 3
extern "C" long double hypotl(long double, long double);
# 465 "/usr/include/architecture/i386/math.h" 3
extern "C" long double powl(long double, long double);
# 466 "/usr/include/architecture/i386/math.h" 3
extern "C" long double sqrtl(long double);
# 467 "/usr/include/architecture/i386/math.h" 3
extern "C" long double erfl(long double);
# 468 "/usr/include/architecture/i386/math.h" 3
extern "C" long double erfcl(long double);
# 469 "/usr/include/architecture/i386/math.h" 3
extern "C" long double lgammal(long double);
# 470 "/usr/include/architecture/i386/math.h" 3
extern "C" long double tgammal(long double);
# 471 "/usr/include/architecture/i386/math.h" 3
extern "C" long double ceill(long double);
# 472 "/usr/include/architecture/i386/math.h" 3
extern "C" long double floorl(long double);
# 473 "/usr/include/architecture/i386/math.h" 3
extern "C" long double nearbyintl(long double);
# 474 "/usr/include/architecture/i386/math.h" 3
extern "C" long double rintl(long double);
# 475 "/usr/include/architecture/i386/math.h" 3
extern "C" long lrintl(long double);
# 476 "/usr/include/architecture/i386/math.h" 3
extern "C" long double roundl(long double);
# 477 "/usr/include/architecture/i386/math.h" 3
extern "C" long lroundl(long double);
# 481 "/usr/include/architecture/i386/math.h" 3
extern "C" long long llrintl(long double);
# 482 "/usr/include/architecture/i386/math.h" 3
extern "C" long long llroundl(long double);
# 485 "/usr/include/architecture/i386/math.h" 3
extern "C" long double truncl(long double);
# 486 "/usr/include/architecture/i386/math.h" 3
extern "C" long double fmodl(long double, long double);
# 487 "/usr/include/architecture/i386/math.h" 3
extern "C" long double remainderl(long double, long double);
# 488 "/usr/include/architecture/i386/math.h" 3
extern "C" long double remquol(long double, long double, int *);
# 489 "/usr/include/architecture/i386/math.h" 3
extern "C" long double copysignl(long double, long double);
# 490 "/usr/include/architecture/i386/math.h" 3
extern "C" long double nanl(const char *);
# 491 "/usr/include/architecture/i386/math.h" 3
extern "C" long double nextafterl(long double, long double);
# 492 "/usr/include/architecture/i386/math.h" 3
extern "C" double nexttoward(double, long double);
# 493 "/usr/include/architecture/i386/math.h" 3
extern "C" float nexttowardf(float, long double);
# 494 "/usr/include/architecture/i386/math.h" 3
extern "C" long double nexttowardl(long double, long double);
# 495 "/usr/include/architecture/i386/math.h" 3
extern "C" long double fdiml(long double, long double);
# 496 "/usr/include/architecture/i386/math.h" 3
extern "C" long double fmaxl(long double, long double);
# 497 "/usr/include/architecture/i386/math.h" 3
extern "C" long double fminl(long double, long double);
# 498 "/usr/include/architecture/i386/math.h" 3
extern "C" long double fmal(long double, long double, long double);
# 507 "/usr/include/architecture/i386/math.h" 3
extern "C" double __inf();
# 508 "/usr/include/architecture/i386/math.h" 3
extern "C" float __inff();
# 509 "/usr/include/architecture/i386/math.h" 3
extern "C" long double __infl();
# 510 "/usr/include/architecture/i386/math.h" 3
extern "C" float __nan();
# 513 "/usr/include/architecture/i386/math.h" 3
extern "C" double j0(double);
# 515 "/usr/include/architecture/i386/math.h" 3
extern "C" double j1(double);
# 517 "/usr/include/architecture/i386/math.h" 3
extern "C" double jn(int, double);
# 519 "/usr/include/architecture/i386/math.h" 3
extern "C" double y0(double);
# 521 "/usr/include/architecture/i386/math.h" 3
extern "C" double y1(double);
# 523 "/usr/include/architecture/i386/math.h" 3
extern "C" double yn(int, double);
# 525 "/usr/include/architecture/i386/math.h" 3
extern "C" double scalb(double, double);
# 543 "/usr/include/architecture/i386/math.h" 3
extern "C" { extern int signgam; }
# 557 "/usr/include/architecture/i386/math.h" 3
extern "C" long rinttol(double);
# 559 "/usr/include/architecture/i386/math.h" 3
extern "C" long roundtol(double);
# 597 "/usr/include/architecture/i386/math.h" 3
extern "C" int finite(double);
# 599 "/usr/include/architecture/i386/math.h" 3
extern "C" double gamma(double);
# 610 "/usr/include/architecture/i386/math.h" 3
extern "C" double significand(double);
# 615 "/usr/include/architecture/i386/math.h" 3
extern "C" double drem(double, double);
# 83 "/usr/include/sys/wait.h" 3
typedef
# 79 "/usr/include/sys/wait.h" 3
enum {
# 80 "/usr/include/sys/wait.h" 3
P_ALL,
# 81 "/usr/include/sys/wait.h" 3
P_PID,
# 82 "/usr/include/sys/wait.h" 3
P_PGID
# 83 "/usr/include/sys/wait.h" 3
} idtype_t;
# 90 "/usr/include/sys/wait.h" 3
typedef __darwin_pid_t pid_t;
# 95 "/usr/include/sys/wait.h" 3
typedef __darwin_id_t id_t;
# 39 "/usr/include/i386/signal.h" 3
typedef int sig_atomic_t;
# 64 "/usr/include/mach/i386/_structs.h" 3
struct i386_thread_state {
# 66 "/usr/include/mach/i386/_structs.h" 3
unsigned eax;
# 67 "/usr/include/mach/i386/_structs.h" 3
unsigned ebx;
# 68 "/usr/include/mach/i386/_structs.h" 3
unsigned ecx;
# 69 "/usr/include/mach/i386/_structs.h" 3
unsigned edx;
# 70 "/usr/include/mach/i386/_structs.h" 3
unsigned edi;
# 71 "/usr/include/mach/i386/_structs.h" 3
unsigned esi;
# 72 "/usr/include/mach/i386/_structs.h" 3
unsigned ebp;
# 73 "/usr/include/mach/i386/_structs.h" 3
unsigned esp;
# 74 "/usr/include/mach/i386/_structs.h" 3
unsigned ss;
# 75 "/usr/include/mach/i386/_structs.h" 3
unsigned eflags;
# 76 "/usr/include/mach/i386/_structs.h" 3
unsigned eip;
# 77 "/usr/include/mach/i386/_structs.h" 3
unsigned cs;
# 78 "/usr/include/mach/i386/_structs.h" 3
unsigned ds;
# 79 "/usr/include/mach/i386/_structs.h" 3
unsigned es;
# 80 "/usr/include/mach/i386/_structs.h" 3
unsigned fs;
# 81 "/usr/include/mach/i386/_structs.h" 3
unsigned gs;
# 82 "/usr/include/mach/i386/_structs.h" 3
};
# 117 "/usr/include/mach/i386/_structs.h" 3
struct fp_control {
# 119 "/usr/include/mach/i386/_structs.h" 3
unsigned short invalid:1;
# 120 "/usr/include/mach/i386/_structs.h" 3
unsigned short denorm:1;
# 121 "/usr/include/mach/i386/_structs.h" 3
unsigned short zdiv:1;
# 122 "/usr/include/mach/i386/_structs.h" 3
unsigned short ovrfl:1;
# 123 "/usr/include/mach/i386/_structs.h" 3
unsigned short undfl:1;
# 124 "/usr/include/mach/i386/_structs.h" 3
unsigned short precis:1;
# 125 "/usr/include/mach/i386/_structs.h" 3
unsigned short:2;
# 126 "/usr/include/mach/i386/_structs.h" 3
unsigned short pc:2;
# 130 "/usr/include/mach/i386/_structs.h" 3
unsigned short rc:2;
# 135 "/usr/include/mach/i386/_structs.h" 3
unsigned short:1;
# 136 "/usr/include/mach/i386/_structs.h" 3
unsigned short:3;
# 137 "/usr/include/mach/i386/_structs.h" 3
};
# 138 "/usr/include/mach/i386/_structs.h" 3
typedef fp_control fp_control_t;
# 167 "/usr/include/mach/i386/_structs.h" 3
struct fp_status {
# 169 "/usr/include/mach/i386/_structs.h" 3
unsigned short invalid:1;
# 170 "/usr/include/mach/i386/_structs.h" 3
unsigned short denorm:1;
# 171 "/usr/include/mach/i386/_structs.h" 3
unsigned short zdiv:1;
# 172 "/usr/include/mach/i386/_structs.h" 3
unsigned short ovrfl:1;
# 173 "/usr/include/mach/i386/_structs.h" 3
unsigned short undfl:1;
# 174 "/usr/include/mach/i386/_structs.h" 3
unsigned short precis:1;
# 175 "/usr/include/mach/i386/_structs.h" 3
unsigned short stkflt:1;
# 176 "/usr/include/mach/i386/_structs.h" 3
unsigned short errsumm:1;
# 177 "/usr/include/mach/i386/_structs.h" 3
unsigned short c0:1;
# 178 "/usr/include/mach/i386/_structs.h" 3
unsigned short c1:1;
# 179 "/usr/include/mach/i386/_structs.h" 3
unsigned short c2:1;
# 180 "/usr/include/mach/i386/_structs.h" 3
unsigned short tos:3;
# 181 "/usr/include/mach/i386/_structs.h" 3
unsigned short c3:1;
# 182 "/usr/include/mach/i386/_structs.h" 3
unsigned short busy:1;
# 183 "/usr/include/mach/i386/_structs.h" 3
};
# 184 "/usr/include/mach/i386/_structs.h" 3
typedef fp_status fp_status_t;
# 198 "/usr/include/mach/i386/_structs.h" 3
struct mmst_reg {
# 200 "/usr/include/mach/i386/_structs.h" 3
char mmst_reg[10];
# 201 "/usr/include/mach/i386/_structs.h" 3
char mmst_rsrv[6];
# 202 "/usr/include/mach/i386/_structs.h" 3
};
# 216 "/usr/include/mach/i386/_structs.h" 3
struct xmm_reg {
# 218 "/usr/include/mach/i386/_structs.h" 3
char xmm_reg[16];
# 219 "/usr/include/mach/i386/_structs.h" 3
};
# 269 "/usr/include/mach/i386/_structs.h" 3
struct i386_float_state {
# 271 "/usr/include/mach/i386/_structs.h" 3
int fpu_reserved[2];
# 272 "/usr/include/mach/i386/_structs.h" 3
fp_control fpu_fcw;
# 273 "/usr/include/mach/i386/_structs.h" 3
fp_status fpu_fsw;
# 274 "/usr/include/mach/i386/_structs.h" 3
__uint8_t fpu_ftw;
# 275 "/usr/include/mach/i386/_structs.h" 3
__uint8_t fpu_rsrv1;
# 276 "/usr/include/mach/i386/_structs.h" 3
__uint16_t fpu_fop;
# 277 "/usr/include/mach/i386/_structs.h" 3
__uint32_t fpu_ip;
# 278 "/usr/include/mach/i386/_structs.h" 3
__uint16_t fpu_cs;
# 279 "/usr/include/mach/i386/_structs.h" 3
__uint16_t fpu_rsrv2;
# 280 "/usr/include/mach/i386/_structs.h" 3
__uint32_t fpu_dp;
# 281 "/usr/include/mach/i386/_structs.h" 3
__uint16_t fpu_ds;
# 282 "/usr/include/mach/i386/_structs.h" 3
__uint16_t fpu_rsrv3;
# 283 "/usr/include/mach/i386/_structs.h" 3
__uint32_t fpu_mxcsr;
# 284 "/usr/include/mach/i386/_structs.h" 3
__uint32_t fpu_mxcsrmask;
# 285 "/usr/include/mach/i386/_structs.h" 3
mmst_reg fpu_stmm0;
# 286 "/usr/include/mach/i386/_structs.h" 3
mmst_reg fpu_stmm1;
# 287 "/usr/include/mach/i386/_structs.h" 3
mmst_reg fpu_stmm2;
# 288 "/usr/include/mach/i386/_structs.h" 3
mmst_reg fpu_stmm3;
# 289 "/usr/include/mach/i386/_structs.h" 3
mmst_reg fpu_stmm4;
# 290 "/usr/include/mach/i386/_structs.h" 3
mmst_reg fpu_stmm5;
# 291 "/usr/include/mach/i386/_structs.h" 3
mmst_reg fpu_stmm6;
# 292 "/usr/include/mach/i386/_structs.h" 3
mmst_reg fpu_stmm7;
# 293 "/usr/include/mach/i386/_structs.h" 3
xmm_reg fpu_xmm0;
# 294 "/usr/include/mach/i386/_structs.h" 3
xmm_reg fpu_xmm1;
# 295 "/usr/include/mach/i386/_structs.h" 3
xmm_reg fpu_xmm2;
# 296 "/usr/include/mach/i386/_structs.h" 3
xmm_reg fpu_xmm3;
# 297 "/usr/include/mach/i386/_structs.h" 3
xmm_reg fpu_xmm4;
# 298 "/usr/include/mach/i386/_structs.h" 3
xmm_reg fpu_xmm5;
# 299 "/usr/include/mach/i386/_structs.h" 3
xmm_reg fpu_xmm6;
# 300 "/usr/include/mach/i386/_structs.h" 3
xmm_reg fpu_xmm7;
# 301 "/usr/include/mach/i386/_structs.h" 3
char fpu_rsrv4[(14 * 16)];
# 302 "/usr/include/mach/i386/_structs.h" 3
int fpu_reserved1;
# 303 "/usr/include/mach/i386/_structs.h" 3
};
# 316 "/usr/include/mach/i386/_structs.h" 3
struct i386_exception_state {
# 318 "/usr/include/mach/i386/_structs.h" 3
unsigned trapno;
# 319 "/usr/include/mach/i386/_structs.h" 3
unsigned err;
# 320 "/usr/include/mach/i386/_structs.h" 3
unsigned faultvaddr;
# 321 "/usr/include/mach/i386/_structs.h" 3
};
# 339 "/usr/include/mach/i386/_structs.h" 3
struct x86_debug_state32 {
# 341 "/usr/include/mach/i386/_structs.h" 3
unsigned dr0;
# 342 "/usr/include/mach/i386/_structs.h" 3
unsigned dr1;
# 343 "/usr/include/mach/i386/_structs.h" 3
unsigned dr2;
# 344 "/usr/include/mach/i386/_structs.h" 3
unsigned dr3;
# 345 "/usr/include/mach/i386/_structs.h" 3
unsigned dr4;
# 346 "/usr/include/mach/i386/_structs.h" 3
unsigned dr5;
# 347 "/usr/include/mach/i386/_structs.h" 3
unsigned dr6;
# 348 "/usr/include/mach/i386/_structs.h" 3
unsigned dr7;
# 349 "/usr/include/mach/i386/_structs.h" 3
};
# 384 "/usr/include/mach/i386/_structs.h" 3
struct x86_thread_state64 {
# 386 "/usr/include/mach/i386/_structs.h" 3
__uint64_t rax;
# 387 "/usr/include/mach/i386/_structs.h" 3
__uint64_t rbx;
# 388 "/usr/include/mach/i386/_structs.h" 3
__uint64_t rcx;
# 389 "/usr/include/mach/i386/_structs.h" 3
__uint64_t rdx;
# 390 "/usr/include/mach/i386/_structs.h" 3
__uint64_t rdi;
# 391 "/usr/include/mach/i386/_structs.h" 3
__uint64_t rsi;
# 392 "/usr/include/mach/i386/_structs.h" 3
__uint64_t rbp;
# 393 "/usr/include/mach/i386/_structs.h" 3
__uint64_t rsp;
# 394 "/usr/include/mach/i386/_structs.h" 3
__uint64_t r8;
# 395 "/usr/include/mach/i386/_structs.h" 3
__uint64_t r9;
# 396 "/usr/include/mach/i386/_structs.h" 3
__uint64_t r10;
# 397 "/usr/include/mach/i386/_structs.h" 3
__uint64_t r11;
# 398 "/usr/include/mach/i386/_structs.h" 3
__uint64_t r12;
# 399 "/usr/include/mach/i386/_structs.h" 3
__uint64_t r13;
# 400 "/usr/include/mach/i386/_structs.h" 3
__uint64_t r14;
# 401 "/usr/include/mach/i386/_structs.h" 3
__uint64_t r15;
# 402 "/usr/include/mach/i386/_structs.h" 3
__uint64_t rip;
# 403 "/usr/include/mach/i386/_structs.h" 3
__uint64_t rflags;
# 404 "/usr/include/mach/i386/_structs.h" 3
__uint64_t cs;
# 405 "/usr/include/mach/i386/_structs.h" 3
__uint64_t fs;
# 406 "/usr/include/mach/i386/_structs.h" 3
__uint64_t gs;
# 407 "/usr/include/mach/i386/_structs.h" 3
};
# 464 "/usr/include/mach/i386/_structs.h" 3
struct x86_float_state64 {
# 466 "/usr/include/mach/i386/_structs.h" 3
int fpu_reserved[2];
# 467 "/usr/include/mach/i386/_structs.h" 3
fp_control fpu_fcw;
# 468 "/usr/include/mach/i386/_structs.h" 3
fp_status fpu_fsw;
# 469 "/usr/include/mach/i386/_structs.h" 3
__uint8_t fpu_ftw;
# 470 "/usr/include/mach/i386/_structs.h" 3
__uint8_t fpu_rsrv1;
# 471 "/usr/include/mach/i386/_structs.h" 3
__uint16_t fpu_fop;
# 474 "/usr/include/mach/i386/_structs.h" 3
__uint32_t fpu_ip;
# 475 "/usr/include/mach/i386/_structs.h" 3
__uint16_t fpu_cs;
# 477 "/usr/include/mach/i386/_structs.h" 3
__uint16_t fpu_rsrv2;
# 480 "/usr/include/mach/i386/_structs.h" 3
__uint32_t fpu_dp;
# 481 "/usr/include/mach/i386/_structs.h" 3
__uint16_t fpu_ds;
# 483 "/usr/include/mach/i386/_structs.h" 3
__uint16_t fpu_rsrv3;
# 484 "/usr/include/mach/i386/_structs.h" 3
__uint32_t fpu_mxcsr;
# 485 "/usr/include/mach/i386/_structs.h" 3
__uint32_t fpu_mxcsrmask;
# 486 "/usr/include/mach/i386/_structs.h" 3
mmst_reg fpu_stmm0;
# 487 "/usr/include/mach/i386/_structs.h" 3
mmst_reg fpu_stmm1;
# 488 "/usr/include/mach/i386/_structs.h" 3
mmst_reg fpu_stmm2;
# 489 "/usr/include/mach/i386/_structs.h" 3
mmst_reg fpu_stmm3;
# 490 "/usr/include/mach/i386/_structs.h" 3
mmst_reg fpu_stmm4;
# 491 "/usr/include/mach/i386/_structs.h" 3
mmst_reg fpu_stmm5;
# 492 "/usr/include/mach/i386/_structs.h" 3
mmst_reg fpu_stmm6;
# 493 "/usr/include/mach/i386/_structs.h" 3
mmst_reg fpu_stmm7;
# 494 "/usr/include/mach/i386/_structs.h" 3
xmm_reg fpu_xmm0;
# 495 "/usr/include/mach/i386/_structs.h" 3
xmm_reg fpu_xmm1;
# 496 "/usr/include/mach/i386/_structs.h" 3
xmm_reg fpu_xmm2;
# 497 "/usr/include/mach/i386/_structs.h" 3
xmm_reg fpu_xmm3;
# 498 "/usr/include/mach/i386/_structs.h" 3
xmm_reg fpu_xmm4;
# 499 "/usr/include/mach/i386/_structs.h" 3
xmm_reg fpu_xmm5;
# 500 "/usr/include/mach/i386/_structs.h" 3
xmm_reg fpu_xmm6;
# 501 "/usr/include/mach/i386/_structs.h" 3
xmm_reg fpu_xmm7;
# 502 "/usr/include/mach/i386/_structs.h" 3
xmm_reg fpu_xmm8;
# 503 "/usr/include/mach/i386/_structs.h" 3
xmm_reg fpu_xmm9;
# 504 "/usr/include/mach/i386/_structs.h" 3
xmm_reg fpu_xmm10;
# 505 "/usr/include/mach/i386/_structs.h" 3
xmm_reg fpu_xmm11;
# 506 "/usr/include/mach/i386/_structs.h" 3
xmm_reg fpu_xmm12;
# 507 "/usr/include/mach/i386/_structs.h" 3
xmm_reg fpu_xmm13;
# 508 "/usr/include/mach/i386/_structs.h" 3
xmm_reg fpu_xmm14;
# 509 "/usr/include/mach/i386/_structs.h" 3
xmm_reg fpu_xmm15;
# 510 "/usr/include/mach/i386/_structs.h" 3
char fpu_rsrv4[(6 * 16)];
# 511 "/usr/include/mach/i386/_structs.h" 3
int fpu_reserved1;
# 512 "/usr/include/mach/i386/_structs.h" 3
};
# 525 "/usr/include/mach/i386/_structs.h" 3
struct x86_exception_state64 {
# 527 "/usr/include/mach/i386/_structs.h" 3
unsigned trapno;
# 528 "/usr/include/mach/i386/_structs.h" 3
unsigned err;
# 529 "/usr/include/mach/i386/_structs.h" 3
__uint64_t faultvaddr;
# 530 "/usr/include/mach/i386/_structs.h" 3
};
# 548 "/usr/include/mach/i386/_structs.h" 3
struct x86_debug_state64 {
# 550 "/usr/include/mach/i386/_structs.h" 3
__uint64_t dr0;
# 551 "/usr/include/mach/i386/_structs.h" 3
__uint64_t dr1;
# 552 "/usr/include/mach/i386/_structs.h" 3
__uint64_t dr2;
# 553 "/usr/include/mach/i386/_structs.h" 3
__uint64_t dr3;
# 554 "/usr/include/mach/i386/_structs.h" 3
__uint64_t dr4;
# 555 "/usr/include/mach/i386/_structs.h" 3
__uint64_t dr5;
# 556 "/usr/include/mach/i386/_structs.h" 3
__uint64_t dr6;
# 557 "/usr/include/mach/i386/_structs.h" 3
__uint64_t dr7;
# 558 "/usr/include/mach/i386/_structs.h" 3
};
# 56 "/usr/include/i386/_structs.h" 3
struct mcontext32 {
# 58 "/usr/include/i386/_structs.h" 3
i386_exception_state es;
# 59 "/usr/include/i386/_structs.h" 3
i386_thread_state ss;
# 60 "/usr/include/i386/_structs.h" 3
i386_float_state fs;
# 61 "/usr/include/i386/_structs.h" 3
};
# 76 "/usr/include/i386/_structs.h" 3
struct mcontext64 {
# 78 "/usr/include/i386/_structs.h" 3
x86_exception_state64 es;
# 79 "/usr/include/i386/_structs.h" 3
x86_thread_state64 ss;
# 80 "/usr/include/i386/_structs.h" 3
x86_float_state64 fs;
# 81 "/usr/include/i386/_structs.h" 3
};
# 94 "/usr/include/i386/_structs.h" 3
typedef mcontext32 *mcontext_t;
# 75 "/usr/include/sys/_structs.h" 3
struct sigaltstack {
# 77 "/usr/include/sys/_structs.h" 3
void *ss_sp;
# 78 "/usr/include/sys/_structs.h" 3
__darwin_size_t ss_size;
# 79 "/usr/include/sys/_structs.h" 3
int ss_flags;
# 80 "/usr/include/sys/_structs.h" 3
};
# 128 "/usr/include/sys/_structs.h" 3
struct ucontext {
# 130 "/usr/include/sys/_structs.h" 3
int uc_onstack;
# 131 "/usr/include/sys/_structs.h" 3
__darwin_sigset_t uc_sigmask;
# 132 "/usr/include/sys/_structs.h" 3
sigaltstack uc_stack;
# 133 "/usr/include/sys/_structs.h" 3
ucontext *uc_link;
# 134 "/usr/include/sys/_structs.h" 3
__darwin_size_t uc_mcsize;
# 135 "/usr/include/sys/_structs.h" 3
mcontext32 *uc_mcontext;
# 139 "/usr/include/sys/_structs.h" 3
};
# 218 "/usr/include/sys/_structs.h" 3
typedef sigaltstack stack_t;
# 227 "/usr/include/sys/_structs.h" 3
typedef ucontext ucontext_t;
# 163 "/usr/include/sys/signal.h" 3
typedef __darwin_pthread_attr_t pthread_attr_t;
# 168 "/usr/include/sys/signal.h" 3
typedef __darwin_sigset_t sigset_t;
# 178 "/usr/include/sys/signal.h" 3
typedef __darwin_uid_t uid_t;
# 181 "/usr/include/sys/signal.h" 3
union sigval {
# 183 "/usr/include/sys/signal.h" 3
int sival_int;
# 184 "/usr/include/sys/signal.h" 3
void *sival_ptr;
# 185 "/usr/include/sys/signal.h" 3
};
# 191 "/usr/include/sys/signal.h" 3
struct sigevent {
# 192 "/usr/include/sys/signal.h" 3
int sigev_notify;
# 193 "/usr/include/sys/signal.h" 3
int sigev_signo;
# 194 "/usr/include/sys/signal.h" 3
sigval sigev_value;
# 195 "/usr/include/sys/signal.h" 3
void (*sigev_notify_function)(sigval);
# 196 "/usr/include/sys/signal.h" 3
pthread_attr_t *sigev_notify_attributes;
# 197 "/usr/include/sys/signal.h" 3
};
# 211 "/usr/include/sys/signal.h" 3
typedef
# 200 "/usr/include/sys/signal.h" 3
struct __siginfo {
# 201 "/usr/include/sys/signal.h" 3
int si_signo;
# 202 "/usr/include/sys/signal.h" 3
int si_errno;
# 203 "/usr/include/sys/signal.h" 3
int si_code;
# 204 "/usr/include/sys/signal.h" 3
pid_t si_pid;
# 205 "/usr/include/sys/signal.h" 3
uid_t si_uid;
# 206 "/usr/include/sys/signal.h" 3
int si_status;
# 207 "/usr/include/sys/signal.h" 3
void *si_addr;
# 208 "/usr/include/sys/signal.h" 3
sigval si_value;
# 209 "/usr/include/sys/signal.h" 3
long si_band;
# 210 "/usr/include/sys/signal.h" 3
unsigned long __pad[7];
# 211 "/usr/include/sys/signal.h" 3
} siginfo_t;
# 292 "/usr/include/sys/signal.h" 3
union __sigaction_u {
# 293 "/usr/include/sys/signal.h" 3
void (*__sa_handler)(int);
# 294 "/usr/include/sys/signal.h" 3
void (*__sa_sigaction)(int, __siginfo *, void *);
# 296 "/usr/include/sys/signal.h" 3
};
# 299 "/usr/include/sys/signal.h" 3
struct __sigaction {
# 300 "/usr/include/sys/signal.h" 3
::__sigaction_u __sigaction_u;
# 301 "/usr/include/sys/signal.h" 3
void (*sa_tramp)(void *, int, int, siginfo_t *, void *);
# 302 "/usr/include/sys/signal.h" 3
sigset_t sa_mask;
# 303 "/usr/include/sys/signal.h" 3
int sa_flags;
# 304 "/usr/include/sys/signal.h" 3
};
# 309 "/usr/include/sys/signal.h" 3
struct sigaction {
# 310 "/usr/include/sys/signal.h" 3
::__sigaction_u __sigaction_u;
# 311 "/usr/include/sys/signal.h" 3
sigset_t sa_mask;
# 312 "/usr/include/sys/signal.h" 3
int sa_flags;
# 313 "/usr/include/sys/signal.h" 3
};
# 354 "/usr/include/sys/signal.h" 3
typedef void (*sig_t)(int);
# 371 "/usr/include/sys/signal.h" 3
struct sigvec {
# 372 "/usr/include/sys/signal.h" 3
void (*sv_handler)(int);
# 373 "/usr/include/sys/signal.h" 3
int sv_mask;
# 374 "/usr/include/sys/signal.h" 3
int sv_flags;
# 375 "/usr/include/sys/signal.h" 3
};
# 390 "/usr/include/sys/signal.h" 3
struct sigstack {
# 391 "/usr/include/sys/signal.h" 3
char *ss_sp;
# 392 "/usr/include/sys/signal.h" 3
int ss_onstack;
# 393 "/usr/include/sys/signal.h" 3
};
# 413 "/usr/include/sys/signal.h" 3
extern "C" void (*signal(int, void (*)(int)))(int);
# 100 "/usr/include/sys/_structs.h" 3
struct timeval {
# 102 "/usr/include/sys/_structs.h" 3
__darwin_time_t tv_sec;
# 103 "/usr/include/sys/_structs.h" 3
__darwin_suseconds_t tv_usec;
# 104 "/usr/include/sys/_structs.h" 3
};
# 88 "/usr/include/sys/resource.h" 3
typedef __uint64_t rlim_t;
# 142 "/usr/include/sys/resource.h" 3
struct rusage {
# 143 "/usr/include/sys/resource.h" 3
timeval ru_utime;
# 144 "/usr/include/sys/resource.h" 3
timeval ru_stime;
# 153 "/usr/include/sys/resource.h" 3
long ru_maxrss;
# 155 "/usr/include/sys/resource.h" 3
long ru_ixrss;
# 156 "/usr/include/sys/resource.h" 3
long ru_idrss;
# 157 "/usr/include/sys/resource.h" 3
long ru_isrss;
# 158 "/usr/include/sys/resource.h" 3
long ru_minflt;
# 159 "/usr/include/sys/resource.h" 3
long ru_majflt;
# 160 "/usr/include/sys/resource.h" 3
long ru_nswap;
# 161 "/usr/include/sys/resource.h" 3
long ru_inblock;
# 162 "/usr/include/sys/resource.h" 3
long ru_oublock;
# 163 "/usr/include/sys/resource.h" 3
long ru_msgsnd;
# 164 "/usr/include/sys/resource.h" 3
long ru_msgrcv;
# 165 "/usr/include/sys/resource.h" 3
long ru_nsignals;
# 166 "/usr/include/sys/resource.h" 3
long ru_nvcsw;
# 167 "/usr/include/sys/resource.h" 3
long ru_nivcsw;
# 170 "/usr/include/sys/resource.h" 3
};
# 213 "/usr/include/sys/resource.h" 3
struct rlimit {
# 214 "/usr/include/sys/resource.h" 3
rlim_t rlim_cur;
# 215 "/usr/include/sys/resource.h" 3
rlim_t rlim_max;
# 216 "/usr/include/sys/resource.h" 3
};
# 236 "/usr/include/sys/resource.h" 3
extern "C" int getpriority(int, id_t);
# 238 "/usr/include/sys/resource.h" 3
extern "C" int getiopolicy_np(int, int);
# 240 "/usr/include/sys/resource.h" 3
extern "C" int getrlimit(int, rlimit *) __asm__("_getrlimit");
# 241 "/usr/include/sys/resource.h" 3
extern "C" int getrusage(int, rusage *);
# 242 "/usr/include/sys/resource.h" 3
extern "C" int setpriority(int, id_t, int);
# 244 "/usr/include/sys/resource.h" 3
extern "C" int setiopolicy_np(int, int, int);
# 246 "/usr/include/sys/resource.h" 3
extern "C" int setrlimit(int, const rlimit *) __asm__("_setrlimit");
# 46 "/usr/include/libkern/i386/_OSByteOrder.h" 3
static inline __uint16_t _OSSwapInt16(__uint16_t
# 47 "/usr/include/libkern/i386/_OSByteOrder.h" 3
_data)
# 49 "/usr/include/libkern/i386/_OSByteOrder.h" 3
{
# 50 "/usr/include/libkern/i386/_OSByteOrder.h" 3
return (_data << 8) | (_data >> 8);
# 51 "/usr/include/libkern/i386/_OSByteOrder.h" 3
}
# 55 "/usr/include/libkern/i386/_OSByteOrder.h" 3
static inline __uint32_t _OSSwapInt32(__uint32_t
# 56 "/usr/include/libkern/i386/_OSByteOrder.h" 3
_data)
# 58 "/usr/include/libkern/i386/_OSByteOrder.h" 3
{
# 59 "/usr/include/libkern/i386/_OSByteOrder.h" 3
__asm__("bswap   %0" : "+r" (_data));
# 60 "/usr/include/libkern/i386/_OSByteOrder.h" 3
return _data;
# 61 "/usr/include/libkern/i386/_OSByteOrder.h" 3
}
# 66 "/usr/include/libkern/i386/_OSByteOrder.h" 3
static inline __uint64_t _OSSwapInt64(__uint64_t
# 67 "/usr/include/libkern/i386/_OSByteOrder.h" 3
_data)
# 69 "/usr/include/libkern/i386/_OSByteOrder.h" 3
{
# 70 "/usr/include/libkern/i386/_OSByteOrder.h" 3
__asm__("bswap   %%eax\n\tbswap   %%edx\n\txchgl   %%eax, %%edx" : "+A" (_data));
# 74 "/usr/include/libkern/i386/_OSByteOrder.h" 3
return _data;
# 75 "/usr/include/libkern/i386/_OSByteOrder.h" 3
}
# 201 "/usr/include/sys/wait.h" 3
union wait {
# 202 "/usr/include/sys/wait.h" 3
int w_status;
# 206 "/usr/include/sys/wait.h" 3
struct {
# 208 "/usr/include/sys/wait.h" 3
unsigned w_Termsig:7;
# 209 "/usr/include/sys/wait.h" 3
unsigned w_Coredump:1;
# 210 "/usr/include/sys/wait.h" 3
unsigned w_Retcode:8;
# 211 "/usr/include/sys/wait.h" 3
unsigned w_Filler:16;
# 219 "/usr/include/sys/wait.h" 3
} w_T;
# 225 "/usr/include/sys/wait.h" 3
struct {
# 227 "/usr/include/sys/wait.h" 3
unsigned w_Stopval:8;
# 228 "/usr/include/sys/wait.h" 3
unsigned w_Stopsig:8;
# 229 "/usr/include/sys/wait.h" 3
unsigned w_Filler:16;
# 236 "/usr/include/sys/wait.h" 3
} w_S;
# 237 "/usr/include/sys/wait.h" 3
};
# 255 "/usr/include/sys/wait.h" 3
extern "C" pid_t wait(int *) __asm__("_wait");
# 256 "/usr/include/sys/wait.h" 3
extern "C" pid_t waitpid(pid_t, int *, int) __asm__("_waitpid");
# 258 "/usr/include/sys/wait.h" 3
extern "C" int waitid(idtype_t, id_t, siginfo_t *, int) __asm__("_waitid");
# 261 "/usr/include/sys/wait.h" 3
extern "C" pid_t wait3(int *, int, rusage *);
# 262 "/usr/include/sys/wait.h" 3
extern "C" pid_t wait4(pid_t, int *, int, rusage *);
# 36 "/usr/include/alloca.h" 3
extern "C" void *alloca(size_t);
# 81 "/usr/include/stdlib.h" 3
typedef __darwin_ct_rune_t ct_rune_t;
# 86 "/usr/include/stdlib.h" 3
typedef __darwin_rune_t rune_t;
# 100 "/usr/include/stdlib.h" 3
typedef
# 97 "/usr/include/stdlib.h" 3
struct div_t {
# 98 "/usr/include/stdlib.h" 3
int quot;
# 99 "/usr/include/stdlib.h" 3
int rem;
# 100 "/usr/include/stdlib.h" 3
} div_t;
# 105 "/usr/include/stdlib.h" 3
typedef
# 102 "/usr/include/stdlib.h" 3
struct ldiv_t {
# 103 "/usr/include/stdlib.h" 3
long quot;
# 104 "/usr/include/stdlib.h" 3
long rem;
# 105 "/usr/include/stdlib.h" 3
} ldiv_t;
# 111 "/usr/include/stdlib.h" 3
typedef
# 108 "/usr/include/stdlib.h" 3
struct lldiv_t {
# 109 "/usr/include/stdlib.h" 3
long long quot;
# 110 "/usr/include/stdlib.h" 3
long long rem;
# 111 "/usr/include/stdlib.h" 3
} lldiv_t;
# 134 "/usr/include/stdlib.h" 3
extern int __mb_cur_max;
# 145 "/usr/include/stdlib.h" 3
extern "C" void abort() __attribute__((__noreturn__));
# 146 "/usr/include/stdlib.h" 3
extern "C" __attribute__((__weak__)) int abs(int) __attribute__((__const__));
# 147 "/usr/include/stdlib.h" 3
extern "C" int atexit(void (*)(void));
# 148 "/usr/include/stdlib.h" 3
extern "C" double atof(const char *);
# 149 "/usr/include/stdlib.h" 3
extern "C" int atoi(const char *);
# 150 "/usr/include/stdlib.h" 3
extern "C" long atol(const char *);
# 153 "/usr/include/stdlib.h" 3
extern "C" long long atoll(const char *);
# 155 "/usr/include/stdlib.h" 3
extern "C" void *bsearch(const void *, const void *, size_t, size_t, int (*)(const void *, const void *));
# 157 "/usr/include/stdlib.h" 3
extern "C" void *calloc(size_t, size_t);
# 158 "/usr/include/stdlib.h" 3
extern "C" div_t div(int, int) __attribute__((__const__));
# 159 "/usr/include/stdlib.h" 3
extern "C" void exit(int) __attribute__((__noreturn__));
# 160 "/usr/include/stdlib.h" 3
extern "C" void free(void *);
# 161 "/usr/include/stdlib.h" 3
extern "C" char *getenv(const char *);
# 162 "/usr/include/stdlib.h" 3
extern "C" __attribute__((__weak__)) long labs(long) __attribute__((__const__));
# 163 "/usr/include/stdlib.h" 3
extern "C" ldiv_t ldiv(long, long) __attribute__((__const__));
# 166 "/usr/include/stdlib.h" 3
extern "C" __attribute__((__weak__)) long long llabs(long long);
# 167 "/usr/include/stdlib.h" 3
extern "C" lldiv_t lldiv(long long, long long);
# 169 "/usr/include/stdlib.h" 3
extern "C" void *malloc(size_t);
# 170 "/usr/include/stdlib.h" 3
extern "C" int mblen(const char *, size_t);
# 171 "/usr/include/stdlib.h" 3
extern "C" size_t mbstowcs(wchar_t *, const char *, size_t);
# 172 "/usr/include/stdlib.h" 3
extern "C" int mbtowc(wchar_t *, const char *, size_t);
# 173 "/usr/include/stdlib.h" 3
extern "C" void qsort(void *, size_t, size_t, int (*)(const void *, const void *));
# 175 "/usr/include/stdlib.h" 3
extern "C" int rand();
# 176 "/usr/include/stdlib.h" 3
extern "C" void *realloc(void *, size_t);
# 177 "/usr/include/stdlib.h" 3
extern "C" void srand(unsigned);
# 178 "/usr/include/stdlib.h" 3
extern "C" double strtod(const char *, char **) __asm__("_strtod");
# 179 "/usr/include/stdlib.h" 3
extern "C" float strtof(const char *, char **) __asm__("_strtof");
# 180 "/usr/include/stdlib.h" 3
extern "C" long strtol(const char *, char **, int);
# 182 "/usr/include/stdlib.h" 3
extern "C" long double strtold(const char *, char **);
# 185 "/usr/include/stdlib.h" 3
extern "C" long long strtoll(const char *, char **, int);
# 188 "/usr/include/stdlib.h" 3
extern "C" unsigned long strtoul(const char *, char **, int);
# 191 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtoull(const char *, char **, int);
# 193 "/usr/include/stdlib.h" 3
extern "C" int system(const char *) __asm__("_system");
# 194 "/usr/include/stdlib.h" 3
extern "C" size_t wcstombs(char *, const wchar_t *, size_t);
# 195 "/usr/include/stdlib.h" 3
extern "C" int wctomb(char *, wchar_t);
# 198 "/usr/include/stdlib.h" 3
extern "C" void _Exit(int) __attribute__((__noreturn__));
# 199 "/usr/include/stdlib.h" 3
extern "C" long a64l(const char *);
# 200 "/usr/include/stdlib.h" 3
extern "C" double drand48();
# 201 "/usr/include/stdlib.h" 3
extern "C" char *ecvt(double, int, int *, int *);
# 202 "/usr/include/stdlib.h" 3
extern "C" double erand48(unsigned short [3]);
# 203 "/usr/include/stdlib.h" 3
extern "C" char *fcvt(double, int, int *, int *);
# 204 "/usr/include/stdlib.h" 3
extern "C" char *gcvt(double, int, char *);
# 205 "/usr/include/stdlib.h" 3
extern "C" int getsubopt(char **, char *const *, char **);
# 206 "/usr/include/stdlib.h" 3
extern "C" int grantpt(int);
# 210 "/usr/include/stdlib.h" 3
extern "C" char *initstate(unsigned long, char *, long);
# 212 "/usr/include/stdlib.h" 3
extern "C" long jrand48(unsigned short [3]);
# 213 "/usr/include/stdlib.h" 3
extern "C" char *l64a(long);
# 214 "/usr/include/stdlib.h" 3
extern "C" void lcong48(unsigned short [7]);
# 215 "/usr/include/stdlib.h" 3
extern "C" long lrand48();
# 216 "/usr/include/stdlib.h" 3
extern "C" char *mktemp(char *);
# 217 "/usr/include/stdlib.h" 3
extern "C" int mkstemp(char *);
# 218 "/usr/include/stdlib.h" 3
extern "C" long mrand48();
# 219 "/usr/include/stdlib.h" 3
extern "C" long nrand48(unsigned short [3]);
# 220 "/usr/include/stdlib.h" 3
extern "C" int posix_openpt(int);
# 221 "/usr/include/stdlib.h" 3
extern "C" char *ptsname(int);
# 222 "/usr/include/stdlib.h" 3
extern "C" int putenv(char *) __asm__("_putenv");
# 223 "/usr/include/stdlib.h" 3
extern "C" long random();
# 224 "/usr/include/stdlib.h" 3
extern "C" int rand_r(unsigned *);
# 228 "/usr/include/stdlib.h" 3
extern "C" char *realpath(const char *, char *) __asm__("_realpath");
# 231 "/usr/include/stdlib.h" 3
extern "C" unsigned short *seed48(unsigned short [3]);
# 232 "/usr/include/stdlib.h" 3
extern "C" int setenv(const char *, const char *, int) __asm__("_setenv");
# 236 "/usr/include/stdlib.h" 3
extern "C" int setkey(const char *);
# 238 "/usr/include/stdlib.h" 3
extern "C" char *setstate(const char *);
# 239 "/usr/include/stdlib.h" 3
extern "C" void srand48(long);
# 243 "/usr/include/stdlib.h" 3
extern "C" void srandom(unsigned long);
# 245 "/usr/include/stdlib.h" 3
extern "C" int unlockpt(int);
# 249 "/usr/include/stdlib.h" 3
extern "C" void unsetenv(const char *);
# 78 "/usr/include/i386/types.h" 3
extern "C" { typedef signed char int8_t; }
# 80 "/usr/include/i386/types.h" 3
extern "C" { typedef unsigned char u_int8_t; }
# 83 "/usr/include/i386/types.h" 3
extern "C" { typedef short int16_t; }
# 85 "/usr/include/i386/types.h" 3
extern "C" { typedef unsigned short u_int16_t; }
# 88 "/usr/include/i386/types.h" 3
extern "C" { typedef int int32_t; }
# 90 "/usr/include/i386/types.h" 3
extern "C" { typedef unsigned u_int32_t; }
# 93 "/usr/include/i386/types.h" 3
extern "C" { typedef long long int64_t; }
# 95 "/usr/include/i386/types.h" 3
extern "C" { typedef unsigned long long u_int64_t; }
# 100 "/usr/include/i386/types.h" 3
extern "C" { typedef int32_t register_t; }
# 105 "/usr/include/i386/types.h" 3
extern "C" { typedef __darwin_intptr_t intptr_t; }
# 109 "/usr/include/i386/types.h" 3
extern "C" { typedef unsigned long uintptr_t; }
# 114 "/usr/include/i386/types.h" 3
extern "C" { typedef u_int64_t user_addr_t; }
# 115 "/usr/include/i386/types.h" 3
extern "C" { typedef u_int64_t user_size_t; }
# 116 "/usr/include/i386/types.h" 3
extern "C" { typedef int64_t user_ssize_t; }
# 117 "/usr/include/i386/types.h" 3
extern "C" { typedef int64_t user_long_t; }
# 118 "/usr/include/i386/types.h" 3
extern "C" { typedef u_int64_t user_ulong_t; }
# 119 "/usr/include/i386/types.h" 3
extern "C" { typedef int64_t user_time_t; }
# 125 "/usr/include/i386/types.h" 3
extern "C" { typedef u_int64_t syscall_arg_t; }
# 257 "/usr/include/stdlib.h" 3
extern "C" { typedef __darwin_dev_t dev_t; }
# 262 "/usr/include/stdlib.h" 3
extern "C" { typedef __darwin_mode_t mode_t; }
# 267 "/usr/include/stdlib.h" 3
extern "C" u_int32_t arc4random();
# 268 "/usr/include/stdlib.h" 3
extern "C" void arc4random_addrandom(unsigned char *, int);
# 269 "/usr/include/stdlib.h" 3
extern "C" void arc4random_stir();
# 272 "/usr/include/stdlib.h" 3
extern "C" char *cgetcap(char *, const char *, int);
# 273 "/usr/include/stdlib.h" 3
extern "C" int cgetclose();
# 274 "/usr/include/stdlib.h" 3
extern "C" int cgetent(char **, char **, const char *);
# 275 "/usr/include/stdlib.h" 3
extern "C" int cgetfirst(char **, char **);
# 276 "/usr/include/stdlib.h" 3
extern "C" int cgetmatch(const char *, const char *);
# 277 "/usr/include/stdlib.h" 3
extern "C" int cgetnext(char **, char **);
# 278 "/usr/include/stdlib.h" 3
extern "C" int cgetnum(char *, const char *, long *);
# 279 "/usr/include/stdlib.h" 3
extern "C" int cgetset(const char *);
# 280 "/usr/include/stdlib.h" 3
extern "C" int cgetstr(char *, const char *, char **);
# 281 "/usr/include/stdlib.h" 3
extern "C" int cgetustr(char *, const char *, char **);
# 283 "/usr/include/stdlib.h" 3
extern "C" int daemon(int, int) __asm__("_daemon");
# 284 "/usr/include/stdlib.h" 3
extern "C" char *devname(dev_t, mode_t);
# 285 "/usr/include/stdlib.h" 3
extern "C" char *devname_r(dev_t, mode_t, char *, int);
# 286 "/usr/include/stdlib.h" 3
extern "C" char *getbsize(int *, long *);
# 287 "/usr/include/stdlib.h" 3
extern "C" int getloadavg(double [], int);
# 289 "/usr/include/stdlib.h" 3
extern "C" const char *getprogname();
# 291 "/usr/include/stdlib.h" 3
extern "C" int heapsort(void *, size_t, size_t, int (*)(const void *, const void *));
# 293 "/usr/include/stdlib.h" 3
extern "C" int mergesort(void *, size_t, size_t, int (*)(const void *, const void *));
# 295 "/usr/include/stdlib.h" 3
extern "C" void qsort_r(void *, size_t, size_t, void *, int (*)(void *, const void *, const void *));
# 297 "/usr/include/stdlib.h" 3
extern "C" int radixsort(const unsigned char **, int, const unsigned char *, unsigned);
# 299 "/usr/include/stdlib.h" 3
extern "C" void setprogname(const char *);
# 300 "/usr/include/stdlib.h" 3
extern "C" int sradixsort(const unsigned char **, int, const unsigned char *, unsigned);
# 302 "/usr/include/stdlib.h" 3
extern "C" void sranddev();
# 303 "/usr/include/stdlib.h" 3
extern "C" void srandomdev();
# 304 "/usr/include/stdlib.h" 3
extern "C" void *reallocf(void *, size_t);
# 307 "/usr/include/stdlib.h" 3
extern "C" long long strtoq(const char *, char **, int);
# 309 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtouq(const char *, char **, int);
# 311 "/usr/include/stdlib.h" 3
extern "C" { extern char *suboptarg; }
# 312 "/usr/include/stdlib.h" 3
extern "C" void *valloc(size_t);
# 64 "/usr/include/c++/4.0.0/i686-apple-darwin9/bits/c++config.h" 3
namespace __gnu_debug_def { }
# 66 "/usr/include/c++/4.0.0/i686-apple-darwin9/bits/c++config.h" 3
namespace __gnu_debug {
# 68 "/usr/include/c++/4.0.0/i686-apple-darwin9/bits/c++config.h" 3
using namespace __gnu_debug_def;
# 69 "/usr/include/c++/4.0.0/i686-apple-darwin9/bits/c++config.h" 3
}
# 75 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
namespace __gnu_internal {
# 77 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
typedef char __one;
# 78 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
typedef char __two[2];
# 80 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
template<class _Tp> extern __one __test_type(int _Tp::*);
# 82 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
template<class _Tp> extern __two &__test_type(...);
# 84 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
}
# 87 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
namespace __gnu_cxx {
# 89 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
template<class _Iterator, class _Container> class __normal_iterator;
# 91 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
}
# 93 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
struct __true_type { };
# 94 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
struct __false_type { };
# 96 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
namespace std {
# 98 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
template<bool >
# 99 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
struct __truth_type {
# 100 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
typedef __false_type __type; };
# 103 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
template<> struct __truth_type< true> {
# 104 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
typedef __true_type __type; };
# 108 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
template<class _Sp, class _Tp>
# 109 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
struct __traitor {
# 111 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = (((bool)_Sp::__value) || ((bool)_Tp::__value))};
# 112 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
typedef typename __truth_type< (((bool)_Sp::__value) || ((bool)_Tp::__value))> ::__type __type;
# 113 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
};
# 116 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
template<class , class >
# 117 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
struct __are_same {
# 119 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
enum __cuda___value { __value};
# 120 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 121 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
};
# 123 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
template<class _Tp>
# 124 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
struct __are_same< _Tp, _Tp> {
# 126 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 127 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 128 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
};
# 131 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
template<class , bool >
# 132 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
struct __enable_if {
# 134 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
};
# 136 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
template<class _Tp>
# 137 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
struct __enable_if< _Tp, true> {
# 139 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
typedef _Tp __type;
# 140 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
};
# 143 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
template<class _Tp>
# 144 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
struct __is_void {
# 146 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
enum __cuda___value { __value};
# 147 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 148 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
};
# 151 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
template<> struct __is_void< void> {
# 153 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 154 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 155 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
};
# 160 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
template<class _Tp>
# 161 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
struct __is_integer {
# 163 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
enum __cuda___value { __value};
# 164 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 165 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
};
# 171 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
template<> struct __is_integer< bool> {
# 173 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 174 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 175 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
};
# 178 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
template<> struct __is_integer< char> {
# 180 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 181 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 182 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
};
# 185 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
template<> struct __is_integer< signed char> {
# 187 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 188 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 189 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
};
# 192 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned char> {
# 194 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 195 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 196 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
};
# 200 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
template<> struct __is_integer< wchar_t> {
# 202 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 203 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 204 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
};
# 208 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
template<> struct __is_integer< short> {
# 210 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 211 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 212 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
};
# 215 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned short> {
# 217 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 218 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 219 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
};
# 222 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
template<> struct __is_integer< int> {
# 224 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 225 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 226 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
};
# 229 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned> {
# 231 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 232 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 233 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
};
# 236 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
template<> struct __is_integer< long> {
# 238 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 239 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 240 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
};
# 243 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned long> {
# 245 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 246 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 247 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
};
# 250 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
template<> struct __is_integer< long long> {
# 252 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 253 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 254 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
};
# 257 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned long long> {
# 259 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 260 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 261 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
};
# 266 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
template<class _Tp>
# 267 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
struct __is_floating {
# 269 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
enum __cuda___value { __value};
# 270 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 271 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
};
# 275 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
template<> struct __is_floating< float> {
# 277 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 278 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 279 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
};
# 282 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
template<> struct __is_floating< double> {
# 284 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 285 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 286 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
};
# 289 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
template<> struct __is_floating< long double> {
# 291 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 292 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 293 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
};
# 298 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
template<class _Tp>
# 299 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
struct __is_pointer {
# 301 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
enum __cuda___value { __value};
# 302 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 303 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
};
# 305 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
template<class _Tp>
# 306 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
struct __is_pointer< _Tp *> {
# 308 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 309 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 310 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
};
# 315 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
template<class _Tp>
# 316 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
struct __is_normal_iterator {
# 318 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
enum __cuda___value { __value};
# 319 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 320 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
};
# 322 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
template<class _Iterator, class _Container>
# 323 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
struct __is_normal_iterator< __gnu_cxx::__normal_iterator< _Iterator, _Container> > {
# 326 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 327 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 328 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
};
# 333 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
template<class _Tp>
# 334 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
struct __is_arithmetic : public __traitor< __is_integer< _Tp> , __is_floating< _Tp> > {
# 336 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
};
# 341 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
template<class _Tp>
# 342 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
struct __is_fundamental : public __traitor< __is_void< _Tp> , __is_arithmetic< _Tp> > {
# 344 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
};
# 349 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
template<class _Tp>
# 350 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
struct __is_scalar : public __traitor< __is_arithmetic< _Tp> , __is_pointer< _Tp> > {
# 352 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
};
# 357 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
template<class _Tp>
# 358 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
struct __is_pod {
# 361 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
enum __cuda___value {
# 362 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
__value = (sizeof((__gnu_internal::__test_type< _Tp> (0))) != sizeof(__gnu_internal::__one))
# 364 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
};
# 365 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
};
# 367 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
}
# 81 "/usr/include/c++/4.0.0/cmath" 3
namespace std {
# 85 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> extern inline _Tp __cmath_power(_Tp, unsigned);
# 88 "/usr/include/c++/4.0.0/cmath" 3
inline double abs(double __x)
# 89 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_fabs(__x); }
# 92 "/usr/include/c++/4.0.0/cmath" 3
inline float abs(float __x)
# 93 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_fabsf(__x); }
# 96 "/usr/include/c++/4.0.0/cmath" 3
inline long double abs(long double __x)
# 97 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_fabsl(__x); }
# 99 "/usr/include/c++/4.0.0/cmath" 3
using ::acos;
# 102 "/usr/include/c++/4.0.0/cmath" 3
inline float acos(float __x)
# 103 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_acosf(__x); }
# 106 "/usr/include/c++/4.0.0/cmath" 3
inline long double acos(long double __x)
# 107 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_acosl(__x); }
# 109 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> inline typename __enable_if< double, (__is_integer< _Tp> ::__value)> ::__type
# 111 "/usr/include/c++/4.0.0/cmath" 3
acos(_Tp __x)
# 112 "/usr/include/c++/4.0.0/cmath" 3
{
# 113 "/usr/include/c++/4.0.0/cmath" 3
return __builtin_acos(__x);
# 114 "/usr/include/c++/4.0.0/cmath" 3
}
# 116 "/usr/include/c++/4.0.0/cmath" 3
using ::asin;
# 119 "/usr/include/c++/4.0.0/cmath" 3
inline float asin(float __x)
# 120 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_asinf(__x); }
# 123 "/usr/include/c++/4.0.0/cmath" 3
inline long double asin(long double __x)
# 124 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_asinl(__x); }
# 126 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> inline typename __enable_if< double, (__is_integer< _Tp> ::__value)> ::__type
# 128 "/usr/include/c++/4.0.0/cmath" 3
asin(_Tp __x)
# 129 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_asin(__x); }
# 131 "/usr/include/c++/4.0.0/cmath" 3
using ::atan;
# 134 "/usr/include/c++/4.0.0/cmath" 3
inline float atan(float __x)
# 135 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_atanf(__x); }
# 138 "/usr/include/c++/4.0.0/cmath" 3
inline long double atan(long double __x)
# 139 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_atanl(__x); }
# 141 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> inline typename __enable_if< double, (__is_integer< _Tp> ::__value)> ::__type
# 143 "/usr/include/c++/4.0.0/cmath" 3
atan(_Tp __x)
# 144 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_atan(__x); }
# 146 "/usr/include/c++/4.0.0/cmath" 3
using ::atan2;
# 149 "/usr/include/c++/4.0.0/cmath" 3
inline float atan2(float __y, float __x)
# 150 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_atan2f(__y, __x); }
# 153 "/usr/include/c++/4.0.0/cmath" 3
inline long double atan2(long double __y, long double __x)
# 154 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_atan2l(__y, __x); }
# 156 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp, class _Up> inline typename __enable_if< double, (__is_integer< _Tp> ::__value && __is_integer< _Up> ::__value)> ::__type
# 159 "/usr/include/c++/4.0.0/cmath" 3
atan2(_Tp __y, _Up __x)
# 160 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_atan2(__y, __x); }
# 162 "/usr/include/c++/4.0.0/cmath" 3
using ::ceil;
# 165 "/usr/include/c++/4.0.0/cmath" 3
inline float ceil(float __x)
# 166 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_ceilf(__x); }
# 169 "/usr/include/c++/4.0.0/cmath" 3
inline long double ceil(long double __x)
# 170 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_ceill(__x); }
# 172 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> inline typename __enable_if< double, (__is_integer< _Tp> ::__value)> ::__type
# 174 "/usr/include/c++/4.0.0/cmath" 3
ceil(_Tp __x)
# 175 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_ceil(__x); }
# 177 "/usr/include/c++/4.0.0/cmath" 3
using ::cos;
# 180 "/usr/include/c++/4.0.0/cmath" 3
inline float cos(float __x)
# 181 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_cosf(__x); }
# 184 "/usr/include/c++/4.0.0/cmath" 3
inline long double cos(long double __x)
# 185 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_cosl(__x); }
# 187 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> inline typename __enable_if< double, (__is_integer< _Tp> ::__value)> ::__type
# 189 "/usr/include/c++/4.0.0/cmath" 3
cos(_Tp __x)
# 190 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_cos(__x); }
# 192 "/usr/include/c++/4.0.0/cmath" 3
using ::cosh;
# 195 "/usr/include/c++/4.0.0/cmath" 3
inline float cosh(float __x)
# 196 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_coshf(__x); }
# 199 "/usr/include/c++/4.0.0/cmath" 3
inline long double cosh(long double __x)
# 200 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_coshl(__x); }
# 202 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> inline typename __enable_if< double, (__is_integer< _Tp> ::__value)> ::__type
# 204 "/usr/include/c++/4.0.0/cmath" 3
cosh(_Tp __x)
# 205 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_cosh(__x); }
# 207 "/usr/include/c++/4.0.0/cmath" 3
using ::exp;
# 210 "/usr/include/c++/4.0.0/cmath" 3
inline float exp(float __x)
# 211 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_expf(__x); }
# 214 "/usr/include/c++/4.0.0/cmath" 3
inline long double exp(long double __x)
# 215 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_expl(__x); }
# 217 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> inline typename __enable_if< double, (__is_integer< _Tp> ::__value)> ::__type
# 219 "/usr/include/c++/4.0.0/cmath" 3
exp(_Tp __x)
# 220 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_exp(__x); }
# 222 "/usr/include/c++/4.0.0/cmath" 3
using ::fabs;
# 225 "/usr/include/c++/4.0.0/cmath" 3
inline float fabs(float __x)
# 226 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_fabsf(__x); }
# 229 "/usr/include/c++/4.0.0/cmath" 3
inline long double fabs(long double __x)
# 230 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_fabsl(__x); }
# 232 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> inline typename __enable_if< double, (__is_integer< _Tp> ::__value)> ::__type
# 234 "/usr/include/c++/4.0.0/cmath" 3
fabs(_Tp __x)
# 235 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_fabs(__x); }
# 237 "/usr/include/c++/4.0.0/cmath" 3
using ::floor;
# 240 "/usr/include/c++/4.0.0/cmath" 3
inline float floor(float __x)
# 241 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_floorf(__x); }
# 244 "/usr/include/c++/4.0.0/cmath" 3
inline long double floor(long double __x)
# 245 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_floorl(__x); }
# 247 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> inline typename __enable_if< double, (__is_integer< _Tp> ::__value)> ::__type
# 249 "/usr/include/c++/4.0.0/cmath" 3
floor(_Tp __x)
# 250 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_floor(__x); }
# 252 "/usr/include/c++/4.0.0/cmath" 3
using ::fmod;
# 255 "/usr/include/c++/4.0.0/cmath" 3
inline float fmod(float __x, float __y)
# 256 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_fmodf(__x, __y); }
# 259 "/usr/include/c++/4.0.0/cmath" 3
inline long double fmod(long double __x, long double __y)
# 260 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_fmodl(__x, __y); }
# 262 "/usr/include/c++/4.0.0/cmath" 3
using ::frexp;
# 265 "/usr/include/c++/4.0.0/cmath" 3
inline float frexp(float __x, int *__exp)
# 266 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_frexpf(__x, __exp); }
# 269 "/usr/include/c++/4.0.0/cmath" 3
inline long double frexp(long double __x, int *__exp)
# 270 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_frexpl(__x, __exp); }
# 272 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> inline typename __enable_if< double, (__is_integer< _Tp> ::__value)> ::__type
# 274 "/usr/include/c++/4.0.0/cmath" 3
frexp(_Tp __x, int *__exp)
# 275 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_frexp(__x, __exp); }
# 277 "/usr/include/c++/4.0.0/cmath" 3
using ::ldexp;
# 280 "/usr/include/c++/4.0.0/cmath" 3
inline float ldexp(float __x, int __exp)
# 281 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_ldexpf(__x, __exp); }
# 284 "/usr/include/c++/4.0.0/cmath" 3
inline long double ldexp(long double __x, int __exp)
# 285 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_ldexpl(__x, __exp); }
# 287 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> inline typename __enable_if< double, (__is_integer< _Tp> ::__value)> ::__type
# 289 "/usr/include/c++/4.0.0/cmath" 3
ldexp(_Tp __x, int __exp)
# 290 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_ldexp(__x, __exp); }
# 292 "/usr/include/c++/4.0.0/cmath" 3
using ::log;
# 295 "/usr/include/c++/4.0.0/cmath" 3
inline float log(float __x)
# 296 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_logf(__x); }
# 299 "/usr/include/c++/4.0.0/cmath" 3
inline long double log(long double __x)
# 300 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_logl(__x); }
# 302 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> inline typename __enable_if< double, (__is_integer< _Tp> ::__value)> ::__type
# 304 "/usr/include/c++/4.0.0/cmath" 3
log(_Tp __x)
# 305 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_log(__x); }
# 307 "/usr/include/c++/4.0.0/cmath" 3
using ::log10;
# 310 "/usr/include/c++/4.0.0/cmath" 3
inline float log10(float __x)
# 311 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_log10f(__x); }
# 314 "/usr/include/c++/4.0.0/cmath" 3
inline long double log10(long double __x)
# 315 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_log10l(__x); }
# 317 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> inline typename __enable_if< double, (__is_integer< _Tp> ::__value)> ::__type
# 319 "/usr/include/c++/4.0.0/cmath" 3
log10(_Tp __x)
# 320 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_log10(__x); }
# 322 "/usr/include/c++/4.0.0/cmath" 3
using ::modf;
# 325 "/usr/include/c++/4.0.0/cmath" 3
inline float modf(float __x, float *__iptr)
# 326 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_modff(__x, __iptr); }
# 329 "/usr/include/c++/4.0.0/cmath" 3
inline long double modf(long double __x, long double *__iptr)
# 330 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_modfl(__x, __iptr); }
# 332 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> inline _Tp
# 334 "/usr/include/c++/4.0.0/cmath" 3
__pow_helper(_Tp __x, int __n)
# 335 "/usr/include/c++/4.0.0/cmath" 3
{
# 336 "/usr/include/c++/4.0.0/cmath" 3
return (__n < 0) ? (((_Tp)(1)) / __cmath_power(__x, -__n)) : (__cmath_power(__x, __n));
# 339 "/usr/include/c++/4.0.0/cmath" 3
}
# 341 "/usr/include/c++/4.0.0/cmath" 3
using ::pow;
# 344 "/usr/include/c++/4.0.0/cmath" 3
inline float pow(float __x, float __y)
# 345 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_powf(__x, __y); }
# 348 "/usr/include/c++/4.0.0/cmath" 3
inline long double pow(long double __x, long double __y)
# 349 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_powl(__x, __y); }
# 352 "/usr/include/c++/4.0.0/cmath" 3
inline double pow(double __x, int __i)
# 353 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_powi(__x, __i); }
# 356 "/usr/include/c++/4.0.0/cmath" 3
inline float pow(float __x, int __n)
# 357 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_powif(__x, __n); }
# 360 "/usr/include/c++/4.0.0/cmath" 3
inline long double pow(long double __x, int __n)
# 361 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_powil(__x, __n); }
# 363 "/usr/include/c++/4.0.0/cmath" 3
using ::sin;
# 366 "/usr/include/c++/4.0.0/cmath" 3
inline float sin(float __x)
# 367 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_sinf(__x); }
# 370 "/usr/include/c++/4.0.0/cmath" 3
inline long double sin(long double __x)
# 371 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_sinl(__x); }
# 373 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> inline typename __enable_if< double, (__is_integer< _Tp> ::__value)> ::__type
# 375 "/usr/include/c++/4.0.0/cmath" 3
sin(_Tp __x)
# 376 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_sin(__x); }
# 378 "/usr/include/c++/4.0.0/cmath" 3
using ::sinh;
# 381 "/usr/include/c++/4.0.0/cmath" 3
inline float sinh(float __x)
# 382 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_sinhf(__x); }
# 385 "/usr/include/c++/4.0.0/cmath" 3
inline long double sinh(long double __x)
# 386 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_sinhl(__x); }
# 388 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> inline typename __enable_if< double, (__is_integer< _Tp> ::__value)> ::__type
# 390 "/usr/include/c++/4.0.0/cmath" 3
sinh(_Tp __x)
# 391 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_sinh(__x); }
# 393 "/usr/include/c++/4.0.0/cmath" 3
using ::sqrt;
# 396 "/usr/include/c++/4.0.0/cmath" 3
inline float sqrt(float __x)
# 397 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_sqrtf(__x); }
# 400 "/usr/include/c++/4.0.0/cmath" 3
inline long double sqrt(long double __x)
# 401 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_sqrtl(__x); }
# 403 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> inline typename __enable_if< double, (__is_integer< _Tp> ::__value)> ::__type
# 405 "/usr/include/c++/4.0.0/cmath" 3
sqrt(_Tp __x)
# 406 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_sqrt(__x); }
# 408 "/usr/include/c++/4.0.0/cmath" 3
using ::tan;
# 411 "/usr/include/c++/4.0.0/cmath" 3
inline float tan(float __x)
# 412 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_tanf(__x); }
# 415 "/usr/include/c++/4.0.0/cmath" 3
inline long double tan(long double __x)
# 416 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_tanl(__x); }
# 418 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> inline typename __enable_if< double, (__is_integer< _Tp> ::__value)> ::__type
# 420 "/usr/include/c++/4.0.0/cmath" 3
tan(_Tp __x)
# 421 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_tan(__x); }
# 423 "/usr/include/c++/4.0.0/cmath" 3
using ::tanh;
# 426 "/usr/include/c++/4.0.0/cmath" 3
inline float tanh(float __x)
# 427 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_tanhf(__x); }
# 430 "/usr/include/c++/4.0.0/cmath" 3
inline long double tanh(long double __x)
# 431 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_tanhl(__x); }
# 433 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> inline typename __enable_if< double, (__is_integer< _Tp> ::__value)> ::__type
# 435 "/usr/include/c++/4.0.0/cmath" 3
tanh(_Tp __x)
# 436 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_tanh(__x); }
# 437 "/usr/include/c++/4.0.0/cmath" 3
}
# 444 "/usr/include/c++/4.0.0/cmath" 3
namespace __gnu_cxx {
# 446 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> int
# 448 "/usr/include/c++/4.0.0/cmath" 3
__capture_fpclassify(_Tp __f) { return (sizeof(__f) == sizeof(float)) ? __fpclassifyf((float)__f) : ((sizeof(__f) == sizeof(double)) ? __fpclassifyd((double)__f) : __fpclassify((long double)__f)); }
# 450 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> int
# 452 "/usr/include/c++/4.0.0/cmath" 3
__capture_isfinite(_Tp __f) { return (sizeof(__f) == sizeof(float)) ? __inline_isfinitef((float)__f) : ((sizeof(__f) == sizeof(double)) ? __inline_isfinited((double)__f) : __inline_isfinite((long double)__f)); }
# 454 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> int
# 456 "/usr/include/c++/4.0.0/cmath" 3
__capture_isinf(_Tp __f) { return (sizeof(__f) == sizeof(float)) ? __inline_isinff((float)__f) : ((sizeof(__f) == sizeof(double)) ? __inline_isinfd((double)__f) : __inline_isinf((long double)__f)); }
# 458 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> int
# 460 "/usr/include/c++/4.0.0/cmath" 3
__capture_isnan(_Tp __f) { return (sizeof(__f) == sizeof(float)) ? __inline_isnanf((float)__f) : ((sizeof(__f) == sizeof(double)) ? __inline_isnand((double)__f) : __inline_isnan((long double)__f)); }
# 462 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> int
# 464 "/usr/include/c++/4.0.0/cmath" 3
__capture_isnormal(_Tp __f) { return (sizeof(__f) == sizeof(float)) ? __inline_isnormalf((float)__f) : ((sizeof(__f) == sizeof(double)) ? __inline_isnormald((double)__f) : __inline_isnormal((long double)__f)); }
# 466 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> int
# 468 "/usr/include/c++/4.0.0/cmath" 3
__capture_signbit(_Tp __f) { return (sizeof(__f) == sizeof(float)) ? __inline_signbitf((float)__f) : ((sizeof(__f) == sizeof(double)) ? __inline_signbitd((double)__f) : __inline_signbit((long double)__f)); }
# 470 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> int
# 472 "/usr/include/c++/4.0.0/cmath" 3
__capture_isgreater(_Tp __f1, _Tp __f2)
# 473 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_isgreater(__f1, __f2); }
# 475 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> int
# 477 "/usr/include/c++/4.0.0/cmath" 3
__capture_isgreaterequal(_Tp __f1, _Tp __f2)
# 478 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_isgreaterequal(__f1, __f2); }
# 480 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> int
# 482 "/usr/include/c++/4.0.0/cmath" 3
__capture_isless(_Tp __f1, _Tp __f2) { return __builtin_isless(__f1, __f2); }
# 484 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> int
# 486 "/usr/include/c++/4.0.0/cmath" 3
__capture_islessequal(_Tp __f1, _Tp __f2)
# 487 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_islessequal(__f1, __f2); }
# 489 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> int
# 491 "/usr/include/c++/4.0.0/cmath" 3
__capture_islessgreater(_Tp __f1, _Tp __f2)
# 492 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_islessgreater(__f1, __f2); }
# 494 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> int
# 496 "/usr/include/c++/4.0.0/cmath" 3
__capture_isunordered(_Tp __f1, _Tp __f2)
# 497 "/usr/include/c++/4.0.0/cmath" 3
{ return __builtin_isunordered(__f1, __f2); }
# 498 "/usr/include/c++/4.0.0/cmath" 3
}
# 514 "/usr/include/c++/4.0.0/cmath" 3
namespace std {
# 516 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> int
# 518 "/usr/include/c++/4.0.0/cmath" 3
fpclassify(_Tp __f) { return __gnu_cxx::__capture_fpclassify(__f); }
# 520 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> int
# 522 "/usr/include/c++/4.0.0/cmath" 3
isfinite(_Tp __f) { return __gnu_cxx::__capture_isfinite(__f); }
# 524 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> int
# 526 "/usr/include/c++/4.0.0/cmath" 3
isinf(_Tp __f) { return __gnu_cxx::__capture_isinf(__f); }
# 528 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> int
# 530 "/usr/include/c++/4.0.0/cmath" 3
isnan(_Tp __f) { return __gnu_cxx::__capture_isnan(__f); }
# 532 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> int
# 534 "/usr/include/c++/4.0.0/cmath" 3
isnormal(_Tp __f) { return __gnu_cxx::__capture_isnormal(__f); }
# 536 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> int
# 538 "/usr/include/c++/4.0.0/cmath" 3
signbit(_Tp __f) { return __gnu_cxx::__capture_signbit(__f); }
# 540 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> int
# 542 "/usr/include/c++/4.0.0/cmath" 3
isgreater(_Tp __f1, _Tp __f2)
# 543 "/usr/include/c++/4.0.0/cmath" 3
{ return __gnu_cxx::__capture_isgreater(__f1, __f2); }
# 545 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> int
# 547 "/usr/include/c++/4.0.0/cmath" 3
isgreaterequal(_Tp __f1, _Tp __f2)
# 548 "/usr/include/c++/4.0.0/cmath" 3
{ return __gnu_cxx::__capture_isgreaterequal(__f1, __f2); }
# 550 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> int
# 552 "/usr/include/c++/4.0.0/cmath" 3
isless(_Tp __f1, _Tp __f2)
# 553 "/usr/include/c++/4.0.0/cmath" 3
{ return __gnu_cxx::__capture_isless(__f1, __f2); }
# 555 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> int
# 557 "/usr/include/c++/4.0.0/cmath" 3
islessequal(_Tp __f1, _Tp __f2)
# 558 "/usr/include/c++/4.0.0/cmath" 3
{ return __gnu_cxx::__capture_islessequal(__f1, __f2); }
# 560 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> int
# 562 "/usr/include/c++/4.0.0/cmath" 3
islessgreater(_Tp __f1, _Tp __f2)
# 563 "/usr/include/c++/4.0.0/cmath" 3
{ return __gnu_cxx::__capture_islessgreater(__f1, __f2); }
# 565 "/usr/include/c++/4.0.0/cmath" 3
template<class _Tp> int
# 567 "/usr/include/c++/4.0.0/cmath" 3
isunordered(_Tp __f1, _Tp __f2)
# 568 "/usr/include/c++/4.0.0/cmath" 3
{ return __gnu_cxx::__capture_isunordered(__f1, __f2); }
# 569 "/usr/include/c++/4.0.0/cmath" 3
}
# 35 "/usr/include/c++/4.0.0/bits/cmath.tcc" 3
namespace std {
# 37 "/usr/include/c++/4.0.0/bits/cmath.tcc" 3
template<class _Tp> inline _Tp
# 39 "/usr/include/c++/4.0.0/bits/cmath.tcc" 3
__cmath_power(_Tp __x, unsigned __n)
# 40 "/usr/include/c++/4.0.0/bits/cmath.tcc" 3
{
# 41 "/usr/include/c++/4.0.0/bits/cmath.tcc" 3
auto _Tp __y = ((__n % (2)) ? __x : 1);
# 43 "/usr/include/c++/4.0.0/bits/cmath.tcc" 3
while (__n >>= 1)
# 44 "/usr/include/c++/4.0.0/bits/cmath.tcc" 3
{
# 45 "/usr/include/c++/4.0.0/bits/cmath.tcc" 3
__x = __x * __x;
# 46 "/usr/include/c++/4.0.0/bits/cmath.tcc" 3
if (__n % (2)) {
# 47 "/usr/include/c++/4.0.0/bits/cmath.tcc" 3
__y = __y * __x; }
# 48 "/usr/include/c++/4.0.0/bits/cmath.tcc" 3
}
# 50 "/usr/include/c++/4.0.0/bits/cmath.tcc" 3
return __y;
# 51 "/usr/include/c++/4.0.0/bits/cmath.tcc" 3
}
# 52 "/usr/include/c++/4.0.0/bits/cmath.tcc" 3
}
# 50 "/usr/include/c++/4.0.0/cstddef" 3
namespace std {
# 52 "/usr/include/c++/4.0.0/cstddef" 3
using ::ptrdiff_t;
# 53 "/usr/include/c++/4.0.0/cstddef" 3
using ::size_t;
# 54 "/usr/include/c++/4.0.0/cstddef" 3
}
# 90 "/usr/include/c++/4.0.0/cstdlib" 3
namespace std {
# 93 "/usr/include/c++/4.0.0/cstdlib" 3
using ::div_t;
# 94 "/usr/include/c++/4.0.0/cstdlib" 3
using ::ldiv_t;
# 96 "/usr/include/c++/4.0.0/cstdlib" 3
using ::abort;
# 97 "/usr/include/c++/4.0.0/cstdlib" 3
using ::abs;
# 98 "/usr/include/c++/4.0.0/cstdlib" 3
using ::atexit;
# 99 "/usr/include/c++/4.0.0/cstdlib" 3
using ::atof;
# 100 "/usr/include/c++/4.0.0/cstdlib" 3
using ::atoi;
# 101 "/usr/include/c++/4.0.0/cstdlib" 3
using ::atol;
# 102 "/usr/include/c++/4.0.0/cstdlib" 3
using ::bsearch;
# 103 "/usr/include/c++/4.0.0/cstdlib" 3
using ::calloc;
# 104 "/usr/include/c++/4.0.0/cstdlib" 3
using ::div;
# 105 "/usr/include/c++/4.0.0/cstdlib" 3
using ::exit;
# 106 "/usr/include/c++/4.0.0/cstdlib" 3
using ::free;
# 107 "/usr/include/c++/4.0.0/cstdlib" 3
using ::getenv;
# 108 "/usr/include/c++/4.0.0/cstdlib" 3
using ::labs;
# 109 "/usr/include/c++/4.0.0/cstdlib" 3
using ::ldiv;
# 110 "/usr/include/c++/4.0.0/cstdlib" 3
using ::malloc;
# 112 "/usr/include/c++/4.0.0/cstdlib" 3
using ::mblen;
# 113 "/usr/include/c++/4.0.0/cstdlib" 3
using ::mbstowcs;
# 114 "/usr/include/c++/4.0.0/cstdlib" 3
using ::mbtowc;
# 116 "/usr/include/c++/4.0.0/cstdlib" 3
using ::qsort;
# 117 "/usr/include/c++/4.0.0/cstdlib" 3
using ::rand;
# 118 "/usr/include/c++/4.0.0/cstdlib" 3
using ::realloc;
# 119 "/usr/include/c++/4.0.0/cstdlib" 3
using ::srand;
# 120 "/usr/include/c++/4.0.0/cstdlib" 3
using ::strtod;
# 121 "/usr/include/c++/4.0.0/cstdlib" 3
using ::strtol;
# 122 "/usr/include/c++/4.0.0/cstdlib" 3
using ::strtoul;
# 123 "/usr/include/c++/4.0.0/cstdlib" 3
using ::system;
# 125 "/usr/include/c++/4.0.0/cstdlib" 3
using ::wcstombs;
# 126 "/usr/include/c++/4.0.0/cstdlib" 3
using ::wctomb;
# 130 "/usr/include/c++/4.0.0/cstdlib" 3
inline long abs(long __i) { return labs(__i); }
# 133 "/usr/include/c++/4.0.0/cstdlib" 3
inline ldiv_t div(long __i, long __j) { return ldiv(__i, __j); }
# 143 "/usr/include/c++/4.0.0/cstdlib" 3
}
# 156 "/usr/include/c++/4.0.0/cstdlib" 3
namespace __gnu_cxx {
# 159 "/usr/include/c++/4.0.0/cstdlib" 3
using ::lldiv_t;
# 165 "/usr/include/c++/4.0.0/cstdlib" 3
using ::_Exit;
# 169 "/usr/include/c++/4.0.0/cstdlib" 3
inline long long abs(long long __x) { return (__x >= (0)) ? __x : (-__x); }
# 172 "/usr/include/c++/4.0.0/cstdlib" 3
inline long long llabs(long long __x) { return (__x >= (0)) ? __x : (-__x); }
# 176 "/usr/include/c++/4.0.0/cstdlib" 3
inline lldiv_t div(long long __n, long long __d)
# 177 "/usr/include/c++/4.0.0/cstdlib" 3
{ auto lldiv_t __q; (__q.quot) = __n / __d; (__q.rem) = __n % __d; return __q; }
# 180 "/usr/include/c++/4.0.0/cstdlib" 3
inline lldiv_t lldiv(long long __n, long long __d)
# 181 "/usr/include/c++/4.0.0/cstdlib" 3
{ auto lldiv_t __q; (__q.quot) = __n / __d; (__q.rem) = __n % __d; return __q; }
# 192 "/usr/include/c++/4.0.0/cstdlib" 3
using ::atoll;
# 193 "/usr/include/c++/4.0.0/cstdlib" 3
using ::strtoll;
# 194 "/usr/include/c++/4.0.0/cstdlib" 3
using ::strtoull;
# 196 "/usr/include/c++/4.0.0/cstdlib" 3
using ::strtof;
# 197 "/usr/include/c++/4.0.0/cstdlib" 3
using ::strtold;
# 198 "/usr/include/c++/4.0.0/cstdlib" 3
}
# 200 "/usr/include/c++/4.0.0/cstdlib" 3
namespace std {
# 203 "/usr/include/c++/4.0.0/cstdlib" 3
using __gnu_cxx::lldiv_t;
# 205 "/usr/include/c++/4.0.0/cstdlib" 3
using __gnu_cxx::_Exit;
# 206 "/usr/include/c++/4.0.0/cstdlib" 3
using __gnu_cxx::abs;
# 207 "/usr/include/c++/4.0.0/cstdlib" 3
using __gnu_cxx::llabs;
# 209 "/usr/include/c++/4.0.0/cstdlib" 3
using __gnu_cxx::div;
# 210 "/usr/include/c++/4.0.0/cstdlib" 3
using __gnu_cxx::lldiv;
# 212 "/usr/include/c++/4.0.0/cstdlib" 3
using __gnu_cxx::atoll;
# 213 "/usr/include/c++/4.0.0/cstdlib" 3
using __gnu_cxx::strtof;
# 214 "/usr/include/c++/4.0.0/cstdlib" 3
using __gnu_cxx::strtoll;
# 215 "/usr/include/c++/4.0.0/cstdlib" 3
using __gnu_cxx::strtoull;
# 216 "/usr/include/c++/4.0.0/cstdlib" 3
using __gnu_cxx::strtold;
# 217 "/usr/include/c++/4.0.0/cstdlib" 3
}
# 413 "/usr/local/cuda/bin/../include/math_functions.h"
using namespace std;
# 432 "/usr/local/cuda/bin/../include/math_functions.h"
extern __attribute__((__weak__)) int __signbitl(long double);
# 434 "/usr/local/cuda/bin/../include/math_functions.h"
extern __attribute__((__weak__)) int __isinfl(long double);
# 436 "/usr/local/cuda/bin/../include/math_functions.h"
extern __attribute__((__weak__)) int __isnanl(long double);
# 441 "/usr/local/cuda/bin/../include/math_functions.h"
extern __attribute__((__weak__)) int __isfinite(long double);
# 471 "/usr/local/cuda/bin/../include/math_functions.h"
namespace __gnu_cxx {
# 473 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline long long abs(long long);
# 474 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 476 "/usr/local/cuda/bin/../include/math_functions.h"
namespace std {
# 478 "/usr/local/cuda/bin/../include/math_functions.h"
template<class T> extern inline T __pow_helper(T, int);
# 479 "/usr/local/cuda/bin/../include/math_functions.h"
template<class T> extern inline T __cmath_power(T, unsigned);
# 480 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 536 "/usr/local/cuda/bin/../include/math_functions.h"
namespace std {
# 538 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline long abs(long);
# 539 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float abs(float);
# 540 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline double abs(double);
# 541 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float fabs(float);
# 542 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float ceil(float);
# 543 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float floor(float);
# 544 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float sqrt(float);
# 545 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float pow(float, float);
# 546 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float pow(float, int);
# 547 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline double pow(double, int);
# 548 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float log(float);
# 549 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float log10(float);
# 550 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float fmod(float, float);
# 551 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float modf(float, float *);
# 552 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float exp(float);
# 553 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float frexp(float, int *);
# 554 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float ldexp(float, int);
# 555 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float asin(float);
# 556 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float sin(float);
# 557 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float sinh(float);
# 558 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float acos(float);
# 559 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float cos(float);
# 560 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float cosh(float);
# 561 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float atan(float);
# 562 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float atan2(float, float);
# 563 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float tan(float);
# 564 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float tanh(float);
# 566 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 568 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float logb(float a)
# 569 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 570 "/usr/local/cuda/bin/../include/math_functions.h"
return logbf(a);
# 571 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 573 "/usr/local/cuda/bin/../include/math_functions.h"
static inline int ilogb(float a)
# 574 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 575 "/usr/local/cuda/bin/../include/math_functions.h"
return ilogbf(a);
# 576 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 578 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float scalbn(float a, int b)
# 579 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 580 "/usr/local/cuda/bin/../include/math_functions.h"
return scalbnf(a, b);
# 581 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 583 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float scalbln(float a, long b)
# 584 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 585 "/usr/local/cuda/bin/../include/math_functions.h"
return scalblnf(a, b);
# 586 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 588 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float exp2(float a)
# 589 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 590 "/usr/local/cuda/bin/../include/math_functions.h"
return exp2f(a);
# 591 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 593 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float exp10(float a)
# 594 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 595 "/usr/local/cuda/bin/../include/math_functions.h"
return exp10f(a);
# 596 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 598 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float expm1(float a)
# 599 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 600 "/usr/local/cuda/bin/../include/math_functions.h"
return expm1f(a);
# 601 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 603 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float log2(float a)
# 604 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 605 "/usr/local/cuda/bin/../include/math_functions.h"
return log2f(a);
# 606 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 608 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float log1p(float a)
# 609 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 610 "/usr/local/cuda/bin/../include/math_functions.h"
return log1pf(a);
# 611 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 613 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float rsqrt(float a)
# 614 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 615 "/usr/local/cuda/bin/../include/math_functions.h"
return rsqrtf(a);
# 616 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 618 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float acosh(float a)
# 619 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 620 "/usr/local/cuda/bin/../include/math_functions.h"
return acoshf(a);
# 621 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 623 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float asinh(float a)
# 624 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 625 "/usr/local/cuda/bin/../include/math_functions.h"
return asinhf(a);
# 626 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 628 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float atanh(float a)
# 629 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 630 "/usr/local/cuda/bin/../include/math_functions.h"
return atanhf(a);
# 631 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 633 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float hypot(float a, float b)
# 634 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 635 "/usr/local/cuda/bin/../include/math_functions.h"
return hypotf(a, b);
# 636 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 638 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float cbrt(float a)
# 639 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 640 "/usr/local/cuda/bin/../include/math_functions.h"
return cbrtf(a);
# 641 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 643 "/usr/local/cuda/bin/../include/math_functions.h"
static inline void sincos(float a, float *sptr, float *cptr)
# 644 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 645 "/usr/local/cuda/bin/../include/math_functions.h"
sincosf(a, sptr, cptr);
# 646 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 648 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float erf(float a)
# 649 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 650 "/usr/local/cuda/bin/../include/math_functions.h"
return erff(a);
# 651 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 653 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float erfc(float a)
# 654 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 655 "/usr/local/cuda/bin/../include/math_functions.h"
return erfcf(a);
# 656 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 658 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float lgamma(float a)
# 659 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 660 "/usr/local/cuda/bin/../include/math_functions.h"
return lgammaf(a);
# 661 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 663 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float tgamma(float a)
# 664 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 665 "/usr/local/cuda/bin/../include/math_functions.h"
return tgammaf(a);
# 666 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 668 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float copysign(float a, float b)
# 669 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 670 "/usr/local/cuda/bin/../include/math_functions.h"
return copysignf(a, b);
# 671 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 673 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double copysign(double a, float b)
# 674 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 675 "/usr/local/cuda/bin/../include/math_functions.h"
return copysign(a, (double)b);
# 676 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 678 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float copysign(float a, double b)
# 679 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 680 "/usr/local/cuda/bin/../include/math_functions.h"
return copysignf(a, (float)b);
# 681 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 683 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float nextafter(float a, float b)
# 684 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 685 "/usr/local/cuda/bin/../include/math_functions.h"
return nextafterf(a, b);
# 686 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 688 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float remainder(float a, float b)
# 689 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 690 "/usr/local/cuda/bin/../include/math_functions.h"
return remainderf(a, b);
# 691 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 693 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float remquo(float a, float b, int *quo)
# 694 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 695 "/usr/local/cuda/bin/../include/math_functions.h"
return remquof(a, b, quo);
# 696 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 698 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float round(float a)
# 699 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 700 "/usr/local/cuda/bin/../include/math_functions.h"
return roundf(a);
# 701 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 703 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long lround(float a)
# 704 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 705 "/usr/local/cuda/bin/../include/math_functions.h"
return lroundf(a);
# 706 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 708 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long long llround(float a)
# 709 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 710 "/usr/local/cuda/bin/../include/math_functions.h"
return llroundf(a);
# 711 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 713 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float trunc(float a)
# 714 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 715 "/usr/local/cuda/bin/../include/math_functions.h"
return truncf(a);
# 716 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 718 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float rint(float a)
# 719 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 720 "/usr/local/cuda/bin/../include/math_functions.h"
return rintf(a);
# 721 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 723 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long lrint(float a)
# 724 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 725 "/usr/local/cuda/bin/../include/math_functions.h"
return lrintf(a);
# 726 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 728 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long long llrint(float a)
# 729 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 730 "/usr/local/cuda/bin/../include/math_functions.h"
return llrintf(a);
# 731 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 733 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float nearbyint(float a)
# 734 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 735 "/usr/local/cuda/bin/../include/math_functions.h"
return nearbyintf(a);
# 736 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 738 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float fdim(float a, float b)
# 739 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 740 "/usr/local/cuda/bin/../include/math_functions.h"
return fdimf(a, b);
# 741 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 743 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float fma(float a, float b, float c)
# 744 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 745 "/usr/local/cuda/bin/../include/math_functions.h"
return fmaf(a, b, c);
# 746 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 748 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned min(unsigned a, unsigned b)
# 749 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 750 "/usr/local/cuda/bin/../include/math_functions.h"
return umin(a, b);
# 751 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 753 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned min(int a, unsigned b)
# 754 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 755 "/usr/local/cuda/bin/../include/math_functions.h"
return umin((unsigned)a, b);
# 756 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 758 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned min(unsigned a, int b)
# 759 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 760 "/usr/local/cuda/bin/../include/math_functions.h"
return umin(a, (unsigned)b);
# 761 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 763 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float min(float a, float b)
# 764 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 765 "/usr/local/cuda/bin/../include/math_functions.h"
return fminf(a, b);
# 766 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 768 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double min(double a, double b)
# 769 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 770 "/usr/local/cuda/bin/../include/math_functions.h"
return fmin(a, b);
# 771 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 773 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double min(float a, double b)
# 774 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 775 "/usr/local/cuda/bin/../include/math_functions.h"
return fmin((double)a, b);
# 776 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 778 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double min(double a, float b)
# 779 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 780 "/usr/local/cuda/bin/../include/math_functions.h"
return fmin(a, (double)b);
# 781 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 783 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned max(unsigned a, unsigned b)
# 784 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 785 "/usr/local/cuda/bin/../include/math_functions.h"
return umax(a, b);
# 786 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 788 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned max(int a, unsigned b)
# 789 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 790 "/usr/local/cuda/bin/../include/math_functions.h"
return umax((unsigned)a, b);
# 791 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 793 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned max(unsigned a, int b)
# 794 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 795 "/usr/local/cuda/bin/../include/math_functions.h"
return umax(a, (unsigned)b);
# 796 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 798 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float max(float a, float b)
# 799 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 800 "/usr/local/cuda/bin/../include/math_functions.h"
return fmaxf(a, b);
# 801 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 803 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double max(double a, double b)
# 804 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 805 "/usr/local/cuda/bin/../include/math_functions.h"
return fmax(a, b);
# 806 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 808 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double max(float a, double b)
# 809 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 810 "/usr/local/cuda/bin/../include/math_functions.h"
return fmax((double)a, b);
# 811 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 813 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double max(double a, float b)
# 814 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 815 "/usr/local/cuda/bin/../include/math_functions.h"
return fmax(a, (double)b);
# 816 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 76 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template<class T> inline cudaError_t
# 77 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaSetupArgument(T
# 78 "/usr/local/cuda/bin/../include/cuda_runtime.h"
arg, size_t
# 79 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset)
# 81 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 82 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaSetupArgument((const void *)(&arg), sizeof(T), offset);
# 83 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 93 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyToSymbol(char *
# 94 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, const void *
# 95 "/usr/local/cuda/bin/../include/cuda_runtime.h"
src, size_t
# 96 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 97 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 98 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice)
# 100 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 101 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbol((const char *)symbol, src, count, offset, kind);
# 102 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 104 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template<class T> inline cudaError_t
# 105 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMemcpyToSymbol(const T &
# 106 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, const void *
# 107 "/usr/local/cuda/bin/../include/cuda_runtime.h"
src, size_t
# 108 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 109 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 110 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice)
# 112 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 113 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbol((const char *)(&symbol), src, count, offset, kind);
# 114 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 116 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyToSymbolAsync(char *
# 117 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, const void *
# 118 "/usr/local/cuda/bin/../include/cuda_runtime.h"
src, size_t
# 119 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 120 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, cudaMemcpyKind
# 121 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind, cudaStream_t
# 122 "/usr/local/cuda/bin/../include/cuda_runtime.h"
stream)
# 124 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 125 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbolAsync((const char *)symbol, src, count, offset, kind, stream);
# 126 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 128 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template<class T> inline cudaError_t
# 129 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMemcpyToSymbolAsync(const T &
# 130 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, const void *
# 131 "/usr/local/cuda/bin/../include/cuda_runtime.h"
src, size_t
# 132 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 133 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, cudaMemcpyKind
# 134 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind, cudaStream_t
# 135 "/usr/local/cuda/bin/../include/cuda_runtime.h"
stream)
# 137 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 138 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbolAsync((const char *)(&symbol), src, count, offset, kind, stream);
# 139 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 147 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyFromSymbol(void *
# 148 "/usr/local/cuda/bin/../include/cuda_runtime.h"
dst, char *
# 149 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, size_t
# 150 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 151 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 152 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost)
# 154 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 155 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbol(dst, (const char *)symbol, count, offset, kind);
# 156 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 158 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template<class T> inline cudaError_t
# 159 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMemcpyFromSymbol(void *
# 160 "/usr/local/cuda/bin/../include/cuda_runtime.h"
dst, const T &
# 161 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, size_t
# 162 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 163 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 164 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost)
# 166 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 167 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbol(dst, (const char *)(&symbol), count, offset, kind);
# 168 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 170 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyFromSymbolAsync(void *
# 171 "/usr/local/cuda/bin/../include/cuda_runtime.h"
dst, char *
# 172 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, size_t
# 173 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 174 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, cudaMemcpyKind
# 175 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind, cudaStream_t
# 176 "/usr/local/cuda/bin/../include/cuda_runtime.h"
stream)
# 178 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 179 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbolAsync(dst, (const char *)symbol, count, offset, kind, stream);
# 180 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 182 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template<class T> inline cudaError_t
# 183 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMemcpyFromSymbolAsync(void *
# 184 "/usr/local/cuda/bin/../include/cuda_runtime.h"
dst, const T &
# 185 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, size_t
# 186 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 187 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, cudaMemcpyKind
# 188 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind, cudaStream_t
# 189 "/usr/local/cuda/bin/../include/cuda_runtime.h"
stream)
# 191 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 192 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbolAsync(dst, (const char *)(&symbol), count, offset, kind, stream);
# 193 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 195 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaGetSymbolAddress(void **
# 196 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, char *
# 197 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol)
# 199 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 200 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetSymbolAddress(devPtr, (const char *)symbol);
# 201 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 203 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template<class T> inline cudaError_t
# 204 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaGetSymbolAddress(void **
# 205 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, const T &
# 206 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol)
# 208 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 209 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetSymbolAddress(devPtr, (const char *)(&symbol));
# 210 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 218 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaGetSymbolSize(size_t *
# 219 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size, char *
# 220 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol)
# 222 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 223 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetSymbolSize(size, (const char *)symbol);
# 224 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 226 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template<class T> inline cudaError_t
# 227 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaGetSymbolSize(size_t *
# 228 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size, const T &
# 229 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol)
# 231 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 232 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetSymbolSize(size, (const char *)(&symbol));
# 233 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 241 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 242 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTexture(size_t *
# 243 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 244 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const void *
# 245 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, const cudaChannelFormatDesc &
# 246 "/usr/local/cuda/bin/../include/cuda_runtime.h"
desc, size_t
# 247 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size = (((2147483647) * 2U) + 1U))
# 249 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 250 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindTexture(offset, &tex, devPtr, (&desc), size);
# 251 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 253 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 254 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTexture(size_t *
# 255 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 256 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const void *
# 257 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, size_t
# 258 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size = (((2147483647) * 2U) + 1U))
# 260 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 261 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindTexture(offset, tex, devPtr, (tex.channelDesc), size);
# 262 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 264 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 265 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTextureToArray(const texture< T, dim, readMode> &
# 266 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const cudaArray *
# 267 "/usr/local/cuda/bin/../include/cuda_runtime.h"
array, const cudaChannelFormatDesc &
# 268 "/usr/local/cuda/bin/../include/cuda_runtime.h"
desc)
# 270 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 271 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindTextureToArray(&tex, array, (&desc));
# 272 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 274 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 275 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTextureToArray(const texture< T, dim, readMode> &
# 276 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const cudaArray *
# 277 "/usr/local/cuda/bin/../include/cuda_runtime.h"
array)
# 279 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 280 "/usr/local/cuda/bin/../include/cuda_runtime.h"
auto cudaChannelFormatDesc desc;
# 281 "/usr/local/cuda/bin/../include/cuda_runtime.h"
auto cudaError_t err = cudaGetChannelDesc(&desc, array);
# 283 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return (err == (cudaSuccess)) ? (cudaBindTextureToArray(tex, array, desc)) : err;
# 284 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 292 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 293 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaUnbindTexture(const texture< T, dim, readMode> &
# 294 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex)
# 296 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 297 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaUnbindTexture(&tex);
# 298 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 306 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 307 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaGetTextureAlignmentOffset(size_t *
# 308 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 309 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex)
# 311 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 312 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetTextureAlignmentOffset(offset, &tex);
# 313 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 321 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template<class T> inline cudaError_t
# 322 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaLaunch(T *
# 323 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol)
# 325 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 326 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaLaunch((const char *)symbol);
# 327 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 70 "/usr/include/stdio.h" 3
typedef __darwin_va_list va_list;
# 75 "/usr/include/stdio.h" 3
typedef __darwin_off_t off_t;
# 87 "/usr/include/stdio.h" 3
typedef __darwin_off_t fpos_t;
# 98 "/usr/include/stdio.h" 3
struct __sbuf {
# 99 "/usr/include/stdio.h" 3
unsigned char *_base;
# 100 "/usr/include/stdio.h" 3
int _size;
# 101 "/usr/include/stdio.h" 3
};
# 104 "/usr/include/stdio.h" 3
struct __sFILEX;
# 163 "/usr/include/stdio.h" 3
typedef
# 132 "/usr/include/stdio.h" 3
struct __sFILE {
# 133 "/usr/include/stdio.h" 3
unsigned char *_p;
# 134 "/usr/include/stdio.h" 3
int _r;
# 135 "/usr/include/stdio.h" 3
int _w;
# 136 "/usr/include/stdio.h" 3
short _flags;
# 137 "/usr/include/stdio.h" 3
short _file;
# 138 "/usr/include/stdio.h" 3
__sbuf _bf;
# 139 "/usr/include/stdio.h" 3
int _lbfsize;
# 142 "/usr/include/stdio.h" 3
void *_cookie;
# 143 "/usr/include/stdio.h" 3
int (*_close)(void *);
# 144 "/usr/include/stdio.h" 3
int (*_read)(void *, char *, int);
# 145 "/usr/include/stdio.h" 3
fpos_t (*_seek)(void *, fpos_t, int);
# 146 "/usr/include/stdio.h" 3
int (*_write)(void *, const char *, int);
# 149 "/usr/include/stdio.h" 3
__sbuf _ub;
# 150 "/usr/include/stdio.h" 3
__sFILEX *_extra;
# 151 "/usr/include/stdio.h" 3
int _ur;
# 154 "/usr/include/stdio.h" 3
unsigned char _ubuf[3];
# 155 "/usr/include/stdio.h" 3
unsigned char _nbuf[1];
# 158 "/usr/include/stdio.h" 3
__sbuf _lb;
# 161 "/usr/include/stdio.h" 3
int _blksize;
# 162 "/usr/include/stdio.h" 3
fpos_t _offset;
# 163 "/usr/include/stdio.h" 3
} FILE;
# 171 "/usr/include/stdio.h" 3
extern "C" { extern FILE __sF[]; }
# 249 "/usr/include/stdio.h" 3
extern "C" void clearerr(FILE *);
# 250 "/usr/include/stdio.h" 3
extern "C" int fclose(FILE *);
# 251 "/usr/include/stdio.h" 3
extern "C" int feof(FILE *);
# 252 "/usr/include/stdio.h" 3
extern "C" int ferror(FILE *);
# 253 "/usr/include/stdio.h" 3
extern "C" int fflush(FILE *);
# 254 "/usr/include/stdio.h" 3
extern "C" int fgetc(FILE *);
# 255 "/usr/include/stdio.h" 3
extern "C" int fgetpos(FILE *, fpos_t *);
# 256 "/usr/include/stdio.h" 3
extern "C" char *fgets(char *, int, FILE *);
# 257 "/usr/include/stdio.h" 3
extern "C" FILE *fopen(const char *, const char *);
# 258 "/usr/include/stdio.h" 3
extern "C" int fprintf(FILE *, const char *, ...);
# 259 "/usr/include/stdio.h" 3
extern "C" int fputc(int, FILE *);
# 260 "/usr/include/stdio.h" 3
extern "C" int fputs(const char *, FILE *) __asm__("_fputs");
# 261 "/usr/include/stdio.h" 3
extern "C" size_t fread(void *, size_t, size_t, FILE *);
# 262 "/usr/include/stdio.h" 3
extern "C" FILE *freopen(const char *, const char *, FILE *) __asm__("_freopen");
# 264 "/usr/include/stdio.h" 3
extern "C" int fscanf(FILE *, const char *, ...);
# 265 "/usr/include/stdio.h" 3
extern "C" int fseek(FILE *, long, int);
# 266 "/usr/include/stdio.h" 3
extern "C" int fsetpos(FILE *, const fpos_t *);
# 267 "/usr/include/stdio.h" 3
extern "C" long ftell(FILE *);
# 268 "/usr/include/stdio.h" 3
extern "C" size_t fwrite(const void *, size_t, size_t, FILE *) __asm__("_fwrite");
# 269 "/usr/include/stdio.h" 3
extern "C" int getc(FILE *);
# 270 "/usr/include/stdio.h" 3
extern "C" int getchar();
# 271 "/usr/include/stdio.h" 3
extern "C" char *gets(char *);
# 273 "/usr/include/stdio.h" 3
extern "C" { extern const int sys_nerr; }
# 274 "/usr/include/stdio.h" 3
extern "C" { extern const char *const sys_errlist[]; }
# 276 "/usr/include/stdio.h" 3
extern "C" void perror(const char *);
# 277 "/usr/include/stdio.h" 3
extern "C" int printf(const char *, ...);
# 278 "/usr/include/stdio.h" 3
extern "C" int putc(int, FILE *);
# 279 "/usr/include/stdio.h" 3
extern "C" int putchar(int);
# 280 "/usr/include/stdio.h" 3
extern "C" int puts(const char *);
# 281 "/usr/include/stdio.h" 3
extern "C" int remove(const char *);
# 282 "/usr/include/stdio.h" 3
extern "C" int rename(const char *, const char *);
# 283 "/usr/include/stdio.h" 3
extern "C" void rewind(FILE *);
# 284 "/usr/include/stdio.h" 3
extern "C" int scanf(const char *, ...);
# 285 "/usr/include/stdio.h" 3
extern "C" void setbuf(FILE *, char *);
# 286 "/usr/include/stdio.h" 3
extern "C" int setvbuf(FILE *, char *, int, size_t);
# 287 "/usr/include/stdio.h" 3
extern "C" int sprintf(char *, const char *, ...);
# 288 "/usr/include/stdio.h" 3
extern "C" int sscanf(const char *, const char *, ...);
# 289 "/usr/include/stdio.h" 3
extern "C" FILE *tmpfile();
# 290 "/usr/include/stdio.h" 3
extern "C" char *tmpnam(char *);
# 291 "/usr/include/stdio.h" 3
extern "C" int ungetc(int, FILE *);
# 292 "/usr/include/stdio.h" 3
extern "C" int vfprintf(FILE *, const char *, va_list);
# 293 "/usr/include/stdio.h" 3
extern "C" int vprintf(const char *, va_list);
# 294 "/usr/include/stdio.h" 3
extern "C" int vsprintf(char *, const char *, va_list);
# 296 "/usr/include/stdio.h" 3
extern "C" int asprintf(char **, const char *, ...);
# 297 "/usr/include/stdio.h" 3
extern "C" int vasprintf(char **, const char *, va_list);
# 308 "/usr/include/stdio.h" 3
extern "C" char *ctermid(char *);
# 310 "/usr/include/stdio.h" 3
extern "C" char *ctermid_r(char *);
# 312 "/usr/include/stdio.h" 3
extern "C" FILE *fdopen(int, const char *);
# 314 "/usr/include/stdio.h" 3
extern "C" char *fgetln(FILE *, size_t *);
# 316 "/usr/include/stdio.h" 3
extern "C" int fileno(FILE *);
# 317 "/usr/include/stdio.h" 3
extern "C" void flockfile(FILE *);
# 320 "/usr/include/stdio.h" 3
extern "C" const char *fmtcheck(const char *, const char *);
# 321 "/usr/include/stdio.h" 3
extern "C" int fpurge(FILE *);
# 323 "/usr/include/stdio.h" 3
extern "C" int fseeko(FILE *, off_t, int);
# 324 "/usr/include/stdio.h" 3
extern "C" off_t ftello(FILE *);
# 325 "/usr/include/stdio.h" 3
extern "C" int ftrylockfile(FILE *);
# 326 "/usr/include/stdio.h" 3
extern "C" void funlockfile(FILE *);
# 327 "/usr/include/stdio.h" 3
extern "C" int getc_unlocked(FILE *);
# 328 "/usr/include/stdio.h" 3
extern "C" int getchar_unlocked();
# 330 "/usr/include/stdio.h" 3
extern "C" int getw(FILE *);
# 332 "/usr/include/stdio.h" 3
extern "C" int pclose(FILE *);
# 333 "/usr/include/stdio.h" 3
extern "C" FILE *popen(const char *, const char *);
# 334 "/usr/include/stdio.h" 3
extern "C" int putc_unlocked(int, FILE *);
# 335 "/usr/include/stdio.h" 3
extern "C" int putchar_unlocked(int);
# 337 "/usr/include/stdio.h" 3
extern "C" int putw(int, FILE *);
# 338 "/usr/include/stdio.h" 3
extern "C" void setbuffer(FILE *, char *, int);
# 339 "/usr/include/stdio.h" 3
extern "C" int setlinebuf(FILE *);
# 341 "/usr/include/stdio.h" 3
extern "C" int snprintf(char *, size_t, const char *, ...);
# 342 "/usr/include/stdio.h" 3
extern "C" char *tempnam(const char *, const char *) __asm__("_tempnam");
# 343 "/usr/include/stdio.h" 3
extern "C" int vfscanf(FILE *, const char *, va_list);
# 344 "/usr/include/stdio.h" 3
extern "C" int vscanf(const char *, va_list);
# 345 "/usr/include/stdio.h" 3
extern "C" int vsnprintf(char *, size_t, const char *, va_list);
# 346 "/usr/include/stdio.h" 3
extern "C" int vsscanf(const char *, const char *, va_list);
# 348 "/usr/include/stdio.h" 3
extern "C" FILE *zopen(const char *, const char *, int);
# 357 "/usr/include/stdio.h" 3
extern "C" FILE *funopen(const void *, int (*)(void *, char *, int), int (*)(void *, const char *, int), fpos_t (*)(void *, fpos_t, int), int (*)(void *));
# 372 "/usr/include/stdio.h" 3
extern "C" int __srget(FILE *);
# 373 "/usr/include/stdio.h" 3
extern "C" int __svfscanf(FILE *, const char *, va_list);
# 374 "/usr/include/stdio.h" 3
extern "C" int __swbuf(int, FILE *);
# 383 "/usr/include/stdio.h" 3
static inline int __sputc(int _c, FILE *_p) {
# 384 "/usr/include/stdio.h" 3
if ((--(_p->_w) >= 0) || ((_p->_w >= _p->_lbfsize) && ((char)_c != ('\n')))) {
# 385 "/usr/include/stdio.h" 3
return (*((_p->_p)++)) = _c; } else {
# 387 "/usr/include/stdio.h" 3
return __swbuf(_c, _p); }
# 388 "/usr/include/stdio.h" 3
}
# 65 "/Developer/CUDA/common/inc/cutil.h"
enum CUTBoolean {
# 67 "/Developer/CUDA/common/inc/cutil.h"
CUTFalse,
# 68 "/Developer/CUDA/common/inc/cutil.h"
CUTTrue
# 69 "/Developer/CUDA/common/inc/cutil.h"
};
# 77 "/Developer/CUDA/common/inc/cutil.h"
extern "C" void cutFree(void *);
# 95 "/Developer/CUDA/common/inc/cutil.h"
extern "C" void cutCheckBankAccess(unsigned, unsigned, unsigned, unsigned, unsigned, unsigned, const char *, const int, const char *, const int);
# 108 "/Developer/CUDA/common/inc/cutil.h"
extern "C" char *cutFindFilePath(const char *, const char *);
# 123 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutReadFilef(const char *, float **, unsigned *, bool = false);
# 139 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutReadFiled(const char *, double **, unsigned *, bool = false);
# 155 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutReadFilei(const char *, int **, unsigned *, bool = false);
# 170 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutReadFileui(const char *, unsigned **, unsigned *, bool = false);
# 186 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutReadFileb(const char *, char **, unsigned *, bool = false);
# 202 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutReadFileub(const char *, unsigned char **, unsigned *, bool = false);
# 216 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutWriteFilef(const char *, const float *, unsigned, const float, bool = false);
# 230 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutWriteFiled(const char *, const float *, unsigned, const double, bool = false);
# 242 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutWriteFilei(const char *, const int *, unsigned, bool = false);
# 254 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutWriteFileui(const char *, const unsigned *, unsigned, bool = false);
# 266 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutWriteFileb(const char *, const char *, unsigned, bool = false);
# 278 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutWriteFileub(const char *, const unsigned char *, unsigned, bool = false);
# 294 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutLoadPGMub(const char *, unsigned char **, unsigned *, unsigned *);
# 307 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutLoadPPMub(const char *, unsigned char **, unsigned *, unsigned *);
# 321 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutLoadPPM4ub(const char *, unsigned char **, unsigned *, unsigned *);
# 337 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutLoadPGMi(const char *, unsigned **, unsigned *, unsigned *);
# 353 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutLoadPGMs(const char *, unsigned short **, unsigned *, unsigned *);
# 368 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutLoadPGMf(const char *, float **, unsigned *, unsigned *);
# 380 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutSavePGMub(const char *, unsigned char *, unsigned, unsigned);
# 392 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutSavePPMub(const char *, unsigned char *, unsigned, unsigned);
# 405 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutSavePPM4ub(const char *, unsigned char *, unsigned, unsigned);
# 417 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutSavePGMi(const char *, unsigned *, unsigned, unsigned);
# 429 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutSavePGMs(const char *, unsigned short *, unsigned, unsigned);
# 441 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutSavePGMf(const char *, float *, unsigned, unsigned);
# 462 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutCheckCmdLineFlag(const int, const char **, const char *);
# 476 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumenti(const int, const char **, const char *, int *);
# 490 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumentf(const int, const char **, const char *, float *);
# 504 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumentstr(const int, const char **, const char *, char **);
# 519 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumentListstr(const int, const char **, const char *, char **, unsigned *);
# 533 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutCheckCondition(int, const char *, const int);
# 545 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutComparef(const float *, const float *, const unsigned);
# 558 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutComparei(const int *, const int *, const unsigned);
# 571 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutCompareub(const unsigned char *, const unsigned char *, const unsigned);
# 585 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutCompareube(const unsigned char *, const unsigned char *, const unsigned, const int);
# 599 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutComparefe(const float *, const float *, const unsigned, const float);
# 614 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutCompareL2fe(const float *, const float *, const unsigned, const float);
# 627 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutCreateTimer(unsigned *);
# 636 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutDeleteTimer(unsigned);
# 644 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutStartTimer(const unsigned);
# 652 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutStopTimer(const unsigned);
# 660 "/Developer/CUDA/common/inc/cutil.h"
extern "C" CUTBoolean cutResetTimer(const unsigned);
# 669 "/Developer/CUDA/common/inc/cutil.h"
extern "C" float cutGetTimerValue(const unsigned);
# 680 "/Developer/CUDA/common/inc/cutil.h"
extern "C" float cutGetAverageTimerValue(const unsigned);
# 7 "./HCq_kernel.cu"
static float __shadow_BC[9][4];
# 8 "./HCq_kernel.cu"
static float __shadow_coeffDevice[8500];
# 9 "./HCq_kernel.cu"
float *obs_d;
# 10 "./HCq_kernel.cu"
float *HCq_d;

# 1 "/tmp/tmpxft_00001019_00000000-1_GPUdriver.cudafe1.stub.h" 1 3

extern "C" {


extern void __device_stub___globfunc__Z10HCq_kernelPfS_iifffffff(float *, float *, int, int, float, float, float, float, float, float, float);


}
# 13 "./HCq_kernel.cu" 2
# 12 "GPUdriver.cu"
extern "C" int gethostname(char *, size_t);
# 13 "GPUdriver.cu"
extern "C" void bzero(void *, size_t);
# 14 "GPUdriver.cu"
extern "C" char *strcpy(char *, const char *);
# 18 "GPUdriver.cu"
extern "C" { int cstGPU_init(float *obs_h, int mObs)
# 19 "GPUdriver.cu"
{
# 20 "GPUdriver.cu"
auto int myproc = 0;
# 21 "GPUdriver.cu"
auto int mydevice = 0;
# 23 "GPUdriver.cu"
auto int i; auto int dc;
# 24 "GPUdriver.cu"
auto cudaError_t cerr;
# 25 "GPUdriver.cu"
auto char hostname[64];
# 26 "GPUdriver.cu"
auto cudaDeviceProp dp;
# 28 "GPUdriver.cu"
cudaGetDeviceCount(&dc);
# 29 "GPUdriver.cu"
if (dc > 4)
# 30 "GPUdriver.cu"
{ fprintf((__sF) + 2, "warning: more than %d devices on node (%d)\n", 4, dc); dc = 4; }
# 31 "GPUdriver.cu"
fprintf((__sF) + 2, "Number of devices on this node: %d\n", dc);
# 35 "GPUdriver.cu"
i = mydevice;
# 36 "GPUdriver.cu"
if (dc > 0)
# 37 "GPUdriver.cu"
{
# 38 "GPUdriver.cu"
cerr = cudaSetDevice(i);
# 39 "GPUdriver.cu"
if (cerr) {
# 40 "GPUdriver.cu"
fprintf((__sF) + 2, "    non-zero cerr %d\n", cerr);
# 41 "GPUdriver.cu"
}
# 42 "GPUdriver.cu"
}
# 43 "GPUdriver.cu"
gethostname(hostname, 64);
# 44 "GPUdriver.cu"
fprintf((__sF) + 2, "Setting device %02d for task %03d on host %s\n", i, myproc, hostname);
# 46 "GPUdriver.cu"
cerr = cudaGetDeviceProperties(&dp, i);
# 47 "GPUdriver.cu"
if (cerr) {
# 48 "GPUdriver.cu"
fprintf((__sF) + 2, "Device %02d: cerr = %d\n", i, cerr);
# 49 "GPUdriver.cu"
} else {
# 50 "GPUdriver.cu"
fprintf((__sF) + 2, "Device %02d: name %s\n", i, dp.name);
# 51 "GPUdriver.cu"
fprintf((__sF) + 2, "Device %02d: mem       %d\n", i, (int)(dp.totalGlobalMem));
# 52 "GPUdriver.cu"
fprintf((__sF) + 2, "Device %02d: smem      %d\n", i, (int)(dp.sharedMemPerBlock));
# 53 "GPUdriver.cu"
fprintf((__sF) + 2, "Device %02d: nreg      %d\n", i, dp.regsPerBlock);
# 54 "GPUdriver.cu"
fprintf((__sF) + 2, "Device %02d: warp      %d\n", i, dp.warpSize);
# 55 "GPUdriver.cu"
fprintf((__sF) + 2, "Device %02d: pitch     %d\n", i, (int)(dp.memPitch));
# 56 "GPUdriver.cu"
fprintf((__sF) + 2, "Device %02d: maxthrds  %d\n", i, dp.maxThreadsPerBlock);
# 57 "GPUdriver.cu"
fprintf((__sF) + 2, "Device %02d: maxtdim   %d %d %d\n", i, (dp.maxThreadsDim)[0], (dp.maxThreadsDim)[1], (dp.maxThreadsDim)[2]);
# 60 "GPUdriver.cu"
fprintf((__sF) + 2, "Device %02d: maxgdim   %d %d %d\n", i, (dp.maxGridSize)[0], (dp.maxGridSize)[1], (dp.maxGridSize)[2]);
# 63 "GPUdriver.cu"
fprintf((__sF) + 2, "Device %02d: clock     %d\n", i, dp.clockRate);
# 64 "GPUdriver.cu"
fprintf((__sF) + 2, "Device %02d: talign    %d\n", i, (int)(dp.textureAlignment));
# 65 "GPUdriver.cu"
}
# 67 "GPUdriver.cu"
auto float BoundaryConditions[9][4] = {{(-4), (-1), (-1), (-4)}, {(0), (1), (1), (0)}, {(2), (-1), (-1), (2)}, {(-4), (-1), (1), (0)}, {(-4), (-1), (-1), (2)}, {(0), (1), (-1), (-4)}, {(0), (1), (-1), (2)}, {(2), (-1), (-1), (-4)}, {(2), (-1), (1), (0)}};
# 79 "GPUdriver.cu"
cudaMemcpyToSymbol(__shadow_BC, BoundaryConditions, sizeof(BoundaryConditions));
# 81 "GPUdriver.cu"
cudaMalloc((void **)(&obs_d), (mObs * 9) * sizeof(float));
# 82 "GPUdriver.cu"
cudaMemcpy(obs_d, obs_h, (mObs * 9) * sizeof(float), cudaMemcpyHostToDevice);
# 84 "GPUdriver.cu"
cudaMalloc((void **)(&HCq_d), mObs * sizeof(float));
# 86 "GPUdriver.cu"
return 0;
# 87 "GPUdriver.cu"
} }
# 90 "GPUdriver.cu"
extern "C" { void loadSplineCoeffs_GPU(float *coeffHost, int numCoeffs)
# 91 "GPUdriver.cu"
{
# 92 "GPUdriver.cu"
cudaMemcpyToSymbol(__shadow_coeffDevice, coeffHost, numCoeffs * sizeof(float));
# 93 "GPUdriver.cu"
} }
# 95 "GPUdriver.cu"
extern "C" { void cstGPU_finalize()
# 96 "GPUdriver.cu"
{
# 98 "GPUdriver.cu"
cudaFree(obs_d);
# 99 "GPUdriver.cu"
cudaFree(HCq_d);
# 100 "GPUdriver.cu"
} }
# 103 "GPUdriver.cu"
extern "C" { void HCq_GPU(int mObs, float rmax, float rmin, float zmax, float zmin, float *HCq_h, int pState, int zState)
# 104 "GPUdriver.cu"
{
# 107 "GPUdriver.cu"
auto float dr = ((rmax - rmin) / pState);
# 108 "GPUdriver.cu"
auto float drrecip = ((1.0) / dr);
# 109 "GPUdriver.cu"
auto float dz = ((zmax - zmin) / zState);
# 110 "GPUdriver.cu"
auto float dzrecip = ((1.0) / dz);
# 111 "GPUdriver.cu"
auto float onesixth = ((1.0) / (6.0));
# 119 "GPUdriver.cu"
auto int rem = ((mObs % 64 != 0) ? 1 : 0);
# 120 "GPUdriver.cu"
auto dim3 threads(64);
# 121 "GPUdriver.cu"
auto dim3 grid(mObs / 64 + rem);
# 124 "GPUdriver.cu"
cudaConfigureCall(grid, threads) ? ((void)0) : __device_stub___globfunc__Z10HCq_kernelPfS_iifffffff(obs_d, HCq_d, pState, zState, rmin, dr, drrecip, zmin, dz, dzrecip, onesixth);
# 127 "GPUdriver.cu"
;
# 130 "GPUdriver.cu"
cudaMemcpy(HCq_h, HCq_d, mObs * sizeof(float), cudaMemcpyDeviceToHost);
# 137 "GPUdriver.cu"
} }

# 1 "/tmp/tmpxft_00001019_00000000-1_GPUdriver.cudafe1.stub.c" 1 3

extern "C" {

# 1 "/tmp/tmpxft_00001019_00000000-3_GPUdriver.fatbin.c" 1 3
# 1 "/usr/local/cuda/bin/../include/__cudaFatFormat.h" 1 3
# 83 "/usr/local/cuda/bin/../include/__cudaFatFormat.h" 3
extern "C" {
# 97 "/usr/local/cuda/bin/../include/__cudaFatFormat.h" 3
typedef struct {
    char* gpuProfileName;
    char* cubin;
} __cudaFatCubinEntry;
# 113 "/usr/local/cuda/bin/../include/__cudaFatFormat.h" 3
typedef struct {
    char* gpuProfileName;
    char* ptx;
} __cudaFatPtxEntry;
# 125 "/usr/local/cuda/bin/../include/__cudaFatFormat.h" 3
typedef struct {
    char* gpuProfileName;
    char* debug;
} __cudaFatDebugEntry;


typedef enum {
      __cudaFatDontSearchFlag = (1 << 0),
      __cudaFatDontCacheFlag = (1 << 1),
      __cudaFatSassDebugFlag = (1 << 2)
} __cudaFatCudaBinaryFlag;
# 146 "/usr/local/cuda/bin/../include/__cudaFatFormat.h" 3
typedef struct {
    unsigned long magic;
    unsigned long version;
    unsigned long gpuInfoVersion;
    char* key;
    char* ident;
    char* usageMode;
    __cudaFatPtxEntry *ptx;
    __cudaFatCubinEntry *cubin;
    __cudaFatDebugEntry *debug;
    void* debugInfo;
    unsigned int flags;
} __cudaFatCudaBinary;
# 190 "/usr/local/cuda/bin/../include/__cudaFatFormat.h" 3
void fatGetCubinForGpu( __cudaFatCudaBinary *binary, char* gpuName, char* *cubin, char* *dbgInfoFile );







void fatFreeCubin( char* cubin, char* dbgInfoFile );


}
# 2 "/tmp/tmpxft_00001019_00000000-3_GPUdriver.fatbin.c" 2 3




extern "C" {


static const unsigned char __deviceText[] = {
0x61,0x72,0x63,0x68,0x69,0x74,0x65,0x63,0x74,0x75,0x72,0x65,0x20,0x7b,0x73,0x6d,
0x5f,0x31,0x30,0x7d,0x0a,0x61,0x62,0x69,0x76,0x65,0x72,0x73,0x69,0x6f,0x6e,0x20,
0x7b,0x30,0x7d,0x0a,0x6d,0x6f,0x64,0x6e,0x61,0x6d,0x65,0x20,0x7b,0x63,0x75,0x62,
0x69,0x6e,0x7d,0x0a,0x63,0x6f,0x6e,0x73,0x74,0x73,0x20,0x20,0x7b,0x0a,0x09,0x6e,
0x61,0x6d,0x65,0x20,0x3d,0x20,0x63,0x6f,0x65,0x66,0x66,0x44,0x65,0x76,0x69,0x63,
0x65,0x0a,0x09,0x73,0x65,0x67,0x6e,0x61,0x6d,0x65,0x20,0x3d,0x20,0x63,0x6f,0x6e,
0x73,0x74,0x0a,0x09,0x73,0x65,0x67,0x6e,0x75,0x6d,0x20,0x3d,0x20,0x30,0x0a,0x09,
0x6f,0x66,0x66,0x73,0x65,0x74,0x20,0x3d,0x20,0x31,0x34,0x34,0x0a,0x09,0x62,0x79,
0x74,0x65,0x73,0x20,0x3d,0x20,0x33,0x34,0x30,0x30,0x30,0x0a,0x7d,0x0a,0x63,0x6f,
0x6e,0x73,0x74,0x73,0x20,0x20,0x7b,0x0a,0x09,0x6e,0x61,0x6d,0x65,0x20,0x3d,0x20,
0x42,0x43,0x0a,0x09,0x73,0x65,0x67,0x6e,0x61,0x6d,0x65,0x20,0x3d,0x20,0x63,0x6f,
0x6e,0x73,0x74,0x0a,0x09,0x73,0x65,0x67,0x6e,0x75,0x6d,0x20,0x3d,0x20,0x30,0x0a,
0x09,0x6f,0x66,0x66,0x73,0x65,0x74,0x20,0x3d,0x20,0x30,0x0a,0x09,0x62,0x79,0x74,
0x65,0x73,0x20,0x3d,0x20,0x31,0x34,0x34,0x0a,0x7d,0x0a,0x63,0x6f,0x64,0x65,0x20,
0x20,0x7b,0x0a,0x09,0x6e,0x61,0x6d,0x65,0x20,0x3d,0x20,0x5f,0x5f,0x67,0x6c,0x6f,
0x62,0x66,0x75,0x6e,0x63,0x5f,0x5f,0x5a,0x31,0x30,0x48,0x43,0x71,0x5f,0x6b,0x65,
0x72,0x6e,0x65,0x6c,0x50,0x66,0x53,0x5f,0x69,0x69,0x66,0x66,0x66,0x66,0x66,0x66,
0x66,0x0a,0x09,0x6c,0x6d,0x65,0x6d,0x20,0x3d,0x20,0x30,0x0a,0x09,0x73,0x6d,0x65,
0x6d,0x20,0x3d,0x20,0x36,0x30,0x0a,0x09,0x72,0x65,0x67,0x20,0x3d,0x20,0x33,0x33,
0x0a,0x09,0x62,0x61,0x72,0x20,0x3d,0x20,0x30,0x0a,0x09,0x62,0x69,0x6e,0x63,0x6f,
0x64,0x65,0x20,0x20,0x7b,0x0a,0x09,0x09,0x30,0x78,0x61,0x30,0x30,0x30,0x30,0x30,
0x30,0x35,0x20,0x30,0x78,0x30,0x34,0x30,0x30,0x30,0x37,0x38,0x30,0x20,0x30,0x78,
0x36,0x31,0x30,0x30,0x32,0x63,0x30,0x35,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,
0x30,0x30,0x37,0x20,0x0a,0x09,0x09,0x30,0x78,0x33,0x30,0x30,0x33,0x30,0x32,0x30,
0x31,0x20,0x30,0x78,0x63,0x34,0x31,0x30,0x30,0x37,0x38,0x30,0x20,0x30,0x78,0x32,
0x30,0x30,0x30,0x30,0x32,0x30,0x31,0x20,0x30,0x78,0x30,0x34,0x30,0x30,0x30,0x37,
0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x33,0x30,0x30,0x32,0x30,0x30,0x30,0x31,
0x20,0x30,0x78,0x63,0x34,0x31,0x30,0x30,0x37,0x38,0x30,0x20,0x30,0x78,0x32,0x30,
0x30,0x30,0x63,0x38,0x30,0x39,0x20,0x30,0x78,0x30,0x34,0x32,0x30,0x30,0x37,0x38,
0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x32,0x30,0x31,0x38,0x38,0x34,0x30,0x31,0x20,
0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x33,0x20,0x30,0x78,0x64,0x30,0x30,
0x65,0x30,0x30,0x32,0x35,0x20,0x30,0x78,0x38,0x30,0x63,0x30,0x30,0x37,0x38,0x30,
0x20,0x0a,0x09,0x09,0x30,0x78,0x64,0x30,0x30,0x65,0x30,0x34,0x30,0x64,0x20,0x30,
0x78,0x38,0x30,0x63,0x30,0x30,0x37,0x38,0x30,0x20,0x30,0x78,0x62,0x31,0x30,0x39,
0x66,0x30,0x30,0x30,0x20,0x30,0x78,0x63,0x31,0x30,0x30,0x37,0x34,0x30,0x30,0x20,
0x0a,0x09,0x09,0x30,0x78,0x61,0x30,0x30,0x30,0x30,0x30,0x30,0x31,0x20,0x30,0x78,
0x38,0x63,0x30,0x36,0x34,0x37,0x38,0x30,0x20,0x30,0x78,0x32,0x30,0x33,0x66,0x38,
0x30,0x35,0x39,0x20,0x30,0x78,0x30,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x20,0x0a,
0x09,0x09,0x30,0x78,0x32,0x30,0x30,0x32,0x38,0x30,0x31,0x31,0x20,0x30,0x78,0x30,
0x30,0x30,0x30,0x30,0x30,0x30,0x33,0x20,0x30,0x78,0x33,0x30,0x30,0x34,0x32,0x64,
0x66,0x64,0x20,0x30,0x78,0x36,0x63,0x30,0x31,0x30,0x37,0x63,0x38,0x20,0x0a,0x09,
0x09,0x30,0x78,0x61,0x30,0x31,0x63,0x64,0x30,0x30,0x33,0x20,0x30,0x30,0x30,0x30,
0x30,0x30,0x30,0x30,0x30,0x30,0x20,0x30,0x78,0x31,0x30,0x30,0x30,0x66,0x38,0x35,
0x64,0x20,0x30,0x78,0x30,0x34,0x30,0x33,0x63,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,
0x30,0x78,0x32,0x30,0x30,0x34,0x38,0x34,0x31,0x31,0x20,0x30,0x78,0x30,0x30,0x30,
0x30,0x30,0x30,0x30,0x33,0x20,0x30,0x78,0x64,0x30,0x30,0x65,0x30,0x38,0x31,0x31,
0x20,0x30,0x78,0x38,0x30,0x63,0x30,0x30,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,
0x78,0x32,0x30,0x30,0x38,0x38,0x34,0x31,0x35,0x20,0x30,0x78,0x30,0x30,0x30,0x30,
0x30,0x30,0x30,0x33,0x20,0x30,0x78,0x64,0x30,0x30,0x65,0x30,0x61,0x31,0x35,0x20,
0x30,0x78,0x38,0x30,0x63,0x30,0x30,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,
0x32,0x30,0x30,0x63,0x38,0x34,0x31,0x39,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,
0x30,0x30,0x33,0x20,0x30,0x78,0x64,0x30,0x30,0x65,0x30,0x63,0x31,0x39,0x20,0x30,
0x78,0x38,0x30,0x63,0x30,0x30,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x32,
0x30,0x31,0x30,0x38,0x34,0x31,0x64,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x30,
0x30,0x33,0x20,0x30,0x78,0x64,0x30,0x30,0x65,0x30,0x65,0x31,0x64,0x20,0x30,0x78,
0x38,0x30,0x63,0x30,0x30,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x32,0x30,
0x31,0x34,0x38,0x34,0x32,0x31,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x30,0x30,
0x33,0x20,0x30,0x78,0x64,0x30,0x30,0x65,0x31,0x30,0x32,0x31,0x20,0x30,0x78,0x38,
0x30,0x63,0x30,0x30,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x32,0x30,0x31,
0x63,0x38,0x34,0x30,0x39,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x33,
0x20,0x30,0x78,0x64,0x30,0x30,0x65,0x30,0x34,0x32,0x39,0x20,0x30,0x78,0x38,0x30,
0x63,0x30,0x30,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x31,0x30,0x31,0x63,
0x64,0x30,0x30,0x33,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x32,0x38,0x30,0x20,
0x30,0x78,0x62,0x31,0x30,0x61,0x66,0x36,0x30,0x38,0x20,0x30,0x78,0x63,0x31,0x30,
0x32,0x37,0x61,0x30,0x38,0x20,0x0a,0x09,0x09,0x30,0x78,0x61,0x30,0x30,0x30,0x30,
0x34,0x32,0x64,0x20,0x30,0x78,0x38,0x63,0x30,0x36,0x34,0x37,0x38,0x30,0x20,0x30,
0x78,0x32,0x30,0x33,0x66,0x39,0x36,0x30,0x39,0x20,0x30,0x78,0x30,0x66,0x66,0x66,
0x66,0x66,0x66,0x66,0x20,0x0a,0x09,0x09,0x30,0x78,0x32,0x30,0x30,0x32,0x39,0x36,
0x33,0x31,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x33,0x20,0x30,0x78,
0x33,0x30,0x30,0x32,0x31,0x39,0x66,0x64,0x20,0x30,0x78,0x36,0x63,0x30,0x31,0x38,
0x37,0x63,0x38,0x20,0x0a,0x09,0x09,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x30,0x34,
0x31,0x20,0x30,0x78,0x32,0x30,0x30,0x30,0x30,0x37,0x38,0x30,0x20,0x30,0x78,0x32,
0x30,0x30,0x33,0x38,0x30,0x33,0x35,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x30,
0x30,0x33,0x20,0x0a,0x09,0x09,0x30,0x78,0x61,0x30,0x30,0x30,0x31,0x32,0x33,0x31,
0x20,0x30,0x78,0x63,0x34,0x30,0x30,0x34,0x37,0x38,0x30,0x20,0x30,0x78,0x31,0x30,
0x30,0x30,0x66,0x38,0x35,0x31,0x20,0x30,0x78,0x30,0x34,0x30,0x33,0x63,0x37,0x38,
0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x31,0x30,0x30,0x30,0x66,0x38,0x30,0x31,0x20,
0x30,0x78,0x30,0x34,0x30,0x33,0x63,0x37,0x38,0x30,0x20,0x30,0x78,0x31,0x30,0x30,
0x30,0x66,0x38,0x34,0x39,0x20,0x30,0x78,0x30,0x34,0x30,0x33,0x63,0x37,0x38,0x30,
0x20,0x0a,0x09,0x09,0x30,0x78,0x31,0x30,0x30,0x30,0x66,0x38,0x36,0x31,0x20,0x30,
0x78,0x30,0x34,0x30,0x33,0x63,0x37,0x38,0x30,0x20,0x30,0x78,0x39,0x30,0x30,0x30,
0x31,0x38,0x33,0x31,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x37,0x38,0x30,0x20,
0x0a,0x09,0x09,0x30,0x78,0x61,0x30,0x31,0x63,0x39,0x30,0x30,0x33,0x20,0x30,0x30,
0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x20,0x30,0x78,0x31,0x30,0x30,0x30,0x30,
0x34,0x36,0x35,0x20,0x30,0x78,0x30,0x34,0x30,0x33,0x63,0x37,0x38,0x30,0x20,0x0a,
0x09,0x09,0x30,0x78,0x30,0x30,0x30,0x30,0x32,0x30,0x30,0x31,0x20,0x30,0x78,0x61,
0x30,0x30,0x30,0x30,0x37,0x63,0x30,0x20,0x30,0x78,0x31,0x30,0x31,0x63,0x39,0x30,
0x30,0x33,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x31,0x30,0x30,0x20,0x0a,0x09,
0x09,0x30,0x78,0x33,0x30,0x37,0x63,0x32,0x64,0x66,0x64,0x20,0x30,0x78,0x36,0x63,
0x30,0x30,0x34,0x37,0x63,0x38,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x30,0x34,
0x35,0x20,0x30,0x78,0x32,0x30,0x30,0x30,0x30,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,
0x30,0x78,0x32,0x30,0x30,0x33,0x39,0x36,0x33,0x39,0x20,0x30,0x78,0x30,0x30,0x30,
0x30,0x30,0x30,0x30,0x33,0x20,0x30,0x78,0x61,0x30,0x31,0x63,0x35,0x30,0x30,0x33,
0x20,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x20,0x0a,0x09,0x09,0x30,
0x78,0x30,0x30,0x30,0x30,0x32,0x32,0x30,0x31,0x20,0x30,0x78,0x61,0x30,0x30,0x30,
0x30,0x37,0x63,0x30,0x20,0x30,0x78,0x31,0x30,0x31,0x63,0x35,0x30,0x30,0x33,0x20,
0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x32,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,
0x33,0x30,0x31,0x36,0x63,0x64,0x66,0x64,0x20,0x30,0x78,0x36,0x63,0x32,0x30,0x34,
0x37,0x63,0x38,0x20,0x30,0x78,0x31,0x30,0x31,0x63,0x35,0x30,0x30,0x33,0x20,0x30,
0x78,0x30,0x30,0x30,0x30,0x30,0x32,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x33,
0x30,0x37,0x63,0x33,0x33,0x66,0x64,0x20,0x30,0x78,0x36,0x63,0x30,0x30,0x34,0x37,
0x63,0x38,0x20,0x30,0x78,0x31,0x30,0x31,0x63,0x35,0x30,0x30,0x33,0x20,0x30,0x78,
0x30,0x30,0x30,0x30,0x30,0x32,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x33,0x30,
0x31,0x39,0x63,0x66,0x66,0x64,0x20,0x30,0x78,0x36,0x63,0x32,0x31,0x38,0x37,0x63,
0x38,0x20,0x30,0x78,0x31,0x30,0x31,0x63,0x35,0x30,0x30,0x33,0x20,0x30,0x78,0x30,
0x30,0x30,0x30,0x30,0x35,0x30,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x33,0x30,0x38,
0x31,0x32,0x64,0x66,0x64,0x20,0x30,0x78,0x36,0x63,0x34,0x30,0x63,0x37,0x63,0x38,
0x20,0x30,0x78,0x61,0x30,0x31,0x38,0x32,0x30,0x30,0x33,0x20,0x30,0x30,0x30,0x30,
0x30,0x30,0x30,0x30,0x30,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x31,0x30,0x31,0x38,
0x32,0x30,0x30,0x33,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x32,0x38,0x30,0x20,
0x30,0x78,0x32,0x31,0x33,0x66,0x65,0x63,0x34,0x64,0x20,0x30,0x78,0x30,0x66,0x66,
0x66,0x66,0x66,0x66,0x66,0x20,0x0a,0x09,0x09,0x30,0x78,0x33,0x30,0x31,0x36,0x32,
0x37,0x66,0x64,0x20,0x30,0x78,0x36,0x63,0x30,0x30,0x63,0x37,0x63,0x38,0x20,0x30,
0x78,0x31,0x30,0x31,0x38,0x32,0x30,0x30,0x33,0x20,0x30,0x78,0x30,0x30,0x30,0x30,
0x30,0x32,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x33,0x30,0x38,0x31,0x33,0x33,
0x66,0x64,0x20,0x30,0x78,0x36,0x63,0x34,0x30,0x63,0x37,0x63,0x38,0x20,0x30,0x78,
0x31,0x30,0x31,0x38,0x32,0x30,0x30,0x33,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,
0x32,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x32,0x31,0x33,0x66,0x65,0x65,0x33,
0x64,0x20,0x30,0x78,0x30,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x20,0x30,0x78,0x33,
0x30,0x31,0x39,0x31,0x66,0x66,0x64,0x20,0x30,0x78,0x36,0x63,0x30,0x30,0x63,0x37,
0x63,0x38,0x20,0x0a,0x09,0x09,0x30,0x78,0x31,0x30,0x31,0x38,0x32,0x30,0x30,0x33,
0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x32,0x38,0x30,0x20,0x30,0x78,0x61,0x30,
0x30,0x30,0x32,0x63,0x34,0x39,0x20,0x30,0x78,0x34,0x34,0x30,0x31,0x34,0x37,0x38,
0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x31,0x30,0x30,0x30,0x64,0x30,0x30,0x31,0x20,
0x30,0x78,0x30,0x34,0x32,0x33,0x63,0x37,0x38,0x30,0x20,0x30,0x78,0x65,0x30,0x31,
0x32,0x64,0x32,0x30,0x31,0x20,0x30,0x78,0x30,0x30,0x32,0x30,0x30,0x37,0x38,0x30,
0x20,0x0a,0x09,0x09,0x30,0x78,0x62,0x30,0x34,0x30,0x31,0x32,0x30,0x30,0x20,0x30,
0x78,0x63,0x31,0x30,0x30,0x37,0x34,0x35,0x30,0x20,0x30,0x78,0x61,0x30,0x30,0x30,
0x32,0x38,0x36,0x39,0x20,0x30,0x78,0x63,0x34,0x31,0x30,0x34,0x37,0x38,0x30,0x20,
0x0a,0x09,0x09,0x30,0x78,0x62,0x30,0x38,0x32,0x33,0x34,0x30,0x31,0x20,0x30,0x78,
0x36,0x30,0x34,0x30,0x34,0x37,0x63,0x30,0x20,0x30,0x78,0x61,0x30,0x30,0x35,0x62,
0x30,0x30,0x33,0x20,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x20,0x0a,
0x09,0x09,0x30,0x78,0x61,0x30,0x30,0x30,0x30,0x31,0x66,0x64,0x20,0x30,0x78,0x30,
0x63,0x30,0x31,0x34,0x37,0x66,0x38,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x30,
0x37,0x35,0x20,0x30,0x78,0x32,0x30,0x30,0x30,0x33,0x37,0x38,0x30,0x20,0x0a,0x09,
0x09,0x30,0x78,0x31,0x30,0x30,0x35,0x61,0x30,0x30,0x33,0x20,0x30,0x78,0x30,0x30,
0x30,0x30,0x30,0x31,0x30,0x30,0x20,0x30,0x78,0x62,0x30,0x30,0x30,0x62,0x34,0x30,
0x31,0x20,0x30,0x78,0x30,0x34,0x30,0x30,0x30,0x30,0x30,0x33,0x20,0x0a,0x09,0x09,
0x30,0x78,0x61,0x30,0x30,0x30,0x30,0x30,0x34,0x39,0x20,0x30,0x78,0x63,0x34,0x30,
0x30,0x34,0x37,0x38,0x30,0x20,0x30,0x78,0x62,0x30,0x30,0x30,0x32,0x34,0x36,0x31,
0x20,0x30,0x78,0x30,0x62,0x66,0x38,0x30,0x30,0x30,0x33,0x20,0x0a,0x09,0x09,0x30,
0x78,0x63,0x30,0x30,0x30,0x30,0x30,0x35,0x34,0x20,0x30,0x78,0x63,0x30,0x31,0x38,
0x33,0x30,0x36,0x63,0x20,0x30,0x78,0x63,0x30,0x31,0x35,0x30,0x30,0x30,0x30,0x20,
0x30,0x78,0x63,0x30,0x31,0x62,0x33,0x30,0x35,0x34,0x20,0x0a,0x09,0x09,0x30,0x78,
0x63,0x30,0x30,0x30,0x64,0x63,0x30,0x31,0x20,0x30,0x78,0x30,0x30,0x32,0x30,0x30,
0x37,0x38,0x30,0x20,0x30,0x78,0x63,0x30,0x30,0x30,0x32,0x61,0x35,0x35,0x20,0x30,
0x78,0x30,0x34,0x30,0x38,0x30,0x30,0x30,0x33,0x20,0x0a,0x09,0x09,0x30,0x78,0x62,
0x30,0x38,0x33,0x32,0x35,0x66,0x64,0x20,0x30,0x78,0x36,0x30,0x34,0x31,0x30,0x37,
0x63,0x38,0x20,0x30,0x78,0x65,0x30,0x31,0x35,0x64,0x63,0x30,0x31,0x20,0x30,0x78,
0x30,0x34,0x32,0x30,0x30,0x32,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x31,0x30,
0x30,0x30,0x30,0x30,0x36,0x31,0x20,0x30,0x78,0x30,0x34,0x30,0x33,0x63,0x37,0x38,
0x30,0x20,0x30,0x78,0x31,0x30,0x30,0x35,0x62,0x30,0x30,0x33,0x20,0x30,0x78,0x30,
0x30,0x30,0x30,0x30,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x31,0x30,0x30,
0x30,0x66,0x38,0x36,0x31,0x20,0x30,0x78,0x30,0x34,0x30,0x33,0x63,0x37,0x38,0x30,
0x20,0x30,0x78,0x66,0x30,0x30,0x30,0x30,0x30,0x30,0x31,0x20,0x30,0x78,0x65,0x30,
0x30,0x30,0x30,0x30,0x30,0x32,0x20,0x0a,0x09,0x09,0x30,0x78,0x61,0x30,0x30,0x38,
0x65,0x30,0x30,0x33,0x20,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x20,
0x30,0x78,0x33,0x30,0x38,0x31,0x32,0x63,0x30,0x31,0x20,0x30,0x78,0x36,0x34,0x34,
0x30,0x63,0x37,0x64,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x61,0x30,0x30,0x30,0x30,
0x31,0x66,0x64,0x20,0x30,0x78,0x30,0x63,0x30,0x31,0x34,0x37,0x63,0x38,0x20,0x30,
0x78,0x31,0x30,0x30,0x37,0x34,0x30,0x30,0x33,0x20,0x30,0x78,0x30,0x30,0x30,0x30,
0x31,0x31,0x30,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x31,0x31,0x30,0x30,0x66,0x32,
0x30,0x30,0x20,0x30,0x78,0x62,0x31,0x34,0x30,0x37,0x30,0x30,0x30,0x20,0x30,0x78,
0x62,0x30,0x34,0x30,0x31,0x32,0x30,0x30,0x20,0x30,0x78,0x63,0x31,0x30,0x30,0x37,
0x34,0x30,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x61,0x30,0x30,0x30,0x30,0x30,0x30,
0x31,0x20,0x30,0x78,0x63,0x34,0x31,0x30,0x34,0x37,0x38,0x30,0x20,0x30,0x78,0x61,
0x30,0x30,0x37,0x31,0x30,0x30,0x33,0x20,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,
0x30,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x62,0x30,0x38,0x32,0x30,0x31,0x66,0x64,
0x20,0x30,0x78,0x36,0x30,0x34,0x30,0x34,0x37,0x64,0x38,0x20,0x30,0x78,0x31,0x30,
0x30,0x37,0x30,0x30,0x30,0x33,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x31,0x31,0x30,
0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x62,0x30,0x30,0x30,0x38,0x30,0x30,0x31,0x20,
0x30,0x78,0x30,0x34,0x30,0x30,0x30,0x30,0x30,0x33,0x20,0x30,0x78,0x61,0x30,0x30,
0x30,0x30,0x30,0x34,0x39,0x20,0x30,0x78,0x63,0x34,0x30,0x30,0x34,0x37,0x38,0x30,
0x20,0x0a,0x09,0x09,0x30,0x78,0x62,0x30,0x30,0x30,0x32,0x34,0x36,0x64,0x20,0x30,
0x78,0x30,0x62,0x66,0x38,0x30,0x30,0x30,0x33,0x20,0x30,0x78,0x63,0x30,0x30,0x30,
0x30,0x30,0x35,0x34,0x20,0x30,0x78,0x63,0x30,0x31,0x62,0x33,0x36,0x37,0x38,0x20,
0x0a,0x09,0x09,0x30,0x78,0x63,0x30,0x31,0x35,0x30,0x30,0x30,0x30,0x20,0x30,0x78,
0x63,0x30,0x31,0x65,0x33,0x36,0x35,0x34,0x20,0x30,0x78,0x63,0x30,0x30,0x30,0x64,
0x63,0x30,0x31,0x20,0x30,0x78,0x30,0x30,0x32,0x30,0x30,0x37,0x38,0x30,0x20,0x0a,
0x09,0x09,0x30,0x78,0x63,0x30,0x30,0x30,0x32,0x61,0x35,0x35,0x20,0x30,0x78,0x30,
0x34,0x30,0x38,0x30,0x30,0x30,0x33,0x20,0x30,0x78,0x62,0x30,0x38,0x33,0x32,0x35,
0x66,0x64,0x20,0x30,0x78,0x36,0x30,0x34,0x31,0x30,0x37,0x64,0x38,0x20,0x0a,0x09,
0x09,0x30,0x78,0x65,0x30,0x31,0x35,0x64,0x63,0x30,0x31,0x20,0x30,0x78,0x30,0x34,
0x32,0x30,0x31,0x32,0x38,0x30,0x20,0x30,0x78,0x31,0x30,0x30,0x37,0x31,0x30,0x30,
0x33,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,
0x30,0x78,0x31,0x30,0x30,0x30,0x66,0x38,0x30,0x31,0x20,0x30,0x78,0x30,0x34,0x30,
0x33,0x63,0x37,0x38,0x30,0x20,0x30,0x78,0x30,0x30,0x30,0x32,0x32,0x63,0x30,0x35,
0x20,0x30,0x78,0x63,0x30,0x30,0x30,0x30,0x37,0x38,0x32,0x20,0x0a,0x09,0x09,0x30,
0x78,0x65,0x34,0x38,0x38,0x30,0x30,0x36,0x31,0x20,0x30,0x78,0x30,0x30,0x30,0x36,
0x30,0x37,0x38,0x30,0x20,0x30,0x78,0x31,0x30,0x30,0x38,0x65,0x30,0x30,0x33,0x20,
0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,
0x33,0x30,0x31,0x36,0x32,0x37,0x66,0x64,0x20,0x30,0x78,0x36,0x63,0x30,0x30,0x38,
0x37,0x64,0x38,0x20,0x30,0x78,0x33,0x30,0x31,0x36,0x63,0x64,0x66,0x64,0x20,0x30,
0x78,0x36,0x63,0x32,0x30,0x39,0x31,0x35,0x38,0x20,0x0a,0x09,0x09,0x30,0x78,0x31,
0x30,0x30,0x38,0x65,0x30,0x30,0x33,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x31,0x31,
0x30,0x30,0x20,0x30,0x78,0x32,0x31,0x30,0x31,0x65,0x63,0x34,0x39,0x20,0x30,0x78,
0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x33,0x20,0x0a,0x09,0x09,0x30,0x78,0x31,0x30,
0x30,0x30,0x64,0x30,0x30,0x31,0x20,0x30,0x78,0x30,0x34,0x32,0x33,0x63,0x37,0x38,
0x30,0x20,0x30,0x78,0x61,0x30,0x30,0x30,0x32,0x34,0x34,0x39,0x20,0x30,0x78,0x34,
0x34,0x30,0x31,0x34,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x65,0x30,0x31,
0x32,0x64,0x32,0x30,0x31,0x20,0x30,0x78,0x30,0x30,0x32,0x30,0x30,0x37,0x38,0x30,
0x20,0x30,0x78,0x62,0x30,0x34,0x30,0x31,0x32,0x30,0x30,0x20,0x30,0x78,0x63,0x31,
0x30,0x30,0x37,0x34,0x30,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x61,0x30,0x30,0x30,
0x30,0x30,0x30,0x31,0x20,0x30,0x78,0x63,0x34,0x31,0x30,0x34,0x37,0x38,0x30,0x20,
0x30,0x78,0x61,0x30,0x30,0x38,0x62,0x30,0x30,0x33,0x20,0x30,0x30,0x30,0x30,0x30,
0x30,0x30,0x30,0x30,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x62,0x30,0x38,0x32,0x30,
0x31,0x66,0x64,0x20,0x30,0x78,0x36,0x30,0x34,0x30,0x34,0x37,0x64,0x38,0x20,0x30,
0x78,0x31,0x30,0x30,0x38,0x61,0x30,0x30,0x33,0x20,0x30,0x78,0x30,0x30,0x30,0x30,
0x31,0x31,0x30,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x62,0x30,0x30,0x30,0x38,0x30,
0x30,0x31,0x20,0x30,0x78,0x30,0x34,0x30,0x30,0x30,0x30,0x30,0x33,0x20,0x30,0x78,
0x61,0x30,0x30,0x30,0x30,0x30,0x34,0x39,0x20,0x30,0x78,0x63,0x34,0x30,0x30,0x34,
0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x62,0x30,0x30,0x30,0x32,0x34,0x36,
0x64,0x20,0x30,0x78,0x30,0x62,0x66,0x38,0x30,0x30,0x30,0x33,0x20,0x30,0x78,0x63,
0x30,0x30,0x30,0x30,0x30,0x35,0x34,0x20,0x30,0x78,0x63,0x30,0x31,0x62,0x33,0x36,
0x37,0x38,0x20,0x0a,0x09,0x09,0x30,0x78,0x63,0x30,0x31,0x35,0x30,0x30,0x30,0x30,
0x20,0x30,0x78,0x63,0x30,0x31,0x65,0x33,0x36,0x35,0x34,0x20,0x30,0x78,0x63,0x30,
0x30,0x30,0x64,0x63,0x30,0x31,0x20,0x30,0x78,0x30,0x30,0x32,0x30,0x30,0x37,0x38,
0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x63,0x30,0x30,0x30,0x32,0x61,0x35,0x35,0x20,
0x30,0x78,0x30,0x34,0x30,0x38,0x30,0x30,0x30,0x33,0x20,0x30,0x78,0x62,0x30,0x38,
0x33,0x32,0x35,0x66,0x64,0x20,0x30,0x78,0x36,0x30,0x34,0x31,0x30,0x37,0x64,0x38,
0x20,0x0a,0x09,0x09,0x30,0x78,0x65,0x30,0x31,0x35,0x64,0x63,0x30,0x31,0x20,0x30,
0x78,0x30,0x34,0x32,0x30,0x31,0x32,0x38,0x30,0x20,0x30,0x78,0x31,0x30,0x30,0x38,
0x62,0x30,0x30,0x33,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x37,0x38,0x30,0x20,
0x0a,0x09,0x09,0x30,0x78,0x31,0x30,0x30,0x30,0x66,0x38,0x30,0x31,0x20,0x30,0x78,
0x30,0x34,0x30,0x33,0x63,0x37,0x38,0x30,0x20,0x30,0x78,0x33,0x30,0x30,0x30,0x63,
0x63,0x34,0x39,0x20,0x30,0x78,0x30,0x34,0x32,0x35,0x38,0x37,0x38,0x32,0x20,0x0a,
0x09,0x09,0x30,0x78,0x30,0x30,0x30,0x32,0x32,0x34,0x30,0x35,0x20,0x30,0x78,0x63,
0x30,0x30,0x30,0x30,0x37,0x38,0x30,0x20,0x30,0x78,0x65,0x34,0x38,0x62,0x30,0x30,
0x36,0x31,0x20,0x30,0x78,0x30,0x30,0x30,0x36,0x30,0x37,0x38,0x30,0x20,0x0a,0x09,
0x09,0x30,0x78,0x61,0x30,0x30,0x30,0x33,0x32,0x34,0x39,0x20,0x30,0x78,0x34,0x34,
0x30,0x31,0x34,0x37,0x38,0x32,0x20,0x30,0x78,0x31,0x30,0x30,0x30,0x64,0x36,0x30,
0x31,0x20,0x30,0x78,0x30,0x34,0x32,0x33,0x63,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,
0x30,0x78,0x65,0x30,0x31,0x32,0x64,0x38,0x30,0x31,0x20,0x30,0x78,0x30,0x30,0x32,
0x30,0x30,0x37,0x38,0x30,0x20,0x30,0x78,0x62,0x30,0x34,0x30,0x31,0x34,0x30,0x30,
0x20,0x30,0x78,0x63,0x31,0x30,0x30,0x37,0x61,0x35,0x34,0x20,0x0a,0x09,0x09,0x30,
0x78,0x61,0x30,0x30,0x30,0x32,0x61,0x36,0x64,0x20,0x30,0x78,0x63,0x34,0x31,0x30,
0x34,0x37,0x38,0x30,0x20,0x30,0x78,0x61,0x30,0x30,0x61,0x35,0x30,0x30,0x33,0x20,
0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,
0x31,0x30,0x30,0x30,0x33,0x30,0x34,0x39,0x20,0x30,0x78,0x30,0x34,0x30,0x33,0x63,
0x37,0x38,0x30,0x20,0x30,0x78,0x62,0x30,0x38,0x32,0x33,0x36,0x30,0x31,0x20,0x30,
0x78,0x36,0x30,0x34,0x30,0x34,0x37,0x65,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x61,
0x30,0x30,0x30,0x30,0x31,0x66,0x64,0x20,0x30,0x78,0x30,0x63,0x30,0x31,0x34,0x37,
0x64,0x38,0x20,0x30,0x78,0x31,0x30,0x30,0x61,0x34,0x30,0x30,0x33,0x20,0x30,0x78,
0x30,0x30,0x30,0x30,0x32,0x31,0x30,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x62,0x30,
0x30,0x30,0x62,0x36,0x30,0x31,0x20,0x30,0x78,0x30,0x34,0x30,0x30,0x30,0x30,0x30,
0x33,0x20,0x30,0x78,0x63,0x30,0x30,0x30,0x30,0x30,0x37,0x39,0x20,0x30,0x78,0x30,
0x30,0x30,0x30,0x30,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x61,0x30,0x30,
0x30,0x30,0x30,0x36,0x31,0x20,0x30,0x78,0x63,0x34,0x30,0x30,0x34,0x37,0x38,0x30,
0x20,0x30,0x78,0x63,0x30,0x31,0x65,0x30,0x30,0x30,0x31,0x20,0x30,0x78,0x30,0x30,
0x30,0x30,0x30,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x62,0x30,0x30,0x30,
0x33,0x30,0x37,0x39,0x20,0x30,0x78,0x30,0x62,0x66,0x38,0x30,0x30,0x30,0x33,0x20,
0x30,0x78,0x63,0x30,0x31,0x65,0x33,0x63,0x37,0x63,0x20,0x30,0x78,0x63,0x30,0x31,
0x66,0x33,0x63,0x37,0x38,0x20,0x0a,0x09,0x09,0x30,0x78,0x63,0x30,0x30,0x30,0x64,
0x63,0x30,0x31,0x20,0x30,0x78,0x30,0x30,0x32,0x30,0x30,0x37,0x38,0x30,0x20,0x30,
0x78,0x63,0x30,0x30,0x30,0x33,0x63,0x37,0x39,0x20,0x30,0x78,0x30,0x34,0x30,0x38,
0x30,0x30,0x30,0x33,0x20,0x0a,0x09,0x09,0x30,0x78,0x62,0x30,0x38,0x33,0x33,0x31,
0x66,0x64,0x20,0x30,0x78,0x36,0x30,0x34,0x31,0x30,0x37,0x65,0x38,0x20,0x30,0x78,
0x65,0x30,0x31,0x65,0x64,0x63,0x30,0x31,0x20,0x30,0x78,0x30,0x34,0x32,0x30,0x32,
0x32,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x31,0x30,0x30,0x30,0x30,0x30,0x36,
0x31,0x20,0x30,0x78,0x30,0x34,0x30,0x33,0x63,0x37,0x38,0x30,0x20,0x30,0x78,0x31,
0x30,0x30,0x61,0x35,0x30,0x30,0x33,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x37,
0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x31,0x30,0x30,0x30,0x66,0x38,0x36,0x31,
0x20,0x30,0x78,0x30,0x34,0x30,0x33,0x63,0x37,0x38,0x30,0x20,0x30,0x78,0x66,0x30,
0x30,0x30,0x30,0x30,0x30,0x31,0x20,0x30,0x78,0x65,0x30,0x30,0x30,0x30,0x30,0x30,
0x32,0x20,0x0a,0x09,0x09,0x30,0x78,0x61,0x30,0x30,0x64,0x38,0x30,0x30,0x33,0x20,
0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x20,0x30,0x78,0x33,0x30,0x38,
0x31,0x33,0x32,0x30,0x31,0x20,0x30,0x78,0x36,0x34,0x34,0x30,0x63,0x37,0x66,0x30,
0x20,0x0a,0x09,0x09,0x30,0x78,0x61,0x30,0x30,0x30,0x30,0x31,0x66,0x64,0x20,0x30,
0x78,0x30,0x63,0x30,0x31,0x34,0x37,0x65,0x38,0x20,0x30,0x78,0x31,0x30,0x30,0x62,
0x65,0x30,0x30,0x33,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x33,0x31,0x30,0x30,0x20,
0x0a,0x09,0x09,0x30,0x78,0x31,0x31,0x30,0x30,0x66,0x38,0x30,0x30,0x20,0x30,0x78,
0x62,0x31,0x34,0x30,0x37,0x36,0x30,0x30,0x20,0x30,0x78,0x62,0x30,0x34,0x30,0x31,
0x34,0x30,0x30,0x20,0x30,0x78,0x63,0x31,0x30,0x30,0x37,0x61,0x30,0x30,0x20,0x0a,
0x09,0x09,0x30,0x78,0x61,0x30,0x30,0x30,0x30,0x30,0x30,0x31,0x20,0x30,0x78,0x63,
0x34,0x31,0x30,0x34,0x37,0x38,0x30,0x20,0x30,0x78,0x61,0x30,0x30,0x62,0x62,0x30,
0x30,0x33,0x20,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x20,0x0a,0x09,
0x09,0x30,0x78,0x62,0x30,0x38,0x32,0x30,0x31,0x66,0x64,0x20,0x30,0x78,0x36,0x30,
0x34,0x30,0x34,0x37,0x66,0x38,0x20,0x30,0x78,0x31,0x30,0x30,0x62,0x61,0x30,0x30,
0x33,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x33,0x31,0x30,0x30,0x20,0x0a,0x09,0x09,
0x30,0x78,0x62,0x30,0x30,0x30,0x38,0x30,0x37,0x39,0x20,0x30,0x78,0x30,0x34,0x30,
0x30,0x30,0x30,0x30,0x33,0x20,0x30,0x78,0x63,0x30,0x31,0x65,0x33,0x63,0x30,0x30,
0x20,0x30,0x78,0x63,0x30,0x30,0x30,0x33,0x63,0x30,0x30,0x20,0x0a,0x09,0x09,0x30,
0x78,0x61,0x30,0x30,0x30,0x33,0x63,0x37,0x39,0x20,0x30,0x78,0x63,0x34,0x30,0x30,
0x34,0x37,0x38,0x30,0x20,0x30,0x78,0x62,0x30,0x30,0x30,0x33,0x63,0x37,0x64,0x20,
0x30,0x78,0x30,0x62,0x66,0x38,0x30,0x30,0x30,0x33,0x20,0x0a,0x09,0x09,0x30,0x78,
0x63,0x30,0x31,0x66,0x33,0x65,0x38,0x30,0x20,0x30,0x78,0x63,0x30,0x32,0x30,0x33,
0x65,0x37,0x63,0x20,0x30,0x78,0x62,0x30,0x38,0x33,0x33,0x64,0x66,0x64,0x20,0x30,
0x78,0x36,0x30,0x34,0x31,0x30,0x37,0x66,0x38,0x20,0x0a,0x09,0x09,0x30,0x78,0x63,
0x30,0x30,0x30,0x64,0x63,0x30,0x31,0x20,0x30,0x78,0x30,0x30,0x32,0x30,0x30,0x37,
0x38,0x30,0x20,0x30,0x78,0x63,0x30,0x30,0x30,0x33,0x65,0x37,0x39,0x20,0x30,0x78,
0x30,0x34,0x30,0x38,0x30,0x30,0x30,0x33,0x20,0x0a,0x09,0x09,0x30,0x78,0x65,0x30,
0x31,0x65,0x64,0x63,0x30,0x31,0x20,0x30,0x78,0x30,0x34,0x32,0x30,0x33,0x32,0x38,
0x30,0x20,0x30,0x78,0x31,0x30,0x30,0x62,0x62,0x30,0x30,0x33,0x20,0x30,0x78,0x30,
0x30,0x30,0x30,0x30,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x31,0x30,0x30,
0x30,0x66,0x38,0x30,0x31,0x20,0x30,0x78,0x30,0x34,0x30,0x33,0x63,0x37,0x38,0x30,
0x20,0x30,0x78,0x30,0x30,0x30,0x32,0x33,0x32,0x30,0x35,0x20,0x30,0x78,0x63,0x30,
0x30,0x30,0x30,0x37,0x38,0x32,0x20,0x0a,0x09,0x09,0x30,0x78,0x65,0x34,0x38,0x38,
0x30,0x30,0x36,0x31,0x20,0x30,0x78,0x30,0x30,0x30,0x36,0x30,0x37,0x38,0x30,0x20,
0x30,0x78,0x31,0x30,0x30,0x64,0x38,0x30,0x30,0x33,0x20,0x30,0x78,0x30,0x30,0x30,
0x30,0x30,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x33,0x30,0x31,0x39,0x31,
0x66,0x66,0x64,0x20,0x30,0x78,0x36,0x63,0x30,0x30,0x38,0x37,0x66,0x38,0x20,0x30,
0x78,0x33,0x30,0x31,0x39,0x63,0x66,0x66,0x64,0x20,0x30,0x78,0x36,0x63,0x32,0x30,
0x62,0x31,0x37,0x38,0x20,0x0a,0x09,0x09,0x30,0x78,0x31,0x30,0x30,0x64,0x38,0x30,
0x30,0x33,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x33,0x31,0x30,0x30,0x20,0x30,0x78,
0x32,0x31,0x30,0x31,0x65,0x65,0x37,0x39,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,
0x30,0x30,0x33,0x20,0x0a,0x09,0x09,0x30,0x78,0x31,0x30,0x30,0x30,0x64,0x36,0x30,
0x31,0x20,0x30,0x78,0x30,0x34,0x32,0x33,0x63,0x37,0x38,0x30,0x20,0x30,0x78,0x61,
0x30,0x30,0x30,0x33,0x63,0x37,0x39,0x20,0x30,0x78,0x34,0x34,0x30,0x31,0x34,0x37,
0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x65,0x30,0x31,0x65,0x64,0x38,0x30,0x31,
0x20,0x30,0x78,0x30,0x30,0x32,0x30,0x30,0x37,0x38,0x30,0x20,0x30,0x78,0x62,0x30,
0x34,0x30,0x31,0x34,0x30,0x30,0x20,0x30,0x78,0x63,0x31,0x30,0x30,0x37,0x61,0x30,
0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x61,0x30,0x30,0x30,0x30,0x30,0x30,0x31,0x20,
0x30,0x78,0x63,0x34,0x31,0x30,0x34,0x37,0x38,0x30,0x20,0x30,0x78,0x61,0x30,0x30,
0x64,0x35,0x30,0x30,0x33,0x20,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,
0x20,0x0a,0x09,0x09,0x30,0x78,0x62,0x30,0x38,0x32,0x30,0x31,0x66,0x64,0x20,0x30,
0x78,0x36,0x30,0x34,0x30,0x34,0x37,0x66,0x38,0x20,0x30,0x78,0x31,0x30,0x30,0x64,
0x34,0x30,0x30,0x33,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x33,0x31,0x30,0x30,0x20,
0x0a,0x09,0x09,0x30,0x78,0x62,0x30,0x30,0x30,0x38,0x30,0x37,0x39,0x20,0x30,0x78,
0x30,0x34,0x30,0x30,0x30,0x30,0x30,0x33,0x20,0x30,0x78,0x63,0x30,0x31,0x65,0x33,
0x63,0x30,0x30,0x20,0x30,0x78,0x63,0x30,0x30,0x30,0x33,0x63,0x30,0x30,0x20,0x0a,
0x09,0x09,0x30,0x78,0x61,0x30,0x30,0x30,0x33,0x63,0x37,0x39,0x20,0x30,0x78,0x63,
0x34,0x30,0x30,0x34,0x37,0x38,0x30,0x20,0x30,0x78,0x62,0x30,0x30,0x30,0x33,0x63,
0x37,0x64,0x20,0x30,0x78,0x30,0x62,0x66,0x38,0x30,0x30,0x30,0x33,0x20,0x0a,0x09,
0x09,0x30,0x78,0x63,0x30,0x31,0x66,0x33,0x65,0x38,0x30,0x20,0x30,0x78,0x63,0x30,
0x32,0x30,0x33,0x65,0x37,0x63,0x20,0x30,0x78,0x62,0x30,0x38,0x33,0x33,0x64,0x66,
0x64,0x20,0x30,0x78,0x36,0x30,0x34,0x31,0x30,0x37,0x66,0x38,0x20,0x0a,0x09,0x09,
0x30,0x78,0x63,0x30,0x30,0x30,0x64,0x63,0x30,0x31,0x20,0x30,0x78,0x30,0x30,0x32,
0x30,0x30,0x37,0x38,0x30,0x20,0x30,0x78,0x63,0x30,0x30,0x30,0x33,0x65,0x37,0x39,
0x20,0x30,0x78,0x30,0x34,0x30,0x38,0x30,0x30,0x30,0x33,0x20,0x0a,0x09,0x09,0x30,
0x78,0x65,0x30,0x31,0x65,0x64,0x63,0x30,0x31,0x20,0x30,0x78,0x30,0x34,0x32,0x30,
0x33,0x32,0x38,0x30,0x20,0x30,0x78,0x31,0x30,0x30,0x64,0x35,0x30,0x30,0x33,0x20,
0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,
0x31,0x30,0x30,0x30,0x66,0x38,0x30,0x31,0x20,0x30,0x78,0x30,0x34,0x30,0x33,0x63,
0x37,0x38,0x30,0x20,0x30,0x78,0x33,0x30,0x30,0x30,0x63,0x65,0x37,0x39,0x20,0x30,
0x78,0x30,0x34,0x32,0x36,0x34,0x37,0x38,0x32,0x20,0x0a,0x09,0x09,0x30,0x78,0x30,
0x30,0x30,0x32,0x33,0x63,0x30,0x35,0x20,0x30,0x78,0x63,0x30,0x30,0x30,0x30,0x37,
0x38,0x30,0x20,0x30,0x78,0x65,0x34,0x38,0x62,0x30,0x30,0x36,0x31,0x20,0x30,0x78,
0x30,0x30,0x30,0x36,0x30,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x66,0x30,
0x30,0x30,0x30,0x30,0x30,0x31,0x20,0x30,0x78,0x65,0x30,0x30,0x30,0x30,0x30,0x30,
0x32,0x20,0x30,0x78,0x61,0x30,0x30,0x65,0x65,0x30,0x30,0x33,0x20,0x30,0x30,0x30,
0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x30,0x30,0x30,
0x30,0x33,0x61,0x30,0x31,0x20,0x30,0x78,0x61,0x30,0x30,0x30,0x30,0x37,0x66,0x30,
0x20,0x30,0x78,0x31,0x30,0x30,0x65,0x64,0x30,0x30,0x33,0x20,0x30,0x78,0x30,0x30,
0x30,0x30,0x33,0x31,0x30,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x62,0x30,0x30,0x30,
0x62,0x34,0x30,0x31,0x20,0x30,0x78,0x30,0x34,0x30,0x30,0x30,0x30,0x30,0x33,0x20,
0x30,0x78,0x61,0x30,0x30,0x30,0x30,0x30,0x36,0x39,0x20,0x30,0x78,0x63,0x34,0x30,
0x30,0x34,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x62,0x30,0x30,0x30,0x33,
0x34,0x37,0x35,0x20,0x30,0x78,0x30,0x62,0x66,0x38,0x30,0x30,0x30,0x33,0x20,0x30,
0x78,0x63,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x20,0x30,0x78,0x63,0x30,0x31,0x64,
0x33,0x61,0x37,0x34,0x20,0x0a,0x09,0x09,0x30,0x78,0x63,0x30,0x30,0x30,0x64,0x63,
0x30,0x31,0x20,0x30,0x78,0x30,0x30,0x32,0x30,0x30,0x37,0x38,0x30,0x20,0x30,0x78,
0x63,0x30,0x30,0x30,0x33,0x61,0x37,0x35,0x20,0x30,0x78,0x30,0x34,0x30,0x38,0x30,
0x30,0x30,0x33,0x20,0x0a,0x09,0x09,0x30,0x78,0x62,0x30,0x38,0x33,0x33,0x35,0x66,
0x64,0x20,0x30,0x78,0x36,0x30,0x34,0x31,0x30,0x37,0x66,0x38,0x20,0x30,0x78,0x65,
0x30,0x31,0x64,0x64,0x63,0x30,0x31,0x20,0x30,0x78,0x30,0x34,0x32,0x30,0x33,0x32,
0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x31,0x30,0x30,0x30,0x38,0x30,0x36,0x39,
0x20,0x30,0x78,0x30,0x34,0x30,0x34,0x30,0x30,0x30,0x33,0x20,0x30,0x78,0x62,0x30,
0x37,0x63,0x32,0x39,0x66,0x64,0x20,0x30,0x78,0x36,0x30,0x30,0x31,0x30,0x37,0x66,
0x38,0x20,0x0a,0x09,0x09,0x30,0x78,0x31,0x30,0x30,0x30,0x30,0x38,0x36,0x39,0x20,
0x30,0x78,0x32,0x34,0x34,0x30,0x66,0x32,0x38,0x30,0x20,0x30,0x78,0x31,0x31,0x30,
0x30,0x66,0x32,0x35,0x30,0x20,0x30,0x78,0x39,0x30,0x30,0x30,0x32,0x38,0x35,0x30,
0x20,0x0a,0x09,0x09,0x30,0x78,0x63,0x30,0x31,0x34,0x33,0x34,0x35,0x31,0x20,0x30,
0x78,0x30,0x30,0x30,0x30,0x30,0x37,0x38,0x30,0x20,0x30,0x78,0x61,0x30,0x30,0x30,
0x32,0x38,0x35,0x31,0x20,0x30,0x78,0x63,0x34,0x30,0x30,0x34,0x37,0x38,0x30,0x20,
0x0a,0x09,0x09,0x30,0x78,0x61,0x30,0x30,0x30,0x30,0x30,0x30,0x31,0x20,0x30,0x78,
0x63,0x34,0x30,0x30,0x34,0x37,0x38,0x30,0x20,0x30,0x78,0x63,0x30,0x31,0x34,0x30,
0x30,0x35,0x31,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x37,0x38,0x30,0x20,0x0a,
0x09,0x09,0x30,0x78,0x31,0x30,0x30,0x65,0x65,0x30,0x30,0x33,0x20,0x30,0x78,0x30,
0x30,0x30,0x30,0x30,0x37,0x38,0x30,0x20,0x30,0x78,0x31,0x30,0x30,0x30,0x66,0x38,
0x35,0x31,0x20,0x30,0x78,0x30,0x34,0x30,0x33,0x63,0x37,0x38,0x30,0x20,0x0a,0x09,
0x09,0x30,0x78,0x66,0x30,0x30,0x30,0x30,0x30,0x30,0x31,0x20,0x30,0x78,0x65,0x30,
0x30,0x30,0x30,0x30,0x30,0x32,0x20,0x30,0x78,0x61,0x30,0x31,0x32,0x64,0x30,0x30,
0x33,0x20,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x20,0x0a,0x09,0x09,
0x30,0x78,0x31,0x30,0x31,0x30,0x63,0x30,0x30,0x33,0x20,0x30,0x78,0x30,0x30,0x30,
0x30,0x30,0x31,0x30,0x30,0x20,0x30,0x78,0x31,0x31,0x30,0x30,0x66,0x32,0x30,0x30,
0x20,0x30,0x78,0x62,0x31,0x34,0x30,0x37,0x30,0x30,0x30,0x20,0x0a,0x09,0x09,0x30,
0x78,0x62,0x30,0x34,0x30,0x31,0x32,0x30,0x30,0x20,0x30,0x78,0x63,0x31,0x30,0x30,
0x37,0x34,0x34,0x63,0x20,0x30,0x78,0x61,0x30,0x30,0x30,0x32,0x36,0x30,0x31,0x20,
0x30,0x78,0x63,0x34,0x31,0x30,0x34,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,
0x61,0x30,0x31,0x30,0x39,0x30,0x30,0x33,0x20,0x30,0x30,0x30,0x30,0x30,0x30,0x30,
0x30,0x30,0x30,0x20,0x30,0x78,0x62,0x30,0x38,0x32,0x30,0x31,0x66,0x64,0x20,0x30,
0x78,0x36,0x30,0x34,0x30,0x34,0x37,0x63,0x38,0x20,0x0a,0x09,0x09,0x30,0x78,0x31,
0x30,0x31,0x30,0x38,0x30,0x30,0x33,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x31,
0x30,0x30,0x20,0x30,0x78,0x62,0x30,0x30,0x30,0x38,0x30,0x30,0x31,0x20,0x30,0x78,
0x30,0x34,0x30,0x30,0x30,0x30,0x30,0x33,0x20,0x0a,0x09,0x09,0x30,0x78,0x61,0x30,
0x30,0x30,0x30,0x30,0x36,0x39,0x20,0x30,0x78,0x63,0x34,0x30,0x30,0x34,0x37,0x38,
0x30,0x20,0x30,0x78,0x62,0x30,0x30,0x30,0x33,0x34,0x37,0x35,0x20,0x30,0x78,0x30,
0x62,0x66,0x38,0x30,0x30,0x30,0x33,0x20,0x0a,0x09,0x09,0x30,0x78,0x63,0x30,0x30,
0x30,0x30,0x30,0x30,0x30,0x20,0x30,0x78,0x63,0x30,0x31,0x64,0x33,0x61,0x37,0x34,
0x20,0x30,0x78,0x63,0x30,0x30,0x30,0x64,0x63,0x30,0x31,0x20,0x30,0x78,0x30,0x30,
0x32,0x30,0x30,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x63,0x30,0x30,0x30,
0x33,0x61,0x37,0x35,0x20,0x30,0x78,0x30,0x34,0x30,0x38,0x30,0x30,0x30,0x33,0x20,
0x30,0x78,0x62,0x30,0x38,0x33,0x33,0x35,0x66,0x64,0x20,0x30,0x78,0x36,0x30,0x34,
0x31,0x30,0x37,0x63,0x38,0x20,0x0a,0x09,0x09,0x30,0x78,0x65,0x30,0x31,0x64,0x64,
0x63,0x30,0x31,0x20,0x30,0x78,0x30,0x34,0x32,0x30,0x30,0x32,0x38,0x30,0x20,0x30,
0x78,0x31,0x30,0x30,0x30,0x38,0x30,0x36,0x39,0x20,0x30,0x78,0x30,0x34,0x30,0x34,
0x30,0x30,0x30,0x33,0x20,0x0a,0x09,0x09,0x30,0x78,0x62,0x30,0x37,0x63,0x32,0x37,
0x66,0x64,0x20,0x30,0x78,0x36,0x30,0x30,0x31,0x30,0x37,0x63,0x38,0x20,0x30,0x78,
0x31,0x30,0x30,0x30,0x30,0x38,0x36,0x39,0x20,0x30,0x78,0x32,0x34,0x34,0x30,0x63,
0x32,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x31,0x31,0x30,0x30,0x66,0x32,0x34,
0x63,0x20,0x30,0x78,0x39,0x30,0x30,0x30,0x32,0x36,0x34,0x63,0x20,0x30,0x78,0x63,
0x30,0x31,0x33,0x33,0x34,0x34,0x64,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x37,
0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x61,0x30,0x30,0x30,0x32,0x36,0x34,0x64,
0x20,0x30,0x78,0x63,0x34,0x30,0x30,0x34,0x37,0x38,0x30,0x20,0x30,0x78,0x61,0x30,
0x30,0x30,0x30,0x30,0x30,0x31,0x20,0x30,0x78,0x63,0x34,0x30,0x30,0x34,0x37,0x38,
0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x63,0x30,0x31,0x33,0x30,0x30,0x30,0x31,0x20,
0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x37,0x38,0x30,0x20,0x30,0x78,0x31,0x30,0x31,
0x30,0x39,0x30,0x30,0x33,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x37,0x38,0x30,
0x20,0x0a,0x09,0x09,0x30,0x78,0x31,0x30,0x30,0x30,0x66,0x38,0x30,0x31,0x20,0x30,
0x78,0x30,0x34,0x30,0x33,0x63,0x37,0x38,0x30,0x20,0x30,0x78,0x30,0x30,0x30,0x32,
0x32,0x63,0x30,0x35,0x20,0x30,0x78,0x63,0x30,0x30,0x30,0x30,0x37,0x38,0x32,0x20,
0x0a,0x09,0x09,0x30,0x78,0x65,0x34,0x39,0x30,0x30,0x30,0x35,0x31,0x20,0x30,0x78,
0x30,0x30,0x30,0x35,0x30,0x37,0x38,0x30,0x20,0x30,0x78,0x31,0x30,0x31,0x32,0x64,
0x30,0x30,0x33,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x37,0x38,0x30,0x20,0x0a,
0x09,0x09,0x30,0x78,0x33,0x30,0x31,0x36,0x32,0x37,0x66,0x64,0x20,0x30,0x78,0x36,
0x63,0x30,0x30,0x38,0x37,0x63,0x38,0x20,0x30,0x78,0x33,0x30,0x31,0x36,0x63,0x64,
0x66,0x64,0x20,0x30,0x78,0x36,0x63,0x32,0x30,0x38,0x31,0x34,0x38,0x20,0x0a,0x09,
0x09,0x30,0x78,0x31,0x30,0x31,0x32,0x64,0x30,0x30,0x33,0x20,0x30,0x78,0x30,0x30,
0x30,0x30,0x30,0x31,0x30,0x30,0x20,0x30,0x78,0x32,0x31,0x30,0x31,0x65,0x63,0x34,
0x64,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x33,0x20,0x0a,0x09,0x09,
0x30,0x78,0x31,0x30,0x30,0x30,0x64,0x30,0x30,0x31,0x20,0x30,0x78,0x30,0x34,0x32,
0x33,0x63,0x37,0x38,0x30,0x20,0x30,0x78,0x61,0x30,0x30,0x30,0x32,0x36,0x34,0x64,
0x20,0x30,0x78,0x34,0x34,0x30,0x31,0x34,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,
0x78,0x65,0x30,0x31,0x33,0x64,0x32,0x30,0x31,0x20,0x30,0x78,0x30,0x30,0x32,0x30,
0x30,0x37,0x38,0x30,0x20,0x30,0x78,0x62,0x30,0x34,0x30,0x31,0x32,0x30,0x30,0x20,
0x30,0x78,0x63,0x31,0x30,0x30,0x37,0x34,0x34,0x63,0x20,0x0a,0x09,0x09,0x30,0x78,
0x61,0x30,0x30,0x30,0x32,0x36,0x30,0x31,0x20,0x30,0x78,0x63,0x34,0x31,0x30,0x34,
0x37,0x38,0x30,0x20,0x30,0x78,0x61,0x30,0x31,0x32,0x61,0x30,0x30,0x33,0x20,0x30,
0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x62,
0x30,0x38,0x32,0x30,0x31,0x66,0x64,0x20,0x30,0x78,0x36,0x30,0x34,0x30,0x34,0x37,
0x63,0x38,0x20,0x30,0x78,0x31,0x30,0x31,0x32,0x39,0x30,0x30,0x33,0x20,0x30,0x78,
0x30,0x30,0x30,0x30,0x30,0x31,0x30,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x62,0x30,
0x30,0x30,0x38,0x30,0x30,0x31,0x20,0x30,0x78,0x30,0x34,0x30,0x30,0x30,0x30,0x30,
0x33,0x20,0x30,0x78,0x61,0x30,0x30,0x30,0x30,0x30,0x36,0x39,0x20,0x30,0x78,0x63,
0x34,0x30,0x30,0x34,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x62,0x30,0x30,
0x30,0x33,0x34,0x37,0x35,0x20,0x30,0x78,0x30,0x62,0x66,0x38,0x30,0x30,0x30,0x33,
0x20,0x30,0x78,0x63,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x20,0x30,0x78,0x63,0x30,
0x31,0x64,0x33,0x61,0x37,0x34,0x20,0x0a,0x09,0x09,0x30,0x78,0x63,0x30,0x30,0x30,
0x64,0x63,0x30,0x31,0x20,0x30,0x78,0x30,0x30,0x32,0x30,0x30,0x37,0x38,0x30,0x20,
0x30,0x78,0x63,0x30,0x30,0x30,0x33,0x61,0x37,0x35,0x20,0x30,0x78,0x30,0x34,0x30,
0x38,0x30,0x30,0x30,0x33,0x20,0x0a,0x09,0x09,0x30,0x78,0x62,0x30,0x38,0x33,0x33,
0x35,0x66,0x64,0x20,0x30,0x78,0x36,0x30,0x34,0x31,0x30,0x37,0x63,0x38,0x20,0x30,
0x78,0x65,0x30,0x31,0x64,0x64,0x63,0x30,0x31,0x20,0x30,0x78,0x30,0x34,0x32,0x30,
0x30,0x32,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x31,0x30,0x30,0x30,0x38,0x30,
0x36,0x39,0x20,0x30,0x78,0x30,0x34,0x30,0x34,0x30,0x30,0x30,0x33,0x20,0x30,0x78,
0x62,0x30,0x37,0x63,0x32,0x37,0x66,0x64,0x20,0x30,0x78,0x36,0x30,0x30,0x31,0x30,
0x37,0x63,0x38,0x20,0x0a,0x09,0x09,0x30,0x78,0x31,0x30,0x30,0x30,0x30,0x38,0x36,
0x39,0x20,0x30,0x78,0x32,0x34,0x34,0x30,0x63,0x32,0x38,0x30,0x20,0x30,0x78,0x31,
0x31,0x30,0x30,0x66,0x32,0x34,0x63,0x20,0x30,0x78,0x39,0x30,0x30,0x30,0x32,0x36,
0x34,0x63,0x20,0x0a,0x09,0x09,0x30,0x78,0x63,0x30,0x31,0x33,0x33,0x34,0x34,0x64,
0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x37,0x38,0x30,0x20,0x30,0x78,0x61,0x30,
0x30,0x30,0x32,0x36,0x34,0x64,0x20,0x30,0x78,0x63,0x34,0x30,0x30,0x34,0x37,0x38,
0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x61,0x30,0x30,0x30,0x30,0x30,0x30,0x31,0x20,
0x30,0x78,0x63,0x34,0x30,0x30,0x34,0x37,0x38,0x30,0x20,0x30,0x78,0x63,0x30,0x31,
0x33,0x30,0x30,0x30,0x31,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x37,0x38,0x30,
0x20,0x0a,0x09,0x09,0x30,0x78,0x31,0x30,0x31,0x32,0x61,0x30,0x30,0x33,0x20,0x30,
0x78,0x30,0x30,0x30,0x30,0x30,0x37,0x38,0x30,0x20,0x30,0x78,0x31,0x30,0x30,0x30,
0x66,0x38,0x30,0x31,0x20,0x30,0x78,0x30,0x34,0x30,0x33,0x63,0x37,0x38,0x30,0x20,
0x0a,0x09,0x09,0x30,0x78,0x33,0x30,0x30,0x30,0x63,0x63,0x34,0x64,0x20,0x30,0x78,
0x30,0x34,0x32,0x35,0x38,0x37,0x38,0x32,0x20,0x30,0x78,0x30,0x30,0x30,0x32,0x32,
0x36,0x30,0x35,0x20,0x30,0x78,0x63,0x30,0x30,0x30,0x30,0x37,0x38,0x30,0x20,0x0a,
0x09,0x09,0x30,0x78,0x65,0x34,0x39,0x33,0x30,0x30,0x35,0x31,0x20,0x30,0x78,0x30,
0x30,0x30,0x35,0x30,0x37,0x38,0x30,0x20,0x30,0x78,0x66,0x30,0x30,0x30,0x30,0x30,
0x30,0x31,0x20,0x30,0x78,0x65,0x30,0x30,0x30,0x30,0x30,0x30,0x32,0x20,0x0a,0x09,
0x09,0x30,0x78,0x61,0x30,0x31,0x34,0x32,0x30,0x30,0x33,0x20,0x30,0x30,0x30,0x30,
0x30,0x30,0x30,0x30,0x30,0x30,0x20,0x30,0x78,0x31,0x30,0x31,0x34,0x31,0x30,0x30,
0x33,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x31,0x31,0x30,0x30,0x20,0x0a,0x09,0x09,
0x30,0x78,0x62,0x30,0x30,0x30,0x62,0x36,0x30,0x31,0x20,0x30,0x78,0x30,0x34,0x30,
0x30,0x30,0x30,0x30,0x33,0x20,0x30,0x78,0x61,0x30,0x30,0x30,0x30,0x30,0x34,0x64,
0x20,0x30,0x78,0x63,0x34,0x30,0x30,0x34,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,
0x78,0x62,0x30,0x30,0x30,0x32,0x36,0x36,0x39,0x20,0x30,0x78,0x30,0x62,0x66,0x38,
0x30,0x30,0x30,0x33,0x20,0x30,0x78,0x63,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x20,
0x30,0x78,0x63,0x30,0x31,0x61,0x33,0x34,0x36,0x38,0x20,0x0a,0x09,0x09,0x30,0x78,
0x63,0x30,0x30,0x30,0x64,0x63,0x30,0x31,0x20,0x30,0x78,0x30,0x30,0x32,0x30,0x30,
0x37,0x38,0x30,0x20,0x30,0x78,0x63,0x30,0x30,0x30,0x33,0x34,0x36,0x39,0x20,0x30,
0x78,0x30,0x34,0x30,0x38,0x30,0x30,0x30,0x33,0x20,0x0a,0x09,0x09,0x30,0x78,0x62,
0x30,0x38,0x33,0x32,0x37,0x66,0x64,0x20,0x30,0x78,0x36,0x30,0x34,0x31,0x30,0x37,
0x63,0x38,0x20,0x30,0x78,0x65,0x30,0x31,0x61,0x64,0x63,0x30,0x31,0x20,0x30,0x78,
0x30,0x34,0x32,0x30,0x30,0x32,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x31,0x30,
0x30,0x30,0x38,0x30,0x36,0x39,0x20,0x30,0x78,0x30,0x34,0x30,0x34,0x30,0x30,0x30,
0x33,0x20,0x30,0x78,0x31,0x30,0x30,0x30,0x64,0x38,0x34,0x64,0x20,0x30,0x78,0x30,
0x34,0x32,0x33,0x63,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x62,0x30,0x37,
0x63,0x32,0x62,0x66,0x64,0x20,0x30,0x78,0x36,0x30,0x30,0x31,0x30,0x37,0x63,0x38,
0x20,0x30,0x78,0x31,0x30,0x30,0x30,0x30,0x38,0x36,0x39,0x20,0x30,0x78,0x32,0x34,
0x34,0x30,0x63,0x32,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x39,0x30,0x30,0x30,
0x32,0x36,0x34,0x63,0x20,0x30,0x78,0x63,0x30,0x31,0x33,0x33,0x34,0x34,0x63,0x20,
0x30,0x78,0x61,0x30,0x30,0x30,0x32,0x36,0x34,0x64,0x20,0x30,0x78,0x63,0x34,0x30,
0x30,0x34,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x61,0x30,0x30,0x30,0x30,
0x30,0x30,0x31,0x20,0x30,0x78,0x63,0x34,0x30,0x30,0x34,0x37,0x38,0x30,0x20,0x30,
0x78,0x63,0x30,0x31,0x33,0x30,0x30,0x34,0x64,0x20,0x30,0x78,0x30,0x30,0x30,0x30,
0x30,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x31,0x30,0x31,0x34,0x32,0x30,
0x30,0x33,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x37,0x38,0x30,0x20,0x30,0x78,
0x31,0x30,0x30,0x30,0x66,0x38,0x34,0x64,0x20,0x30,0x78,0x30,0x34,0x30,0x33,0x63,
0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x66,0x30,0x30,0x30,0x30,0x30,0x30,
0x31,0x20,0x30,0x78,0x65,0x30,0x30,0x30,0x30,0x30,0x30,0x32,0x20,0x30,0x78,0x61,
0x30,0x31,0x38,0x31,0x30,0x30,0x33,0x20,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,
0x30,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x31,0x30,0x31,0x36,0x30,0x30,0x30,0x33,
0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x32,0x31,0x30,0x30,0x20,0x30,0x78,0x31,0x31,
0x30,0x30,0x66,0x38,0x30,0x30,0x20,0x30,0x78,0x62,0x31,0x34,0x30,0x37,0x36,0x30,
0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x62,0x30,0x34,0x30,0x31,0x34,0x30,0x30,0x20,
0x30,0x78,0x63,0x31,0x30,0x30,0x37,0x61,0x30,0x30,0x20,0x30,0x78,0x61,0x30,0x30,
0x30,0x30,0x30,0x33,0x64,0x20,0x30,0x78,0x63,0x34,0x31,0x30,0x34,0x37,0x38,0x30,
0x20,0x0a,0x09,0x09,0x30,0x78,0x62,0x30,0x38,0x32,0x31,0x66,0x66,0x64,0x20,0x30,
0x78,0x36,0x30,0x34,0x30,0x34,0x37,0x63,0x38,0x20,0x30,0x78,0x61,0x30,0x31,0x35,
0x64,0x30,0x30,0x33,0x20,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x20,
0x0a,0x09,0x09,0x30,0x78,0x31,0x30,0x31,0x35,0x63,0x30,0x30,0x33,0x20,0x30,0x78,
0x30,0x30,0x30,0x30,0x30,0x31,0x30,0x30,0x20,0x30,0x78,0x62,0x30,0x30,0x30,0x39,
0x65,0x35,0x35,0x20,0x30,0x78,0x30,0x34,0x30,0x30,0x30,0x30,0x30,0x33,0x20,0x0a,
0x09,0x09,0x30,0x78,0x61,0x30,0x30,0x30,0x32,0x61,0x36,0x39,0x20,0x30,0x78,0x63,
0x34,0x30,0x30,0x34,0x37,0x38,0x30,0x20,0x30,0x78,0x62,0x30,0x37,0x63,0x30,0x31,
0x66,0x64,0x20,0x30,0x78,0x36,0x30,0x30,0x31,0x30,0x37,0x64,0x38,0x20,0x0a,0x09,
0x09,0x30,0x78,0x62,0x30,0x30,0x30,0x33,0x34,0x36,0x64,0x20,0x30,0x78,0x30,0x62,
0x66,0x38,0x30,0x30,0x30,0x33,0x20,0x30,0x78,0x31,0x30,0x30,0x30,0x38,0x30,0x33,
0x64,0x20,0x30,0x78,0x30,0x34,0x30,0x34,0x30,0x30,0x30,0x33,0x20,0x0a,0x09,0x09,
0x30,0x78,0x31,0x31,0x30,0x30,0x66,0x38,0x30,0x30,0x20,0x30,0x78,0x63,0x30,0x31,
0x35,0x32,0x61,0x35,0x34,0x20,0x30,0x78,0x63,0x30,0x31,0x62,0x33,0x36,0x36,0x64,
0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,
0x78,0x62,0x30,0x38,0x33,0x33,0x35,0x66,0x64,0x20,0x30,0x78,0x36,0x30,0x34,0x31,
0x30,0x37,0x63,0x38,0x20,0x30,0x78,0x31,0x30,0x30,0x30,0x30,0x38,0x33,0x64,0x20,
0x30,0x78,0x32,0x34,0x34,0x30,0x64,0x32,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,
0x39,0x30,0x30,0x30,0x30,0x30,0x36,0x38,0x20,0x30,0x78,0x63,0x31,0x31,0x35,0x37,
0x63,0x30,0x30,0x20,0x30,0x78,0x63,0x30,0x30,0x30,0x33,0x36,0x35,0x35,0x20,0x30,
0x78,0x30,0x34,0x30,0x38,0x30,0x30,0x30,0x33,0x20,0x0a,0x09,0x09,0x30,0x78,0x63,
0x30,0x31,0x61,0x31,0x65,0x33,0x64,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x37,
0x38,0x30,0x20,0x30,0x78,0x65,0x30,0x31,0x35,0x64,0x63,0x30,0x31,0x20,0x30,0x78,
0x30,0x34,0x32,0x30,0x30,0x32,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x61,0x30,
0x30,0x30,0x31,0x65,0x33,0x64,0x20,0x30,0x78,0x63,0x34,0x30,0x30,0x34,0x37,0x38,
0x30,0x20,0x30,0x78,0x61,0x30,0x30,0x30,0x30,0x30,0x30,0x31,0x20,0x30,0x78,0x63,
0x34,0x30,0x30,0x34,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x63,0x30,0x30,
0x66,0x30,0x30,0x30,0x31,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x37,0x38,0x30,
0x20,0x30,0x78,0x31,0x30,0x31,0x35,0x64,0x30,0x30,0x33,0x20,0x30,0x78,0x30,0x30,
0x30,0x30,0x30,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x31,0x30,0x30,0x30,
0x66,0x38,0x30,0x31,0x20,0x30,0x78,0x30,0x34,0x30,0x33,0x63,0x37,0x38,0x30,0x20,
0x30,0x78,0x30,0x30,0x30,0x32,0x33,0x32,0x30,0x35,0x20,0x30,0x78,0x63,0x30,0x30,
0x30,0x30,0x37,0x38,0x32,0x20,0x0a,0x09,0x09,0x30,0x78,0x65,0x34,0x39,0x30,0x30,
0x30,0x34,0x64,0x20,0x30,0x78,0x30,0x30,0x30,0x34,0x63,0x37,0x38,0x30,0x20,0x30,
0x78,0x31,0x30,0x31,0x38,0x31,0x30,0x30,0x33,0x20,0x30,0x78,0x30,0x30,0x30,0x30,
0x30,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x33,0x30,0x31,0x39,0x31,0x66,
0x66,0x64,0x20,0x30,0x78,0x36,0x63,0x30,0x30,0x38,0x37,0x63,0x38,0x20,0x30,0x78,
0x33,0x30,0x31,0x39,0x63,0x66,0x66,0x64,0x20,0x30,0x78,0x36,0x63,0x32,0x30,0x38,
0x31,0x34,0x38,0x20,0x0a,0x09,0x09,0x30,0x78,0x31,0x30,0x31,0x38,0x31,0x30,0x30,
0x33,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x31,0x30,0x30,0x20,0x30,0x78,0x32,
0x31,0x30,0x31,0x65,0x65,0x33,0x64,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x30,
0x30,0x33,0x20,0x0a,0x09,0x09,0x30,0x78,0x31,0x30,0x30,0x30,0x64,0x36,0x30,0x31,
0x20,0x30,0x78,0x30,0x34,0x32,0x33,0x63,0x37,0x38,0x30,0x20,0x30,0x78,0x61,0x30,
0x30,0x30,0x31,0x65,0x33,0x64,0x20,0x30,0x78,0x34,0x34,0x30,0x31,0x34,0x37,0x38,
0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x65,0x30,0x30,0x66,0x64,0x38,0x30,0x31,0x20,
0x30,0x78,0x30,0x30,0x32,0x30,0x30,0x37,0x38,0x30,0x20,0x30,0x78,0x62,0x30,0x34,
0x30,0x31,0x34,0x30,0x30,0x20,0x30,0x78,0x63,0x31,0x30,0x30,0x37,0x61,0x30,0x30,
0x20,0x0a,0x09,0x09,0x30,0x78,0x61,0x30,0x30,0x30,0x30,0x30,0x33,0x64,0x20,0x30,
0x78,0x63,0x34,0x31,0x30,0x34,0x37,0x38,0x30,0x20,0x30,0x78,0x62,0x30,0x38,0x32,
0x31,0x66,0x66,0x64,0x20,0x30,0x78,0x36,0x30,0x34,0x30,0x34,0x37,0x63,0x38,0x20,
0x0a,0x09,0x09,0x30,0x78,0x61,0x30,0x31,0x37,0x65,0x30,0x30,0x33,0x20,0x30,0x30,
0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x20,0x30,0x78,0x31,0x30,0x31,0x37,0x64,
0x30,0x30,0x33,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x31,0x30,0x30,0x20,0x0a,
0x09,0x09,0x30,0x78,0x62,0x30,0x30,0x30,0x39,0x65,0x35,0x35,0x20,0x30,0x78,0x30,
0x34,0x30,0x30,0x30,0x30,0x30,0x33,0x20,0x30,0x78,0x61,0x30,0x30,0x30,0x32,0x61,
0x36,0x39,0x20,0x30,0x78,0x63,0x34,0x30,0x30,0x34,0x37,0x38,0x30,0x20,0x0a,0x09,
0x09,0x30,0x78,0x62,0x30,0x37,0x63,0x30,0x31,0x66,0x64,0x20,0x30,0x78,0x36,0x30,
0x30,0x31,0x30,0x37,0x64,0x38,0x20,0x30,0x78,0x62,0x30,0x30,0x30,0x33,0x34,0x36,
0x64,0x20,0x30,0x78,0x30,0x62,0x66,0x38,0x30,0x30,0x30,0x33,0x20,0x0a,0x09,0x09,
0x30,0x78,0x31,0x30,0x30,0x30,0x38,0x30,0x33,0x64,0x20,0x30,0x78,0x30,0x34,0x30,
0x34,0x30,0x30,0x30,0x33,0x20,0x30,0x78,0x31,0x31,0x30,0x30,0x66,0x38,0x30,0x30,
0x20,0x30,0x78,0x63,0x30,0x31,0x35,0x32,0x61,0x35,0x34,0x20,0x0a,0x09,0x09,0x30,
0x78,0x63,0x30,0x31,0x62,0x33,0x36,0x36,0x64,0x20,0x30,0x78,0x30,0x30,0x30,0x30,
0x30,0x37,0x38,0x30,0x20,0x30,0x78,0x62,0x30,0x38,0x33,0x33,0x35,0x66,0x64,0x20,
0x30,0x78,0x36,0x30,0x34,0x31,0x30,0x37,0x63,0x38,0x20,0x0a,0x09,0x09,0x30,0x78,
0x31,0x30,0x30,0x30,0x30,0x38,0x33,0x64,0x20,0x30,0x78,0x32,0x34,0x34,0x30,0x64,
0x32,0x38,0x30,0x20,0x30,0x78,0x39,0x30,0x30,0x30,0x30,0x30,0x36,0x38,0x20,0x30,
0x78,0x63,0x31,0x31,0x35,0x37,0x63,0x30,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x63,
0x30,0x30,0x30,0x33,0x36,0x35,0x35,0x20,0x30,0x78,0x30,0x34,0x30,0x38,0x30,0x30,
0x30,0x33,0x20,0x30,0x78,0x63,0x30,0x31,0x61,0x31,0x65,0x33,0x64,0x20,0x30,0x78,
0x30,0x30,0x30,0x30,0x30,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x65,0x30,
0x31,0x35,0x64,0x63,0x30,0x31,0x20,0x30,0x78,0x30,0x34,0x32,0x30,0x30,0x32,0x38,
0x30,0x20,0x30,0x78,0x61,0x30,0x30,0x30,0x31,0x65,0x33,0x64,0x20,0x30,0x78,0x63,
0x34,0x30,0x30,0x34,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x61,0x30,0x30,
0x30,0x30,0x30,0x30,0x31,0x20,0x30,0x78,0x63,0x34,0x30,0x30,0x34,0x37,0x38,0x30,
0x20,0x30,0x78,0x63,0x30,0x30,0x66,0x30,0x30,0x30,0x31,0x20,0x30,0x78,0x30,0x30,
0x30,0x30,0x30,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x31,0x30,0x31,0x37,
0x65,0x30,0x30,0x33,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x37,0x38,0x30,0x20,
0x30,0x78,0x31,0x30,0x30,0x30,0x66,0x38,0x30,0x31,0x20,0x30,0x78,0x30,0x34,0x30,
0x33,0x63,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x33,0x30,0x30,0x30,0x63,
0x65,0x33,0x64,0x20,0x30,0x78,0x30,0x34,0x32,0x36,0x34,0x37,0x38,0x32,0x20,0x30,
0x78,0x30,0x30,0x30,0x32,0x31,0x65,0x30,0x35,0x20,0x30,0x78,0x63,0x30,0x30,0x30,
0x30,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x65,0x34,0x39,0x33,0x30,0x30,
0x34,0x64,0x20,0x30,0x78,0x30,0x30,0x30,0x34,0x63,0x37,0x38,0x30,0x20,0x30,0x78,
0x31,0x30,0x30,0x30,0x32,0x36,0x30,0x31,0x20,0x30,0x78,0x30,0x34,0x30,0x33,0x63,
0x37,0x38,0x32,0x20,0x0a,0x09,0x09,0x30,0x78,0x62,0x30,0x37,0x63,0x30,0x37,0x66,
0x64,0x20,0x30,0x78,0x36,0x30,0x30,0x33,0x34,0x37,0x63,0x61,0x20,0x30,0x78,0x36,
0x30,0x31,0x39,0x63,0x63,0x33,0x64,0x20,0x30,0x78,0x38,0x30,0x32,0x35,0x38,0x36,
0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x30,0x30,0x30,0x32,0x31,0x65,0x30,0x35,
0x20,0x30,0x78,0x63,0x30,0x30,0x30,0x30,0x36,0x38,0x30,0x20,0x30,0x78,0x63,0x34,
0x61,0x34,0x32,0x34,0x33,0x64,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x36,0x38,
0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x63,0x30,0x30,0x66,0x33,0x30,0x33,0x64,0x20,
0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x36,0x38,0x30,0x20,0x30,0x78,0x65,0x30,0x30,
0x66,0x30,0x36,0x35,0x64,0x20,0x30,0x78,0x30,0x30,0x30,0x35,0x63,0x36,0x38,0x30,
0x20,0x0a,0x09,0x09,0x30,0x78,0x62,0x30,0x37,0x63,0x30,0x38,0x35,0x35,0x20,0x30,
0x78,0x36,0x30,0x30,0x31,0x34,0x37,0x63,0x30,0x20,0x30,0x78,0x31,0x30,0x30,0x30,
0x66,0x38,0x34,0x64,0x20,0x30,0x78,0x30,0x34,0x30,0x33,0x63,0x37,0x38,0x30,0x20,
0x0a,0x09,0x09,0x30,0x78,0x31,0x30,0x30,0x30,0x66,0x38,0x33,0x64,0x20,0x30,0x78,
0x30,0x34,0x30,0x33,0x63,0x37,0x38,0x30,0x20,0x30,0x78,0x62,0x30,0x37,0x63,0x30,
0x61,0x36,0x39,0x20,0x30,0x78,0x36,0x30,0x30,0x31,0x34,0x37,0x64,0x30,0x20,0x0a,
0x09,0x09,0x30,0x78,0x31,0x30,0x30,0x30,0x30,0x32,0x34,0x64,0x20,0x30,0x78,0x32,
0x34,0x34,0x30,0x63,0x32,0x38,0x30,0x20,0x30,0x78,0x31,0x30,0x30,0x30,0x30,0x32,
0x33,0x64,0x20,0x30,0x78,0x32,0x34,0x34,0x30,0x64,0x32,0x38,0x30,0x20,0x0a,0x09,
0x09,0x30,0x78,0x64,0x30,0x30,0x66,0x32,0x37,0x66,0x64,0x20,0x30,0x78,0x30,0x34,
0x30,0x30,0x34,0x37,0x65,0x38,0x20,0x30,0x78,0x61,0x30,0x30,0x30,0x32,0x62,0x66,
0x64,0x20,0x30,0x78,0x30,0x63,0x30,0x31,0x34,0x37,0x63,0x38,0x20,0x0a,0x09,0x09,
0x30,0x78,0x61,0x30,0x30,0x30,0x33,0x35,0x66,0x64,0x20,0x30,0x78,0x30,0x63,0x30,
0x31,0x34,0x37,0x64,0x38,0x20,0x30,0x78,0x32,0x30,0x30,0x30,0x63,0x65,0x33,0x64,
0x20,0x30,0x78,0x30,0x34,0x32,0x36,0x36,0x36,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,
0x78,0x36,0x30,0x30,0x66,0x63,0x63,0x33,0x64,0x20,0x30,0x78,0x38,0x30,0x32,0x35,
0x61,0x36,0x38,0x30,0x20,0x30,0x78,0x30,0x30,0x30,0x32,0x31,0x65,0x30,0x35,0x20,
0x30,0x78,0x63,0x30,0x30,0x30,0x32,0x36,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,
0x31,0x34,0x30,0x30,0x34,0x38,0x37,0x31,0x20,0x30,0x78,0x32,0x34,0x30,0x30,0x65,
0x36,0x38,0x30,0x20,0x30,0x78,0x61,0x30,0x31,0x39,0x65,0x30,0x30,0x33,0x20,0x30,
0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x31,
0x30,0x31,0x39,0x65,0x30,0x30,0x33,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x31,
0x30,0x30,0x20,0x30,0x78,0x63,0x30,0x31,0x32,0x33,0x38,0x33,0x63,0x20,0x30,0x78,
0x63,0x30,0x30,0x66,0x30,0x30,0x33,0x63,0x20,0x0a,0x09,0x09,0x30,0x78,0x63,0x30,
0x30,0x66,0x30,0x38,0x33,0x64,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x37,0x38,
0x30,0x20,0x30,0x78,0x61,0x30,0x30,0x30,0x31,0x65,0x35,0x35,0x20,0x30,0x78,0x65,
0x34,0x30,0x30,0x34,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x61,0x30,0x30,
0x30,0x32,0x65,0x33,0x64,0x20,0x30,0x78,0x63,0x34,0x30,0x30,0x34,0x37,0x38,0x30,
0x20,0x30,0x78,0x61,0x30,0x30,0x30,0x31,0x38,0x34,0x64,0x20,0x30,0x78,0x63,0x34,
0x30,0x30,0x34,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x63,0x30,0x30,0x30,
0x32,0x61,0x35,0x35,0x20,0x30,0x78,0x30,0x34,0x34,0x37,0x61,0x30,0x30,0x33,0x20,
0x30,0x78,0x65,0x30,0x31,0x35,0x32,0x36,0x35,0x64,0x20,0x30,0x78,0x30,0x30,0x30,
0x33,0x63,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x66,0x30,0x30,0x30,0x30,
0x30,0x30,0x31,0x20,0x30,0x78,0x65,0x30,0x30,0x30,0x30,0x30,0x30,0x32,0x20,0x30,
0x78,0x63,0x30,0x31,0x34,0x33,0x38,0x33,0x64,0x20,0x30,0x78,0x30,0x30,0x30,0x30,
0x31,0x36,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x63,0x30,0x30,0x66,0x33,0x30,
0x33,0x64,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x31,0x36,0x38,0x30,0x20,0x30,0x78,
0x63,0x30,0x30,0x66,0x30,0x61,0x33,0x64,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x31,
0x36,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x65,0x30,0x30,0x66,0x31,0x38,0x35,
0x64,0x20,0x30,0x78,0x30,0x30,0x30,0x35,0x64,0x36,0x38,0x30,0x20,0x30,0x78,0x62,
0x30,0x37,0x63,0x30,0x64,0x66,0x64,0x20,0x30,0x78,0x36,0x30,0x30,0x31,0x34,0x37,
0x65,0x38,0x20,0x0a,0x09,0x09,0x30,0x78,0x61,0x30,0x31,0x62,0x30,0x30,0x30,0x33,
0x20,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x20,0x30,0x78,0x62,0x30,
0x37,0x63,0x30,0x66,0x66,0x64,0x20,0x30,0x78,0x36,0x30,0x30,0x31,0x34,0x37,0x64,
0x38,0x20,0x0a,0x09,0x09,0x30,0x78,0x62,0x30,0x37,0x63,0x31,0x31,0x66,0x64,0x20,
0x30,0x78,0x36,0x30,0x30,0x31,0x34,0x37,0x63,0x38,0x20,0x30,0x78,0x31,0x30,0x31,
0x62,0x30,0x30,0x30,0x33,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x32,0x31,0x30,0x30,
0x20,0x0a,0x09,0x09,0x30,0x78,0x31,0x31,0x30,0x30,0x65,0x63,0x33,0x63,0x20,0x30,
0x78,0x34,0x31,0x34,0x66,0x65,0x65,0x33,0x63,0x20,0x30,0x78,0x33,0x30,0x30,0x31,
0x31,0x65,0x33,0x64,0x20,0x30,0x78,0x63,0x34,0x31,0x30,0x30,0x37,0x38,0x30,0x20,
0x0a,0x09,0x09,0x30,0x78,0x36,0x30,0x31,0x39,0x63,0x63,0x33,0x64,0x20,0x30,0x78,
0x38,0x30,0x32,0x33,0x63,0x37,0x38,0x30,0x20,0x30,0x78,0x32,0x30,0x30,0x30,0x32,
0x63,0x33,0x64,0x20,0x30,0x78,0x30,0x34,0x30,0x33,0x63,0x37,0x38,0x30,0x20,0x0a,
0x09,0x09,0x30,0x78,0x30,0x30,0x30,0x32,0x31,0x65,0x30,0x35,0x20,0x30,0x78,0x63,
0x30,0x30,0x30,0x30,0x37,0x38,0x30,0x20,0x30,0x78,0x63,0x34,0x61,0x34,0x32,0x34,
0x33,0x64,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x37,0x38,0x30,0x20,0x0a,0x09,
0x09,0x30,0x78,0x63,0x30,0x30,0x66,0x33,0x30,0x33,0x64,0x20,0x30,0x78,0x30,0x30,
0x30,0x30,0x30,0x37,0x38,0x30,0x20,0x30,0x78,0x65,0x30,0x30,0x66,0x30,0x63,0x35,
0x64,0x20,0x30,0x78,0x30,0x30,0x30,0x35,0x63,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,
0x30,0x78,0x66,0x30,0x30,0x30,0x30,0x30,0x30,0x31,0x20,0x30,0x78,0x65,0x30,0x30,
0x30,0x30,0x30,0x30,0x32,0x20,0x30,0x78,0x61,0x30,0x31,0x62,0x62,0x30,0x30,0x33,
0x20,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x20,0x0a,0x09,0x09,0x30,
0x78,0x31,0x30,0x31,0x62,0x62,0x30,0x30,0x33,0x20,0x30,0x78,0x30,0x30,0x30,0x30,
0x31,0x31,0x30,0x30,0x20,0x30,0x78,0x31,0x31,0x30,0x30,0x65,0x63,0x33,0x63,0x20,
0x30,0x78,0x34,0x31,0x34,0x66,0x65,0x65,0x33,0x63,0x20,0x0a,0x09,0x09,0x30,0x78,
0x34,0x30,0x34,0x33,0x39,0x65,0x33,0x64,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,
0x30,0x30,0x33,0x20,0x30,0x78,0x36,0x30,0x31,0x39,0x63,0x63,0x33,0x64,0x20,0x30,
0x78,0x38,0x30,0x32,0x33,0x63,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x32,
0x30,0x30,0x30,0x32,0x63,0x33,0x64,0x20,0x30,0x78,0x30,0x34,0x30,0x33,0x63,0x37,
0x38,0x30,0x20,0x30,0x78,0x30,0x30,0x30,0x32,0x31,0x65,0x30,0x35,0x20,0x30,0x78,
0x63,0x30,0x30,0x30,0x30,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x63,0x34,
0x61,0x34,0x32,0x34,0x33,0x64,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x37,0x38,
0x30,0x20,0x30,0x78,0x63,0x30,0x30,0x66,0x33,0x30,0x33,0x64,0x20,0x30,0x78,0x30,
0x30,0x30,0x30,0x30,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x65,0x30,0x30,
0x66,0x30,0x65,0x35,0x64,0x20,0x30,0x78,0x30,0x30,0x30,0x35,0x63,0x37,0x38,0x30,
0x20,0x30,0x78,0x66,0x30,0x30,0x30,0x30,0x30,0x30,0x31,0x20,0x30,0x78,0x65,0x30,
0x30,0x30,0x30,0x30,0x30,0x32,0x20,0x0a,0x09,0x09,0x30,0x78,0x31,0x30,0x31,0x63,
0x35,0x30,0x30,0x33,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x31,0x30,0x30,0x20,
0x30,0x78,0x31,0x31,0x30,0x30,0x65,0x63,0x33,0x63,0x20,0x30,0x78,0x34,0x31,0x34,
0x66,0x65,0x65,0x33,0x63,0x20,0x0a,0x09,0x09,0x30,0x78,0x33,0x30,0x30,0x32,0x31,
0x65,0x33,0x64,0x20,0x30,0x78,0x63,0x34,0x31,0x30,0x30,0x37,0x38,0x30,0x20,0x30,
0x78,0x36,0x30,0x31,0x39,0x63,0x63,0x33,0x64,0x20,0x30,0x78,0x38,0x30,0x32,0x33,
0x63,0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x32,0x30,0x30,0x30,0x32,0x63,
0x33,0x64,0x20,0x30,0x78,0x30,0x34,0x30,0x33,0x63,0x37,0x38,0x30,0x20,0x30,0x78,
0x30,0x30,0x30,0x32,0x31,0x65,0x30,0x35,0x20,0x30,0x78,0x63,0x30,0x30,0x30,0x30,
0x37,0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x63,0x34,0x61,0x34,0x32,0x34,0x33,
0x64,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x37,0x38,0x30,0x20,0x30,0x78,0x63,
0x30,0x30,0x66,0x33,0x30,0x33,0x64,0x20,0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x37,
0x38,0x30,0x20,0x0a,0x09,0x09,0x30,0x78,0x65,0x30,0x30,0x66,0x31,0x30,0x35,0x64,
0x20,0x30,0x78,0x30,0x30,0x30,0x35,0x63,0x37,0x38,0x30,0x20,0x30,0x78,0x66,0x30,
0x30,0x30,0x30,0x30,0x30,0x31,0x20,0x30,0x78,0x65,0x30,0x30,0x30,0x30,0x30,0x30,
0x32,0x20,0x0a,0x09,0x09,0x30,0x78,0x32,0x30,0x30,0x31,0x62,0x32,0x36,0x35,0x20,
0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x33,0x20,0x30,0x78,0x33,0x30,0x31,
0x39,0x31,0x64,0x66,0x64,0x20,0x30,0x78,0x36,0x63,0x30,0x31,0x34,0x37,0x63,0x38,
0x20,0x0a,0x09,0x09,0x30,0x78,0x31,0x30,0x30,0x33,0x31,0x30,0x30,0x33,0x20,0x30,
0x78,0x30,0x30,0x30,0x30,0x30,0x32,0x38,0x30,0x20,0x30,0x78,0x66,0x30,0x30,0x30,
0x30,0x30,0x30,0x31,0x20,0x30,0x78,0x65,0x30,0x30,0x30,0x30,0x30,0x30,0x32,0x20,
0x0a,0x09,0x09,0x30,0x78,0x32,0x30,0x30,0x31,0x61,0x63,0x35,0x39,0x20,0x30,0x78,
0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x33,0x20,0x30,0x78,0x33,0x30,0x31,0x36,0x31,
0x62,0x66,0x64,0x20,0x30,0x78,0x36,0x63,0x30,0x31,0x34,0x37,0x63,0x38,0x20,0x0a,
0x09,0x09,0x30,0x78,0x31,0x30,0x30,0x32,0x61,0x30,0x30,0x33,0x20,0x30,0x78,0x30,
0x30,0x30,0x30,0x30,0x32,0x38,0x30,0x20,0x30,0x78,0x33,0x30,0x30,0x32,0x30,0x32,
0x30,0x31,0x20,0x30,0x78,0x63,0x34,0x31,0x30,0x30,0x37,0x38,0x32,0x20,0x0a,0x09,
0x09,0x30,0x78,0x32,0x30,0x30,0x30,0x63,0x61,0x30,0x31,0x20,0x30,0x78,0x30,0x34,
0x32,0x30,0x30,0x37,0x38,0x30,0x20,0x30,0x78,0x64,0x30,0x30,0x65,0x30,0x30,0x35,
0x64,0x20,0x30,0x78,0x61,0x30,0x63,0x30,0x30,0x37,0x38,0x31,0x20,0x0a,0x09,0x7d,
0x0a,0x09,0x63,0x6f,0x6e,0x73,0x74,0x20,0x20,0x7b,0x0a,0x09,0x09,0x73,0x65,0x67,
0x6e,0x61,0x6d,0x65,0x20,0x3d,0x20,0x63,0x6f,0x6e,0x73,0x74,0x0a,0x09,0x09,0x73,
0x65,0x67,0x6e,0x75,0x6d,0x20,0x3d,0x20,0x31,0x0a,0x09,0x09,0x6f,0x66,0x66,0x73,
0x65,0x74,0x20,0x3d,0x20,0x30,0x0a,0x09,0x09,0x62,0x79,0x74,0x65,0x73,0x20,0x3d,
0x20,0x32,0x30,0x0a,0x09,0x09,0x6d,0x65,0x6d,0x20,0x20,0x7b,0x0a,0x09,0x09,0x09,
0x30,0x78,0x30,0x30,0x30,0x30,0x30,0x30,0x34,0x30,0x20,0x30,0x78,0x30,0x30,0x30,
0x30,0x30,0x30,0x30,0x31,0x20,0x30,0x78,0x34,0x30,0x30,0x30,0x30,0x30,0x30,0x30,
0x20,0x30,0x78,0x33,0x66,0x38,0x30,0x30,0x30,0x30,0x30,0x20,0x0a,0x09,0x09,0x09,
0x30,0x78,0x63,0x30,0x34,0x30,0x30,0x30,0x30,0x30,0x20,0x0a,0x09,0x09,0x7d,0x0a,
0x09,0x7d,0x0a,0x7d,0x0a,0x00
};


}


static __cudaFatPtxEntry __ptxEntries [] = {{0,0}};
static __cudaFatCubinEntry __cubinEntries[] = {{(char*)"sm_10",(char*)__deviceText},{0,0}};
static __cudaFatDebugEntry __debugEntries[] = {{0,0}};

static __cudaFatCudaBinary __fatDeviceText __attribute__ ((section ("__NV_CUDA,__fatbin")))= {0x1ee55a01,0x00000002,0x8ecc680c,(char*)"30f08fc1aa287327",(char*)"GPUdriver.cu",(char*)"-v  ",__ptxEntries,__cubinEntries,__debugEntries,0,0};
# 5 "/tmp/tmpxft_00001019_00000000-1_GPUdriver.cudafe1.stub.c" 2 3
# 1 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 1 3
# 96 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 3
extern "C" {


extern void** __cudaRegisterFatBinary(
  void *fatCubin
);

extern void __cudaUnregisterFatBinary(
  void **fatCubinHandle
);

extern void __cudaRegisterVar(
        void **fatCubinHandle,
        char *hostVar,
        char *deviceAddress,
  const char *deviceName,
        int ext,
        int size,
        int constant,
        int global
);

extern void __cudaRegisterTexture(
        void **fatCubinHandle,
  const struct textureReference *hostVar,
  const void **deviceAddress,
  const char *deviceName,
        int dim,
        int norm,
        int ext
);

extern void __cudaRegisterShared(
  void **fatCubinHandle,
  void **devicePtr
);

extern void __cudaRegisterSharedVar(
  void **fatCubinHandle,
  void **devicePtr,
  size_t size,
  size_t alignment,
  int storage
);

extern void __cudaRegisterFunction(
        void **fatCubinHandle,
  const char *hostFun,
        char *deviceFun,
  const char *deviceName,
        int thread_limit,
        uint3 *tid,
        uint3 *bid,
        dim3 *bDim,
        dim3 *gDim,
        int *wSize
);


}


static void **__cudaFatCubinHandle;

static void __cudaUnregisterBinaryUtil(void)
{
  __cudaUnregisterFatBinary(__cudaFatCubinHandle);
}



__attribute__((__destructor__)) static void __cudaUnregisterBinary(void)
{
  __cudaUnregisterBinaryUtil();
}
# 225 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 3
# 1 "/usr/local/cuda/bin/../include/common_functions.h" 1 3
# 68 "/usr/local/cuda/bin/../include/common_functions.h" 3
# 1 "/usr/local/cuda/bin/../include/crt/func_macro.h" 1 3
# 69 "/usr/local/cuda/bin/../include/common_functions.h" 2 3

static clock_t __cuda_clock(void)
{
  return clock();
}

static void *__cuda_memset(void *s, int c, size_t n)
{
  return memset(s, c, n);
}

static void *__cuda_memcpy(void *d, const void *s, size_t n)
{
  return memcpy(d, s, n);
}
# 93 "/usr/local/cuda/bin/../include/common_functions.h" 3
# 1 "/usr/local/cuda/bin/../include/math_functions.h" 1 3
# 820 "/usr/local/cuda/bin/../include/math_functions.h" 3
# 1 "/usr/local/cuda/bin/../include/crt/func_macro.h" 1 3
# 821 "/usr/local/cuda/bin/../include/math_functions.h" 2 3






extern int __cuda_error_not_implememted(void);
# 883 "/usr/local/cuda/bin/../include/math_functions.h" 3
static int __cuda_abs(int a)
{
  return abs(a);
}

static float __cuda_fabsf(float a)
{
  return fabsf(a);
}

static long long int __cuda_llabs(long long int a)
{

  return ::llabs(a);



}

static float __cuda_exp2f(float a)
{
  return exp2f(a);
}

# 1 "/usr/local/cuda/bin/../include/device_functions.h" 1 3
# 344 "/usr/local/cuda/bin/../include/device_functions.h" 3
# 1 "/usr/local/cuda/bin/../include/crt/func_macro.h" 1 3
# 345 "/usr/local/cuda/bin/../include/device_functions.h" 2 3

# 1 "/usr/local/cuda/bin/../include/host_defines.h" 1 3
# 347 "/usr/local/cuda/bin/../include/device_functions.h" 2 3
# 1 "/usr/local/cuda/bin/../include/math_constants.h" 1 3
# 348 "/usr/local/cuda/bin/../include/device_functions.h" 2 3



static int __cuda___isnan(double a);
static int __cuda___isnanf(float a);
static int __double2int_rz(double);
static unsigned int __double2uint_rz(double);
static long long int __double2ll_rz(double);
static unsigned long long int __double2ull_rz(double);
# 370 "/usr/local/cuda/bin/../include/device_functions.h" 3
static int __mulhi(int a, int b)
{
  long long int c = (long long int)a * (long long int)b;

  return (int)(c >> 32);
}

static unsigned int __umulhi(unsigned int a, unsigned int b)
{
  unsigned long long int c = (unsigned long long int)a * (unsigned long long int)b;

  return (unsigned int)(c >> 32);
}

static unsigned long long int __umul64hi(unsigned long long int a, unsigned long long int b)
{
  unsigned int a_lo = (unsigned int)a;
  unsigned long long int a_hi = a >> 32;
  unsigned int b_lo = (unsigned int)b;
  unsigned long long int b_hi = b >> 32;
  unsigned long long int m1 = a_lo * b_hi;
  unsigned long long int m2 = a_hi * b_lo;
  unsigned int carry;

  carry = (0ULL + __umulhi(a_lo, b_lo) + (unsigned int)m1 + (unsigned int)m2) >> 32;

  return a_hi * b_hi + (m1 >> 32) + (m2 >> 32) + carry;
}

static long long int __mul64hi(long long int a, long long int b)
{
  long long int res;
  res = __umul64hi(a, b);
  if (a < 0LL) res = res - b;
  if (b < 0LL) res = res - a;
  return res;
}

static float __saturatef(float a)
{
  return a >= 1.0f ? 1.0f : a <= 0.0f ? 0.0f : a;
}

static unsigned int __sad(int a, int b, unsigned int c)
{
  long long int diff = (long long int)a - (long long int)b;

  return (unsigned int)(__cuda_llabs(diff) + (long long int)c);
}

static unsigned int __usad(unsigned int a, unsigned int b, unsigned int c)
{
  long long int diff = (long long int)a - (long long int)b;

  return (unsigned int)(__cuda_llabs(diff) + (long long int)c);
}

static int __mul24(int a, int b)
{

  a &= 0xffffff;
  a = (a & 0x800000) != 0 ? a | ~0xffffff : a;
  b &= 0xffffff;
  b = (b & 0x800000) != 0 ? b | ~0xffffff : b;


  return a * b;
}

static unsigned int __umul24(unsigned int a, unsigned int b)
{

  a &= 0xffffff;
  b &= 0xffffff;


  return a * b;
}

static float __int_as_float(int a)
{
  volatile union {int a; float b;} u;

  u.a = a;

  return u.b;
}

static int __float_as_int(float a)
{
  volatile union {float a; int b;} u;

  u.a = a;

  return u.b;
}

static long long int __internal_float2ll_kernel(float a, long long int max, long long int min, long long int nan, enum cudaRoundMode rndMode)
{
  unsigned long long int res, t = 0ULL;
  int shift;
  unsigned int ia;

  if (sizeof(a) == sizeof(double) && __cuda___isnan((double)a)) return nan; if (sizeof(a) == sizeof(float) && __cuda___isnanf((float)a)) return nan; if (a >= max) return max; if (a <= min) return min;
  ia = __float_as_int(a);
  shift = 189 - ((ia >> 23) & 0xff);
  res = (unsigned long long int)(((ia << 8) | 0x80000000) >> 1) << 32;
  if (shift >= 64) {
    t = res;
    res = 0;
  } else if (shift) {
    t = res << (64 - shift);
    res = res >> shift;
  }
  if (rndMode == cudaRoundNearest && (long long int)t < 0LL) {
    res += t == 0x8000000000000000ULL ? res & 1ULL : 1ULL;
  }
  else if (rndMode == cudaRoundMinInf && t != 0ULL && ia > 0x80000000) {
    res++;
  }
  else if (rndMode == cudaRoundPosInf && t != 0ULL && (int)ia > 0) {
    res++;
  }
  if ((int)ia < 0) res = (unsigned long long int)-(long long int)res;
  return (long long int)res;
}

static int __internal_float2int(float a, enum cudaRoundMode rndMode)
{
  return (int)__internal_float2ll_kernel(a, 2147483647LL, -2147483648LL, 0LL, rndMode);
}

static int __float2int_rz(float a)
{



  return __internal_float2int(a, cudaRoundZero);

}

static int __float2int_ru(float a)
{
  return __internal_float2int(a, cudaRoundPosInf);
}

static int __float2int_rd(float a)
{
  return __internal_float2int(a, cudaRoundMinInf);
}

static int __float2int_rn(float a)
{
  return __internal_float2int(a, cudaRoundNearest);
}

static long long int __internal_float2ll(float a, enum cudaRoundMode rndMode)
{
  return __internal_float2ll_kernel(a, 9223372036854775807LL, -9223372036854775807LL -1LL, -9223372036854775807LL -1LL, rndMode);
}

static long long int __float2ll_rz(float a)
{



  return __internal_float2ll(a, cudaRoundZero);

}

static long long int __float2ll_ru(float a)
{
  return __internal_float2ll(a, cudaRoundPosInf);
}

static long long int __float2ll_rd(float a)
{
  return __internal_float2ll(a, cudaRoundMinInf);
}

static long long int __float2ll_rn(float a)
{
  return __internal_float2ll(a, cudaRoundNearest);
}

static unsigned long long int __internal_float2ull_kernel(float a, unsigned long long int max, unsigned long long int nan, enum cudaRoundMode rndMode)
{
  unsigned long long int res, t = 0ULL;
  int shift;
  unsigned int ia;

  if (sizeof(a) == sizeof(double) && __cuda___isnan((double)a)) return nan; if (sizeof(a) == sizeof(float) && __cuda___isnanf((float)a)) return nan; if (a >= max) return max; if (a <= 0LL) return 0LL;
  ia = __float_as_int(a);
  shift = 190 - ((ia >> 23) & 0xff);
  res = (unsigned long long int)((ia << 8) | 0x80000000) << 32;
  if (shift >= 64) {
    t = res >> (int)(shift > 64);
    res = 0;
  } else if (shift) {
    t = res << (64 - shift);
    res = res >> shift;
  }
  if (rndMode == cudaRoundNearest && (long long int)t < 0LL) {
    res += t == 0x8000000000000000ULL ? res & 1ULL : 1ULL;
  }
  else if (rndMode == cudaRoundPosInf && t != 0ULL) {
    res++;
  }
  return res;
}

static unsigned int __internal_float2uint(float a, enum cudaRoundMode rndMode)
{
  return (unsigned int)__internal_float2ull_kernel(a, 4294967295U, 0U, rndMode);
}

static unsigned int __float2uint_rz(float a)
{



  return __internal_float2uint(a, cudaRoundZero);

}

static unsigned int __float2uint_ru(float a)
{
  return __internal_float2uint(a, cudaRoundPosInf);
}

static unsigned int __float2uint_rd(float a)
{
  return __internal_float2uint(a, cudaRoundMinInf);
}

static unsigned int __float2uint_rn(float a)
{
  return __internal_float2uint(a, cudaRoundNearest);
}

static unsigned long long int __internal_float2ull(float a, enum cudaRoundMode rndMode)
{
  return __internal_float2ull_kernel(a, 18446744073709551615ULL, 9223372036854775808ULL, rndMode);
}

static unsigned long long int __float2ull_rz(float a)
{



  return __internal_float2ull(a, cudaRoundZero);

}

static unsigned long long int __float2ull_ru(float a)
{
  return __internal_float2ull(a, cudaRoundPosInf);
}

static unsigned long long int __float2ull_rd(float a)
{
  return __internal_float2ull(a, cudaRoundMinInf);
}

static unsigned long long int __float2ull_rn(float a)
{
  return __internal_float2ull(a, cudaRoundNearest);
}

static int __internal_normalize64(unsigned long long int *a)
{
  int lz = 0;

  if ((*a & 0xffffffff00000000ULL) == 0ULL) {
    *a <<= 32;
    lz += 32;
  }
  if ((*a & 0xffff000000000000ULL) == 0ULL) {
    *a <<= 16;
    lz += 16;
  }
  if ((*a & 0xff00000000000000ULL) == 0ULL) {
    *a <<= 8;
    lz += 8;
  }
  if ((*a & 0xf000000000000000ULL) == 0ULL) {
    *a <<= 4;
    lz += 4;
  }
  if ((*a & 0xC000000000000000ULL) == 0ULL) {
    *a <<= 2;
    lz += 2;
  }
  if ((*a & 0x8000000000000000ULL) == 0ULL) {
    *a <<= 1;
    lz += 1;
  }
  return lz;
}

static int __internal_normalize(unsigned int *a)
{
  unsigned long long int t = (unsigned long long int)*a;
  int lz = __internal_normalize64(&t);

  *a = (unsigned int)(t >> 32);

  return lz - 32;
}

static float __internal_int2float_kernel(int a, enum cudaRoundMode rndMode)
{
  volatile union {
    float f;
    unsigned int i;
  } res;
  int shift;
  unsigned int t;
  res.i = a;
  if (a == 0) return res.f;
  if (a < 0) res.i = (unsigned int)-a;
  shift = __internal_normalize((unsigned int*)&res.i);
  t = res.i << 24;
  res.i = (res.i >> 8);
  res.i += (127 + 30 - shift) << 23;
  if (a < 0) res.i |= 0x80000000;
  if ((rndMode == cudaRoundNearest) && (t >= 0x80000000)) {
    res.i += (t == 0x80000000) ? (res.i & 1) : (t >> 31);
  }
  else if ((rndMode == cudaRoundMinInf) && t && (a < 0)) {
    res.i++;
  }
  else if ((rndMode == cudaRoundPosInf) && t && (a > 0)) {
    res.i++;
  }
  return res.f;
}

static float __int2float_rz(int a)
{
  return __internal_int2float_kernel(a, cudaRoundZero);
}

static float __int2float_ru(int a)
{
  return __internal_int2float_kernel(a, cudaRoundPosInf);
}

static float __int2float_rd(int a)
{
  return __internal_int2float_kernel(a, cudaRoundMinInf);
}

static float __int2float_rn(int a)
{



  return __internal_int2float_kernel(a, cudaRoundNearest);

}

static float __internal_uint2float_kernel(unsigned int a, enum cudaRoundMode rndMode)
{
  volatile union {
    float f;
    unsigned int i;
  } res;
  int shift;
  unsigned int t;
  res.i = a;
  if (a == 0) return res.f;
  shift = __internal_normalize((unsigned int*)&res.i);
  t = res.i << 24;
  res.i = (res.i >> 8);
  res.i += (127 + 30 - shift) << 23;
  if ((rndMode == cudaRoundNearest) && (t >= 0x80000000)) {
    res.i += (t == 0x80000000) ? (res.i & 1) : (t >> 31);
  }
  else if ((rndMode == cudaRoundPosInf) && t) {
    res.i++;
  }
  return res.f;
}

static float __uint2float_rz(unsigned int a)
{
  return __internal_uint2float_kernel(a, cudaRoundZero);
}

static float __uint2float_ru(unsigned int a)
{
  return __internal_uint2float_kernel(a, cudaRoundPosInf);
}

static float __uint2float_rd(unsigned int a)
{
  return __internal_uint2float_kernel(a, cudaRoundMinInf);
}

static float __uint2float_rn(unsigned int a)
{



  return __internal_uint2float_kernel(a, cudaRoundNearest);

}

static float __ll2float_rn(long long int a)
{
  return (float)a;
}

static float __ull2float_rn(unsigned long long int a)
{



  unsigned long long int temp;
  unsigned int res, t;
  int shift;
  if (a == 0ULL) return 0.0f;
  temp = a;
  shift = __internal_normalize64(&temp);
  temp = (temp >> 8) | ((temp & 0xffULL) ? 1ULL : 0ULL);
  res = (unsigned int)(temp >> 32);
  t = (unsigned int)temp;
  res += (127 + 62 - shift) << 23;
  res += t == 0x80000000 ? res & 1 : t >> 31;
  return __int_as_float(res);

}

static float __internal_fmul_kernel(float a, float b, int rndNearest)
{
  unsigned long long product;
  volatile union {
    float f;
    unsigned int i;
  } xx, yy;
  unsigned expo_x, expo_y;

  xx.f = a;
  yy.f = b;

  expo_y = 0xFF;
  expo_x = expo_y & (xx.i >> 23);
  expo_x = expo_x - 1;
  expo_y = expo_y & (yy.i >> 23);
  expo_y = expo_y - 1;

  if ((expo_x <= 0xFD) &&
      (expo_y <= 0xFD)) {
multiply:
    expo_x = expo_x + expo_y;
    expo_y = xx.i ^ yy.i;
    xx.i = xx.i & 0x00ffffff;
    yy.i = yy.i << 8;
    xx.i = xx.i | 0x00800000;
    yy.i = yy.i | 0x80000000;

    product = ((unsigned long long)xx.i) * yy.i;
    expo_x = expo_x - 127 + 2;
    expo_y = expo_y & 0x80000000;
    xx.i = (unsigned int)(product >> 32);
    yy.i = (unsigned int)(product & 0xffffffff);

    if (xx.i < 0x00800000) {
      xx.i = (xx.i << 1) | (yy.i >> 31);
      yy.i = (yy.i << 1);
      expo_x--;
    }
    if (expo_x <= 0xFD) {
      xx.i = xx.i | expo_y;
      xx.i = xx.i + (expo_x << 23);

      if (yy.i < 0x80000000) return xx.f;
      xx.i += (((yy.i == 0x80000000) ? (xx.i & 1) : (yy.i >> 31))
               && rndNearest);
      return xx.f;
    } else if ((int)expo_x >= 254) {

      xx.i = (expo_y | 0x7F800000) - (!rndNearest);
      return xx.f;
    } else {

      expo_x = ((unsigned int)-((int)expo_x));
      if (expo_x > 25) {

        xx.i = expo_y;
        return xx.f;
      } else {
        yy.i = (xx.i << (32 - expo_x)) | ((yy.i) ? 1 : 0);
        xx.i = expo_y + (xx.i >> expo_x);
        xx.i += (((yy.i == 0x80000000) ? (xx.i & 1) : (yy.i >> 31))
                 && rndNearest);
        return xx.f;
      }
    }
  } else {
    product = xx.i ^ yy.i;
    product = product & 0x80000000;
    if (!(xx.i & 0x7fffffff)) {
      if (expo_y != 254) {
        xx.i = (unsigned int)product;
        return xx.f;
      }
      expo_y = yy.i << 1;
      if (expo_y == 0xFF000000) {
        xx.i = expo_y | 0x00C00000;
      } else {
        xx.i = yy.i | 0x00400000;
      }
      return xx.f;
    }
    if (!(yy.i & 0x7fffffff)) {
      if (expo_x != 254) {
        xx.i = (unsigned int)product;
        return xx.f;
      }
      expo_x = xx.i << 1;
      if (expo_x == 0xFF000000) {
        xx.i = expo_x | 0x00C00000;
      } else {
        xx.i = xx.i | 0x00400000;
      }
      return xx.f;
    }
    if ((expo_y != 254) && (expo_x != 254)) {
      expo_y++;
      expo_x++;
      if (expo_x == 0) {
        expo_y |= xx.i & 0x80000000;




        xx.i = xx.i << 8;
        while (!(xx.i & 0x80000000)) {
          xx.i <<= 1;
          expo_x--;
        }
        xx.i = (xx.i >> 8) | (expo_y & 0x80000000);
        expo_y &= ~0x80000000;
        expo_y--;
        goto multiply;
      }
      if (expo_y == 0) {
        expo_x |= yy.i & 0x80000000;
        yy.i = yy.i << 8;
        while (!(yy.i & 0x80000000)) {
          yy.i <<= 1;
          expo_y--;
        }
        yy.i = (yy.i >> 8) | (expo_x & 0x80000000);
        expo_x &= ~0x80000000;
        expo_x--;
        goto multiply;
      }
    }
    expo_x = xx.i << 1;
    expo_y = yy.i << 1;

    if (expo_x > 0xFF000000) {

      xx.i = xx.i | 0x00400000;
      return xx.f;
    }

    if (expo_y > 0xFF000000) {

      xx.i = yy.i | 0x00400000;
      return xx.f;
    }
    xx.i = (unsigned int)product | 0x7f800000;
    return xx.f;
  }
}

static float __internal_fadd_kernel(float a, float b, int rndNearest)
{
  volatile union {
    float f;
    unsigned int i;
  } xx, yy;
  unsigned int expo_x;
  unsigned int expo_y;
  unsigned int temp;

  xx.f = a;
  yy.f = b;


  expo_y = yy.i << 1;
  if (expo_y > (xx.i << 1)) {
    expo_y = xx.i;
    xx.i = yy.i;
    yy.i = expo_y;
  }

  temp = 0xff;
  expo_x = temp & (xx.i >> 23);
  expo_x = expo_x - 1;
  expo_y = temp & (yy.i >> 23);
  expo_y = expo_y - 1;

  if ((expo_x <= 0xFD) &&
      (expo_y <= 0xFD)) {

add:
    expo_y = expo_x - expo_y;
    if (expo_y > 25) {
      expo_y = 31;
    }
    temp = xx.i ^ yy.i;
    xx.i = xx.i & ~0x7f000000;
    xx.i = xx.i | 0x00800000;
    yy.i = yy.i & ~0xff000000;
    yy.i = yy.i | 0x00800000;

    if ((int)temp < 0) {

      temp = 32 - expo_y;
      temp = (expo_y) ? (yy.i << temp) : 0;
      temp = (unsigned int)(-((int)temp));
      xx.i = xx.i - (yy.i >> expo_y) - (temp ? 1 : 0);
      if (xx.i & 0x00800000) {
        if (expo_x <= 0xFD) {
          xx.i = xx.i & ~0x00800000;
          xx.i = (xx.i + (expo_x << 23)) + 0x00800000;
          if (temp < 0x80000000) return xx.f;
          xx.i += (((temp == 0x80000000) ? (xx.i & 1) : (temp >> 31))
                   && rndNearest);
          return xx.f;
        }
      } else {
        if ((temp | (xx.i << 1)) == 0) {

          xx.i = 0;
          return xx.f;
        }

        yy.i = xx.i & 0x80000000;
        do {
          xx.i = (xx.i << 1) | (temp >> 31);
          temp <<= 1;
          expo_x--;
        } while (!(xx.i & 0x00800000));
        xx.i = xx.i | yy.i;
      }
    } else {

      temp = 32 - expo_y;
      temp = (expo_y) ? (yy.i << temp) : 0;
      xx.i = xx.i + (yy.i >> expo_y);
      if (!(xx.i & 0x01000000)) {
        if (expo_x <= 0xFD) {
          expo_y = xx.i & 1;
          xx.i = xx.i + (expo_x << 23);
          if (temp < 0x80000000) return xx.f;
          xx.i += (((temp == 0x80000000) ? expo_y : (temp >> 31))
                   && rndNearest);
          return xx.f;
        }
      } else {

        temp = (xx.i << 31) | (temp >> 1);

        xx.i = ((xx.i & 0x80000000) | (xx.i >> 1)) & ~0x40000000;
        expo_x++;
      }
    }
    if (expo_x <= 0xFD) {
      expo_y = xx.i & 1;
      xx.i += (((temp == 0x80000000) ? expo_y : (temp >> 31))
               && rndNearest);
      xx.i = xx.i + (expo_x << 23);
      return xx.f;
    }
    if ((int)expo_x >= 254) {

        xx.i = ((xx.i & 0x80000000) | 0x7f800000) - (!rndNearest);
        return xx.f;
    }

    expo_y = expo_x + 32;
    yy.i = xx.i & 0x80000000;
    xx.i = xx.i & ~0xff000000;

    expo_x = (unsigned int)(-((int)expo_x));
    temp = xx.i << expo_y | ((temp) ? 1 : 0);
    xx.i = yy.i | (xx.i >> expo_x);
    xx.i += (((temp == 0x80000000) ? (xx.i & 1) : (temp >> 31))
             && rndNearest);
    return xx.f;
  } else {

    if (!(yy.i << 1)) {
      if (xx.i == 0x80000000) {
        xx.i = yy.i;
      }
      return xx.f;
    }
    if ((expo_y != 254) && (expo_x != 254)) {

      if (expo_x == (unsigned int) -1) {
        temp = xx.i & 0x80000000;
        xx.i = xx.i << 8;
        while (!(xx.i & 0x80000000)) {
          xx.i <<= 1;
          expo_x--;
        }
        expo_x++;
        xx.i = (xx.i >> 8) | temp;
      }
      if (expo_y == (unsigned int) -1) {
        temp = yy.i & 0x80000000;
        yy.i = yy.i << 8;
        while (!(yy.i & 0x80000000)) {
          yy.i <<= 1;
          expo_y--;
        }
        expo_y++;
        yy.i = (yy.i >> 8) | temp;
      }
      goto add;
    }
    expo_x = xx.i << 1;
    expo_y = yy.i << 1;

    if (expo_x > 0xff000000) {

      xx.i = xx.i | 0x00400000;
      return xx.f;
    }

    if (expo_y > 0xff000000) {

      xx.i = yy.i | 0x00400000;
      return xx.f;
    }
    if ((expo_x == 0xff000000) && (expo_y == 0xff000000)) {




      expo_x = xx.i ^ yy.i;
      xx.i = xx.i | ((expo_x) ? 0xffc00000 : 0);
      return xx.f;
    }

    if (expo_y == 0xff000000) {
      xx.i = yy.i;
    }
    return xx.f;
  }
}

static float __fadd_rz(float a, float b)
{
  return __internal_fadd_kernel(a, b, 0);
}

static float __fmul_rz(float a, float b)
{
  return __internal_fmul_kernel(a, b, 0);
}

static float __fadd_rn(float a, float b)
{
  return __internal_fadd_kernel(a, b, 1);
}

static float __fmul_rn(float a, float b)
{
  return __internal_fmul_kernel(a, b, 1);
}

static void __brkpt(int c)
{

}
# 1166 "/usr/local/cuda/bin/../include/device_functions.h" 3
extern int __cudaSynchronizeThreads(void**, void*);



static inline __attribute__((always_inline)) void __syncthreads(void)
{
  volatile int _ = 0;
  L: if (__cudaSynchronizeThreads((void**)&&L, (void*)&_)) goto L;
}
# 1187 "/usr/local/cuda/bin/../include/device_functions.h" 3
static void __trap(void)
{
  __builtin_trap();
}
# 1209 "/usr/local/cuda/bin/../include/device_functions.h" 3
static float __fdividef(float a, float b)
{






  if (__cuda_fabsf(b) > 8.507059173e37f) {
    if (__cuda_fabsf(a) <= 3.402823466e38f) {
      return ((a / b) / 3.402823466e38f) / 3.402823466e38f;
    } else {
      return __int_as_float(0x7fffffff);
    }
  } else {
    return a / b;
  }

}

static float __sinf(float a)
{
  return sinf(a);
}

static float __cosf(float a)
{
  return cosf(a);
}

static float __log2f(float a)
{
  return log2f(a);
}







static float __internal_accurate_fdividef(float a, float b)
{
  if (__cuda_fabsf(b) > 8.507059173e37f) {
    a *= .25f;
    b *= .25f;
  }
  return __fdividef(a, b);
}

static float __tanf(float a)
{



  return __sinf(a) / __cosf(a);

}

static void __sincosf(float a, float *sptr, float *cptr)
{



  *sptr = __sinf(a);
  *cptr = __cosf(a);

}

static float __expf(float a)
{



  return __cuda_exp2f(a * 1.442695041f);

}

static float __exp10f(float a)
{



  return __cuda_exp2f(a * 3.321928094f);

}

static float __log10f(float a)
{



  return 0.301029996f * __log2f(a);

}

static float __logf(float a)
{



  return 0.693147181f * __log2f(a);

}

static float __powf(float a, float b)
{



  return __cuda_exp2f(b * __log2f(a));

}

static float fdividef(float a, float b)
{





  return __internal_accurate_fdividef(a, b);

}

static int __clz(int a)
{
  return (a)?(158-(__float_as_int(__uint2float_rz((unsigned int)a))>>23)):32;
}

static int __ffs(int a)
{
  return 32 - __clz (a & -a);
}

static int __popc(unsigned int a)
{
  unsigned int s = 033333333333;
  unsigned int t = 030707070707;
  unsigned int n;
  n = (a >> 1) & s;
  a = a - n;
  n = (n >> 1) & s;
  a = a - n;
  n = (a >> 3) + a;
  a = n & t;
  t = (t << 2) & t;
  a = (a >> 30) + ((a * t) >> 26);
  return a;
}

static int __clzll(long long int a)
{
  int ahi = ((int)(a >> 32));
  int alo = ((int)(a & 0xffffffffULL));
  int res;
  if (ahi) {
      res = 0;
  } else {
      res = 32;
      ahi = alo;
  }
  res = res + __clz(ahi);
  return res;
}

static int __ffsll(long long int a)
{
  return 64 - __clzll (a & -a);
}

static int __popcll(unsigned long long int a)
{
  unsigned int ahi = ((unsigned int)(a >> 32));
  unsigned int alo = ((unsigned int)(a & 0xffffffffULL));
  return __popc(ahi) + __popc(alo);
}
# 1395 "/usr/local/cuda/bin/../include/device_functions.h" 3
static double fdivide(double a, double b)
{
  return (double)fdividef((float)a, (float)b);
}



static int __double2int_rz(double a)
{
  return __float2int_rz((float)a);
}

static unsigned int __double2uint_rz(double a)
{
  return __float2uint_rz((float)a);
}

static long long int __double2ll_rz(double a)
{
  return __float2ll_rz((float)a);
}

static unsigned long long int __double2ull_rz(double a)
{
  return __float2ull_rz((float)a);
}
# 1472 "/usr/local/cuda/bin/../include/device_functions.h" 3
# 1 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h" 1 3
# 210 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h" 3
# 1 "/usr/local/cuda/bin/../include/crt/func_macro.h" 1 3
# 211 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h" 2 3



static int __iAtomicAdd(int *address, int val)
{
  int old = *address;

  *address = old + val;

  return old;
}

static unsigned int __uAtomicAdd(unsigned int *address, unsigned int val)
{
  unsigned int old = *address;

  *address = old + val;

  return old;
}

static int __iAtomicExch(int *address, int val)
{
  int old = *address;

  *address = val;

  return old;
}

static unsigned int __uAtomicExch(unsigned int *address, unsigned int val)
{
  unsigned int old = *address;

  *address = val;

  return old;
}

static float __fAtomicExch(float *address, float val)
{
  float old = *address;

  *address = val;

  return old;
}

static int __iAtomicMin(int *address, int val)
{
  int old = *address;

  *address = old < val ? old : val;

  return old;
}

static unsigned int __uAtomicMin(unsigned int *address, unsigned int val)
{
  unsigned int old = *address;

  *address = old < val ? old : val;

  return old;
}

static int __iAtomicMax(int *address, int val)
{
  int old = *address;

  *address = old > val ? old : val;

  return old;
}

static unsigned int __uAtomicMax(unsigned int *address, unsigned int val)
{
  unsigned int old = *address;

  *address = old > val ? old : val;

  return old;
}

static unsigned int __uAtomicInc(unsigned int *address, unsigned int val)
{
  unsigned int old = *address;

  *address = (old >= val) ? 0 : old + 1;

  return old;
}

static unsigned int __uAtomicDec(unsigned int *address, unsigned int val)
{
  unsigned int old = *address;

  *address = ((old == 0) | (old > val)) ? val : (old - 1);

  return old;
}

static int __iAtomicAnd(int *address, int val)
{
  int old = *address;

  *address = old & val;

  return old;
}

static unsigned int __uAtomicAnd(unsigned int *address, unsigned int val)
{
  unsigned int old = *address;

  *address = old & val;

  return old;
}

static int __iAtomicOr(int *address, int val)
{
  int old = *address;

  *address = old | val;

  return old;
}

static unsigned int __uAtomicOr(unsigned int *address, unsigned int val)
{
  unsigned int old = *address;

  *address = old | val;

  return old;
}

static int __iAtomicXor(int *address, int val)
{
  int old = *address;

  *address = old ^ val;

  return old;
}

static unsigned int __uAtomicXor(unsigned int *address, unsigned int val)
{
  unsigned int old = *address;

  *address = old ^ val;

  return old;
}

static int __iAtomicCAS(int *address, int compare, int val)
{
  int old = *address;

  *address = old == compare ? val : old;

  return old;
}

static unsigned int __uAtomicCAS(unsigned int *address, unsigned int compare, unsigned int val)
{
  unsigned int old = *address;

  *address = old == compare ? val : old;

  return old;
}
# 1473 "/usr/local/cuda/bin/../include/device_functions.h" 2 3
# 1 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h" 1 3
# 103 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h" 3
# 1 "/usr/local/cuda/bin/../include/crt/func_macro.h" 1 3
# 104 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h" 2 3



static unsigned long long int __ullAtomicAdd(unsigned long long int *address, unsigned long long int val)
{
  unsigned long long int old = *address;

  *address = old + val;

  return old;
}

static unsigned long long int __ullAtomicExch(unsigned long long int *address, unsigned long long int val)
{
  unsigned long long int old = *address;

  *address = val;

  return old;
}

static unsigned long long int __ullAtomicCAS(unsigned long long int *address, unsigned long long int compare, unsigned long long int val)
{
  unsigned long long int old = *address;

  *address = old == compare ? val : old;

  return old;
}

static int __any(int cond)
{
  return cond;
}

static int __all(int cond)
{
  return cond;
}
# 1474 "/usr/local/cuda/bin/../include/device_functions.h" 2 3
# 1 "/usr/local/cuda/bin/../include/sm_13_double_functions.h" 1 3
# 256 "/usr/local/cuda/bin/../include/sm_13_double_functions.h" 3
# 1 "/usr/local/cuda/bin/../include/crt/func_macro.h" 1 3
# 257 "/usr/local/cuda/bin/../include/sm_13_double_functions.h" 2 3
# 266 "/usr/local/cuda/bin/../include/sm_13_double_functions.h" 3
static double __longlong_as_double(long long int a)
{
  volatile union {long long int a; double b;} u;

  u.a = a;

  return u.b;
}

static long long int __double_as_longlong(double a)
{
  volatile union {double a; long long int b;} u;

  u.a = a;

  return u.b;
}

static float __internal_double2float_kernel(double a)
{
  volatile union {
    double d;
    unsigned long long int i;
  } xx;
  volatile union {
    float f;
    unsigned int i;
  } res;
  int shift;
  xx.d = a;
  if (xx.i == 0) return 0.0f;
  res.i = (((unsigned int) (xx.i >> 32)) & 0x80000000);
  if ((xx.i & 0x7ff0000000000000ULL) == 0x7ff0000000000000ULL) {
    if ((xx.i & 0x7fffffffffffffffULL) > 0x7ff0000000000000ULL) {

      res.i = 0x7f8fffff;
    } else {

      res.i |= 0x7f800000;
    }
    return res.f;
  }
  shift = ((int) ((xx.i >> 52) & 0x7ff)) - 1023;

  xx.i = (xx.i & 0x000fffffffffffffULL);
  if (shift >= 128) {
    res.i |= 0x7f7fffff;
    return res.f;
  }
  if (shift <= -127) {
    if (shift < -180) {

      xx.i = 0;
    } else {
      xx.i |= 0x0010000000000000ULL;
      xx.i >>= 127 + shift;
    }
  } else {
    res.i |= (unsigned int) (127 + shift) << 23;
  }
  res.i |= ((unsigned int) (xx.i >> 29)) & 0x007fffff;
  xx.i &= 0x1fffffff;
  return res.f;
}

static double __internal_ll2double_kernel(long long int a, enum cudaRoundMode rndMode)
{
  volatile union {
    double d;
    unsigned long long int i;
  } res;
  int shift;
  unsigned int t;
  res.i = a;
  if (a == 0) return res.d;
  if (a < 0) res.i = (unsigned long long int)-a;
  shift = __internal_normalize64((unsigned long long int*)&res.i);
  t = ((unsigned int) res.i) << 21;
  res.i >>= 11;
  res.i += ((unsigned long long int)(1023 + 62 - shift)) << 52;
  if (a < 0) res.i |= 0x8000000000000000ULL;
  if ((rndMode == cudaRoundNearest) && (t >= 0x80000000)) {
    res.i += (t == 0x80000000) ? (res.i & 1) : 1;
  }
  else if ((rndMode == cudaRoundMinInf) && t && (a < 0)) {
    res.i++;
  }
  else if ((rndMode == cudaRoundPosInf) && t && (a > 0)) {
    res.i++;
  }
  return res.d;
}

static double __internal_ull2double_kernel(unsigned long long int a, enum cudaRoundMode rndMode)
{
  volatile union {
    double d;
    unsigned long long int i;
  } res;
  int shift;
  unsigned int t;
  res.i = a;
  if (a == 0) return res.d;
  shift = __internal_normalize64((unsigned long long int *)&res.i);
  t = ((unsigned int) res.i) << 21;
  res.i >>= 11;
  res.i += ((unsigned long long int)(1023 + 62 - shift)) << 52;
  if ((rndMode == cudaRoundNearest) && (t >= 0x80000000)) {
    res.i += (t == 0x80000000) ? (res.i & 1) : 1;
  }
  else if ((rndMode == cudaRoundPosInf) && t) {
    res.i++;
  }
  return res.d;
}

static long long int __internal_double2ll_kernel(double a, long long int max, long long int min, long long int nan, enum cudaRoundMode rndMode)
{
  volatile union {
    double d;
    unsigned long long int i;
  } xx, res;
  unsigned long long int t = 0;
  int shift;

  xx.d = a;
  if (sizeof(a) == sizeof(double) && __cuda___isnan((double)a)) return nan; if (sizeof(a) == sizeof(float) && __cuda___isnanf((float)a)) return nan; if (a >= max) return max; if (a <= min) return min;
  shift = (int) (1023 + 62 - ((xx.i >> 52) & 0x7ff));
  res.i = ((xx.i << 11) | 0x8000000000000000ULL) >> 1;
  if (shift >= 64) {
    t = res.i;
    res.i = 0;
  } else if (shift) {
    t = res.i << (64 - shift);
    res.i = res.i >> shift;
  }
  if ((rndMode == cudaRoundNearest) && (t >= 0x8000000000000000ULL)) {
    res.i += (t == 0x8000000000000000ULL) ? (res.i & 1) : 1;
  }
  else if ((rndMode == cudaRoundMinInf) && t &&
          (xx.i > 0x8000000000000000ULL)) {
    res.i++;
  }
  else if ((rndMode == cudaRoundPosInf) && t && ((long long int)xx.i > 0)) {
    res.i++;
  }
  if ((long long int)xx.i < 0) {
    res.i = (unsigned long long int)(-(long long int)res.i);
  }
  return res.i;
}

static unsigned long long int __internal_double2ull_kernel(double a, unsigned long long int max, unsigned long long int nan, enum cudaRoundMode rndMode)
{
  volatile union {
    double d;
    unsigned long long int i;
  } xx, res;
  unsigned long long int t = 0;
  int shift;
  xx.d = a;
  if (sizeof(a) == sizeof(double) && __cuda___isnan((double)a)) return nan; if (sizeof(a) == sizeof(float) && __cuda___isnanf((float)a)) return nan; if (a >= max) return max; if (a <= 0LL) return 0LL;

  if (a == 0.0) return 0LL;
  shift = (int) (1023 + 63 - ((xx.i >> 52) & 0x7ff));
  res.i = ((xx.i << 11) | 0x8000000000000000ULL);
  if (shift >= 64) {
    t = res.i >> (int)(shift > 64);
    res.i = 0;
  } else if (shift) {
    t = res.i << (64 - shift);
    res.i = res.i >> shift;
  }
  if ((rndMode == cudaRoundNearest) && (t >= 0x8000000000000000ULL)) {
    res.i += (t == 0x8000000000000000ULL) ? (res.i & 1) : 1;
  }
  else if ((rndMode == cudaRoundPosInf) && t) {
    res.i++;
  }
  return res.i;
}

static int __double2hiint(double a)
{
  volatile union {
    double d;
    signed int i[2];
  } cvt;

  cvt.d = a;

  return cvt.i[1];
}

static int __double2loint(double a)
{
  volatile union {
    double d;
    signed int i[2];
  } cvt;

  cvt.d = a;

  return cvt.i[0];
}

static double __hiloint2double(int a, int b)
{
  volatile union {
    double d;
    signed int i[2];
  } cvt;

  cvt.i[0] = b;
  cvt.i[1] = a;

  return cvt.d;
}

static float __double2float_rn(double a)
{
  return (float)a;
}

static float __double2float_rz(double a)
{
  return __internal_double2float_kernel(a);
}

static int __internal_double2int(double a, enum cudaRoundMode rndMode)
{
  return (int)__internal_double2ll_kernel(a, 2147483647LL, -2147483648LL, -2147483648LL, rndMode);
}

static int __double2int_rn(double a)
{
  return __internal_double2int(a, cudaRoundNearest);
}

static int __double2int_ru(double a)
{
  return __internal_double2int(a, cudaRoundPosInf);
}

static int __double2int_rd(double a)
{
  return __internal_double2int(a, cudaRoundMinInf);
}

static unsigned int __internal_double2uint(double a, enum cudaRoundMode rndMode)
{
  return (unsigned int)__internal_double2ull_kernel(a, 4294967295ULL, 2147483648ULL, rndMode);
}

static unsigned int __double2uint_rn(double a)
{
  return __internal_double2uint(a, cudaRoundNearest);
}

static unsigned int __double2uint_ru(double a)
{
  return __internal_double2uint(a, cudaRoundPosInf);
}

static unsigned int __double2uint_rd(double a)
{
  return __internal_double2uint(a, cudaRoundMinInf);
}

static long long int __internal_double2ll(double a, enum cudaRoundMode rndMode)
{
  return __internal_double2ll_kernel(a, 9223372036854775807LL, -9223372036854775807LL -1LL, -9223372036854775807LL -1LL, rndMode);
}

static long long int __double2ll_rn(double a)
{
  return __internal_double2ll(a, cudaRoundNearest);
}

static long long int __double2ll_ru(double a)
{
  return __internal_double2ll(a, cudaRoundPosInf);
}

static long long int __double2ll_rd(double a)
{
  return __internal_double2ll(a, cudaRoundMinInf);
}

static unsigned long long int __internal_double2ull(double a, enum cudaRoundMode rndMode)
{
  return __internal_double2ull_kernel(a, 18446744073709551615ULL, 9223372036854775808ULL, rndMode);
}

static unsigned long long int __double2ull_rn(double a)
{
  return __internal_double2ull(a, cudaRoundNearest);
}

static unsigned long long int __double2ull_ru(double a)
{
  return __internal_double2ull(a, cudaRoundPosInf);
}

static unsigned long long int __double2ull_rd(double a)
{
  return __internal_double2ull(a, cudaRoundMinInf);
}

static double __int2double_rn(int a)
{
  return (double)a;
}

static double __uint2double_rn(unsigned int a)
{
  return (double)a;
}

static double __ll2double_rn(long long int a)
{
  return (double)a;
}

static double __ll2double_rz(long long int a)
{
  return __internal_ll2double_kernel(a, cudaRoundZero);
}

static double __ll2double_rd(long long int a)
{
  return __internal_ll2double_kernel(a, cudaRoundMinInf);
}

static double __ll2double_ru(long long int a)
{
  return __internal_ll2double_kernel(a, cudaRoundPosInf);
}

static double __ull2double_rn(unsigned long long int a)
{
  return __internal_ull2double_kernel(a, cudaRoundNearest);
}

static double __ull2double_rz(unsigned long long int a)
{
  return __internal_ull2double_kernel(a, cudaRoundZero);
}

static double __ull2double_rd(unsigned long long int a)
{
  return __internal_ull2double_kernel(a, cudaRoundMinInf);
}

static double __ull2double_ru(unsigned long long int a)
{
  return __internal_ull2double_kernel(a, cudaRoundPosInf);
}





static double __internal_fma_kernel(double x, double y, double z, enum cudaRoundMode rndMode)
{
  struct {
    unsigned int lo;
    unsigned int hi;
  } xx, yy, zz, ww;
  unsigned int s, t, u, prod0, prod1, prod2, prod3, expo_x, expo_y, expo_z;

  xx.hi = __double2hiint(x);
  xx.lo = __double2loint(x);
  yy.hi = __double2hiint(y);
  yy.lo = __double2loint(y);
  zz.hi = __double2hiint(z);
  zz.lo = __double2loint(z);

  expo_z = 0x7FF;
  t = xx.hi >> 20;
  expo_x = expo_z & t;
  expo_x = expo_x - 1;
  t = yy.hi >> 20;
  expo_y = expo_z & t;
  expo_y = expo_y - 1;
  t = zz.hi >> 20;
  expo_z = expo_z & t;
  expo_z = expo_z - 1;

  if (!((expo_x <= 0x7FD) &&
        (expo_y <= 0x7FD) &&
        (expo_z <= 0x7FD))) {





    if (((yy.hi << 1) | (yy.lo != 0)) > 0xffe00000) {
      yy.hi |= 0x00080000;
      return __hiloint2double(yy.hi, yy.lo);
    }
    if (((zz.hi << 1) | (zz.lo != 0)) > 0xffe00000) {
      zz.hi |= 0x00080000;
      return __hiloint2double(zz.hi, zz.lo);
    }
    if (((xx.hi << 1) | (xx.lo != 0)) > 0xffe00000) {
      xx.hi |= 0x00080000;
      return __hiloint2double(xx.hi, xx.lo);
    }
# 687 "/usr/local/cuda/bin/../include/sm_13_double_functions.h" 3
    if (((((xx.hi << 1) | xx.lo) == 0) &&
         (((yy.hi << 1) | (yy.lo != 0)) == 0xffe00000)) ||
        ((((yy.hi << 1) | yy.lo) == 0) &&
         (((xx.hi << 1) | (xx.lo != 0)) == 0xffe00000))) {
      xx.hi = 0xfff80000;
      xx.lo = 0x00000000;
      return __hiloint2double(xx.hi, xx.lo);
    }
    if (((zz.hi << 1) | (zz.lo != 0)) == 0xffe00000) {
      if ((((yy.hi << 1) | (yy.lo != 0)) == 0xffe00000) ||
          (((xx.hi << 1) | (xx.lo != 0)) == 0xffe00000)) {
        if ((int)(xx.hi ^ yy.hi ^ zz.hi) < 0) {
          xx.hi = 0xfff80000;
          xx.lo = 0x00000000;
          return __hiloint2double(xx.hi, xx.lo);
        }
      }
    }




    if (((xx.hi << 1) | (xx.lo != 0)) == 0xffe00000) {
      xx.hi = xx.hi ^ (yy.hi & 0x80000000);
      return __hiloint2double(xx.hi, xx.lo);
    }
    if (((yy.hi << 1) | (yy.lo != 0)) == 0xffe00000) {
      yy.hi = yy.hi ^ (xx.hi & 0x80000000);
      return __hiloint2double(yy.hi, yy.lo);
    }
    if (((zz.hi << 1) | (zz.lo != 0)) == 0xffe00000) {
      return __hiloint2double(zz.hi, zz.lo);
    }





    if ((zz.hi == 0x80000000) && (zz.lo == 0)) {
      if ((((xx.hi << 1) | xx.lo) == 0) ||
          (((yy.hi << 1) | yy.lo) == 0)) {
        if ((int)(xx.hi ^ yy.hi) < 0) {
          return __hiloint2double(zz.hi, zz.lo);
        }
      }
    }



    if ((((zz.hi << 1) | zz.lo) == 0) &&
        ((((xx.hi << 1) | xx.lo) == 0) ||
         (((yy.hi << 1) | yy.lo) == 0))) {
      if (rndMode == cudaRoundMinInf) {
        return __hiloint2double((xx.hi ^ yy.hi ^ zz.hi) & 0x80000000, zz.lo);
      } else {
        zz.hi &= 0x7fffffff;
        return __hiloint2double(zz.hi, zz.lo);
      }
    }




    if ((((xx.hi << 1) | xx.lo) == 0) ||
        (((yy.hi << 1) | yy.lo) == 0)) {
      return __hiloint2double(zz.hi, zz.lo);
    }

    if (expo_x == 0xffffffff) {
      expo_x++;
      t = xx.hi & 0x80000000;
      s = xx.lo >> 21;
      xx.lo = xx.lo << 11;
      xx.hi = xx.hi << 11;
      xx.hi = xx.hi | s;
      if (!xx.hi) {
        xx.hi = xx.lo;
        xx.lo = 0;
        expo_x -= 32;
      }
      while ((int)xx.hi > 0) {
        s = xx.lo >> 31;
        xx.lo = xx.lo + xx.lo;
        xx.hi = xx.hi + xx.hi;
        xx.hi = xx.hi | s;
        expo_x--;
      }
      xx.lo = (xx.lo >> 11);
      xx.lo |= (xx.hi << 21);
      xx.hi = (xx.hi >> 11) | t;
    }
    if (expo_y == 0xffffffff) {
      expo_y++;
      t = yy.hi & 0x80000000;
      s = yy.lo >> 21;
      yy.lo = yy.lo << 11;
      yy.hi = yy.hi << 11;
      yy.hi = yy.hi | s;
      if (!yy.hi) {
        yy.hi = yy.lo;
        yy.lo = 0;
        expo_y -= 32;
      }
      while ((int)yy.hi > 0) {
        s = yy.lo >> 31;
        yy.lo = yy.lo + yy.lo;
        yy.hi = yy.hi + yy.hi;
        yy.hi = yy.hi | s;
        expo_y--;
      }
      yy.lo = (yy.lo >> 11);
      yy.lo |= (yy.hi << 21);
      yy.hi = (yy.hi >> 11) | t;
    }
    if (expo_z == 0xffffffff) {
      expo_z++;
      t = zz.hi & 0x80000000;
      s = zz.lo >> 21;
      zz.lo = zz.lo << 11;
      zz.hi = zz.hi << 11;
      zz.hi = zz.hi | s;
      if (!zz.hi) {
        zz.hi = zz.lo;
        zz.lo = 0;
        expo_z -= 32;
      }
      while ((int)zz.hi > 0) {
        s = zz.lo >> 31;
        zz.lo = zz.lo + zz.lo;
        zz.hi = zz.hi + zz.hi;
        zz.hi = zz.hi | s;
        expo_z--;
      }
      zz.lo = (zz.lo >> 11);
      zz.lo |= (zz.hi << 21);
      zz.hi = (zz.hi >> 11) | t;
    }
  }

  expo_x = expo_x + expo_y;
  expo_y = xx.hi ^ yy.hi;
  t = xx.lo >> 21;
  xx.lo = xx.lo << 11;
  xx.hi = xx.hi << 11;
  xx.hi = xx.hi | t;
  yy.hi = yy.hi & 0x000fffff;
  xx.hi = xx.hi | 0x80000000;
  yy.hi = yy.hi | 0x00100000;

  prod0 = xx.lo * yy.lo;
  prod1 = __umulhi (xx.lo, yy.lo);
  prod2 = xx.hi * yy.lo;
  prod3 = xx.lo * yy.hi;
  prod1 += prod2;
  t = prod1 < prod2;
  prod1 += prod3;
  t += prod1 < prod3;
  prod2 = __umulhi (xx.hi, yy.lo);
  prod3 = __umulhi (xx.lo, yy.hi);
  prod2 += prod3;
  s = prod2 < prod3;
  prod3 = xx.hi * yy.hi;
  prod2 += prod3;
  s += prod2 < prod3;
  prod2 += t;
  s += prod2 < t;
  prod3 = __umulhi (xx.hi, yy.hi) + s;

  yy.lo = prod0;
  yy.hi = prod1;
  xx.lo = prod2;
  xx.hi = prod3;
  expo_x = expo_x - (1023 - 2);
  expo_y = expo_y & 0x80000000;

  if (xx.hi < 0x00100000) {
    s = xx.lo >> 31;
    s = (xx.hi << 1) + s;
    xx.hi = s;
    s = yy.hi >> 31;
    s = (xx.lo << 1) + s;
    xx.lo = s;
    s = yy.lo >> 31;
    s = (yy.hi << 1) + s;
    yy.hi = s;
    s = yy.lo << 1;
    yy.lo = s;
    expo_x--;
  }

  t = 0;
  if (((zz.hi << 1) | zz.lo) != 0) {

    s = zz.hi & 0x80000000;

    zz.hi &= 0x000fffff;
    zz.hi |= 0x00100000;
    ww.hi = 0;
    ww.lo = 0;


    if ((int)expo_z > (int)expo_x) {
      t = expo_z;
      expo_z = expo_x;
      expo_x = t;
      t = zz.hi;
      zz.hi = xx.hi;
      xx.hi = t;
      t = zz.lo;
      zz.lo = xx.lo;
      xx.lo = t;
      t = ww.hi;
      ww.hi = yy.hi;
      yy.hi = t;
      t = ww.lo;
      ww.lo = yy.lo;
      yy.lo = t;
      t = expo_y;
      expo_y = s;
      s = t;
    }



    expo_z = expo_x - expo_z;
    u = expo_y ^ s;
    if (expo_z <= 107) {

      t = 0;
      while (expo_z >= 32) {
        t = ww.lo | (t != 0);
        ww.lo = ww.hi;
        ww.hi = zz.lo;
        zz.lo = zz.hi;
        zz.hi = 0;
        expo_z -= 32;
      }
      if (expo_z) {
        t = (t >> expo_z) | (ww.lo << (32 - expo_z)) |
                ((t << (32 - expo_z)) != 0);
        ww.lo = (ww.lo >> expo_z) | (ww.hi << (32 - expo_z));
        ww.hi = (ww.hi >> expo_z) | (zz.lo << (32 - expo_z));
        zz.lo = (zz.lo >> expo_z) | (zz.hi << (32 - expo_z));
        zz.hi = (zz.hi >> expo_z);
      }
    } else {
      t = 1;
      ww.lo = 0;
      ww.hi = 0;
      zz.lo = 0;
      zz.hi = 0;
    }
    if ((int)u < 0) {

      t = (unsigned)(-(int)t);
      s = (t != 0);
      u = yy.lo - s;
      s = u > yy.lo;
      yy.lo = u - ww.lo;
      s += yy.lo > u;
      u = yy.hi - s;
      s = u > yy.hi;
      yy.hi = u - ww.hi;
      s += yy.hi > u;
      u = xx.lo - s;
      s = u > xx.lo;
      xx.lo = u - zz.lo;
      s += xx.lo > u;
      xx.hi = (xx.hi - zz.hi) - s;
      if (!(xx.hi | xx.lo | yy.hi | yy.lo | t)) {

        if (rndMode == cudaRoundMinInf) {
          return __hiloint2double(0x80000000, xx.lo);
        } else {
          return __hiloint2double(xx.hi, xx.lo);
        }
      }
      if ((int)xx.hi < 0) {



        t = ~t;
        yy.lo = ~yy.lo;
        yy.hi = ~yy.hi;
        xx.lo = ~xx.lo;
        xx.hi = ~xx.hi;
        if (++t == 0) {
          if (++yy.lo == 0) {
            if (++yy.hi == 0) {
              if (++xx.lo == 0) {
              ++xx.hi;
              }
            }
          }
        }
        expo_y ^= 0x80000000;
      }


      while (!(xx.hi & 0x00100000)) {
        xx.hi = (xx.hi << 1) | (xx.lo >> 31);
        xx.lo = (xx.lo << 1) | (yy.hi >> 31);
        yy.hi = (yy.hi << 1) | (yy.lo >> 31);
        yy.lo = (yy.lo << 1);
        expo_x--;
      }
    } else {

      yy.lo = yy.lo + ww.lo;
      s = yy.lo < ww.lo;
      yy.hi = yy.hi + s;
      u = yy.hi < s;
      yy.hi = yy.hi + ww.hi;
      u += yy.hi < ww.hi;
      xx.lo = xx.lo + u;
      s = xx.lo < u;
      xx.lo = xx.lo + zz.lo;
      s += xx.lo < zz.lo;
      xx.hi = xx.hi + zz.hi + s;
      if (xx.hi & 0x00200000) {
        t = t | (yy.lo << 31);
        yy.lo = (yy.lo >> 1) | (yy.hi << 31);
        yy.hi = (yy.hi >> 1) | (xx.lo << 31);
        xx.lo = (xx.lo >> 1) | (xx.hi << 31);
        xx.hi = ((xx.hi & 0x80000000) | (xx.hi >> 1)) & ~0x40000000;
        expo_x++;
      }
    }
  }
  t = yy.lo | (t != 0);
  t = yy.hi | (t != 0);

  xx.hi |= expo_y;
  if (expo_x <= 0x7FD) {

    xx.hi = xx.hi & ~0x00100000;
    s = xx.lo & 1;
    u = xx.lo;
    if (rndMode == cudaRoundNearest) {
      xx.lo += (t == 0x80000000) ? s : (t >> 31);
    } else if (((rndMode == cudaRoundPosInf) && t && (!expo_y)) ||
               ((rndMode == cudaRoundMinInf) && t && expo_y)) {
      xx.lo += 1;
    }
    xx.hi += (u > xx.lo);
    xx.hi += ((expo_x + 1) << 20);
    return __hiloint2double(xx.hi, xx.lo);
  } else if ((int)expo_x >= 2046) {

    if ((rndMode == cudaRoundNearest) ||
        ((rndMode == cudaRoundPosInf) && (!expo_y)) ||
        ((rndMode == cudaRoundMinInf) && expo_y)) {
      xx.hi = (xx.hi & 0x80000000) | 0x7ff00000;
      xx.lo = 0;
    } else {
      xx.hi = (xx.hi & 0x80000000) | 0x7fefffff;
      xx.lo = 0xffffffff;
    }
    return __hiloint2double(xx.hi, xx.lo);
  }

  expo_x = (unsigned)(-(int)expo_x);
  if (expo_x > 54) {

    if (((rndMode == cudaRoundPosInf) && (!expo_y)) ||
        ((rndMode == cudaRoundMinInf) && expo_y)) {
      return __hiloint2double(xx.hi & 0x80000000, 1);
    } else {
      return __hiloint2double(xx.hi & 0x80000000, 0);
    }
  }
  yy.hi = xx.hi & 0x80000000;
  xx.hi = xx.hi & ~0xffe00000;
  if (expo_x >= 32) {
    t = xx.lo | (t != 0);
    xx.lo = xx.hi;
    xx.hi = 0;
    expo_x -= 32;
  }
  if (expo_x) {
    t = (t >> expo_x) | (xx.lo << (32 - expo_x)) | (t != 0);
    xx.lo = (xx.lo >> expo_x) | (xx.hi << (32 - expo_x));
    xx.hi = (xx.hi >> expo_x);
  }
  expo_x = xx.lo & 1;
  u = xx.lo;
  if (rndMode == cudaRoundNearest) {
    xx.lo += (t == 0x80000000) ? expo_x : (t >> 31);
  } else if (((rndMode == cudaRoundPosInf) && t && (!expo_y)) ||
             ((rndMode == cudaRoundMinInf) && t && expo_y)) {
    xx.lo += 1;
  }
  xx.hi += (u > xx.lo);
  xx.hi |= yy.hi;
  return __hiloint2double(xx.hi, xx.lo);
}

static double __fma_rn(double x, double y, double z)
{
  return __internal_fma_kernel(x, y, z, cudaRoundNearest);
}

static double __fma_rd(double x, double y, double z)
{
  return __internal_fma_kernel(x, y, z, cudaRoundMinInf);
}

static double __fma_ru(double x, double y, double z)
{
  return __internal_fma_kernel(x, y, z, cudaRoundPosInf);
}

static double __fma_rz(double x, double y, double z)
{
  return __internal_fma_kernel(x, y, z, cudaRoundZero);
}

static double __dadd_rz(double a, double b)
{
  return __fma_rz(a, 1.0, b);
}

static double __dadd_ru(double a, double b)
{
  return __fma_ru(a, 1.0, b);
}

static double __dadd_rd(double a, double b)
{
  return __fma_rd(a, 1.0, b);
}

static double __dmul_rz(double a, double b)
{
  return __fma_rz(a, b, __hiloint2double(0x80000000, 0x00000000));
}

static double __dmul_ru(double a, double b)
{
  return __fma_ru(a, b, __hiloint2double(0x80000000, 0x00000000));
}

static double __dmul_rd(double a, double b)
{
  return __fma_rd(a, b, 0.0);
}

static double __dadd_rn(double a, double b)
{
  return __fma_rn(a, 1.0, b);
}

static double __dmul_rn(double a, double b)
{
  return __fma_rn(a, b, __hiloint2double(0x80000000, 0x00000000));
}
# 1475 "/usr/local/cuda/bin/../include/device_functions.h" 2 3
# 1 "/usr/local/cuda/bin/../include/texture_fetch_functions.h" 1 3
# 1876 "/usr/local/cuda/bin/../include/texture_fetch_functions.h" 3
# 1 "/usr/local/cuda/bin/../include/host_defines.h" 1 3
# 1877 "/usr/local/cuda/bin/../include/texture_fetch_functions.h" 2 3
# 1 "/usr/local/cuda/bin/../include/crt/func_macro.h" 1 3
# 1878 "/usr/local/cuda/bin/../include/texture_fetch_functions.h" 2 3
# 1909 "/usr/local/cuda/bin/../include/texture_fetch_functions.h" 3
extern void __cudaTextureFetch(const void *tex, void *index, int integer, void *val);

static int4 __itexfetchi(const void *tex, int4 index)
{
  int4 val;

  __cudaTextureFetch(tex, (void*)&index, 1, (void*)&val);

  return val;
}

static uint4 __utexfetchi(const void *tex, int4 index)
{
  uint4 val;

  __cudaTextureFetch(tex, (void*)&index, 1, (void*)&val);

  return val;
}

static float4 __ftexfetchi(const void *tex, int4 index)
{
  float4 val;

  __cudaTextureFetch(tex, (void*)&index, 1, (void*)&val);

  return val;
}

static int4 __itexfetch(const void *tex, float4 index, int dim)
{
  int4 val;

  __cudaTextureFetch(tex, (void*)&index, 0, (void*)&val);

  return val;
}

static uint4 __utexfetch(const void *tex, float4 index, int dim)
{
  uint4 val;

  __cudaTextureFetch(tex, (void*)&index, 0, (void*)&val);

  return val;
}

static float4 __ftexfetch(const void *tex, float4 index, int dim)
{
  float4 val;

  __cudaTextureFetch(tex, (void*)&index, 0, (void*)&val);

  return val;
}
# 1476 "/usr/local/cuda/bin/../include/device_functions.h" 2 3
# 908 "/usr/local/cuda/bin/../include/math_functions.h" 2 3
# 1 "/usr/local/cuda/bin/../include/math_constants.h" 1 3
# 909 "/usr/local/cuda/bin/../include/math_functions.h" 2 3

static int __cuda___signbitf(float a)
{
  return (int)((unsigned int)__float_as_int(a) >> 31);
}




static float __cuda_copysignf(float a, float b)
{
  return __int_as_float((__float_as_int(b) & 0x80000000) |
                        (__float_as_int(a) & ~0x80000000));
}
# 932 "/usr/local/cuda/bin/../include/math_functions.h" 3
extern __attribute__((__weak_import__, __weak__)) int min(int a, int b); int min(int a, int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak_import__, __weak__)) unsigned int umin(unsigned int a, unsigned int b); unsigned int umin(unsigned int a, unsigned int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak_import__, __weak__)) int max(int a, int b); int max(int a, int b)
{
  return a > b ? a : b;
}

extern __attribute__((__weak_import__, __weak__)) unsigned int umax(unsigned int a, unsigned int b); unsigned int umax(unsigned int a, unsigned int b)
{
  return a > b ? a : b;
}
# 1016 "/usr/local/cuda/bin/../include/math_functions.h" 3
static float __internal_nearbyintf(float a)
{
  float fa = fabsf(a);

  if (fa >= 8388608.0f) {
    return a;
  } else {
    volatile float u = 8388608.0f + fa;

    u = u - 8388608.0f;
    return copysignf(u, a);
  }
}

static float __internal_fminf(float a, float b)
{
  volatile union {
    float f;
    unsigned int i;
  } cvta, cvtb;

  cvta.f = a;
  cvtb.f = b;
  if ((cvta.i << 1) > 0xff000000) return b;
  if ((cvtb.i << 1) > 0xff000000) return a;
  if ((cvta.i | cvtb.i) == 0x80000000) {
    return __int_as_float(0x80000000);
  }
  return a < b ? a : b;
}

static float __internal_fmaxf(float a, float b)
{
  volatile union {
    float f;
    unsigned int i;
  } cvta, cvtb;

  cvta.f = a;
  cvtb.f = b;
  if ((cvta.i << 1) > 0xff000000) return b;
  if ((cvtb.i << 1) > 0xff000000) return a;
  if ((cvta.f == 0.0f) && (cvtb.f == 0.0f)) {
    cvta.i &= cvtb.i;
    return cvta.f;
  }
  return a > b ? a : b;
}
# 1104 "/usr/local/cuda/bin/../include/math_functions.h" 3
static long int __cuda_labs(long int a)
{
  return labs(a);
}

static float __cuda_ceilf(float a)
{
  return ceilf(a);
}

static float __cuda_floorf(float a)
{
  return floorf(a);
}

static float __cuda_sqrtf(float a)
{
   return sqrtf(a);
}

static float __cuda_rsqrtf(float a)
{
   return 1.0f / sqrtf(a);
}

static float __cuda_truncf(float a)
{
  return truncf(a);
}

static int __cuda_max(int a, int b)
{
  return max(a, b);
}

static int __cuda_min(int a, int b)
{
  return min(a, b);
}

static unsigned int __cuda_umax(unsigned int a, unsigned int b)
{
  return umax(a, b);
}

static unsigned int __cuda_umin(unsigned int a, unsigned int b)
{
  return umin(a, b);
}

static long long int __cuda_llrintf(float a)
{



  return __float2ll_rn(a);

}

static long int __cuda_lrintf(float a)
{






  return (long int)__float2int_rn(a);


}

static float __cuda_nearbyintf(float a)
{



  return __internal_nearbyintf(a);

}

static float __cuda_fmaxf(float a, float b)
{





  return __internal_fmaxf(a, b);

}

static float __cuda_fminf(float a, float b)
{





  return __internal_fminf(a, b);

}
# 1223 "/usr/local/cuda/bin/../include/math_functions.h" 3
static int __cuda___finitef(float a)
{
  return __cuda_fabsf(a) < __int_as_float(0x7f800000);
}



static int __cuda___isfinitef(float a)
{
  return __cuda___finitef(a);
}



static int __cuda___isinff(float a)
{
  return __cuda_fabsf(a) == __int_as_float(0x7f800000);
}

static int __cuda___isnanf(float a)
{
  return !(__cuda_fabsf(a) <= __int_as_float(0x7f800000));
}

static float __cuda_nextafterf(float a, float b)
{
  unsigned int ia;
  unsigned int ib;
  ia = __float_as_int(a);
  ib = __float_as_int(b);




  if (__cuda___isnanf(a) || __cuda___isnanf(b)) return a + b;
  if (__int_as_float (ia | ib) == 0.0f) return __int_as_float(ib);





  if (__int_as_float(ia) == 0.0f) {
    return __cuda_copysignf(__int_as_float(0x00000001), b);
  }

  if ((a < b) && (a < 0.0f)) ia--;
  if ((a < b) && (a > 0.0f)) ia++;
  if ((a > b) && (a < 0.0f)) ia++;
  if ((a > b) && (a > 0.0f)) ia--;
  a = __int_as_float(ia);





  return a;
}

static float __cuda_nanf(const char *tagp)
{

  return __int_as_float(0x7fffffff);
}


static float __internal_atanhf_kernel(float a_1, float a_2)
{
  float a, a2, t;

  a = a_1 + a_2;
  a2 = a * a;
  t = 1.566305595598990E-001f/64.0f;
  t = t * a2 + 1.995081856004762E-001f/16.0f;
  t = t * a2 + 3.333382699617026E-001f/4.0f;
  t = t * a2;
  t = t * a + a_2;
  t = t + a_1;
  return t;
}




static float __internal_atanf_kernel(float a)
{
  float t4, t0, t1;

  t4 = a * a;
  t0 = - 5.674867153f;
  t0 = t4 * - 0.823362947f + t0;
  t0 = t0 * t4 - 6.565555096f;
  t0 = t0 * t4;
  t0 = t0 * a;
  t1 = t4 + 11.33538818f;
  t1 = t1 * t4 + 28.84246826f;
  t1 = t1 * t4 + 19.69667053f;
  t1 = 1.0f / t1;
  a = t0 * t1 + a;
  return a;
}


static float __internal_tan_kernel(float a)
{
  float a2, s, t;

  a2 = a * a;
  t = 4.114678393115178E-003f * a2 - 8.231194034909670E-001f;
  s = a2 - 2.469348886157666E+000f;
  s = 1.0f / s;
  t = t * s;
  t = t * a2;
  t = t * a + a;
  return t;
}

static float __internal_accurate_logf(float a)
{
  float t;
  float z;
  float m;
  int ia, e;
  ia = __float_as_int(a);

  if ((ia < 0x00800000) || (ia > 0x7f7fffff)) {
    return __logf(a);
  }

  m = __int_as_float((ia & 0x807fffff) | 0x3f800000);
  e = ((unsigned)ia >> 23) - 127;
  if (m > 1.414213562f) {
    m = m * 0.5f;
    e = e + 1;
  }
  t = m - 1.0f;
  z = m + 1.0f;
  z = t / z;
  z = -t * z;
  z = __internal_atanhf_kernel(t, z);
  z = (float)e * 0.693147181f + z;
  return z;
}

static float2 __internal_log_ep(float a)
{
  float2 res;
  int expo;
  float m;
  float log_hi, log_lo;
  float t_hi, t_lo;
  float f, g, u, v, q;



  float r, s, e;

  expo = (__float_as_int(a) >> 23) & 0xff;


  if (expo == 0) {
    a *= 16777216.0f;
    expo = (__float_as_int(a) >> 23) & 0xff;
    expo -= 24;
  }

  expo -= 127;
  m = __int_as_float((__float_as_int(a) & 0x807fffff) | 0x3f800000);
  if (m > 1.414213562f) {
    m = m * 0.5f;
    expo = expo + 1;
  }






  f = m - 1.0f;
  g = m + 1.0f;
  g = 1.0f / g;
  u = 2.0f * f * g;
  v = u * u;
  q = 1.49356810919559350E-001f/64.0f;
  q = q * v + 1.99887797540072460E-001f/16.0f;
  q = q * v + 3.33333880955515580E-001f/4.0f;
  q = q * v;
  q = q * u;
  log_hi = __int_as_float(__float_as_int(u) & 0xfffff000);
  v = __int_as_float(__float_as_int(f) & 0xfffff000);
  u = 2.0f * (f - log_hi);
  f = f - v;
  u = u - log_hi * v;
  u = u - log_hi * f;
  u = g * u;



  r = log_hi + u;
  s = u - (r - log_hi);
  log_hi = r;
  log_lo = s;

  r = log_hi + q;
  s = ((log_hi - r) + q) + log_lo;
  log_hi = e = r + s;
  log_lo = (r - e) + s;


  t_hi = expo * 0.6931457519f;
  t_lo = expo * 1.4286067653e-6f;


  r = t_hi + log_hi;
  s = (((t_hi - r) + log_hi) + log_lo) + t_lo;
  res.y = e = r + s;
  res.x = (r - e) + s;
  return res;
}

static float __internal_accurate_log2f(float a)
{
  return 1.442695041f * __internal_accurate_logf(a);
}


static unsigned int __cudart_i2opi_f [] = {
  0x3c439041,
  0xdb629599,
  0xf534ddc0,
  0xfc2757d1,
  0x4e441529,
  0xa2f9836e,
};


static float __internal_trig_reduction_kernel(float a, int *quadrant)
{
  float j;
  int q;
  if (__cuda_fabsf(a) > 48039.0f) {

    unsigned int ia = __float_as_int(a);
    unsigned int s = ia & 0x80000000;
    unsigned int result[7];
    unsigned int phi, plo;
    unsigned int hi, lo;
    unsigned int e;
    int idx;
    e = ((ia >> 23) & 0xff) - 128;
    ia = (ia << 8) | 0x80000000;

    idx = 4 - (e >> 5);
    hi = 0;



    for (q = 0; q < 6; q++) {
      plo = __cudart_i2opi_f[q] * ia;
      phi = __umulhi (__cudart_i2opi_f[q], ia);
      lo = hi + plo;
      hi = phi + (lo < plo);
      result[q] = lo;
    }
    result[q] = hi;
    e = e & 31;



    hi = result[idx+2];
    lo = result[idx+1];
    if (e) {
      q = 32 - e;
      hi = (hi << e) | (lo >> q);
      lo = (lo << e) | (result[idx] >> q);
    }
    q = hi >> 30;

    hi = (hi << 2) | (lo >> 30);
    lo = (lo << 2);
    e = (hi + (lo > 0)) > 0x80000000;
    q += e;
    if (s) q = -q;
    if (e) {
      unsigned int t;
      hi = ~hi;
      lo = -(int)lo;
      t = (lo == 0);
      hi += t;
      s = s ^ 0x80000000;
    }
    *quadrant = q;

    e = 0;
    while ((int)hi > 0) {
      hi = (hi << 1) | (lo >> 31);
      lo = (lo << 1);
      e--;
    }
    lo = hi * 0xc90fdaa2;
    hi = __umulhi(hi, 0xc90fdaa2);
    if ((int)hi > 0) {
      hi = (hi << 1) | (lo >> 31);
      lo = (lo << 1);
      e--;
    }
    hi = hi + (lo > 0);
    ia = s | (((e + 126) << 23) + (hi >> 8) + ((hi << 24) >= 0x80000000));
    return __int_as_float(ia);
  }
  q = __float2int_rn(a * 0.636619772f);
  j = (float)q;
  a = a - j * 1.5703125000000000e+000f;
  a = a - j * 4.8351287841796875e-004f;
  a = a - j * 3.1385570764541626e-007f;
  a = a - j * 6.0771005065061922e-011f;
  *quadrant = q;
  return a;
}
# 1551 "/usr/local/cuda/bin/../include/math_functions.h" 3
static float __internal_expf_kernel(float a, float scale)
{
  float j, z;

  j = __cuda_truncf(a * 1.442695041f);
  z = a - j * 0.6931457519f;
  z = z - j * 1.4286067653e-6f;
  z = z * 1.442695041f;
  z = __cuda_exp2f(z) * __cuda_exp2f(j + scale);
  return z;
}

static float __internal_accurate_expf(float a)
{
  float z;
  z = __internal_expf_kernel(a, 0.0f);
  if (a < -105.0f) z = 0.0f;
  if (a > 105.0f) z = __int_as_float(0x7f800000);
  return z;
}

static float __internal_accurate_exp10f(float a)
{
  float j, z;
  j = __cuda_truncf(a * 3.321928094f);
  z = a - j * 3.0102920532226563e-001f;
  z = z - j * 7.9034171557301747e-007f;
  z = z * 3.321928094f;
  z = __cuda_exp2f(z) * __cuda_exp2f(j);
  if (a < -46.0f) z = 0.0f;
  if (a > 46.0f) z = __int_as_float(0x7f800000);
  return z;
}

static float __internal_lgammaf_pos(float a)
{
  float sum;
  float s, t;

  if (a == __int_as_float(0x7f800000)) {
    return a;
  }
  if (a >= 3.0f) {
    if (a >= 7.8f) {



      s = 1.0f / a;
      t = s * s;
      sum = 0.77783067e-3f;
      sum = sum * t - 0.2777655457e-2f;
      sum = sum * t + 0.83333273853e-1f;
      sum = sum * s + 0.918938533204672f;
      s = 0.5f * __internal_accurate_logf(a);
      t = a - 0.5f;
      s = s * t;
      t = s - a;
      s = __fadd_rn(s, sum);
      t = t + s;
      return t;
    } else {
      a = a - 3.0f;
      s = - 7.488903254816711E+002f;
      s = s * a - 1.234974215949363E+004f;
      s = s * a - 4.106137688064877E+004f;
      s = s * a - 4.831066242492429E+004f;
      s = s * a - 1.430333998207429E+005f;
      t = a - 2.592509840117874E+002f;
      t = t * a - 1.077717972228532E+004f;
      t = t * a - 9.268505031444956E+004f;
      t = t * a - 2.063535768623558E+005f;
      t = s / t;
      t = t + a;
      return t;
    }
  } else if (a >= 1.5f) {
    a = a - 2.0f;
    t = + 4.959849168282574E-005f;
    t = t * a - 2.208948403848352E-004f;
    t = t * a + 5.413142447864599E-004f;
    t = t * a - 1.204516976842832E-003f;
    t = t * a + 2.884251838546602E-003f;
    t = t * a - 7.382757963931180E-003f;
    t = t * a + 2.058131963026755E-002f;
    t = t * a - 6.735248600734503E-002f;
    t = t * a + 3.224670187176319E-001f;
    t = t * a + 4.227843368636472E-001f;
    t = t * a;
    return t;
  } else if (a >= 0.7f) {
    a = 1.0f - a;
    t = + 4.588266515364258E-002f;
    t = t * a + 1.037396712740616E-001f;
    t = t * a + 1.228036339653591E-001f;
    t = t * a + 1.275242157462838E-001f;
    t = t * a + 1.432166835245778E-001f;
    t = t * a + 1.693435824224152E-001f;
    t = t * a + 2.074079329483975E-001f;
    t = t * a + 2.705875136435339E-001f;
    t = t * a + 4.006854436743395E-001f;
    t = t * a + 8.224669796332661E-001f;
    t = t * a + 5.772156651487230E-001f;
    t = t * a;
    return t;
  } else {
    t = + 3.587515669447039E-003f;
    t = t * a - 5.471285428060787E-003f;
    t = t * a - 4.462712795343244E-002f;
    t = t * a + 1.673177015593242E-001f;
    t = t * a - 4.213597883575600E-002f;
    t = t * a - 6.558672843439567E-001f;
    t = t * a + 5.772153712885004E-001f;
    t = t * a;
    t = t * a + a;
    return -__internal_accurate_logf(t);
  }
}


static float __internal_sin_kernel(float x)
{
  float x2, z;

  x2 = x * x;
  z = - 1.95152959e-4f;
  z = z * x2 + 8.33216087e-3f;
  z = z * x2 - 1.66666546e-1f;
  z = z * x2;
  z = z * x + x;

  return z;
}


static float __internal_cos_kernel(float x)
{
  float x2, z;

  x2 = x * x;
  z = 2.44331571e-5f;
  z = z * x2 - 1.38873163e-3f;
  z = z * x2 + 4.16666457e-2f;
  z = z * x2 - 5.00000000e-1f;
  z = z * x2 + 1.00000000e+0f;
  return z;
}

static float __internal_accurate_sinf(float a)
{
  float z;
  int i;

  if ((__cuda___isinff(a)) || (a == 0.0f)) {
    return __fmul_rn (a, 0.0f);
  }
  z = __internal_trig_reduction_kernel(a, &i);

  if (i & 1) {
    z = __internal_cos_kernel(z);
  } else {
    z = __internal_sin_kernel(z);
  }
  if (i & 2) {
    z = -z;
  }
  return z;
}







static float __cuda_rintf(float a)
{



  return __cuda_nearbyintf(a);

}

static float __cuda_sinf(float a)
{





  return __internal_accurate_sinf(a);

}

static float __cuda_cosf(float a)
{





  float z;
  int i;

  if (__cuda___isinff(a)) {
    return __int_as_float(0x7fffffff);
  }
  z = __internal_trig_reduction_kernel(a, &i);

  i++;
  if (i & 1) {
    z = __internal_cos_kernel(z);
  } else {
    z = __internal_sin_kernel(z);
  }
  if (i & 2) {
    z = -z;
  }
  return z;

}

static float __cuda_tanf(float a)
{





  float z;
  int i;

  if (__cuda___isinff(a)) {
    return __int_as_float(0x7fffffff);
  }
  z = __internal_trig_reduction_kernel(a, &i);

  z = __internal_tan_kernel(z);
  if (i & 1) {
    z = -1.0f / z;
  }
  return z;

}

static float __cuda_log2f(float a)
{





  return __internal_accurate_log2f(a);

}

static float __cuda_expf(float a)
{





  return __internal_accurate_expf(a);

}

static float __cuda_exp10f(float a)
{





  return __internal_accurate_exp10f(a);

}

static float __cuda_coshf(float a)
{
  float z;

  a = __cuda_fabsf(a);
  z = __internal_expf_kernel(a, -2.0f);
  z = 2.0f * z + 0.125f / z;
  if (a >= 90.0f) {
    z = __int_as_float(0x7f800000);
  }
  return z;
}

static float __cuda_sinhf(float a)
{
  float s, z;

  s = a;
  a = __cuda_fabsf(a);
  if (a < 1.0f) {
    float a2 = a * a;

    z = 2.816951222e-6f;
    z = z * a2 + 1.983615978e-4f;
    z = z * a2 + 8.333350058e-3f;
    z = z * a2 + 1.666666650e-1f;
    z = z * a2;
    z = z * a + a;
  } else {
    z = __internal_expf_kernel(a, -2.0f);
    z = 2.0f * z - 0.125f / z;
    if (a >= 90.0f) {
      z = __int_as_float(0x7f800000);
    }
  }
  return __cuda_copysignf(z, s);
}

static float __cuda_tanhf(float a)
{
  float s, t;

  t = __cuda_fabsf(a);
  if (t < 0.55f) {
    float z, z2;
    z = t;
    z2 = z * z;
    t = 1.643758066599993e-2f;
    t = t * z2 - 5.267181327760551e-2f;
    t = t * z2 + 1.332072505223051e-1f;
    t = t * z2 - 3.333294663641083e-1f;
    t = t * z2;
    s = t * z + z;
  } else {
    s = 1.0f - 2.0f / (__internal_expf_kernel(2.0f * t, 0.0f) + 1.0f);
    if (t >= 88.0f) {
      s = 1.0f;
    }
  }
  return __cuda_copysignf(s, a);
}

static float __cuda_atan2f(float a, float b)
{



  float t0, t1, t3, fa, fb;



  fb = __cuda_fabsf(b);
  fa = __cuda_fabsf(a);

  if (fa == 0.0f && fb == 0.0f) {
    t3 = __cuda___signbitf(b) ? 3.141592654f : 0;
  } else if ((fa == __int_as_float(0x7f800000)) && (fb == __int_as_float(0x7f800000))) {
    t3 = __cuda___signbitf(b) ? 2.356194490f : 0.785398163f;
  } else {

    if (fb < fa) {
      t0 = fa;
      t1 = fb;
    } else {
      t0 = fb;
      t1 = fa;
    }
    t3 = __internal_accurate_fdividef(t1, t0);
    t3 = __internal_atanf_kernel(t3);

    if (fa > fb) t3 = 1.570796327f - t3;
    if (b < 0.0f) t3 = 3.141592654f - t3;
  }
  t3 = __cuda_copysignf(t3, a);

  return t3;

}

static float __cuda_atanf(float a)
{
  float t0, t1;


  t0 = __cuda_fabsf(a);
  t1 = t0;
  if (t0 > 1.0f) {
    t1 = 1.0f / t1;
  }

  t1 = __internal_atanf_kernel(t1);

  if (t0 > 1.0f) {
    t1 = 1.570796327f - t1;
  }
  return __cuda_copysignf(t1, a);
}


static float __internal_asinf_kernel(float a)
{
  float t2, t3, t4;

  t2 = a * a;
  t3 = - 0.501162291f;
  t3 = t3 * t2 + 0.915201485f;
  t3 = t3 * t2;
  t3 = t3 * a;
  t4 = t2 - 5.478654385f;
  t4 = t4 * t2 + 5.491230488f;
  t4 = 1.0f / t4;
  a = t3 * t4 + a;
  return a;
}

static float __cuda_asinf(float a)
{
  float t0, t1, t2;

  t0 = __cuda_fabsf(a);
  t2 = 1.0f - t0;
  t2 = 0.5f * t2;
  t2 = __cuda_sqrtf(t2);
  t1 = t0 > 0.575f ? t2 : t0;
  t1 = __internal_asinf_kernel(t1);
  t2 = -2.0f * t1 + 1.570796327f;
  if (t0 > 0.575f) {
    t1 = t2;
  }
  return __cuda_copysignf(t1, a);
}

static float __cuda_acosf(float a)
{
  float t0, t1, t2;

  t0 = __cuda_fabsf(a);
  t2 = 1.0f - t0;
  t2 = 0.5f * t2;
  t2 = __cuda_sqrtf(t2);
  t1 = t0 > 0.575f ? t2 : t0;
  t1 = __internal_asinf_kernel(t1);
  t1 = t0 > 0.575f ? 2.0f * t1 : 1.570796327f - t1;
  if (__cuda___signbitf(a)) {
    t1 = 3.141592654f - t1;
  }
  return t1;
}

static float __cuda_logf(float a)
{





  return __internal_accurate_logf(a);

}

static float __cuda_log10f(float a)
{





  return 0.434294482f * __internal_accurate_logf(a);

}

static float __cuda_log1pf(float a)
{



  float t;




  if (a >= -0.394f && a <= 0.65f) {

    t = a + 2.0f;
    t = a / t;
    t = -a * t;
    t = __internal_atanhf_kernel (a, t);
  } else {
    t = __internal_accurate_logf (1.0f + a);
  }
  return t;

}

static float __cuda_acoshf(float a)
{



  float s, t;

  t = a - 1.0f;
  if (__cuda_fabsf(t) > 8388608.0f) {

    return 0.693147181f + __internal_accurate_logf(a);
  } else {
    s = a + 1.0f;
    t = t + __cuda_sqrtf(s * t);
    return __cuda_log1pf(t);
  }

}

static float __cuda_asinhf(float a)
{



  float fa, oofa, t;

  fa = __cuda_fabsf(a);
  if (fa > 8.507059173e37f) {
    t = 0.693147181f + __logf(fa);
  } else {
    oofa = 1.0f / fa;
    t = fa + fa / (oofa + __cuda_sqrtf(1.0f + oofa * oofa));
    t = __cuda_log1pf(t);
  }
  return __cuda_copysignf(t, a);

}

static float __cuda_atanhf(float a)
{



  float fa, t;

  fa = __cuda_fabsf(a);
  t = (2.0f * fa) / (1.0f - fa);
  t = 0.5f * __cuda_log1pf(t);
  return __cuda_copysignf(t, a);

}

static float __cuda_expm1f(float a)
{
  float t, z, j, u;

  t = __cuda_rintf (a * 1.442695041f);
  z = a - t * 0.6931457519f;
  z = z - t * 1.4286067653e-6f;

  if (__cuda_fabsf(a) < 0.41f) {
    z = a;
    t = 0.0f;
  }

  j = t;
  if (t == 128.0f) j = j - 1.0f;

  u = 1.38795078474044430E-003f;
  u = u * z + 8.38241261853264930E-003f;
  u = u * z + 4.16678317762833940E-002f;
  u = u * z + 1.66663978874356580E-001f;
  u = u * z + 4.99999940395997040E-001f;
  u = u * z;
  u = u * z + z;
  if (a == 0.0f) u = a;

  z = __cuda_exp2f (j);
  a = z - 1.0f;
  if (a != 0.0f) u = u * z + a;
  if (t == 128.0f) u = u + u;

  if (j > 128.0f) u = __int_as_float(0x7f800000);
  if (j < -25.0f) u = -1.0f;
  return u;
}

static float __cuda_hypotf(float a, float b)
{



  float v, w, t;

  a = __cuda_fabsf(a);
  b = __cuda_fabsf(b);

  if (a > b) {
    v = a;
    w = b;
  } else {
    v = b;
    w = a;
  }
  t = __internal_accurate_fdividef(w, v);
  t = 1.0f + t * t;
  t = v * __cuda_sqrtf(t);
  if (v == 0.0f) {
    t = v + w;
  }
  if ((v == __int_as_float(0x7f800000)) || (w == __int_as_float(0x7f800000))) {
    t = __int_as_float(0x7f800000);
  }
  return t;

}

static float __cuda_cbrtf(float a)
{



  float s, t;

  s = __cuda_fabsf(a);
  if ((a == 0.0f) || (s == __int_as_float(0x7f800000))) {
    return a;
  }
  t = __cuda_exp2f(0.333333333f * __log2f(s));
  t = t - (t - (s / (t * t))) * 0.333333333f;
  if (__cuda___signbitf(a)) {
     t = -t;
  }
  return t;

}

static float __cuda_erff(float a)
{
  float t, r, q;

  t = __cuda_fabsf(a);
  if (t < 1.0f) {
    t = t * t;
    r = -5.58510127926029810E-004f;
    r = r * t + 4.90688891415893070E-003f;
    r = r * t - 2.67027980930150640E-002f;
    r = r * t + 1.12799056505903940E-001f;
    r = r * t - 3.76122956138427440E-001f;
    r = r * t + 1.12837911712623450E+000f;
    a = a * r;
  } else if (t <= __int_as_float(0x7f800000)) {



    q = 0.3275911f * t + 1.0f;
    q = 1.0f / q;
    r = 1.061405429f;
    r = r * q - 1.453152027f;
    r = r * q + 1.421413741f;
    r = r * q - 0.284496736f;
    r = r * q + 0.254829592f;
    r = r * q;
    q = __internal_expf_kernel(-a * a, 0.0f);
    r = 1.0f - q * r;
    if (t >= 5.5f) {
      r = 1.0f;
    }
    a = __int_as_float (__float_as_int(r) | (__float_as_int(a) & 0x80000000));
  }
  return a;
}

static float __cuda_erfcf(float a)
{
  if (a <= 0.55f) {
    return 1.0f - __cuda_erff(a);
  } else if (a > 10.0f) {
    return 0.0f;
  } else {
    float p;
    float q;
    float h;
    float l;




    p = + 4.014893410762552E-006f;
    p = p * a + 5.640401259462436E-001f;
    p = p * a + 2.626649872281140E+000f;
    p = p * a + 5.486372652389673E+000f;
    p = p * a + 5.250714831459401E+000f;
    q = a + 4.651376250488319E+000f;
    q = q * a + 1.026302828878470E+001f;
    q = q * a + 1.140762166021288E+001f;
    q = q * a + 5.251211619089947E+000f;

    h = 1.0f / q;
    q = 2.0f * h - q * h * h;
    p = p * q;

    h = __int_as_float(__float_as_int(a) & 0xfffff000);
    l = __fadd_rn (a, -h);
    q = __fmul_rn (-h, h);
    q = __internal_expf_kernel(q, 0.0f);
    a = a + h;
    l = l * a;
    h = __internal_expf_kernel(-l, 0.0f);
    q = q * h;
    p = p * q;
    return p;
  }
}

static float __cuda_lgammaf(float a)
{
  float t;
  float i;
  int quot;
  t = __internal_lgammaf_pos(__cuda_fabsf(a));
  if (a >= 0.0f) return t;
  a = __cuda_fabsf(a);
  i = __cuda_floorf(a);
  if (a == i) return __int_as_float(0x7f800000);
  if (a < 1e-19f) return -__internal_accurate_logf(a);
  i = __cuda_rintf (2.0f * a);
  quot = (int)i;
  i = a - 0.5f * i;
  i = i * 3.141592654f;
  if (quot & 1) {
    i = __internal_cos_kernel(i);
  } else {
    i = __internal_sin_kernel(i);
  }
  i = __cuda_fabsf(i);
  t = 1.144729886f - __internal_accurate_logf(i * a) - t;
  return t;
}

static float __cuda_ldexpf(float a, int b)
{



  float fa = __cuda_fabsf(a);

  if ((fa == 0.0f) || (fa == __int_as_float(0x7f800000)) || (b == 0)) {
    return a;
  }
  else if (__cuda_abs(b) < 126) {
    return a * __cuda_exp2f((float)b);
  }
  else if (__cuda_abs(b) < 252) {
    int bhalf = b / 2;
    return a * __cuda_exp2f((float)bhalf) * __cuda_exp2f((float)(b - bhalf));
  }
  else {
    int bquarter = b / 4;
    float t = __cuda_exp2f((float)bquarter);
    return a * t * t * t * __cuda_exp2f((float)(b - 3 * bquarter));
  }

}

static float __cuda_scalbnf(float a, int b)
{




  return __cuda_ldexpf(a, b);

}

static float __cuda_scalblnf(float a, long int b)
{



  int t;
  if (b > 2147483647L) {
    t = 2147483647;
  } else if (b < (-2147483647 - 1)) {
    t = (-2147483647 - 1);
  } else {
    t = (int)b;
  }
  return __cuda_scalbnf(a, t);

}

static float __cuda_frexpf(float a, int *b)
{
  float fa = __cuda_fabsf(a);
  unsigned int expo;
  unsigned int denorm;

  if (fa < 1.175494351e-38f) {
    a *= 16777216.0f;
    denorm = 24;
  } else {
    denorm = 0;
  }
  expo = ((__float_as_int(a) >> 23) & 0xff);
  if ((fa == 0.0f) || (expo == 0xff)) {
    expo = 0;
    a = a + a;
  } else {
    expo = expo - denorm - 126;
    a = __int_as_float(((__float_as_int(a) & 0x807fffff) | 0x3f000000));
  }
  *b = expo;
  return a;
}

static float __cuda_modff(float a, float *b)
{



  float t;
  if (__cuda___finitef(a)) {
    t = __cuda_truncf(a);
    *b = t;
    t = a - t;
    return __cuda_copysignf(t, a);
  } else if (__cuda___isinff(a)) {
    t = 0.0f;
    *b = a;
    return __cuda_copysignf(t, a);
  } else {
    *b = a;
    return a;
  }

}

static float __cuda_fmodf(float a, float b)
{



  float orig_a = a;
  float orig_b = b;
  a = __cuda_fabsf(a);
  b = __cuda_fabsf(b);
  if (!((a <= __int_as_float(0x7f800000)) && (b <= __int_as_float(0x7f800000)))) {
    return orig_a + orig_b;
  }
  if ((a == __int_as_float(0x7f800000)) || (b == 0.0f)) {
    return __int_as_float(0x7fffffff);
  } else if (a >= b) {


    int expoa = (a < 1.175494351e-38f) ?
        ((int)__log2f(a)) : (((__float_as_int(a) >> 23) & 0xff) - 127);
    int expob = (b < 1.175494351e-38f) ?
        ((int)__log2f(b)) : (((__float_as_int(b) >> 23) & 0xff) - 127);
    int scale = expoa - expob;
    float scaled_b = __cuda_ldexpf(b, scale);
    if (scaled_b <= 0.5f * a) {
      scaled_b *= 2.0f;
    }







    while (scaled_b >= b) {
      if (a >= scaled_b) {
        a -= scaled_b;
      }
      scaled_b *= 0.5f;
    }
    return __cuda_copysignf(a, orig_a);
  } else {
    return orig_a;
  }

}

static float __cuda_remainderf(float a, float b)
{

  float twoa = 0.0f;
  unsigned int quot0 = 0;
  float orig_a = a;
  float orig_b = b;

  a = __cuda_fabsf(a);
  b = __cuda_fabsf(b);
  if (!((a <= __int_as_float(0x7f800000)) && (b <= __int_as_float(0x7f800000)))) {
    return orig_a + orig_b;
  }
  if ((a == __int_as_float(0x7f800000)) || (b == 0.0f)) {
    return __int_as_float(0x7fffffff);
  } else if (a >= b) {

    int expoa = (a < 1.175494351e-38f) ?
        ((int)__log2f(a)) : (((__float_as_int(a) >> 23) & 0xff) - 127);
    int expob = (b < 1.175494351e-38f) ?
        ((int)__log2f(b)) : (((__float_as_int(b) >> 23) & 0xff) - 127);
    int scale = expoa - expob;
    float scaled_b = __cuda_ldexpf(b, scale);
    if (scaled_b <= 0.5f * a) {
      scaled_b *= 2.0f;
    }
# 2464 "/usr/local/cuda/bin/../include/math_functions.h" 3
    while (scaled_b >= b) {
      quot0 = 0;
      if (a >= scaled_b) {
        twoa = (2.0f * a - scaled_b) - scaled_b;
        a -= scaled_b;
        quot0 = 1;
      }
      scaled_b *= 0.5f;
    }
  }


  twoa = 2.0f * a;
  if ((twoa > b) || ((twoa == b) && quot0)) {
    a -= b;
    a = __cuda_copysignf (a, -1.0f);
  }
# 2496 "/usr/local/cuda/bin/../include/math_functions.h" 3
  a = __int_as_float((__float_as_int(orig_a) & 0x80000000)^
                     __float_as_int(a));
  return a;
}

static float __cuda_remquof(float a, float b, int* quo)
{
  float twoa = 0.0f;
  unsigned int quot = 0;
  unsigned int sign;
  float orig_a = a;
  float orig_b = b;


  sign = 0 - (__cuda___signbitf(a) != __cuda___signbitf(b));
  a = __cuda_fabsf(a);
  b = __cuda_fabsf(b);
  if (!((a <= __int_as_float(0x7f800000)) && (b <= __int_as_float(0x7f800000)))) {
    *quo = quot;
    return orig_a + orig_b;
  }
  if ((a == __int_as_float(0x7f800000)) || (b == 0.0f)) {
    *quo = quot;
    return __int_as_float(0x7fffffff);
  } else if (a >= b) {


    int expoa = (a < 1.175494351e-38f) ?
        ((int)__log2f(a)) : (((__float_as_int(a) >> 23) & 0xff) - 127);
    int expob = (b < 1.175494351e-38f) ?
        ((int)__log2f(b)) : (((__float_as_int(b) >> 23) & 0xff) - 127);
    int scale = expoa - expob;
    float scaled_b = __cuda_ldexpf(b, scale);
    if (scaled_b <= 0.5f * a) {
      scaled_b *= 2.0f;
    }
# 2549 "/usr/local/cuda/bin/../include/math_functions.h" 3
    while (scaled_b >= b) {
      quot <<= 1;
      if (a >= scaled_b) {
        twoa = (2.0f * a - scaled_b) - scaled_b;
        a -= scaled_b;
        quot += 1;
      }
      scaled_b *= 0.5f;
    }
  }


  twoa = 2.0f * a;
  if ((twoa > b) || ((twoa == b) && (quot & 1))) {
    quot++;
    a -= b;
    a = __cuda_copysignf (a, -1.0f);
  }
# 2584 "/usr/local/cuda/bin/../include/math_functions.h" 3
  a = __int_as_float((__float_as_int(orig_a) & 0x80000000)^
                     __float_as_int(a));
  quot = quot & (~((~0)<<3));
  quot = quot ^ sign;
  quot = quot - sign;
  *quo = quot;
  return a;
}

static float __cuda_fmaf(float a, float b, float c)
{
  unsigned int xx, yy, zz, ww;
  unsigned int temp, s, u;
  unsigned int expo_x, expo_y, expo_z;

  xx = __float_as_int(a);
  yy = __float_as_int(b);
  zz = __float_as_int(c);
# 2610 "/usr/local/cuda/bin/../include/math_functions.h" 3
  temp = 0xff;
  expo_x = temp & (xx >> 23);
  expo_x = expo_x - 1;
  expo_y = temp & (yy >> 23);
  expo_y = expo_y - 1;
  expo_z = temp & (zz >> 23);
  expo_z = expo_z - 1;

  if (!((expo_x <= 0xFD) &&
        (expo_y <= 0xFD) &&
        (expo_z <= 0xFD))) {




    if ((yy << 1) > 0xff000000) {
      return __int_as_float(0x7fffffff);
    }
    if ((zz << 1) > 0xff000000) {
      return __int_as_float(0x7fffffff);
    }
    if ((xx << 1) > 0xff000000) {
      return __int_as_float(0x7fffffff);
    }
# 2645 "/usr/local/cuda/bin/../include/math_functions.h" 3
    if ((((xx << 1) == 0) && ((yy << 1) == 0xff000000)) ||
        (((yy << 1) == 0) && ((xx << 1) == 0xff000000))) {
      return __int_as_float(0x7fffffff);
    }
    if ((zz << 1) == 0xff000000) {
      if (((yy << 1) == 0xff000000) || ((xx << 1) == 0xff000000)) {
        if ((int)(xx ^ yy ^ zz) < 0) {
          return __int_as_float(0x7fffffff);
        }
      }
    }




    if ((xx << 1) == 0xff000000) {
      xx = xx ^ (yy & 0x80000000);
      return __int_as_float(xx);
    }
    if ((yy << 1) == 0xff000000) {
      yy = yy ^ (xx & 0x80000000);
      return __int_as_float(yy);
    }
    if ((zz << 1) == 0xff000000) {
      return __int_as_float(zz);
    }





    if (zz == 0x80000000) {
      if (((xx << 1) == 0) || ((yy << 1) == 0)) {
        if ((int)(xx ^ yy) < 0) {
          return __int_as_float(zz);
        }
      }
    }



    if (((zz << 1) == 0) &&
        (((xx << 1) == 0) || ((yy << 1) == 0))) {
      zz &= 0x7fffffff;
      return __int_as_float(zz);
    }



    if (((xx << 1) == 0) || ((yy << 1) == 0)) {
      return __int_as_float(zz);
    }

    if (expo_x == (unsigned int)-1) {
      temp = xx & 0x80000000;
      xx = xx << 8;
      while (!(xx & 0x80000000)) {
        xx <<= 1;
        expo_x--;
      }
      expo_x++;
      xx = (xx >> 8) | temp;
    }

    if (expo_y == (unsigned int)-1) {
      temp = yy & 0x80000000;
      yy = yy << 8;
      while (!(yy & 0x80000000)) {
        yy <<= 1;
        expo_y--;
      }
      expo_y++;
      yy = (yy >> 8) | temp;
    }

    if ((expo_z == (unsigned int)-1) && ((zz << 1) != 0)) {
      temp = zz & 0x80000000;
      zz = zz << 8;
      while (!(zz & 0x80000000)) {
        zz <<= 1;
        expo_z--;
      }
      expo_z++;
      zz = (zz >> 8) | temp;
    }
  }

  expo_x = expo_x + expo_y;
  expo_y = xx ^ yy;
  xx = xx & 0x00ffffff;
  yy = yy << 8;
  xx = xx | 0x00800000;
  yy = yy | 0x80000000;

  s = __umulhi(xx, yy);
  yy = xx * yy;
  xx = s;
  expo_x = expo_x - 127 + 2;
  expo_y = expo_y & 0x80000000;


  if (xx < 0x00800000) {
      xx = (xx << 1) | (yy >> 31);
      yy = (yy << 1);
      expo_x--;
  }
  temp = 0;
  if ((zz << 1) != 0) {
    s = zz & 0x80000000;
    zz &= 0x00ffffff;
    zz |= 0x00800000;
    ww = 0;

    if ((int)expo_z > (int)expo_x) {
      temp = expo_z;
      expo_z = expo_x;
      expo_x = temp;
      temp = zz;
      zz = xx;
      xx = temp;
      temp = ww;
      ww = yy;
      yy = temp;
      temp = expo_y;
      expo_y = s;
      s = temp;
    }


    expo_z = expo_x - expo_z;
    u = expo_y ^ s;
    if (expo_z <= 49) {

      temp = 0;
      while (expo_z >= 32) {
        temp = ww | (temp != 0);
        ww = zz;
        zz = 0;
        expo_z -= 32;
      }
      if (expo_z) {
        temp = ((temp >> expo_z) | (ww << (32 - expo_z)) |
                ((temp << (32 - expo_z)) != 0));
        ww = (ww >> expo_z) | (zz << (32 - expo_z));
        zz = (zz >> expo_z);
      }
    } else {
      temp = 1;
      ww = 0;
      zz = 0;
    }
    if ((int)u < 0) {

      temp = (unsigned)(-(int)temp);
      s = (temp != 0);
      u = yy - s;
      s = u > yy;
      yy = u - ww;
      s += yy > u;
      xx = (xx - zz) - s;
      if (!(xx | yy | temp)) {

        return __int_as_float(xx);
      }
      if ((int)xx < 0) {



        temp = ~temp;
        yy = ~yy;
        xx = ~xx;
        if (++temp == 0) {
          if (++yy == 0) {
            ++xx;
          }
        }
        expo_y ^= 0x80000000;
      }

      while (!(xx & 0x00800000)) {
        xx = (xx << 1) | (yy >> 31);
        yy = (yy << 1);
        expo_x--;
      }
    } else {

      yy = yy + ww;
      s = yy < ww;
      xx = xx + zz + s;
      if (xx & 0x01000000) {
        temp = temp | (yy << 31);
        yy = (yy >> 1) | (xx << 31);
        xx = ((xx & 0x80000000) | (xx >> 1)) & ~0x40000000;
        expo_x++;
      }
    }
  }
  temp = yy | (temp != 0);
  if (expo_x <= 0xFD) {

    xx |= expo_y;
    s = xx & 1;
    xx += (temp == 0x80000000) ? s : (temp >> 31);
    xx = xx + (expo_x << 23);
    return __int_as_float(xx);
  } else if ((int)expo_x >= 126) {

    xx = expo_y | 0x7f800000;
    return __int_as_float(xx);
  }

  expo_x = (unsigned int)(-(int)expo_x);
  if (expo_x > 25) {

    return __int_as_float(expo_y);
  }
  yy = (xx << (32 - expo_x)) | ((yy) ? 1 : 0);
  xx = expo_y + (xx >> expo_x);
  xx = xx + ((yy==0x80000000) ? (xx & 1) : (yy >> 31));
  xx |= expo_y;




  return __int_as_float(xx);
}

static float __internal_accurate_powf(float a, float b)
{
  float2 loga, prod;



  float t;




  float up, vp, u1, u2, v1, v2, mh, ml;



  loga = __internal_log_ep(a);


  if (__cuda_fabsf(b) > 1.0e34f) b *= 1.220703125e-4f;

  up = loga.y * 4097.0f;
  u1 = (loga.y - up) + up;
  u2 = loga.y - u1;
  vp = b * 4097.0f;
  v1 = (b - vp) + vp;
  v2 = b - v1;
  mh = __fmul_rn(loga.y, b);
  ml = (((u1 * v1 - mh) + u1 * v2) + u2 * v1) + u2 * v2;
  ml = __fmul_rn(loga.x, b) + ml;
  prod.y = up = mh + ml;
  prod.x = (mh - up) + ml;


  t = __cuda_expf(prod.y);

  if (t != __int_as_float(0x7f800000)) {



    t = t * prod.x + t;
  }
  return t;
}

static float __cuda_powif(float a, int b)
{
  unsigned int e = __cuda_abs(b);
  float r = 1.0f;

  while (1) {
    if ((e & 1) != 0) {
      r = r * a;
    }
    e = e >> 1;
    if (e == 0) {
      return b < 0 ? 1.0f/r : r;
    }
    a = a * a;
  }
}

static double __cuda_powi(double a, int b)
{
  unsigned int e = __cuda_abs(b);
  double r = 1.0;

  while (1) {
    if ((e & 1) != 0) {
      r = r * a;
    }
    e = e >> 1;
    if (e == 0) {
      return b < 0 ? 1.0/r : r;
    }
    a = a * a;
  }
}

static float __cuda_powf(float a, float b)
{





  int bIsOddInteger;
  float t;
  if (a == 1.0f || b == 0.0f) {
    return 1.0f;
  }
  if (__cuda___isnanf(a) || __cuda___isnanf(b)) {
    return a + b;
  }
  if (a == __int_as_float(0x7f800000)) {
    return __cuda___signbitf(b) ? 0.0f : __int_as_float(0x7f800000);
  }
  if (__cuda___isinff(b)) {
    if (a == -1.0f) {
      return 1.0f;
    }
    t = (__cuda_fabsf(a) > 1.0f) ? __int_as_float(0x7f800000) : 0.0f;
    if (b < 0.0f) {
      t = 1.0f / t;
    }
    return t;
  }
  bIsOddInteger = (b - (2.0f * floorf(0.5f * b))) == 1.0f;
  if (a == 0.0f) {
    t = bIsOddInteger ? a : 0.0f;
    if (b < 0.0f) {
      t = 1.0f / t;
    }
    return t;
  }
  if (a == -__int_as_float(0x7f800000)) {
    t = (b < 0.0f) ? -1.0f/a : -a;
    if (bIsOddInteger) {
      t = __int_as_float(__float_as_int(t) ^ 0x80000000);
    }
    return t;
  }
  if ((a < 0.0f) && (b != __cuda_truncf(b))) {
    return __int_as_float(0x7fffffff);
  }
  t = __cuda_fabsf(a);
  t = __internal_accurate_powf(t, b);
  if ((a < 0.0f) && bIsOddInteger) {
    t = __int_as_float(__float_as_int(t) ^ 0x80000000);
  }
  return t;

}


static float __internal_tgammaf_kernel(float a)
{
  float t;
  t = - 1.05767296987211380E-003f;
  t = t * a + 7.09279059435508670E-003f;
  t = t * a - 9.65347121958557050E-003f;
  t = t * a - 4.21736613253687960E-002f;
  t = t * a + 1.66542401247154280E-001f;
  t = t * a - 4.20043267827838460E-002f;
  t = t * a - 6.55878234051332940E-001f;
  t = t * a + 5.77215696929794240E-001f;
  t = t * a + 1.00000000000000000E+000f;
  return t;
}





static float __cuda_tgammaf(float a)
{
  float s, xx, x=a;
  if (x >= 0.0f) {
    if (x > 36.0f) x = 36.0f;
    s = 1.0f;
    xx = x;
    if (x > 34.03f) {
      xx -= 1.0f;
    }
    while (xx > 1.5f) {
      xx = xx - 1.0f;
      s = s * xx;
    }
    if (x >= 0.5f) {
      xx = xx - 1.0f;
    }
    xx = __internal_tgammaf_kernel(xx);
    if (x < 0.5f) {
      xx = xx * x;
    }
    s = s / xx;
    if (x > 34.03f) {

      xx = x - 1.0f;
      s = s * xx;
    }
    return s;
  } else {
    if (x == __cuda_floorf(x)) {
      x = __int_as_float(0x7fffffff);

      return x;

    }
    if (x < -41.1f) x = -41.1f;
    xx = x;
    if (x < -34.03f) {
      xx += 6.0f;
    }
    s = xx;
    while (xx < -0.5f) {
      xx = xx + 1.0f;
      s = s * xx;
    }
    xx = __internal_tgammaf_kernel(xx);
    s = s * xx;
    s = 1.0f / s;
    if (x < -34.03f) {
      xx = x;
      xx *= (x + 1.0f);
      xx *= (x + 2.0f);
      xx *= (x + 3.0f);
      xx *= (x + 4.0f);
      xx *= (x + 5.0f);
      xx = 1.0f / xx;
      s = s * xx;
      if ((a < -42.0f) && !(((int)a)&1)) {
        s = __int_as_float(0x80000000);
      }
    }
    return s;
  }
}

static float __cuda_roundf(float a)
{



  float fa = __cuda_fabsf(a);
  if (fa > 8388608.0f) {
    return a;
  } else {
    float u = __cuda_floorf(fa + 0.5f);
    if (fa < 0.5f) u = 0.0f;
    return __cuda_copysignf(u, a);
  }

}

static long long int __internal_llroundf_kernel(float a)
{
  unsigned long long int res, t = 0LL;
  int shift;
  unsigned int ia = __float_as_int(a);
  if ((ia << 1) > 0xff000000) return 0LL;
  if ((int)ia >= 0x5f000000) return 0x7fffffffffffffffLL;
  if (ia >= 0xdf000000) return 0x8000000000000000LL;
  shift = 189 - ((ia >> 23) & 0xff);
  res = ((long long int)(((ia << 8) | 0x80000000) >> 1)) << 32;
  if (shift >= 64) {
    t = res;
    res = 0;
  } else if (shift) {
    t = res << (64 - shift);
    res = res >> shift;
  }
  if (t >= 0x8000000000000000LL) {
      res++;
  }
  if ((int)ia < 0) res = (unsigned long long int)(-(long long int)res);
  return (long long int)res;
}

static long long int __cuda_llroundf(float a)
{



  return __internal_llroundf_kernel(a);

}

static long int __cuda_lroundf(float a)
{







  if (__cuda___isnanf(a)) return 0L;
  if (a >= 2147483648.0f) return 2147483647L;
  if (a <= -2147483648.0f) return (-2147483647L - 1L);

  return (long int)(__cuda_roundf(a));


}

static float __cuda_fdimf(float a, float b)
{
  float t;
  t = a - b;
  if (a <= b) {
    t = 0.0f;
  }
  return t;
}

static int __cuda_ilogbf(float a)
{
  unsigned int i;
  int expo;
  a = __cuda_fabsf(a);
  if (a <= 1.175494351e-38f) {

    if (a == 0.0f) {
      expo = -((int)((unsigned int)-1 >> 1))-1;
    } else {
      expo = -126;
      i = __float_as_int(a);
      i = i << 8;
      while ((int)i >= 0) {
        expo--;
        i = i + i;
      }
    }
  } else {
    i = __float_as_int(a);
    expo = ((int)((i >> 23) & 0xff)) - 127;
    if ((i == 0x7f800000)) {
      expo = ((int)((unsigned int)-1 >> 1));
    }
    if ((i > 0x7f800000)) {
      expo = -((int)((unsigned int)-1 >> 1))-1;
    }
  }
  return expo;
}

static float __cuda_logbf(float a)
{



  unsigned int i;
  int expo;
  float res;

  if (__cuda___isnanf(a)) return a + a;

  a = __cuda_fabsf(a);
  if (a <= 1.175494351e-38f) {

    if (a == 0.0f) {
      res = -__int_as_float(0x7f800000);
    } else {
      expo = -126;
      i = __float_as_int(a);
      i = i << 8;
      while ((int)i >= 0) {
        expo--;
        i = i + i;
      }
      res = (float)expo;
    }
  } else {
    i = __float_as_int(a);
    expo = ((int)((i >> 23) & 0xff)) - 127;
    res = (float)expo;
    if ((i >= 0x7f800000)) {

      res = a + a;
    }
  }
  return res;

}

static void __cuda_sincosf(float a, float *sptr, float *cptr)
{





  float t, u, s, c;
  int quadrant;
  if (__cuda___isinff(a)) {
    *sptr = __int_as_float(0x7fffffff);
    *cptr = __int_as_float(0x7fffffff);
    return;
  }
  if (a == 0.0f) {
    *sptr = a;
    *cptr = 1.0f;
    return;
  }
  t = __internal_trig_reduction_kernel(a, &quadrant);
  u = __internal_cos_kernel(t);
  t = __internal_sin_kernel(t);
  if (quadrant & 1) {
    s = u;
    c = t;
  } else {
    s = t;
    c = u;
  }
  if (quadrant & 2) {
    s = -s;
  }
  quadrant++;
  if (quadrant & 2) {
    c = -c;
  }
  *sptr = s;
  *cptr = c;

}
# 3286 "/usr/local/cuda/bin/../include/math_functions.h" 3
extern __attribute__((__weak_import__, __weak__)) double rsqrt(double a); double rsqrt(double a)
{
  return 1.0 / sqrt(a);
}

extern __attribute__((__weak_import__, __weak__)) float rsqrtf(float a); float rsqrtf(float a)
{
  return (float)rsqrt((double)a);
}
# 3304 "/usr/local/cuda/bin/../include/math_functions.h" 3
extern __attribute__((__weak_import__, __weak__)) double exp10(double a); double exp10(double a)
{
  return pow(10.0, a);
}
# 3818 "/usr/local/cuda/bin/../include/math_functions.h" 3
# 1 "/usr/local/cuda/bin/../include/math_functions_dbl_ptx1.h" 1 3
# 43 "/usr/local/cuda/bin/../include/math_functions_dbl_ptx1.h" 3
# 1 "/usr/local/cuda/bin/../include/crt/func_macro.h" 1 3
# 44 "/usr/local/cuda/bin/../include/math_functions_dbl_ptx1.h" 2 3

static double __cuda_fabs(double a)
{
  return (float)__cuda_fabsf((float)a);
}

static double __cuda_fmax(double a, double b)
{
  return (float)__cuda_fmaxf((float)a, (float)b);
}

static double __cuda_fmin(double a, double b)
{
  return (float)__cuda_fminf((float)a, (float)b);
}

static int __cuda___finite(double a)
{
  return __cuda___finitef((float)a);
}

static int __cuda___isinf(double a)
{
  return __cuda___isinff((float)a);
}

static int __cuda___isnan(double a)
{
  return __cuda___isnanf((float)a);
}

static int __cuda___signbit(double a)
{
  return __cuda___signbitf((float)a);
}

static double __cuda_sqrt(double a)
{
  return (double)__cuda_sqrtf((float)a);
}

static double __cuda_rsqrt(double a)
{
  return (double)__cuda_rsqrtf((float)a);
}

static double __cuda_ceil(double a)
{
  return (double)__cuda_ceilf((float)a);
}

static double __cuda_trunc(double a)
{
  return (double)__cuda_truncf((float)a);
}

static double __cuda_floor(double a)
{
  return (double)__cuda_floorf((float)a);
}

static double __cuda_copysign(double a, double b)
{
  return (double)__cuda_copysignf((float)a, (float)b);
}

static double __cuda_sin(double a)
{
  return (double)__cuda_sinf((float)a);
}

static double __cuda_cos(double a)
{
  return (double)__cuda_cosf((float)a);
}

static void __cuda_sincos(double a, double *sptr, double *cptr)
{
  float fs, fc;

  __cuda_sincosf((float)a, &fs, &fc);

  *sptr = (double)fs;
  *cptr = (double)fc;
}

static double __cuda_tan(double a)
{
  return (double)__cuda_tanf((float)a);
}

static double __cuda_exp(double a)
{
  return (double)__cuda_expf((float)a);
}

static double __cuda_exp2(double a)
{
  return (double)__cuda_exp2f((float)a);
}

static double __cuda_exp10(double a)
{
  return (double)__cuda_exp10f((float)a);
}

static double __cuda_expm1(double a)
{
  return (double)__cuda_expm1f((float)a);
}

static double __cuda_cosh(double a)
{
  return (double)__cuda_coshf((float)a);
}

static double __cuda_sinh(double a)
{
  return (double)__cuda_sinhf((float)a);
}

static double __cuda_tanh(double a)
{
  return (double)__cuda_tanhf((float)a);
}

static double __cuda_asin(double a)
{
  return (double)__cuda_asinf((float)a);
}

static double __cuda_acos(double a)
{
  return (double)__cuda_acosf((float)a);
}

static double __cuda_atan(double a)
{
  return (double)__cuda_atanf((float)a);
}

static double __cuda_atan2(double a, double b)
{
  return (double)__cuda_atan2f((float)a, (float)b);
}

static double __cuda_log(double a)
{
  return (double)__cuda_logf((float)a);
}

static double __cuda_log2(double a)
{
  return (double)__cuda_log2f((float)a);
}

static double __cuda_log10(double a)
{
  return (double)__cuda_log10f((float)a);
}

static double __cuda_log1p(double a)
{
  return (double)__cuda_log1pf((float)a);
}

static double __cuda_acosh(double a)
{
  return (double)__cuda_acoshf((float)a);
}

static double __cuda_asinh(double a)
{
  return (double)__cuda_asinhf((float)a);
}

static double __cuda_atanh(double a)
{
  return (double)__cuda_atanhf((float)a);
}

static double __cuda_hypot(double a, double b)
{
  return (double)__cuda_hypotf((float)a, (float)b);
}

static double __cuda_cbrt(double a)
{
  return (double)__cuda_cbrtf((float)a);
}

static double __cuda_erf(double a)
{
  return (double)__cuda_erff((float)a);
}

static double __cuda_erfc(double a)
{
  return (double)__cuda_erfcf((float)a);
}

static double __cuda_lgamma(double a)
{
  return (double)__cuda_lgammaf((float)a);
}

static double __cuda_tgamma(double a)
{
  return (double)__cuda_tgammaf((float)a);
}

static double __cuda_ldexp(double a, int b)
{
  return (double)__cuda_ldexpf((float)a, b);
}

static double __cuda_scalbn(double a, int b)
{
  return (double)__cuda_scalbnf((float)a, b);
}

static double __cuda_scalbln(double a, long b)
{
  return (double)__cuda_scalblnf((float)a, b);
}

static double __cuda_frexp(double a, int *b)
{
  return (double)__cuda_frexpf((float)a, b);
}

static double __cuda_modf(double a, double *b)
{
  float fb;
  float fa = __cuda_modff((float)a, &fb);

  *b = (double)fb;

  return (double)fa;
}

static double __cuda_fmod(double a, double b)
{
  return (double)__cuda_fmodf((float)a, (float)b);
}

static double __cuda_remainder(double a, double b)
{
  return (double)__cuda_remainderf((float)a, (float)b);
}

static double __cuda_remquo(double a, double b, int *c)
{
  return (double)__cuda_remquof((float)a, (float)b, c);
}

static double __cuda_nextafter(double a, double b)
{
  return (double)__cuda_nextafterf((float)a, (float)b);
}

static double __cuda_nan(const char *tagp)
{
  return (double)__cuda_nanf(tagp);
}

static double __cuda_pow(double a, double b)
{
  return (double)__cuda_powf((float)a, (float)b);
}

static double __cuda_round(double a)
{
  return (double)__cuda_roundf((float)a);
}

static long __cuda_lround(double a)
{
  return __cuda_lroundf((float)a);
}

static long long __cuda_llround(double a)
{
  return __cuda_llroundf((float)a);
}

static double __cuda_rint(double a)
{
  return (double)__cuda_rintf((float)a);
}

static long __cuda_lrint(double a)
{
  return __cuda_lrintf((float)a);
}

static long long __cuda_llrint(double a)
{
  return __cuda_llrintf((float)a);
}

static double __cuda_nearbyint(double a)
{
  return (double)__cuda_nearbyintf((float)a);
}

static double __cuda_fdim(double a, double b)
{
  return (double)__cuda_fdimf((float)a, (float)b);
}

static int __cuda_ilogb(double a)
{
  return __cuda_ilogbf((float)a);
}

static double __cuda_logb(double a)
{
  return (double)__cuda_logbf((float)a);
}

static double __cuda_fma(double a, double b, double c)
{
  return (double)__cuda_fmaf((float)a, (float)b, (float)c);
}


static int __cuda___isfinited(double a)
{
  return (double)__cuda___finitef((float)a);
}

static int __cuda___signbitd(double a)
{
  return (double)__cuda___signbitf((float)a);
}
# 3819 "/usr/local/cuda/bin/../include/math_functions.h" 2 3
# 94 "/usr/local/cuda/bin/../include/common_functions.h" 2 3
# 226 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 2 3
# 6 "/tmp/tmpxft_00001019_00000000-1_GPUdriver.cudafe1.stub.c" 2 3
struct __T20;
struct __T20 {float *__par0;float *__par1;int __par2;int __par3;float __par4;float __par5;float __par6;float __par7;float __par8;float __par9;float __par10;int __dummy_field;};



static void __sti____cudaRegisterAll_44_tmpxft_00001019_00000000_4_GPUdriver_cpp1_ii_ca44a389(void) __attribute__((__constructor__));
void __device_stub___globfunc__Z10HCq_kernelPfS_iifffffff(float *__par0, float *__par1, int __par2, int __par3, float __par4, float __par5, float __par6, float __par7, float __par8, float __par9, float __par10){auto struct __T20 __T21;
if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T21.__par0 - (size_t)&__T21) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T21.__par1 - (size_t)&__T21) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T21.__par2 - (size_t)&__T21) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T21.__par3 - (size_t)&__T21) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T21.__par4 - (size_t)&__T21) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par5, sizeof(__par5), (size_t)&__T21.__par5 - (size_t)&__T21) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par6, sizeof(__par6), (size_t)&__T21.__par6 - (size_t)&__T21) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par7, sizeof(__par7), (size_t)&__T21.__par7 - (size_t)&__T21) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par8, sizeof(__par8), (size_t)&__T21.__par8 - (size_t)&__T21) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par9, sizeof(__par9), (size_t)&__T21.__par9 - (size_t)&__T21) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par10, sizeof(__par10), (size_t)&__T21.__par10 - (size_t)&__T21) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)__device_stub___globfunc__Z10HCq_kernelPfS_iifffffff); (void)cudaLaunch(((char *)__device_stub___globfunc__Z10HCq_kernelPfS_iifffffff)); };}



static void __sti____cudaRegisterAll_44_tmpxft_00001019_00000000_4_GPUdriver_cpp1_ii_ca44a389(void){__cudaFatCubinHandle = __cudaRegisterFatBinary((void*)(&__fatDeviceText));__cudaRegisterFunction(__cudaFatCubinHandle, (const char*)__device_stub___globfunc__Z10HCq_kernelPfS_iifffffff, (char*)"__globfunc__Z10HCq_kernelPfS_iifffffff", "__globfunc__Z10HCq_kernelPfS_iifffffff", (-1), (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0);__cudaRegisterVar(__cudaFatCubinHandle, (char*)&__shadow_BC, (char*)"BC", "BC", 0, 144, 1, 0);__cudaRegisterVar(__cudaFatCubinHandle, (char*)&__shadow_coeffDevice, (char*)"coeffDevice", "coeffDevice", 0, 34000, 1, 0);}

}
# 139 "GPUdriver.cu" 2
