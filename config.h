#define _GNU_SOURCE
#define AL_LIBTYPE_STATIC 1
#define AL_ALEXT_PROTOTYPES 1

/* Define any available alignment declaration */
#define ALIGN(x) __attribute__((aligned(x)))

/* Define a built-in call indicating an aligned data pointer */
#define ASSUME_ALIGNED(x, y) __builtin_assume_aligned(x, y)

/* Define if HRTF data is embedded in the library */
#define ALSOFT_EMBED_HRTF_DATA

/* Define if we have the C11 aligned_alloc function */
#define HAVE_ALIGNED_ALLOC

/* Define if we have the posix_memalign function */
#define HAVE_POSIX_MEMALIGN

/* Define if we have the _aligned_malloc function */
#define HAVE__ALIGNED_MALLOC

/* Define if we have SSE CPU extensions */
//#cmakedefine HAVE_SSE
//#cmakedefine HAVE_SSE2
//#cmakedefine HAVE_SSE3
//#cmakedefine HAVE_SSE4_1

/* Define if we have ARM Neon CPU extensions */
#define HAVE_NEON

/* Define if we have the ALSA backend */
//#cmakedefine HAVE_ALSA

/* Define if we have the OSS backend */
//#cmakedefine HAVE_OSS

/* Define if we have the Solaris backend */
//#cmakedefine HAVE_SOLARIS

/* Define if we have the SndIO backend */
#define HAVE_SNDIO

/* Define if we have the QSA backend */
//#cmakedefine HAVE_QSA

/* Define if we have the MMDevApi backend */
//#cmakedefine HAVE_MMDEVAPI

/* Define if we have the DSound backend */
//#cmakedefine HAVE_DSOUND

/* Define if we have the Windows Multimedia backend */
//#cmakedefine HAVE_WINMM

/* Define if we have the PortAudio backend */
//#cmakedefine HAVE_PORTAUDIO

/* Define if we have the PulseAudio backend */
//#cmakedefine HAVE_PULSEAUDIO

/* Define if we have the JACK backend */
//#cmakedefine HAVE_JACK

/* Define if we have the CoreAudio backend */
//#cmakedefine HAVE_COREAUDIO

/* Define if we have the OpenSL backend */
//#cmakedefine HAVE_OPENSL

/* Define if we have the Wave Writer backend */
//#cmakedefine HAVE_WAVE

/* Define if we have the stat function */
//#cmakedefine HAVE_STAT

/* Define if we have the lrintf function */
#define HAVE_LRINTF

/* Define if we have the modff function */
#define HAVE_MODFF

/* Define if we have the log2f function */
#define HAVE_LOG2F

/* Define if we have the strtof function */
#define HAVE_STRTOF

/* Define if we have the strnlen function */
#define HAVE_STRNLEN

/* Define if we have the __int64 type */
//#cmakedefine HAVE___INT64

/* Define to the size of a long int type */
#define SIZEOF_LONG 8

/* Define to the size of a long long int type */
//#cmakedefine SIZEOF_LONG_LONG

/* Define if we have C99 variable-length array support */
#define HAVE_C99_VLA

/* Define if we have C99 _Bool support */
#define HAVE_C99_BOOL

/* Define if we have C11 _Static_assert support */
#define HAVE_C11_STATIC_ASSERT

/* Define if we have C11 _Alignas support */
#define HAVE_C11_ALIGNAS

/* Define if we have C11 _Atomic support */
#define HAVE_C11_ATOMIC

/* Define if we have GCC's destructor attribute */
#define HAVE_GCC_DESTRUCTOR

/* Define if we have GCC's format attribute */
#define HAVE_GCC_FORMAT

/* Define if we have stdint.h */
#define HAVE_STDINT_H

/* Define if we have stdbool.h */
#define HAVE_STDBOOL_H

/* Define if we have stdalign.h */
#define HAVE_STDALIGN_H

/* Define if we have windows.h */
//#cmakedefine HAVE_WINDOWS_H

/* Define if we have dlfcn.h */
//#cmakedefine HAVE_DLFCN_H

/* Define if we have pthread_np.h */
//#define HAVE_PTHREAD_NP_H

/* Define if we have alloca.h */
#define HAVE_ALLOCA_H

/* Define if we have malloc.h */
#define HAVE_MALLOC_H

/* Define if we have dirent.h */
#define HAVE_DIRENT_H

/* Define if we have strings.h */
#define HAVE_STRINGS_H

/* Define if we have cpuid.h */
//#cmakedefine HAVE_CPUID_H

/* Define if we have intrin.h */
//#cmakedefine HAVE_INTRIN_H

/* Define if we have sys/sysconf.h */
//#cmakedefine HAVE_SYS_SYSCONF_H

/* Define if we have guiddef.h */
//#cmakedefine HAVE_GUIDDEF_H

/* Define if we have initguid.h */
//#cmakedefine HAVE_INITGUID_H

/* Define if we have ieeefp.h */
//#cmakedefine HAVE_IEEEFP_H

/* Define if we have float.h */
#define HAVE_FLOAT_H

/* Define if we have fenv.h */
#define HAVE_FENV_H

/* Define if we have GCC's __get_cpuid() */
//#cmakedefine HAVE_GCC_GET_CPUID

/* Define if we have the __cpuid() intrinsic */
//#cmakedefine HAVE_CPUID_INTRINSIC

/* Define if we have _controlfp() */
//#define HAVE__CONTROLFP

/* Define if we have __control87_2() */
//#cmakedefine HAVE___CONTROL87_2

/* Define if we have pthread_setschedparam() */
#define HAVE_PTHREAD_SETSCHEDPARAM

/* Define if we have pthread_setname_np() */
#define HAVE_PTHREAD_SETNAME_NP

/* Define if pthread_setname_np() only accepts one parameter */
//#cmakedefine PTHREAD_SETNAME_NP_ONE_PARAM

/* Define if pthread_setname_np() accepts three parameters */
//#cmakedefine PTHREAD_SETNAME_NP_THREE_PARAMS

/* Define if we have pthread_set_name_np() */
//#cmakedefine HAVE_PTHREAD_SET_NAME_NP

/* Define if we have pthread_mutexattr_setkind_np() */
//#cmakedefine HAVE_PTHREAD_MUTEXATTR_SETKIND_NP

/* Define if we have pthread_mutex_timedlock() */
//#define HAVE_PTHREAD_MUTEX_TIMEDLOCK
