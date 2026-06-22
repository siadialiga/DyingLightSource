typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef long long    longlong;
typedef unsigned long long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef short    wchar_t;
typedef unsigned short    word;
typedef unsigned short    wchar16;
typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory:31;
    dword DataIsDirectory:1;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
};

typedef ulonglong __uint64;

typedef struct tagMSG tagMSG, *PtagMSG;

typedef struct tagMSG MSG;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ *HWND;

typedef uint UINT;

typedef ulonglong UINT_PTR;

typedef UINT_PTR WPARAM;

typedef longlong LONG_PTR;

typedef LONG_PTR LPARAM;

typedef ulong DWORD;

typedef struct tagPOINT tagPOINT, *PtagPOINT;

typedef struct tagPOINT POINT;

typedef long LONG;

struct tagPOINT {
    LONG x;
    LONG y;
};

struct tagMSG {
    HWND hwnd;
    UINT message;
    WPARAM wParam;
    LPARAM lParam;
    DWORD time;
    POINT pt;
};

struct HWND__ {
    int unused;
};

typedef struct tagMSG *LPMSG;


// WARNING! conflicting data type names: /guiddef.h/GUID - /GUID

typedef struct _GUID _GUID, *P_GUID;

struct _GUID {
    ulong Data1;
    ushort Data2;
    ushort Data3;
    uchar Data4[8];
};

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

typedef void *LPVOID;

typedef int BOOL;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct tagACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA tagACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA, *PtagACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA;

typedef void *PVOID;

typedef ulong ULONG;

struct tagACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA {
    PVOID lpInformation;
    PVOID lpSectionBase;
    ULONG ulSectionLength;
    PVOID lpSectionGlobalDataBase;
    ULONG ulSectionGlobalDataLength;
};

typedef struct tagACTCTX_SECTION_KEYED_DATA tagACTCTX_SECTION_KEYED_DATA, *PtagACTCTX_SECTION_KEYED_DATA;

typedef void *HANDLE;

typedef struct tagACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA ACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA;

struct tagACTCTX_SECTION_KEYED_DATA {
    ULONG cbSize;
    ULONG ulDataFormatVersion;
    PVOID lpData;
    ULONG ulLength;
    PVOID lpSectionGlobalData;
    ULONG ulSectionGlobalDataLength;
    PVOID lpSectionBase;
    ULONG ulSectionTotalLength;
    HANDLE hActCtx;
    ULONG ulAssemblyRosterIndex;
    ULONG ulFlags;
    ACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA AssemblyMetadata;
};

typedef struct _STARTUPINFOW _STARTUPINFOW, *P_STARTUPINFOW;

typedef wchar_t WCHAR;

typedef WCHAR *LPWSTR;

typedef ushort WORD;

typedef uchar BYTE;

typedef BYTE *LPBYTE;

struct _STARTUPINFOW {
    DWORD cb;
    LPWSTR lpReserved;
    LPWSTR lpDesktop;
    LPWSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
};

typedef struct tagACTCTXW tagACTCTXW, *PtagACTCTXW;

typedef struct tagACTCTXW ACTCTXW;

typedef WCHAR *LPCWSTR;

typedef ushort USHORT;

typedef WORD LANGID;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ *HINSTANCE;

typedef HINSTANCE HMODULE;

struct HINSTANCE__ {
    int unused;
};

struct tagACTCTXW {
    ULONG cbSize;
    DWORD dwFlags;
    LPCWSTR lpSource;
    USHORT wProcessorArchitecture;
    LANGID wLangId;
    LPCWSTR lpAssemblyDirectory;
    LPCWSTR lpResourceName;
    LPCWSTR lpApplicationName;
    HMODULE hModule;
};

typedef struct _STARTUPINFOW *LPSTARTUPINFOW;

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION *PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;

typedef ulonglong ULONG_PTR;

typedef struct _LIST_ENTRY _LIST_ENTRY, *P_LIST_ENTRY;

typedef struct _LIST_ENTRY LIST_ENTRY;

struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
};

struct _LIST_ENTRY {
    struct _LIST_ENTRY *Flink;
    struct _LIST_ENTRY *Blink;
};

struct _RTL_CRITICAL_SECTION_DEBUG {
    WORD Type;
    WORD CreatorBackTraceIndex;
    struct _RTL_CRITICAL_SECTION *CriticalSection;
    LIST_ENTRY ProcessLocksList;
    DWORD EntryCount;
    DWORD ContentionCount;
    DWORD Flags;
    WORD CreatorBackTraceIndexHigh;
    WORD SpareWORD;
};

typedef ACTCTXW *PCACTCTXW;

typedef struct tagACTCTX_SECTION_KEYED_DATA *PACTCTX_SECTION_KEYED_DATA;

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (*PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT *PCONTEXT;

typedef ulonglong DWORD64;

typedef union _union_54 _union_54, *P_union_54;

typedef struct _M128A _M128A, *P_M128A;

typedef struct _M128A M128A;

typedef struct _XSAVE_FORMAT _XSAVE_FORMAT, *P_XSAVE_FORMAT;

typedef struct _XSAVE_FORMAT XSAVE_FORMAT;

typedef XSAVE_FORMAT XMM_SAVE_AREA32;

typedef struct _struct_55 _struct_55, *P_struct_55;

typedef ulonglong ULONGLONG;

typedef longlong LONGLONG;

struct _M128A {
    ULONGLONG Low;
    LONGLONG High;
};

struct _XSAVE_FORMAT {
    WORD ControlWord;
    WORD StatusWord;
    BYTE TagWord;
    BYTE Reserved1;
    WORD ErrorOpcode;
    DWORD ErrorOffset;
    WORD ErrorSelector;
    WORD Reserved2;
    DWORD DataOffset;
    WORD DataSelector;
    WORD Reserved3;
    DWORD MxCsr;
    DWORD MxCsr_Mask;
    M128A FloatRegisters[8];
    M128A XmmRegisters[16];
    BYTE Reserved4[96];
};

struct _struct_55 {
    M128A Header[2];
    M128A Legacy[8];
    M128A Xmm0;
    M128A Xmm1;
    M128A Xmm2;
    M128A Xmm3;
    M128A Xmm4;
    M128A Xmm5;
    M128A Xmm6;
    M128A Xmm7;
    M128A Xmm8;
    M128A Xmm9;
    M128A Xmm10;
    M128A Xmm11;
    M128A Xmm12;
    M128A Xmm13;
    M128A Xmm14;
    M128A Xmm15;
};

union _union_54 {
    XMM_SAVE_AREA32 FltSave;
    struct _struct_55 s;
};

struct _CONTEXT {
    DWORD64 P1Home;
    DWORD64 P2Home;
    DWORD64 P3Home;
    DWORD64 P4Home;
    DWORD64 P5Home;
    DWORD64 P6Home;
    DWORD ContextFlags;
    DWORD MxCsr;
    WORD SegCs;
    WORD SegDs;
    WORD SegEs;
    WORD SegFs;
    WORD SegGs;
    WORD SegSs;
    DWORD EFlags;
    DWORD64 Dr0;
    DWORD64 Dr1;
    DWORD64 Dr2;
    DWORD64 Dr3;
    DWORD64 Dr6;
    DWORD64 Dr7;
    DWORD64 Rax;
    DWORD64 Rcx;
    DWORD64 Rdx;
    DWORD64 Rbx;
    DWORD64 Rsp;
    DWORD64 Rbp;
    DWORD64 Rsi;
    DWORD64 Rdi;
    DWORD64 R8;
    DWORD64 R9;
    DWORD64 R10;
    DWORD64 R11;
    DWORD64 R12;
    DWORD64 R13;
    DWORD64 R14;
    DWORD64 R15;
    DWORD64 Rip;
    union _union_54 u;
    M128A VectorRegister[26];
    DWORD64 VectorControl;
    DWORD64 DebugControl;
    DWORD64 LastBranchToRip;
    DWORD64 LastBranchFromRip;
    DWORD64 LastExceptionToRip;
    DWORD64 LastExceptionFromRip;
};

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef struct _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION _SYSTEM_LOGICAL_PROCESSOR_INFORMATION, *P_SYSTEM_LOGICAL_PROCESSOR_INFORMATION;

typedef struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION *PSYSTEM_LOGICAL_PROCESSOR_INFORMATION;

typedef enum _LOGICAL_PROCESSOR_RELATIONSHIP {
    RelationProcessorCore=0,
    RelationNumaNode=1,
    RelationCache=2,
    RelationProcessorPackage=3,
    RelationGroup=4,
    RelationAll=65535
} _LOGICAL_PROCESSOR_RELATIONSHIP;

typedef enum _LOGICAL_PROCESSOR_RELATIONSHIP LOGICAL_PROCESSOR_RELATIONSHIP;

typedef union _union_160 _union_160, *P_union_160;

typedef struct _struct_161 _struct_161, *P_struct_161;

typedef struct _struct_162 _struct_162, *P_struct_162;

typedef struct _CACHE_DESCRIPTOR _CACHE_DESCRIPTOR, *P_CACHE_DESCRIPTOR;

typedef struct _CACHE_DESCRIPTOR CACHE_DESCRIPTOR;

typedef enum _PROCESSOR_CACHE_TYPE {
    CacheUnified=0,
    CacheInstruction=1,
    CacheData=2,
    CacheTrace=3
} _PROCESSOR_CACHE_TYPE;

typedef enum _PROCESSOR_CACHE_TYPE PROCESSOR_CACHE_TYPE;

struct _struct_162 {
    DWORD NodeNumber;
};

struct _struct_161 {
    BYTE Flags;
};

struct _CACHE_DESCRIPTOR {
    BYTE Level;
    BYTE Associativity;
    WORD LineSize;
    DWORD Size;
    PROCESSOR_CACHE_TYPE Type;
};

union _union_160 {
    struct _struct_161 ProcessorCore;
    struct _struct_162 NumaNode;
    CACHE_DESCRIPTOR Cache;
    ULONGLONG Reserved[2];
};

struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION {
    ULONG_PTR ProcessorMask;
    LOGICAL_PROCESSOR_RELATIONSHIP Relationship;
    union _union_160 u;
};

typedef union _ULARGE_INTEGER _ULARGE_INTEGER, *P_ULARGE_INTEGER;

typedef union _ULARGE_INTEGER ULARGE_INTEGER;

typedef struct _struct_22 _struct_22, *P_struct_22;

typedef struct _struct_23 _struct_23, *P_struct_23;

struct _struct_23 {
    DWORD LowPart;
    DWORD HighPart;
};

struct _struct_22 {
    DWORD LowPart;
    DWORD HighPart;
};

union _ULARGE_INTEGER {
    struct _struct_22 s;
    struct _struct_23 u;
    ULONGLONG QuadPart;
};

typedef struct _struct_314 _struct_314, *P_struct_314;

struct _struct_314 {
    ULONGLONG Alignment;
    ULONGLONG Region;
};

typedef struct _struct_317 _struct_317, *P_struct_317;

struct _struct_317 {
    ULONGLONG Depth:16;
    ULONGLONG Sequence:48;
    ULONGLONG HeaderType:1;
    ULONGLONG Reserved:3;
    ULONGLONG NextEntry:60;
};

typedef struct _struct_316 _struct_316, *P_struct_316;

struct _struct_316 {
    ULONGLONG Depth:16;
    ULONGLONG Sequence:48;
    ULONGLONG HeaderType:1;
    ULONGLONG Init:1;
    ULONGLONG Reserved:2;
    ULONGLONG NextEntry:60;
};

typedef struct _struct_315 _struct_315, *P_struct_315;

struct _struct_315 {
    ULONGLONG Depth:16;
    ULONGLONG Sequence:9;
    ULONGLONG NextEntry:39;
    ULONGLONG HeaderType:1;
    ULONGLONG Init:1;
    ULONGLONG Reserved:59;
    ULONGLONG Region:3;
};

typedef struct _RUNTIME_FUNCTION _RUNTIME_FUNCTION, *P_RUNTIME_FUNCTION;

struct _RUNTIME_FUNCTION {
    DWORD BeginAddress;
    DWORD EndAddress;
    DWORD UnwindData;
};

typedef struct _RUNTIME_FUNCTION *PRUNTIME_FUNCTION;

typedef struct _UNWIND_HISTORY_TABLE_ENTRY _UNWIND_HISTORY_TABLE_ENTRY, *P_UNWIND_HISTORY_TABLE_ENTRY;

typedef struct _UNWIND_HISTORY_TABLE_ENTRY UNWIND_HISTORY_TABLE_ENTRY;

struct _UNWIND_HISTORY_TABLE_ENTRY {
    DWORD64 ImageBase;
    PRUNTIME_FUNCTION FunctionEntry;
};

typedef union _union_61 _union_61, *P_union_61;

typedef struct _M128A *PM128A;

typedef struct _struct_62 _struct_62, *P_struct_62;

struct _struct_62 {
    PM128A Xmm0;
    PM128A Xmm1;
    PM128A Xmm2;
    PM128A Xmm3;
    PM128A Xmm4;
    PM128A Xmm5;
    PM128A Xmm6;
    PM128A Xmm7;
    PM128A Xmm8;
    PM128A Xmm9;
    PM128A Xmm10;
    PM128A Xmm11;
    PM128A Xmm12;
    PM128A Xmm13;
    PM128A Xmm14;
    PM128A Xmm15;
};

union _union_61 {
    PM128A FloatingContext[16];
    struct _struct_62 s;
};

typedef struct _struct_64 _struct_64, *P_struct_64;

typedef ulonglong *PDWORD64;

struct _struct_64 {
    PDWORD64 Rax;
    PDWORD64 Rcx;
    PDWORD64 Rdx;
    PDWORD64 Rbx;
    PDWORD64 Rsp;
    PDWORD64 Rbp;
    PDWORD64 Rsi;
    PDWORD64 Rdi;
    PDWORD64 R8;
    PDWORD64 R9;
    PDWORD64 R10;
    PDWORD64 R11;
    PDWORD64 R12;
    PDWORD64 R13;
    PDWORD64 R14;
    PDWORD64 R15;
};

typedef union _union_63 _union_63, *P_union_63;

union _union_63 {
    PDWORD64 IntegerContext[16];
    struct _struct_64 s;
};

typedef enum _EXCEPTION_DISPOSITION {
    ExceptionContinueExecution=0,
    ExceptionContinueSearch=1,
    ExceptionNestedException=2,
    ExceptionCollidedUnwind=3
} _EXCEPTION_DISPOSITION;

typedef enum _EXCEPTION_DISPOSITION EXCEPTION_DISPOSITION;

typedef EXCEPTION_DISPOSITION (EXCEPTION_ROUTINE)(struct _EXCEPTION_RECORD *, PVOID, struct _CONTEXT *, PVOID);

typedef union _SLIST_HEADER _SLIST_HEADER, *P_SLIST_HEADER;

union _SLIST_HEADER {
    struct _struct_314 s;
    struct _struct_315 Header8;
    struct _struct_316 Header16;
    struct _struct_317 HeaderX64;
};

typedef struct _UNWIND_HISTORY_TABLE _UNWIND_HISTORY_TABLE, *P_UNWIND_HISTORY_TABLE;

struct _UNWIND_HISTORY_TABLE {
    DWORD Count;
    BYTE LocalHint;
    BYTE GlobalHint;
    BYTE Search;
    BYTE Once;
    DWORD64 LowAddress;
    DWORD64 HighAddress;
    UNWIND_HISTORY_TABLE_ENTRY Entry[12];
};

typedef char CHAR;

typedef CHAR *LPCSTR;

typedef ULONGLONG DWORDLONG;

typedef ULARGE_INTEGER *PULARGE_INTEGER;

typedef CHAR *LPSTR;

typedef struct _OSVERSIONINFOEXW _OSVERSIONINFOEXW, *P_OSVERSIONINFOEXW;

struct _OSVERSIONINFOEXW {
    DWORD dwOSVersionInfoSize;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    DWORD dwBuildNumber;
    DWORD dwPlatformId;
    WCHAR szCSDVersion[128];
    WORD wServicePackMajor;
    WORD wServicePackMinor;
    WORD wSuiteMask;
    BYTE wProductType;
    BYTE wReserved;
};

typedef DWORD ACCESS_MASK;

typedef struct _KNONVOLATILE_CONTEXT_POINTERS _KNONVOLATILE_CONTEXT_POINTERS, *P_KNONVOLATILE_CONTEXT_POINTERS;

struct _KNONVOLATILE_CONTEXT_POINTERS {
    union _union_61 u;
    union _union_63 u2;
};

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
};

struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
};

union _LARGE_INTEGER {
    struct _struct_19 s;
    struct _struct_20 u;
    LONGLONG QuadPart;
};

typedef union _LARGE_INTEGER LARGE_INTEGER;

typedef struct _OSVERSIONINFOEXW *LPOSVERSIONINFOEXW;

typedef struct _UNWIND_HISTORY_TABLE *PUNWIND_HISTORY_TABLE;

typedef union _SLIST_HEADER *PSLIST_HEADER;

typedef struct _KNONVOLATILE_CONTEXT_POINTERS *PKNONVOLATILE_CONTEXT_POINTERS;

typedef EXCEPTION_ROUTINE *PEXCEPTION_ROUTINE;

typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte e_program[216]; // Actual DOS program
};

typedef ULONG_PTR DWORD_PTR;

typedef ULONG_PTR *PDWORD_PTR;

typedef ULONG_PTR SIZE_T;

typedef longlong INT_PTR;

typedef struct _DISPATCHER_CONTEXT _DISPATCHER_CONTEXT, *P_DISPATCHER_CONTEXT;

struct _DISPATCHER_CONTEXT {
};

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbpath[112];
};

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME *LPFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef INT_PTR (*FARPROC)(void);

typedef struct HKEY__ HKEY__, *PHKEY__;

struct HKEY__ {
    int unused;
};

typedef HANDLE *LPHANDLE;

typedef DWORD *LPDWORD;

typedef struct HKEY__ *HKEY;

typedef HKEY *PHKEY;

typedef LONG_PTR LRESULT;

typedef DWORD *PDWORD;

typedef void *HGDIOBJ;

typedef struct Var Var, *PVar;

struct Var {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct {
    dword NameOffset:31;
    dword NameIsString:1;
};

typedef struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY IMAGE_LOAD_CONFIG_CODE_INTEGRITY, *PIMAGE_LOAD_CONFIG_CODE_INTEGRITY;

struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY {
    word Flags;
    word Catalog;
    dword CatalogOffset;
    dword Reserved;
};

typedef struct IMAGE_DEBUG_DIRECTORY IMAGE_DEBUG_DIRECTORY, *PIMAGE_DEBUG_DIRECTORY;

struct IMAGE_DEBUG_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword Type;
    dword SizeOfData;
    dword AddressOfRawData;
    dword PointerToRawData;
};

typedef struct StringTable StringTable, *PStringTable;

struct StringTable {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_WRITE=2147483648
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct IMAGE_NT_HEADERS64 IMAGE_NT_HEADERS64, *PIMAGE_NT_HEADERS64;

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

typedef struct IMAGE_OPTIONAL_HEADER64 IMAGE_OPTIONAL_HEADER64, *PIMAGE_OPTIONAL_HEADER64;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

struct IMAGE_OPTIONAL_HEADER64 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    pointer64 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    qword SizeOfStackReserve;
    qword SizeOfStackCommit;
    qword SizeOfHeapReserve;
    qword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

struct IMAGE_FILE_HEADER {
    word Machine; // 34404
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

struct IMAGE_NT_HEADERS64 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER64 OptionalHeader;
};

typedef struct IMAGE_RESOURCE_DATA_ENTRY IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;

struct IMAGE_RESOURCE_DATA_ENTRY {
    dword OffsetToData;
    dword Size;
    dword CodePage;
    dword Reserved;
};

typedef struct IMAGE_RESOURCE_DIRECTORY IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;

struct IMAGE_RESOURCE_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    word NumberOfNamedEntries;
    word NumberOfIdEntries;
};

typedef struct IMAGE_DIRECTORY_ENTRY_EXPORT IMAGE_DIRECTORY_ENTRY_EXPORT, *PIMAGE_DIRECTORY_ENTRY_EXPORT;

struct IMAGE_DIRECTORY_ENTRY_EXPORT {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    ImageBaseOffset32 Name;
    dword Base;
    dword NumberOfFunctions;
    dword NumberOfNames;
    ImageBaseOffset32 AddressOfFunctions;
    ImageBaseOffset32 AddressOfNames;
    ImageBaseOffset32 AddressOfNameOrdinals;
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion;

union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion {
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;
    dword Name;
    word Id;
};

typedef struct _IMAGE_RUNTIME_FUNCTION_ENTRY _IMAGE_RUNTIME_FUNCTION_ENTRY, *P_IMAGE_RUNTIME_FUNCTION_ENTRY;

struct _IMAGE_RUNTIME_FUNCTION_ENTRY {
    ImageBaseOffset32 BeginAddress;
    dword EndAddress; // Apply ImageBaseOffset32 to see reference
    ImageBaseOffset32 UnwindInfoAddressOrData;
};

typedef struct IMAGE_LOAD_CONFIG_DIRECTORY64 IMAGE_LOAD_CONFIG_DIRECTORY64, *PIMAGE_LOAD_CONFIG_DIRECTORY64;

typedef enum IMAGE_GUARD_FLAGS {
    IMAGE_GUARD_CF_INSTRUMENTED=256,
    IMAGE_GUARD_CFW_INSTRUMENTED=512,
    IMAGE_GUARD_CF_FUNCTION_TABLE_PRESENT=1024,
    IMAGE_GUARD_SECURITY_COOKIE_UNUSED=2048,
    IMAGE_GUARD_PROTECT_DELAYLOAD_IAT=4096,
    IMAGE_GUARD_DELAYLOAD_IAT_IN_ITS_OWN_SECTION=8192,
    IMAGE_GUARD_CF_EXPORT_SUPPRESSION_INFO_PRESENT=16384,
    IMAGE_GUARD_CF_ENABLE_EXPORT_SUPPRESSION=32768,
    IMAGE_GUARD_CF_LONGJUMP_TABLE_PRESENT=65536,
    IMAGE_GUARD_RF_INSTRUMENTED=131072,
    IMAGE_GUARD_RF_ENABLE=262144,
    IMAGE_GUARD_RF_STRICT=524288,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_1=268435456,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_2=536870912,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_4=1073741824,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_8=2147483648
} IMAGE_GUARD_FLAGS;

struct IMAGE_LOAD_CONFIG_DIRECTORY64 {
    dword Size;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword GlobalFlagsClear;
    dword GlobalFlagsSet;
    dword CriticalSectionDefaultTimeout;
    qword DeCommitFreeBlockThreshold;
    qword DeCommitTotalFreeThreshold;
    pointer64 LockPrefixTable;
    qword MaximumAllocationSize;
    qword VirtualMemoryThreshold;
    qword ProcessAffinityMask;
    dword ProcessHeapFlags;
    word CsdVersion;
    word DependentLoadFlags;
    pointer64 EditList;
    pointer64 SecurityCookie;
    pointer64 SEHandlerTable;
    qword SEHandlerCount;
    pointer64 GuardCFCCheckFunctionPointer;
    pointer64 GuardCFDispatchFunctionPointer;
    pointer64 GuardCFFunctionTable;
    qword GuardCFFunctionCount;
    enum IMAGE_GUARD_FLAGS GuardFlags;
    struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY CodeIntegrity;
    pointer64 GuardAddressTakenIatEntryTable;
    qword GuardAddressTakenIatEntryCount;
    pointer64 GuardLongJumpTargetTable;
    qword GuardLongJumpTargetCount;
    pointer64 DynamicValueRelocTable;
    pointer64 CHPEMetadataPointer;
    pointer64 GuardRFFailureRoutine;
    pointer64 GuardRFFailureRoutineFunctionPointer;
    dword DynamicValueRelocTableOffset;
    word DynamicValueRelocTableSection;
    word Reserved1;
    pointer64 GuardRFVerifyStackPointerFunctionPointer;
    dword HotPatchTableOffset;
    dword Reserved2;
    qword Reserved3;
};

typedef struct StringFileInfo StringFileInfo, *PStringFileInfo;

struct StringFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion NameUnion;
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion DirectoryUnion;
};

typedef struct VS_VERSION_INFO VS_VERSION_INFO, *PVS_VERSION_INFO;

struct VS_VERSION_INFO {
    word StructLength;
    word ValueLength;
    word StructType;
    wchar16 Info[16];
    byte Padding[2];
    dword Signature;
    word StructVersion[2];
    word FileVersion[4];
    word ProductVersion[4];
    dword FileFlagsMask[2];
    dword FileFlags;
    dword FileOS;
    dword FileType;
    dword FileSubtype;
    dword FileTimestamp;
};

typedef struct IMAGE_BASE_RELOCATION IMAGE_BASE_RELOCATION, *PIMAGE_BASE_RELOCATION;

struct IMAGE_BASE_RELOCATION {
    dword VirtualAddress;
    dword SizeOfBlock;
};

typedef struct IMAGE_THUNK_DATA64 IMAGE_THUNK_DATA64, *PIMAGE_THUNK_DATA64;

struct IMAGE_THUNK_DATA64 {
    qword StartAddressOfRawData;
    qword EndAddressOfRawData;
    qword AddressOfIndex;
    qword AddressOfCallBacks;
    dword SizeOfZeroFill;
    dword Characteristics;
};

typedef struct VarFileInfo VarFileInfo, *PVarFileInfo;

struct VarFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct StringInfo StringInfo, *PStringInfo;

struct StringInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct _iobuf _iobuf, *P_iobuf;

struct _iobuf {
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char *_tmpfname;
};

typedef struct _iobuf FILE;

typedef LONG LSTATUS;

typedef ACCESS_MASK REGSAM;

typedef struct AssetManager AssetManager, *PAssetManager;

struct AssetManager { // PlaceHolder Structure
};

typedef struct IProgressIndicator IProgressIndicator, *PIProgressIndicator;

struct IProgressIndicator { // PlaceHolder Structure
};

typedef struct SDL SDL, *PSDL;

struct SDL { // PlaceHolder Structure
};

typedef struct HICON__ HICON__, *PHICON__;

struct HICON__ { // PlaceHolder Structure
};

typedef struct IGame IGame, *PIGame;

struct IGame { // PlaceHolder Structure
};

typedef enum TYPE {
} TYPE;

typedef struct Settings Settings, *PSettings;

struct Settings { // PlaceHolder Structure
};

typedef enum ENUM {
} ENUM;

typedef struct IMountHelper IMountHelper, *PIMountHelper;

struct IMountHelper { // PlaceHolder Structure
};

typedef struct string_base<char> string_base<char>, *Pstring_base<char>;

struct string_base<char> { // PlaceHolder Structure
};

typedef struct file file, *Pfile;

struct file { // PlaceHolder Structure
};

typedef enum FLAGS {
} FLAGS;

typedef ulonglong size_t;

typedef int errno_t;

typedef size_t rsize_t;



undefined DAT_32d595747a5bd505;
byte DAT_4fdee56c498cdf69;
undefined DAT_00000011;
undefined DAT_5a2a8cd741e2a5e3;
undefined DAT_1cd0d4e8;
byte DAT_63c043e6;
undefined DAT_fafd8ac1;
undefined1 DAT_b16c4f2d3840e8f6;
undefined1 DAT_d2658646;
undefined DAT_d7d7e8e52f9b50f0;
undefined DAT_1146044d;
undefined DAT_a11b993bf619de7e;
undefined1 DAT_7e0d8b4c8cee5d23;
undefined DAT_d311b91059c986b0;
undefined DAT_ea511a89;
undefined DAT_ea511ab1;
undefined1 DAT_4fd37e278e2f3884;
char DAT_1fa71eb8;
undefined DAT_da6cb172;
undefined1 UNK_07bc65fc;
undefined1 DAT_93af436e508638c9;
undefined DAT_13d11f941;
byte UNK_ffffffffffffffec;
undefined1 DAT_dba5ec35d3308095;
undefined DAT_3a230c8427873d96;
byte DAT_12fa2235f;
byte DAT_1b2c20612;
undefined DAT_3ea49d3e;
undefined DAT_2bd1ba96;
undefined DAT_902b6fbf280699a3;
undefined1 DAT_dd6b2ac5f7743341;
undefined DAT_d90a5010;
undefined DAT_85905e90;
undefined1 DAT_d90a4fbb;
byte DAT_36f338b5;
char DAT_f4662698;
undefined8 UNK_d90a5083;
undefined DAT_7a2c3d6b;
undefined DAT_7a2c3d6f;
undefined DAT_7a2c3d73;
undefined DAT_64188545133d821;
undefined DAT_ccee3cc3;
undefined DAT_e3048bb0;
undefined DAT_1053aa21cdf10760;
char DAT_e56177fb;
undefined1 DAT_993aab44c16f853d;
char DAT_3de43670;
undefined DAT_3de43693;
undefined DAT_c667eb0ce76081;
char DAT_18121a6f0;
byte DAT_1897fd414;
char DAT_1b9945250;
undefined DAT_7a9501cab3c3bf6b;
undefined DAT_163639ee0;
undefined DAT_b47f59d9;
undefined1 DAT_b8f49656ed32fd50;
char UNK_fffffffffee80395;
undefined DAT_d97ef2d6b0626f30;
undefined DAT_389501861879157b;
undefined DAT_f31303803267d037;
undefined1 DAT_88f371c1;
byte DAT_13c883a50;
undefined DAT_fd2b99c6;
undefined DAT_fd2b99be;
char *UNK_fd2b20a2;
undefined1 *UNK_fd2b9956;
undefined1 DAT_13c883a50;
undefined DAT_4d5ec3d2;
undefined DAT_4d5ec36a;
undefined DAT_4d5e4ab6;
undefined DAT_2c6c7b0cc50533a9;
undefined DAT_a8e0ec1c3932b38d;
undefined1 DAT_133613bdf;
undefined DAT_3626969d;
undefined1 UNK_43321d156c26d67f;
undefined DAT_828f51cd51d308;
undefined1 DAT_e9d213564e0adfc1;
undefined DAT_adda5eef3bc9f3e4;
undefined1 DAT_d5c3d1486495b3b3;
undefined DAT_fe5bacd644690004;
byte DAT_765bd529;
undefined DAT_e2270c92;
undefined1 DAT_177883980;
undefined1 DAT_931599f60313c762;
undefined DAT_9c014d49c40dbfaa;
undefined1 DAT_19a0e45f;
undefined1 UNK_349c874368692adf;
undefined DAT_2ec3ae9fb7a676b6;
undefined DAT_594958f5;
undefined1 DAT_25f9e016cd80eead;
undefined DAT_19c3fcb68;
undefined DAT_ab73dc18ef693629;
undefined1 DAT_ed2eef44682596d8;
undefined DAT_c5785cb5;
undefined DAT_717dbc66e3b590c0;
undefined DAT_ffffffffaa43d86a;
undefined1 DAT_7a7969e68c3c6337;
byte DAT_87170c4fa59e4e0c;
undefined DAT_52fec5f3228ca55d;
undefined1 DAT_1529521ab;
undefined DAT_d9f6edf08537737c;
undefined1 DAT_c5ba5f254b3eb501;
undefined DAT_128f53915;
undefined1 DAT_1212749abe6c52bd;
undefined DAT_6035d50b;
undefined DAT_110cfca40;
undefined1 DAT_236b2f411ab956cc;
byte DAT_11de1aaaa;
char DAT_115253fee;
byte DAT_0b3d361c;
undefined DAT_0b3d35f1;
byte UNK_0b3d35f0;
char UNK_ecffc92f;
char UNK_d96adbf07b51dac8;
undefined DAT_53f393fb1cd27d69;
undefined DAT_e5a2daab;
undefined1 DAT_171ddc02b;
undefined DAT_6da9e974;
undefined DAT_9fbd6914a9a3b0ae;
undefined1 DAT_fc8f0998c1adce86;
undefined DAT_1340a65b7;
undefined DAT_c9c0fd07;
undefined DAT_a4de8859;
undefined DAT_682d52a78ecbb7f1;
undefined1 DAT_5e687c1d59d6b775;
char UNK_3fc50c3b2dda8c67;
undefined DAT_aa7d8d14;
undefined DAT_f308be53;
char DAT_137e7c833;
undefined DAT_2167c4ffe745f005;
undefined DAT_1563b86ea;
undefined1 DAT_158dcffba;
undefined DAT_825acb9c;
undefined DAT_d9b04563;
byte DAT_1030f19f5;
undefined DAT_1634b76fa78e727a;
byte DAT_6d8ec089;
undefined1 DAT_a7d2746e;
byte DAT_14b1666a7;
undefined DAT_ea92877f;
byte DAT_716134e2;
byte DAT_1b67df048;
undefined DAT_b2da28b7636c461d;
undefined DAT_feee4194;
undefined1 DAT_2337f6794983cfed;
undefined DAT_f74765eb;
undefined1 DAT_c2d130b6d999fdcd;
undefined DAT_167482a38;
undefined DAT_167482a3c;
undefined DAT_167482a40;
undefined DAT_167482a4c;
undefined DAT_167482a44;
undefined DAT_167482a4a;
char DAT_acbde695;
undefined1 DAT_c40bb3252215056;
int UNK_ffffffffce63ae25;
char UNK_08a807e5;
undefined1 DAT_6c09bfdb45cb7e19;
undefined1 DAT_98399ab5e620aa29;
undefined DAT_ffffffffcdf23915;
undefined DAT_7082640b;
undefined1 DAT_ea5983e57f7f6301;
undefined DAT_17c46af32;
undefined DAT_86099551d406c622;
undefined DAT_43db53aa;
undefined DAT_d235fddd;
undefined DAT_c9eb5484;
undefined DAT_c9eb547c;
char DAT_d838b98011f54a01;
undefined DAT_135aaa7fe;
undefined DAT_4760fe90fad324e2;
byte DAT_1505b42bb;
undefined DAT_8871f20c487b7235;
undefined DAT_6c0a7b64;
char DAT_5213a807;
undefined1 DAT_e2c7d4bb8d3bb1f0;
undefined DAT_4af2f731;
undefined DAT_4af2f72d;
undefined DAT_1287a0144;
undefined1 DAT_cb25ba5c2275eeea;
undefined1 DAT_75700585b64cb93b;
undefined DAT_e28de71a519d188e;
char DAT_15575edce;
undefined DAT_54fa0605a056c876;
undefined DAT_9ab07357;
undefined DAT_9ab07317;
undefined1 UNK_c02fc76d;
undefined DAT_1818acb93;
undefined DAT_15b602c22;
undefined DAT_8466cb95;
undefined DAT_b9a82fa4;
undefined DAT_a1aae9fe;
undefined DAT_ebda316ccea658c6;
undefined DAT_eb0ef8b0;
undefined DAT_c833e2c4edd72d2b;
undefined DAT_bb346239;
undefined DAT_395bf092dc3b0f2e;
undefined1 DAT_bd94dd076cee3d92;
undefined DAT_a688d9cb;
undefined DAT_10fa1a711;
undefined DAT_32c30b6e8024a7c9;
undefined DAT_54a33eff;
undefined DAT_f3a6c4fe4407c8a7;
undefined DAT_89dc99a1d504b344;
undefined DAT_1549cf61d;
undefined1 DAT_7d425df777e3afd9;
undefined DAT_133eaf7d7;
undefined DAT_3d8d191c;
byte DAT_15110700b;
undefined DAT_2e0340c8069c7738;
undefined DAT_238a96c6a8afc1e4;
undefined DAT_57d56a58e82ab33d;
undefined DAT_f0b303a42e451cea;
char DAT_f631316e9e6b5251;
undefined DAT_f27a0017;
undefined DAT_f27a001b;
undefined DAT_f27a001f;
undefined DAT_f27a002b;
undefined DAT_f27a0023;
undefined DAT_f27a0033;
undefined DAT_f27a003d;
undefined DAT_f27a0047;
undefined DAT_f27a0051;
undefined DAT_f27a005b;
undefined DAT_f27a0065;
undefined DAT_f27a006f;
undefined DAT_f27a0079;
undefined1 UNK_51b13c7d;
byte DAT_e58d87ea942c3711;
undefined1 DAT_fa9b5b5ad8addc1b;
undefined1 DAT_49f50ad7ac17a6c2;
undefined DAT_a98db367;
undefined1 DAT_f7149d8454e37d6b;

// WARNING: Control flow encountered bad instruction data

void FUN_140001060(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400011c0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140001990(void)

{
  uint *puVar1;
  longlong unaff_RSI;
  longlong in_FS_OFFSET;
  
  puVar1 = (uint *)(in_FS_OFFSET + unaff_RSI);
  *puVar1 = *puVar1 << 0x12 | *puVar1 >> 0xe;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140001df0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140002ef0(void)

{
  longlong unaff_RBP;
  
  *(int *)(unaff_RBP + -0x616dd775) = *(int *)(unaff_RBP + -0x616dd775) << 0x1a;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140003170(undefined8 param_1,undefined1 param_2)

{
  char cVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  bool in_PF;
  char in_SF;
  char in_OF;
  undefined8 uStack_10;
  
  if (!in_PF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (in_OF != in_SF) {
    _DAT_32d595747a5bd505 = 0x20b4c679;
    *unaff_RDI = *unaff_RSI;
    in(0x8d);
    puVar3 = (undefined8 *)&stack0xfffffffffffffff8;
    cVar1 = '\x04';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar3 = puVar3 + -1;
      *puVar3 = *unaff_RBP;
      cVar1 = cVar1 + -1;
    } while ('\0' < cVar1);
    pcVar2 = (code *)swi(1);
    (*pcVar2)(param_1,param_2);
    return;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_1400033eb(void)

{
  undefined4 in_EAX;
  undefined4 *unaff_RDI;
  
  out(0x1e,in_EAX);
  *unaff_RDI = in_EAX;
  out(0xb3,in_EAX);
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400033f0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140003420(longlong param_1,undefined2 param_2)

{
  undefined1 uVar1;
  longlong unaff_RBX;
  undefined4 unaff_ESI;
  undefined1 *unaff_RDI;
  char in_ZF;
  
  if (param_1 == 1 || in_ZF != '\0') {
    FUN_1400033eb();
    return;
  }
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  LOCK();
  *(undefined4 *)(unaff_RBX + 0x1f8154e4) = unaff_ESI;
  UNLOCK();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_140003450(char *param_1)

{
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong in_FS_OFFSET;
  undefined1 in_ZMM10 [64];
  
  vhsubpd_avx(in_ZMM10._0_32_,
              *(undefined1 (*) [32])
               (in_FS_OFFSET + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x5d915925));
  *param_1 = *param_1 - unaff_BH;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Control flow encountered bad instruction data

uint FUN_140003490(longlong param_1)

{
  undefined1 *puVar1;
  uint *puVar2;
  undefined2 in_AX;
  uint unaff_ESI;
  undefined2 unaff_DI;
  undefined2 unaff_0000003a;
  undefined4 unaff_0000003c;
  
  *(uint *)CONCAT44(unaff_0000003c,CONCAT22(unaff_0000003a,unaff_DI)) =
       *(uint *)CONCAT44(unaff_0000003c,CONCAT22(unaff_0000003a,unaff_DI)) ^
       CONCAT22(unaff_0000003a,unaff_DI);
  if (param_1 == 1) {
    in(0x25);
    puVar1 = (undefined1 *)(CONCAT44(unaff_0000003c,CONCAT22(unaff_0000003a,unaff_DI)) + 0x6de022c4)
    ;
    *puVar1 = *puVar1;
    puVar2 = (uint *)(CONCAT44(unaff_0000003c,CONCAT22(unaff_0000003a,unaff_DI)) +
                     (ulonglong)(unaff_ESI & (uint)param_1) * 8);
    *puVar2 = *puVar2 ^ CONCAT22(unaff_0000003a,unaff_DI);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  return CONCAT31((int3)(char)((ushort)in_AX >> 8),(char)in_AX) & 0xffffff74;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140003500(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400035d0(void)

{
  longlong unaff_RBP;
  
  *(byte *)(unaff_RBP + 0x298dac2f) = DAT_4fdee56c498cdf69 | 0x2f;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_1400036b0(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined1 in_AL;
  int unaff_EDI;
  
  out(param_2,in_AL);
  in(0x3e);
  uVar1 = in(CONCAT11(0x70,(char)param_2));
  *(undefined4 *)(ulonglong)(unaff_EDI + 1) = uVar1;
  pcVar2 = (code *)swi(1);
  (*pcVar2)();
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140003910(undefined8 param_1,longlong param_2)

{
  undefined4 in_EAX;
  
  *(char *)(param_2 + -0x2ee65e42) =
       *(char *)(param_2 + -0x2ee65e42) - (char)((ulonglong)param_1 >> 8);
  out((short)param_2,in_EAX);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140003940(void)

{
  int *piVar1;
  char cVar2;
  undefined1 in_AL;
  undefined2 *unaff_RBX;
  undefined8 *puVar3;
  undefined8 *unaff_RBP;
  undefined1 *unaff_RDI;
  undefined2 in_DS;
  byte in_CF;
  undefined8 uStack_10;
  
  piVar1 = (int *)(unaff_RDI + (longlong)unaff_RBX * 4);
  *piVar1 = (*piVar1 + -0xe230924) - (uint)in_CF;
  if (*piVar1 == 0) {
    *unaff_RBX = in_DS;
    puVar3 = (undefined8 *)&stack0xfffffffffffffff8;
    cVar2 = '\r';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar3 = puVar3 + -1;
      *puVar3 = *unaff_RBP;
      cVar2 = cVar2 + -1;
    } while ('\0' < cVar2);
    *unaff_RDI = in_AL;
    return;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140003a60(undefined8 param_1,undefined2 param_2)

{
  byte in_AL;
  longlong unaff_RBX;
  
  out(param_2,in_AL | 0xee);
  in((short)*(undefined4 *)(unaff_RBX + -0x59f2dab7));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140003bb0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_140003c20(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140004430(void)

{
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  *unaff_RDI = *unaff_RSI;
  if (!in_ZF && in_OF == in_SF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



undefined4 FUN_1400044d0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  int *unaff_RSI;
  int *unaff_RDI;
  byte in_CF;
  
  iVar1 = in(0xbd);
  *unaff_RDI = *unaff_RDI + iVar1 + (uint)in_CF;
  *unaff_RDI = *unaff_RSI;
  return param_2;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140004660(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 in_AL;
  byte bVar2;
  undefined1 uVar3;
  undefined6 uVar4;
  longlong unaff_RSI;
  int *unaff_RDI;
  
  uVar3 = (undefined1)param_1;
  uVar4 = (undefined6)((ulonglong)param_1 >> 0x10);
  in(0x6a);
  piVar1 = (int *)(CONCAT62(uVar4,CONCAT11(in_AL,uVar3)) + -0x21);
  *piVar1 = *piVar1 >> 0x19;
  *unaff_RDI = *unaff_RDI << 1;
  bVar2 = in(CONCAT11((char)((ulonglong)param_2 >> 8),0x3f));
  *(byte *)(unaff_RSI + 0x3b5d1455) = *(byte *)(unaff_RSI + 0x3b5d1455) | bVar2;
  *(uint *)((longlong)unaff_RDI + 0x41) = *(uint *)((longlong)unaff_RDI + 0x41) & 0xffffffa1;
  *(int *)CONCAT62(uVar4,CONCAT11(in_AL,uVar3)) =
       *(int *)CONCAT62(uVar4,CONCAT11(in_AL,uVar3)) + 0x63f72377;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140004830(undefined8 param_1)

{
  undefined1 unaff_BH;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  *unaff_RDI = *unaff_RSI;
  if (!in_ZF && in_OF == in_SF) {
    *(double *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(unaff_BH,(char)param_1)) =
         (double)*(int *)(unaff_RBP + 0x29a9549d);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400050c0(char *param_1)

{
  *param_1 = *param_1 << 1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400051e0(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = (char)param_2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140005210(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1400052d0(void)

{
  _DAT_00000011 = 0x19;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_1400054a0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_140005640(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x000140006dd2)

void FUN_140006d80(longlong param_1,undefined2 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  int *unaff_RBX;
  undefined4 *unaff_RDI;
  bool in_PF;
  bool in_ZF;
  char in_SF;
  bool in_OF;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  float10 in_ST0;
  
  if (in_OF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  uVar3 = SUB82(param_2,0);
  in(uVar3);
  if (in_ZF || in_SF != '\0') {
    uVar1 = in(uVar3);
    *(undefined1 *)(ulonglong)(uint)((int)unaff_RDI - *unaff_RBX) = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (!in_PF) {
    *(float *)((longlong)unaff_RDI + 0xbdf8ea15) = (float)in_ST0;
    if (in_SF == '\0') {
      out(0x5c,((char)(byte *)((ulonglong)param_2 & 0xffffffff) -
               *(char *)((longlong)unaff_RDI + 0x6e)) -
               (0x39 < *(byte *)((ulonglong)param_2 & 0xffffffff)));
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  uVar2 = in(uVar3);
  *unaff_RDI = uVar2;
  *param_2 = in_FPUControlWord;
  param_2[2] = in_FPUStatusWord;
  param_2[4] = in_FPUTagWord;
  *(undefined8 *)(param_2 + 10) = in_FPUDataPointer;
  *(undefined8 *)(param_2 + 6) = in_FPUInstructionPointer;
  param_2[9] = in_FPULastInstructionOpcode;
  if (param_1 == 1) {
    *(undefined8 *)((ulonglong)(uint)((int)&stack0x00000000 << 0x10) - 8) = 0x140006df0;
    func_0x000184586346();
    uVar1 = in((short)param_2);
    *(undefined1 *)(unaff_RDI + 1) = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Control flow encountered bad instruction data

void FUN_140006e40(void)

{
  undefined1 in_AL;
  
  out(0x5c,in_AL);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void _guard_check_icall(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_140006e80(void)

{
  undefined4 in_EAX;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = in_EAX;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140007000(undefined8 param_1,undefined4 param_2)

{
  undefined2 in_AX;
  ulonglong unaff_RBX;
  undefined8 unaff_RBP;
  undefined4 unaff_ESI;
  bool in_SF;
  
  if (in_SF) {
    register0x00000020 = (BADSPACEBASE *)&stack0xffffffffffffffe8;
    *(byte *)(unaff_RBX - 0x75a9cf6e) = ~*(byte *)(unaff_RBX - 0x75a9cf6e);
    unaff_RBX = (ulonglong)((uint)unaff_RBX & *(uint *)(unaff_RBX - 0x53));
    out(in_AX,param_2);
    unaff_ESI = 0xd3b8e8a2;
  }
  *(ulonglong *)((longlong)register0x00000020 + -8) = unaff_RBX;
  *(undefined8 *)((longlong)register0x00000020 + -0x10) = unaff_RBP;
  *(undefined8 *)((longlong)register0x00000020 + -0x18) = unaff_RBP;
  _DAT_5a2a8cd741e2a5e3 = unaff_ESI;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140007120(longlong param_1,int param_2)

{
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (in_ZF || in_OF != in_SF) {
    return;
  }
  if (param_2 != 0 || *(int *)(param_1 + 0x349df108) != 0) {
    func_0xf4466e1a(param_1,0x590add14);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140007320(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



undefined4 FUN_14000744f(void)

{
  undefined4 unaff_ESI;
  
  return unaff_ESI;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140007480(int *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  int unaff_ESI;
  undefined8 uStack_10;
  
  puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\x14';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  *param_1 = *param_1 - unaff_ESI;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140007590(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x00014000774a) overlaps instruction at (ram,0x000140007745)
// 

void FUN_140007730(uint param_1,char param_2)

{
  uint *puVar1;
  byte in_AL;
  undefined4 unaff_EBX;
  undefined4 unaff_0000001c;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  bool bVar2;
  
  puVar1 = (uint *)(unaff_RDI + -0x1ed9fac5);
  bVar2 = CARRY4(param_1,*puVar1);
  if (param_1 + *puVar1 == 0 || SCARRY4(param_1,*puVar1) != (int)(param_1 + *puVar1) < 0) {
    LOCK();
    *(undefined4 *)(unaff_RSI + -0x68) = unaff_EBX;
    UNLOCK();
  }
  else {
    *(char *)(unaff_RBP + 0x29) = *(char *)(unaff_RBP + 0x29) + param_2 + bVar2;
    bVar2 = *(uint *)(CONCAT44(unaff_0000001c,unaff_EBX) + -0x78d2e378) < (uint)&stack0x00000000;
  }
  if (bVar2) {
    DAT_63c043e6 = in_AL ^ 0xe3;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x0001400077da) overlaps instruction at (ram,0x0001400077d3)
// 
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1400077d0(void)

{
  unkbyte10 Var1;
  longlong unaff_RSI;
  uint in_R10D;
  unkbyte10 in_ST0;
  
  Var1 = to_bcd(in_ST0);
  *(unkbyte10 *)(unaff_RSI + 0x19) = Var1;
  if (CARRY4(in_R10D,_DAT_fafd8ac1)) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140007890(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140007940(void)

{
  longlong in_RAX;
  byte in_CF;
  
  *(undefined4 *)(in_RAX + -0x4625286a) = *(undefined4 *)(in_RAX + -0x4625286a);
  if ((int)((int)in_RAX + 0x470e6a30 + (uint)(in_CF & 1)) < 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400079d0(undefined8 param_1,undefined1 param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *unaff_RBP;
  undefined1 *unaff_RSI;
  uint *puVar7;
  undefined1 *unaff_RDI;
  uint *puVar8;
  undefined8 auStack_3b07 [1886];
  undefined8 uStack_10;
  
  puVar5 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar3 = '\x1c';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar5 = puVar5 + -1;
    *puVar5 = *unaff_RBP;
    cVar3 = cVar3 + -1;
  } while ('\0' < cVar3);
  puVar6 = auStack_3b07;
  puVar7 = (uint *)(unaff_RSI + 1);
  *unaff_RDI = *unaff_RSI;
  puVar8 = (uint *)(unaff_RDI + 1);
  do {
    *(int *)((longlong)puVar7 * 2) = *(int *)((longlong)puVar7 * 2) - (int)&stack0xfffffffffffffff8;
    puVar4 = (uint *)*puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar4 + 1;
    uVar2 = *puVar8;
    uVar1 = *puVar4;
    if ((POPCOUNT(uVar1 - uVar2 & 0xff) & 1U) == 0) {
      *(undefined8 *)(puVar8 + 1) = *(undefined8 *)puVar7;
      uVar1 = in(CONCAT11(0x56,param_2));
      puVar8[3] = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    puVar8 = puVar8 + 1;
  } while (uVar1 < uVar2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140007a30(void)

{
  undefined1 in_AL;
  
  out(3,in_AL);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_140007ab0(int *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined1 uVar2;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RBX;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  longlong unaff_retaddr;
  
  uVar2 = DAT_b16c4f2d3840e8f6;
  out(0xa2,CONCAT22(in_register_00000002,CONCAT11(in_AH,DAT_b16c4f2d3840e8f6)));
  *(ulonglong *)(unaff_retaddr + -8) = CONCAT44(unaff_00000034,unaff_ESI);
  pbVar1 = (byte *)(unaff_RBX +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,uVar2))) * 4);
  *pbVar1 = *pbVar1 & in_AH;
  *param_1 = *param_1 - ((int)unaff_retaddr + -8);
  *(ulonglong *)(unaff_retaddr + -0x10) = CONCAT44(unaff_00000034,unaff_ESI);
  *(byte *)(unaff_RBX + 0x5f4d1975) =
       *(byte *)(unaff_RBX + 0x5f4d1975) ^ (byte)((ulonglong)param_1 >> 8);
  *(uint *)(param_2 + -3) = CONCAT22(in_register_00000002,CONCAT11(in_AH,uVar2));
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140007b40(void)

{
  longlong in_RAX;
  longlong unaff_RSI;
  
  *(char *)(in_RAX + 0x53f7ba72) = *(char *)(in_RAX + 0x53f7ba72) + '\x01';
  out(0x62,-(char)*(undefined4 *)(unaff_RSI + 0x3860355c));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140007ba0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x000140007ca1)

void FUN_140007bf0(longlong param_1,undefined2 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  bool in_CF;
  bool in_ZF;
  
  if (in_CF || in_ZF) {
    *unaff_RSI = *unaff_RSI;
    uVar1 = in(param_2);
    *unaff_RDI = uVar1;
    *(longlong *)(param_3 + 0x305d332a) = param_1;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140007c20(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140007e10(undefined8 param_1,undefined1 *param_2)

{
  byte *pbVar1;
  short in_AX;
  byte unaff_BL;
  undefined2 in_FPUStatusWord;
  
  *(undefined2 *)(param_2 + (ulonglong)(uint)(int)in_AX + 0x47) = in_FPUStatusWord;
  *param_2 = 0xab;
  pbVar1 = (byte *)(CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(5,(char)param_1)) + -0x3b);
  *pbVar1 = *pbVar1 ^ unaff_BL;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140007e50(longlong param_1,uint param_2)

{
  undefined4 in_EAX;
  undefined4 *unaff_RDI;
  bool in_CF;
  bool in_ZF;
  
  if (!in_CF && !in_ZF) {
    *(uint *)(param_1 + 0x2e) = *(uint *)(param_1 + 0x2e) & param_2;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *unaff_RDI = in_EAX;
  *(char *)(unaff_RDI + 1) = (char)_DAT_d7d7e8e52f9b50f0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140007e90(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140007f20(void)

{
  bool in_OF;
  
  if (!in_OF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140007f80(longlong param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  int *piVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined4 in_EAX;
  ulonglong uVar5;
  char cVar6;
  longlong unaff_RBX;
  ulonglong *unaff_RBP;
  ulonglong uVar7;
  uint *unaff_RSI;
  uint uVar8;
  uint unaff_EDI;
  bool bVar9;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  float10 in_ST0;
  undefined8 in_MM4;
  undefined1 unaff_XMM7 [16];
  undefined1 unaff_XMM9 [16];
  
  vsqrtsd_avx(unaff_XMM9,unaff_XMM7);
  puVar1 = (uint *)(param_3 + -0x25274dcc);
  *puVar1 = *puVar1 & unaff_EDI;
  uVar7 = *unaff_RBP;
  if (*puVar1 == 0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  uVar8 = unaff_EDI ^ (uint)unaff_RSI;
  bVar9 = (POPCOUNT(uVar8 & 0xff) & 1U) == 0;
  if (!bVar9) {
    return;
  }
  out((short)param_2,in_EAX);
  uVar5 = param_1 - 1;
  if (uVar5 != 0 && uVar8 == 0) {
    uVar3 = in((short)param_2);
    *(undefined1 *)(ulonglong)uVar8 = uVar3;
    *unaff_RBP = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
                 (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((int)uVar8 < 0) * 0x80 |
                 (ulonglong)(uVar8 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
                 (ulonglong)bVar9 * 4 | (ulonglong)(in_ID & 1) * 0x200000 |
                 (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
                 (ulonglong)(in_AC & 1) * 0x40000;
    bVar4 = ((undefined1 *)(ulonglong)uVar8)[0x31];
    piVar2 = (int *)(unaff_RBX + -0x9b55311);
    *piVar2 = *piVar2 + (int)unaff_RBP;
    if (*piVar2 < 0) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    if (SBORROW4((int)*unaff_RBP,*(int *)(param_2 + -0x80))) {
      puVar1 = (uint *)(CONCAT62((int6)(uVar5 >> 0x10),
                                 CONCAT11((byte)(uVar5 >> 8) & bVar4,(byte)uVar5)) + 0x13);
      *puVar1 = *puVar1 | (uint)param_2;
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    _DAT_d311b91059c986b0 = (int)*unaff_RBP - *(int *)(param_2 + -0x80);
    return;
  }
  *(double *)((longlong)unaff_RSI + 0x1395ba45) = (double)in_ST0;
  cVar6 = (char)unaff_RBX >> ((byte)uVar5 & 0x1f);
  bVar9 = (uVar5 & 0x1f) == 0;
  if ((bVar9 && (*unaff_RSI ^ 0x443e50cf) == 0 || !bVar9 && cVar6 == '\0') ||
      (bVar9 && (int)(*unaff_RSI ^ 0x443e50cf) < 0 || !bVar9 && cVar6 < '\0')) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  DAT_7e0d8b4c8cee5d23 = (char)_DAT_a11b993bf619de7e;
  if (uVar5 == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  pshufw(in_MM4,*(undefined8 *)(uVar7 - 0x484e8b7b),0xa6);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140007fe0(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  int *piVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined7 unaff_00000019;
  undefined1 *unaff_RDI;
  byte in_CF;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar5;
  undefined1 auStack_8 [8];
  
  uVar3 = in((short)param_2);
  *unaff_RDI = uVar3;
  uVar5 = (uint)(in_NT & 1) * 0x4000 | (uint)(in_OF & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
          (uint)(in_TF & 1) * 0x100 | (uint)(in_SF & 1) * 0x80 | (uint)(in_ZF & 1) * 0x40 |
          (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 | (uint)(in_CF & 1) |
          (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
          (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  bVar4 = unaff_RDI[0x31];
  piVar2 = (int *)(CONCAT71(unaff_00000019,0x5d) + -0x9b55311);
  *piVar2 = *piVar2 + (int)auStack_8;
  if (*piVar2 < 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (!SBORROW4(uVar5,*(int *)(param_2 + -0x80))) {
    _DAT_d311b91059c986b0 = uVar5 - *(int *)(param_2 + -0x80);
    return;
  }
  puVar1 = (uint *)(CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                             CONCAT11((byte)((ulonglong)param_1 >> 8) & bVar4,(char)param_1)) + 0x13
                   );
  *puVar1 = *puVar1 | (uint)param_2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400081c0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140008420(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0xb1);
  (*pcVar1)();
  _DAT_ea511a89 = _DAT_ea511a89 + -0x2f;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400085b0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140008620(void)

{
  func_0x00017292f89a();
  func_0x0001b95f1d57();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_140008690(void)

{
  return;
}



undefined1 FUN_140008780(void)

{
  code *pcVar1;
  undefined1 in_AL;
  int *piVar2;
  int unaff_EBX;
  byte in_CF;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (in_ZF || in_OF != in_SF) {
    pcVar1 = (code *)swi(0x2c);
    piVar2 = (int *)(*pcVar1)();
    *piVar2 = *piVar2 + unaff_EBX + (uint)in_CF;
    return DAT_4fd37e278e2f3884;
  }
  return in_AL;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140008870(byte param_1)

{
  undefined8 in_RAX;
  byte *unaff_RBX;
  undefined8 *unaff_RBP;
  byte *unaff_RDI;
  float10 in_ST0;
  
  *unaff_RBP = 0x69;
  out(0xdd,(int)in_RAX);
  unaff_RBP[-1] = in_RAX;
  *unaff_RBX = *unaff_RBX - param_1;
  in((short)((ulonglong)in_RAX >> 0x10) >> 0xf);
  if (!CARRY1(param_1,*unaff_RBX) && (byte)(param_1 + *unaff_RBX) != '\0') {
    *unaff_RDI = *unaff_RDI | (byte)((ulonglong)in_RAX >> 8);
    *(float *)(unaff_RDI + -0x38) = (float)in_ST0;
    DAT_1fa71eb8 = DAT_1fa71eb8 + '\x01';
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140008960(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 *in_RAX;
  
  LOCK();
  uVar1 = *in_RAX;
  *in_RAX = (char)in_RAX;
  UNLOCK();
  *(char *)(ulonglong)((uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar1) ^ 0x3b01a500) =
       (char)((ulonglong)param_2 >> 8);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x000140008a3c) overlaps instruction at (ram,0x000140008a3b)
// 
// WARNING: Removing unreachable block (ram,0x000140008a1d)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140008a50(longlong param_1,uint param_2)

{
  char cVar1;
  short in_AX;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RBP;
  undefined1 *unaff_RSI;
  undefined4 *unaff_RDI;
  byte in_CF;
  char in_AF;
  undefined1 in_ZF;
  undefined1 in_SF;
  undefined8 *puVar4;
  
  while( true ) {
    puVar3 = (undefined8 *)((longlong)register0x00000020 + -8);
    puVar4 = (undefined8 *)((longlong)register0x00000020 + -8);
    *(undefined8 **)((longlong)register0x00000020 + -8) = unaff_RBP;
    cVar1 = '\x1c';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar3 = puVar3 + -1;
      *puVar3 = *unaff_RBP;
      cVar1 = cVar1 + -1;
    } while ('\0' < cVar1);
    *(undefined1 **)((longlong)register0x00000020 + -0xf0) =
         (undefined1 *)((longlong)register0x00000020 + -8);
    if ((bool)in_SF) break;
    if (param_1 == 0) {
      *(undefined1 **)((longlong)register0x00000020 + -0xbc93) =
           (undefined1 *)((longlong)register0x00000020 + -0xbc8b);
      if (!(bool)in_ZF) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    out(*unaff_RSI,(short)param_2);
    uVar2 = param_2 << 1 | (uint)in_CF;
    unaff_RSI = (undefined1 *)
                (ulonglong)((((int)unaff_RSI + 1) - (int)in_AX) - (uint)((int)param_2 < 0));
    in_CF = uVar2 < _DAT_da6cb172;
    param_2 = uVar2 - _DAT_da6cb172;
    in_SF = (int)param_2 < 0;
    in_ZF = param_2 == 0;
    in_AX = CONCAT11(in_SF << 7 | in_ZF << 6 | in_AF << 4 |
                     ((POPCOUNT(param_2 & 0xff) & 1U) == 0) << 2 | 2U | in_CF,(char)in_AX);
    unaff_RDI = (undefined4 *)**(undefined8 **)((longlong)register0x00000020 + -0xbc8b);
    register0x00000020 =
         (BADSPACEBASE *)(*(undefined8 **)((longlong)register0x00000020 + -0xbc8b) + 1);
    unaff_RBP = puVar4;
  }
  *unaff_RDI = *(undefined4 *)(unaff_RSI + 4);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



undefined4 FUN_140008b40(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 in_RAX;
  undefined8 uVar4;
  undefined1 *unaff_RDI;
  char in_AF;
  
  uVar4 = CONCAT71((int7)((ulonglong)in_RAX >> 8),DAT_93af436e508638c9);
  *unaff_RDI = DAT_93af436e508638c9;
  *(ulonglong *)((ulonglong)*param_2 - 8) = CONCAT71((int7)((ulonglong)param_1 >> 8),0x2b);
  in(0xc5);
  uVar1 = (uint)((uint)uVar4 < 0x53c0854);
  uVar2 = -uVar1;
  uVar3 = CONCAT22((short)(uVar2 >> 0x10),
                   CONCAT11(((int)uVar2 < 0) << 7 | (uVar2 == 0) << 6 | in_AF << 4 |
                            ((POPCOUNT(uVar2 & 0xff) & 1U) == 0) << 2 | 2U | uVar1 != 0,(char)uVar2)
                  );
  out(CONCAT11((char)((ulonglong)param_2 >> 8),0x31),uVar3);
  return uVar3;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140008d20(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  char *unaff_RBX;
  char in_SF;
  char in_OF;
  ulonglong unaff_retaddr;
  int iStackX_8;
  
  if (param_1 == 1) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (in_OF != in_SF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  cVar2 = unaff_RBX[unaff_retaddr & 0xff];
  out(0x7f,0xf4a76a);
  *(int *)(unaff_RBX + 0x7c5a1fb) = *(int *)(unaff_RBX + 0x7c5a1fb) + iStackX_8;
  *unaff_RBX = *unaff_RBX + -1;
  pcVar1 = (code *)swi(1);
  (*pcVar1)(CONCAT71((int7)(unaff_retaddr >> 8),cVar2) & 0xffffffff,0);
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140008ec0(void)

{
  char *pcVar1;
  undefined7 in_register_00000001;
  undefined1 *unaff_RSI;
  
  pcVar1 = (char *)(CONCAT71(in_register_00000001,*unaff_RSI) + 0x27);
  *pcVar1 = *pcVar1 << 1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140008f30(void)

{
  byte in_CF;
  undefined1 auStack_8 [8];
  
  _DAT_13d11f941 = _DAT_13d11f941 + (int)auStack_8 + (uint)in_CF;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400090e0(undefined8 param_1,undefined2 param_2)

{
  in(param_2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400091c0(void)

{
  char in_SF;
  char in_OF;
  
  if (in_OF == in_SF) {
    func_0x000112389092();
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400091f0(void)

{
  bool in_ZF;
  
  if (in_ZF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140009240(byte *param_1)

{
  byte in_CF;
  
  *param_1 = *param_1 | in_CF >> 1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x0001400092a9)

void FUN_1400092d0(longlong param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar4;
  undefined8 in_RAX;
  uint unaff_EBP;
  short unaff_DI;
  byte in_CF;
  uint uVar3;
  
  puVar1 = (uint *)(param_1 + 0x6c7791a3);
  uVar2 = *puVar1;
  uVar3 = *puVar1;
  *puVar1 = (uVar3 - unaff_EBP) - (uint)in_CF;
  bVar4 = in(((short)param_2 - unaff_DI) -
             (ushort)(uVar2 < unaff_EBP || uVar3 - unaff_EBP < (uint)in_CF));
  if (param_1 == 0) {
    bRamffffffffffffffec = bRamffffffffffffffec & bVar4;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  out(0x7e,(int)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar4));
  return;
}



// WARNING: Control flow encountered bad instruction data

undefined4 FUN_1400093e0(longlong param_1,undefined4 param_2)

{
  undefined2 in_AX;
  undefined4 unaff_EBX;
  longlong unaff_RSI;
  
  if (param_1 == 1) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if ((char)param_1 <= *(char *)(param_1 + 0x73 + unaff_RSI * 2)) {
    return param_2;
  }
  *(undefined4 *)(param_1 + 6) = unaff_EBX;
  in(in_AX);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x0001400094fb) overlaps instruction at (ram,0x0001400094f8)
// 

void FUN_1400094c0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  byte *pbVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  uint uVar4;
  byte bVar6;
  code *pcVar7;
  longlong lVar8;
  uint uVar9;
  undefined4 uVar10;
  uint in_EAX;
  undefined1 uVar11;
  byte bVar12;
  undefined6 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  uint unaff_EBX;
  uint *puVar16;
  ulonglong uVar17;
  undefined8 unaff_RBP;
  uint uVar18;
  undefined4 *unaff_RSI;
  ulonglong unaff_RDI;
  byte bVar19;
  float10 in_ST1;
  uint uVar5;
  
  uVar14 = (undefined1)param_2;
  uVar15 = (undefined1)((ulonglong)param_2 >> 8);
  bVar12 = (byte)((ulonglong)param_1 >> 8);
  uVar13 = (undefined6)((ulonglong)param_1 >> 0x10);
  out(0xd3,(char)in_EAX);
  uVar9 = (int)unaff_RSI + 4;
  out(*unaff_RSI,(short)param_2);
  puVar16 = (uint *)(ulonglong)in_EAX;
  uVar4 = *puVar16;
  uVar5 = *puVar16;
  uVar18 = uVar9 + *puVar16;
  uVar11 = 0xd3;
  uVar17 = unaff_RDI & 0xffffffff;
  puVar3 = (undefined1 *)*param_3 + 1;
  plVar2 = (longlong *)((undefined1 *)(ulonglong)uVar18 + 1);
  *(undefined1 *)*param_3 = *(undefined1 *)(ulonglong)uVar18;
  if ((POPCOUNT(uVar18 & 0xff) & 1U) == 0) {
    if (CARRY4(uVar9,uVar4) || uVar18 == 0) {
      *(undefined8 *)(uVar17 - 8) = 0x140009558;
      func_0xf25a125d();
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  bVar19 = (unaff_EBX & 0x100) != 0;
  if ((unaff_EBX & 0x4000) != 0 || SCARRY4(uVar9,uVar5) != ((unaff_EBX & 0x8000) != 0)) {
    *(undefined8 *)(uVar17 - 8) = unaff_RBP;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  pcVar7 = (code *)swi(0xf1);
  uVar10 = (*pcVar7)();
  lVar8 = *(longlong *)(uVar17 + 8);
  *(undefined4 *)CONCAT62(uVar13,CONCAT11(bVar12,uVar11)) = uVar10;
  *(longlong *)(lVar8 + -8) = lVar8;
  bVar6 = (byte)uVar10 + 0x75;
  if ((byte)uVar10 < 0x8b && !CARRY1(bVar6,bVar19)) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if ((byte)(bVar6 + bVar19) == '\0') {
    *plVar2 = (longlong)ROUND(in_ST1);
    uVar14 = in(CONCAT11(uVar15,uVar14));
    *puVar3 = uVar14;
    pbVar1 = (byte *)(CONCAT62(uVar13,CONCAT11(bVar12,uVar11)) + -0x5dd5918b);
    *pbVar1 = *pbVar1 & bVar12;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  out((char)*plVar2,CONCAT11(uVar15,uVar14));
  *(undefined1 **)(lVar8 + -0x10) = puVar3;
  *(ulonglong *)(lVar8 + -0x18) = CONCAT62(uVar13,CONCAT11(bVar12,uVar11));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140009680(void)

{
  uint in_EAX;
  int *unaff_RDI;
  
  if (SBORROW4(in_EAX,*unaff_RDI) == ((in_EAX & 0x8000) != 0)) {
    DAT_dba5ec35d3308095 = (char)in_EAX;
    in(0x79);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400097b0(int param_1,int param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 in_RAX;
  undefined2 uVar3;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  undefined4 unaff_EDI;
  
  while( true ) {
    uVar2 = (ulonglong)in_RAX >> 8;
    puVar1 = *(undefined8 **)register0x00000020;
    unaff_BH = unaff_BH ^ (byte)param_1;
    uVar3 = (undefined2)param_2;
    out(uVar3,(char)unaff_EDI);
    if (!SBORROW4(param_1,param_2)) break;
    out(uVar3,unaff_EDI);
    *(undefined8 *)register0x00000020 = 0x58;
    *(undefined8 *)((longlong)register0x00000020 + -8) = 0x44;
    *(ulonglong *)((longlong)register0x00000020 + -0x10) =
         CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
    register0x00000020 = *(BADSPACEBASE **)((longlong)register0x00000020 + -0x10);
    in_RAX = *puVar1;
    out(*(undefined1 *)(puVar1 + 1),uVar3);
    unaff_EDI = (int)CONCAT71((int7)uVar2,(byte)param_1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_140009940(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400099d0(void)

{
  in(0x79);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140009a80(int param_1)

{
  int in_EAX;
  longlong unaff_RBX;
  
  in((short)(in_EAX - param_1 >> 0x1f));
  *(char *)(unaff_RBX + 0x7b) = *(char *)(unaff_RBX + 0x7b) >> ((byte)param_1 & 0x1f);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140009bf0(void)

{
  longlong unaff_RBX;
  uint unaff_EDI;
  
  *(uint *)(unaff_RBX + 0x4c) = *(uint *)(unaff_RBX + 0x4c) ^ unaff_EDI;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140009d80(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14000a060(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14000a110(void)

{
  undefined4 in_EAX;
  
  _DAT_3a230c8427873d96 = in_EAX;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14000a250(undefined8 param_1,undefined2 param_2)

{
  in(param_2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14000a400(void)

{
  bool in_CF;
  
  if (!in_CF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  in(0x83);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14000a540(void)

{
  char *pcVar1;
  uint unaff_EBX;
  uint unaff_EDI;
  
  if ((unaff_EBX | unaff_EDI) != 0) {
    pcVar1 = (char *)((ulonglong)(unaff_EBX | unaff_EDI) - 0x3d661092);
    *pcVar1 = *pcVar1 + 'S';
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14000a590(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14000a640(uint param_1)

{
  longlong unaff_RSI;
  
  *(uint *)(unaff_RSI + 0x23) = *(uint *)(unaff_RSI + 0x23) ^ param_1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14000a6d0(longlong param_1)

{
  undefined1 in_AL;
  uint unaff_EBP;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = in_AL;
  *(uint *)(param_1 + 0x4fb7dd7f) = *(uint *)(param_1 + 0x4fb7dd7f) | unaff_EBP;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14000a720(undefined8 param_1,undefined2 param_2)

{
  longlong in_RAX;
  char unaff_BH;
  undefined4 *unaff_RSI;
  bool in_CF;
  
  out(*unaff_RSI,param_2);
  do {
  } while (!in_CF);
  *(char *)(in_RAX + 0x3392a8a4) = (*(char *)(in_RAX + 0x3392a8a4) - unaff_BH) - in_CF;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14000a7c0(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  byte in_CF;
  bool bVar2;
  
  bVar1 = (byte)((ulonglong)param_2 >> 8);
  bVar2 = DAT_12fa2235f < bVar1;
  bVar1 = DAT_12fa2235f - bVar1;
  DAT_12fa2235f = bVar1 - in_CF;
  if ((bVar2 || bVar1 < in_CF) || DAT_12fa2235f == '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14000a910(void)

{
  char *in_R9;
  char unaff_R14B;
  char in_CF;
  
  *in_R9 = (*in_R9 - unaff_R14B) - in_CF;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14000a9a0(void)

{
  byte bVar1;
  char cVar2;
  byte in_AL;
  longlong unaff_RBX;
  undefined8 *puVar3;
  undefined8 *unaff_RBP;
  undefined8 uStack_10;
  
  DAT_1b2c20612 = DAT_1b2c20612 & 0x4b;
  puVar3 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar2 = '\x1d';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar3 = puVar3 + -1;
    *puVar3 = *unaff_RBP;
    cVar2 = cVar2 + -1;
  } while ('\0' < cVar2);
  bVar1 = *(byte *)(unaff_RBX + -0x2cd67283);
  *(byte *)(unaff_RBX + -0x2cd67283) = bVar1 << 6 | (byte)(CONCAT11(0x3c < in_AL,bVar1) >> 3);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14000aa50(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14000acd6(uint param_1,char *param_2)

{
  int iVar1;
  undefined8 in_RAX;
  longlong unaff_RBX;
  byte *unaff_RSI;
  byte *unaff_RDI;
  
  *param_2 = *param_2 >> ((byte)param_1 & 0x1f);
  _DAT_2bd1ba96 = in_RAX;
  *(uint *)(unaff_RBX + -0x51eed762) = *(uint *)(unaff_RBX + -0x51eed762) | param_1;
  iVar1 = 0x38124268 - (uint)(*unaff_RSI < *unaff_RDI);
  in((short)(iVar1 >> 0x1f));
  *(uint *)(unaff_RSI + 1) =
       *(int *)(unaff_RSI + 1) + 0x5a + (uint)(0x38124268 < (*unaff_RSI < *unaff_RDI));
  FUN_14000acd6(param_1,(char *)(ulonglong)(uint)(iVar1 >> 0x1f));
  return;
}



void FUN_14000acf0(uint param_1)

{
  uint in_EAX;
  int iVar1;
  byte *unaff_RSI;
  byte *unaff_RDI;
  
  iVar1 = (in_EAX + 0xa954ef76) - (uint)(*unaff_RSI < *unaff_RDI);
  in((short)(iVar1 >> 0x1f));
  *(uint *)(unaff_RSI + 1) =
       *(int *)(unaff_RSI + 1) + 0x5a +
       (uint)(in_EAX < 0x56ab108a || in_EAX + 0xa954ef76 < (uint)(*unaff_RSI < *unaff_RDI));
  FUN_14000acd6(param_1,(char *)(ulonglong)(uint)(iVar1 >> 0x1f));
  return;
}



void FUN_14000b3e0(void)

{
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_14000b830(void)

{
  int in_EAX;
  longlong unaff_RDI;
  byte in_CF;
  
  *(int *)(unaff_RDI + -0x73752747) = *(int *)(unaff_RDI + -0x73752747) + in_EAX + (uint)in_CF;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_14000ba30(undefined8 param_1,char param_2)

{
  code *pcVar1;
  undefined8 in_RAX;
  
  out(0xf8,(int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                         CONCAT11((char)((ulonglong)in_RAX >> 8) + param_2,(char)in_RAX)));
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



void FUN_14000bcc0(void)

{
  undefined8 *unaff_RBP;
  undefined8 unaff_RDI;
  bool in_CF;
  
  if (in_CF) {
    *unaff_RBP = unaff_RDI;
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x00014000bdeb) overlaps instruction at (ram,0x00014000bdea)
// 

void FUN_14000bde0(uint param_1,undefined2 param_2,longlong param_3)

{
  byte *pbVar1;
  undefined4 uVar2;
  uint uVar3;
  uint in_EAX;
  undefined4 *unaff_RBX;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  byte unaff_R14B;
  ulonglong unaff_retaddr;
  
  out(*unaff_RSI,param_2);
  *(byte *)(param_3 + -0x1f) = *(byte *)(param_3 + -0x1f) & unaff_R14B;
  if (0 < (int)(in_EAX ^ param_1)) {
    *unaff_RDI = unaff_RSI[1];
    pbVar1 = (byte *)((unaff_retaddr & 0xffffffff) - 2);
    *pbVar1 = *pbVar1 << 1 | (char)*pbVar1 < '\0';
    uVar3 = *(uint *)(unaff_RSI + 2);
    LOCK();
    uVar2 = *unaff_RBX;
    *unaff_RBX = (int)(unaff_RDI + 1);
    UNLOCK();
    out(param_2,uVar3 ^ 0x58d70704);
    *(undefined4 *)CONCAT44((int)((ulonglong)(unaff_RDI + 1) >> 0x20),uVar2) =
         *(undefined4 *)(unaff_RSI + 6);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14000be60(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



undefined4 FUN_14000c3e0(int *param_1,undefined2 param_2)

{
  uint in_EAX;
  undefined4 unaff_EBX;
  undefined4 *unaff_RSI;
  char in_ZF;
  float10 in_ST0;
  
  out(*unaff_RSI,param_2);
  *param_1 = (int)ROUND(in_ST0);
  if (param_1 != (int *)0x1 && in_ZF != '\0') {
    if ((in_EAX & 0x100) == 0) {
      fcos(in_ST0);
    }
    return unaff_EBX;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Control flow encountered bad instruction data

void FUN_14000c610(void)

{
  int *piVar1;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int unaff_ESI;
  byte in_CF;
  
  piVar1 = (int *)(unaff_RBP + 0x2ee82fa1 + unaff_RBX);
  *piVar1 = *piVar1 + unaff_ESI + (uint)in_CF;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x00014000c8cb) overlaps instruction at (ram,0x00014000c8c9)
// 
// WARNING: Removing unreachable block (ram,0x00014000c8cf)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_14000c840(undefined8 param_1,undefined2 param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  char cVar8;
  uint in_EAX;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar9;
  char cVar11;
  uint *unaff_RBX;
  int *piVar10;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  bool bVar12;
  
  bVar12 = false;
  *unaff_RBX = *unaff_RBX ^ 0x2f;
  if ((POPCOUNT(*unaff_RBX & 0xff) & 1U) == 0) {
    pcVar1 = (char *)((ulonglong)(in_EAX & 0xb5d2cd16) + 0x7a);
    cVar8 = *pcVar1;
    cVar11 = (char)((ulonglong)unaff_RBX >> 8);
    *pcVar1 = *pcVar1 - cVar11;
    if (*pcVar1 != '\0' && SBORROW1(cVar8,cVar11) == *pcVar1 < '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  uVar6 = in(0x15);
  lVar9 = CONCAT71((int7)((ulonglong)param_1 >> 8),0xb9);
  piVar10 = (int *)(ulonglong)uVar6;
  uVar7 = (ulonglong)unaff_RBX & 0xffffffff;
  iVar2 = *piVar10;
  *piVar10 = *piVar10 + 1;
  uVar6 = (uint)unaff_RBX;
  if (*piVar10 < 0) {
    lVar9 = lVar9 + -1;
    if (lVar9 == 0 || *piVar10 == 0) {
      *(undefined1 **)(unaff_RSI + -0x31703214) = &DAT_d90a5010;
      LOCK();
      *unaff_RDI = (char)(uVar7 >> 8);
      UNLOCK();
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    if (!SCARRY4(iVar2,1)) {
      uVar6 = uVar6 * 2;
      *unaff_RDI = *unaff_RSI;
      uVar5 = (undefined1)uVar6;
      if (lVar9 == 0) {
        *(uint *)(unaff_RDI + -1) = uVar6;
        DAT_36f338b5 = DAT_36f338b5 ^ 0x10;
        _DAT_902b6fbf280699a3 = uVar6;
        DAT_dd6b2ac5f7743341 = uVar5;
        unaff_RDI[-5] = uVar5;
        cVar8 = DAT_f4662698;
        LOCK();
        DAT_f4662698 = uVar5;
        UNLOCK();
        return (ulonglong)CONCAT31((int3)(uVar6 >> 8),cVar8 + 'U');
      }
      out(*(undefined4 *)(ulonglong)(uint)(*(int *)(unaff_RSI + -1) * -100),0x5010);
      out(0x5010,uVar5);
      return (ulonglong)uVar6;
    }
    cVar8 = (char)((uint)*(undefined4 *)(unaff_RDI + uVar7 * 8) >> 8);
  }
  else {
    uVar3 = (uint)(((ulonglong)unaff_RBX & 0x100) != 0);
    uVar4 = uVar6 + *(uint *)(uVar7 - 0x1019e0f4);
    bVar12 = CARRY4(uVar6,*(uint *)(uVar7 - 0x1019e0f4)) || CARRY4(uVar4,uVar3);
    cVar8 = (char)(uVar4 + uVar3 >> 8);
  }
  pcVar1 = (char *)(lVar9 + 0x463d62c + (longlong)unaff_RSI * 8);
  *pcVar1 = *pcVar1 + cVar8 + bVar12;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

ulonglong FUN_14000ca70(longlong param_1)

{
  undefined1 uVar1;
  char in_ZF;
  undefined1 auStackX_8 [32];
  
  if (param_1 == 1 || in_ZF != '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  uVar1 = in(0xd8);
  return CONCAT71((int7)((ulonglong)auStackX_8 >> 8),uVar1) & 0xffffffff;
}



// WARNING: Control flow encountered bad instruction data

void FUN_14000ced0(undefined8 param_1,undefined2 param_2)

{
  char in_SF;
  char in_OF;
  
  in(param_2);
  if (in_OF != in_SF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14000cf10(longlong param_1,char param_2)

{
  char in_CF;
  
  *(char *)(param_1 + -0x4602765d) = (*(char *)(param_1 + -0x4602765d) - param_2) - in_CF;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14000d1e0(longlong param_1)

{
  char cVar1;
  char unaff_BH;
  char in_CF;
  
  cVar1 = unaff_BH - *(char *)(param_1 + 0x414670cf);
  if (cVar1 != in_CF &&
      (SBORROW1(unaff_BH,*(char *)(param_1 + 0x414670cf)) != SBORROW1(cVar1,in_CF)) ==
      (char)(cVar1 - in_CF) < '\0') {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14000d2d0(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14000d3a0(undefined8 param_1,undefined8 param_2,byte param_3)

{
  byte bVar1;
  byte *in_RAX;
  longlong unaff_RDI;
  undefined1 in_CF;
  
  bVar1 = in_RAX[unaff_RDI * 2 + 0x15];
  in_RAX[unaff_RDI * 2 + 0x15] = bVar1 << 5 | (byte)(CONCAT11(in_CF,bVar1) >> 4);
  *in_RAX = *in_RAX | param_3;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14000d470(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  if (unaff_RSI[0x7df4e5c9] == (char)((ulonglong)param_2 >> 8)) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *unaff_RDI = *unaff_RSI;
  pcVar1 = (char *)(unaff_RBP * 9 + 0x11);
  *pcVar1 = *pcVar1 - (char)((ulonglong)param_1 >> 8);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14000d640(void)

{
  undefined1 in_AL;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = in_AL;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x00014000d6fa) overlaps instruction at (ram,0x00014000d6f9)
// 

void FUN_14000d710(longlong param_1,ulonglong param_2)

{
  char *pcVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  ulonglong in_RAX;
  undefined7 uVar5;
  undefined1 uVar6;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  undefined1 *puVar7;
  ulonglong unaff_RBP;
  uint *unaff_RSI;
  uint *puVar8;
  uint *unaff_RDI;
  undefined1 in_CF;
  byte in_PF;
  byte in_AF;
  bool bVar9;
  undefined1 in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  
  do {
    if (!(bool)in_ZF) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
LAB_14000d6f9:
    uVar6 = unaff_BL;
    puVar7 = (undefined1 *)register0x00000020;
    if (in_OF != in_SF) {
      do {
        uVar4 = (uint)in_RAX | 0xa3246d6c;
        in_RAX = (ulonglong)uVar4;
        *(ulonglong *)(puVar7 + -8) = param_2;
        if (uVar4 == 0) {
          in((short)param_2);
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
        cVar2 = *(char *)CONCAT71(unaff_00000019,uVar6);
        *(char *)CONCAT71(unaff_00000019,uVar6) =
             *(char *)CONCAT71(unaff_00000019,uVar6) + (char)param_1;
        bVar9 = *(char *)CONCAT71(unaff_00000019,uVar6) == '\0';
        unaff_BL = (undefined1)param_2;
        uVar5 = (undefined7)(param_2 >> 8);
        if (!bVar9 && SCARRY1(cVar2,(char)param_1) == *(char *)CONCAT71(unaff_00000019,uVar6) < '\0'
           ) {
          LOCK();
          uVar3 = *(undefined1 *)(in_RAX + 0x7f6e729c);
          *(undefined1 *)(in_RAX + 0x7f6e729c) = unaff_BL;
          param_2 = CONCAT71(uVar5,uVar3);
          UNLOCK();
          puVar7[unaff_RBP * 4 + -8] = puVar7[unaff_RBP * 4 + -8] ^ (byte)(uVar4 >> 8);
          goto code_r0x00014000d703;
        }
        out(0x84,uVar4);
        puVar8 = unaff_RDI;
        do {
          unaff_RDI = puVar8;
          if (param_1 == 0) break;
          param_1 = param_1 + -1;
          unaff_RDI = puVar8 + 1;
          bVar9 = uVar4 == *puVar8;
          puVar8 = unaff_RDI;
        } while (bVar9);
        if (!bVar9) {
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
        puVar8 = (uint *)(CONCAT71(unaff_00000019,uVar6) + -0x3ee69230);
        in_CF = false;
        in_OF = 0;
        *puVar8 = *puVar8 ^ (uint)param_2;
        in_SF = (int)*puVar8 < 0;
        in_ZF = *puVar8 == 0;
        in_PF = (POPCOUNT(*puVar8 & 0xff) & 1U) == 0;
        param_2 = CONCAT71(uVar5,0x3f);
        unaff_RBP = (ulonglong)*(uint *)(unaff_RBP - 0x5fd597f9);
        param_1 = param_1 + -1;
        if (param_1 != 0) goto LAB_14000d6f5;
        uVar6 = unaff_BL;
        puVar7 = puVar7 + -8;
        if ((int)*puVar8 < 1) {
          return;
        }
      } while( true );
    }
    *(ulonglong *)((longlong)register0x00000020 + -8) =
         (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_OF & 1) * 0x800 |
         (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
         (ulonglong)(in_SF & 1) * 0x80 | (ulonglong)(in_ZF & 1) * 0x40 |
         (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)(in_PF & 1) * 4 | (ulonglong)(in_CF & 1) |
         (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
         (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
    if ((bool)in_CF) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    if (!(bool)in_ZF && in_OF == in_SF) {
      *unaff_RDI = *unaff_RSI;
      if (*(char *)(in_RAX + 0x2d) < (char)param_2) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      if (!SBORROW1((char)param_2,*(char *)(in_RAX + 0x2d))) {
        in(0xd5);
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      *(char *)((in_RAX & 0xffffffff) + 0x14) = (char)(unaff_RBP >> 8);
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    in_RAX = in_RAX & 0xffffffffffffffac;
code_r0x00014000d703:
    in_CF = 0;
    *(char *)unaff_RDI = (char)*unaff_RSI;
    register0x00000020 = (BADSPACEBASE *)(param_2 & 0xffffffff);
    pcVar1 = (char *)(in_RAX - 0x66);
    in_OF = SCARRY1(*pcVar1,'\x01');
    *pcVar1 = *pcVar1 + '\x01';
    in_SF = *pcVar1 < '\0';
    in_ZF = *pcVar1 == '\0';
    in_PF = (POPCOUNT(*pcVar1) & 1U) == 0;
    in_IF = 0;
    unaff_BL = uVar6;
    unaff_RSI = (uint *)((longlong)unaff_RSI + 1);
    unaff_RDI = (uint *)((longlong)unaff_RDI + 1);
  } while( true );
LAB_14000d6f5:
  *(ulonglong *)(puVar7 + -0x10) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)in_SF * 0x80 | (ulonglong)(byte)in_ZF * 0x40 |
       (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)in_PF * 4 | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  in_RAX = (ulonglong)(puVar7 + -0x10) & 0xffffffff;
  register0x00000020 = (BADSPACEBASE *)(ulonglong)uVar4;
  goto LAB_14000d6f9;
}



// WARNING: Control flow encountered bad instruction data

void FUN_14000d8a0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14000d980(void)

{
  undefined1 unaff_BH;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = unaff_BH;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14000dbd0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


/*
Unable to decompile 'FUN_14000dd10'
Cause: 
Low-level Error: Overlapping input varnodes
*/


void FUN_14000df80(undefined8 param_1,undefined2 param_2)

{
  longlong unaff_RBP;
  
  in(param_2);
                    // WARNING: Could not recover jumptable at 0x00014000df83. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(ulonglong)*(uint *)(unaff_RBP + 0x7a))();
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_14000e0c0(longlong param_1)

{
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  bool in_PF;
  
  if (!in_PF) {
    for (; param_1 != 0; param_1 = param_1 + -1) {
      *unaff_RDI = *unaff_RSI;
      unaff_RSI = unaff_RSI + 1;
      unaff_RDI = unaff_RDI + 1;
    }
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14000e1c0(void)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  undefined8 uStack_10;
  
  puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\a';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14000e300(undefined8 param_1,undefined2 param_2,byte param_3,longlong param_4)

{
  char cVar1;
  char in_AL;
  byte bVar2;
  char in_AH;
  undefined6 in_register_00000002;
  char *unaff_RSI;
  char *unaff_RDI;
  longlong unaff_R12;
  bool bVar3;
  
  *unaff_RDI = in_AL;
  bVar2 = in_AL + 0xa1;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) - (char)param_2;
  bVar3 = param_3 < *(byte *)(param_4 + unaff_R12 * 8);
  if ((POPCOUNT(in_AL + 0x3aU + bVar3) & 1U) == 0) {
    unaff_RDI[1] = *unaff_RSI;
    unaff_RDI[0x7c72667d] = unaff_RDI[0x7c72667d] + in_AH;
  }
  else if (0x66 < bVar2 || CARRY1(in_AL + 0x3aU,bVar3)) {
    cVar1 = in(param_2);
    unaff_RDI[1] = cVar1;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_14000e440(undefined8 param_1,uint param_2)

{
  undefined4 in_EAX;
  uint uVar1;
  longlong unaff_RSI;
  
  uVar1 = param_2 ^ *(uint *)(unaff_RSI + 0x56b90110);
  out((short)uVar1,in_EAX);
  if (0 < (int)uVar1) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x00014000e5b7) overlaps instruction at (ram,0x00014000e5b6)
// 
// WARNING: This function may have set the stack pointer
// WARNING: Removing unreachable block (ram,0x00014000e5fb)
// WARNING: Removing unreachable block (ram,0x00014000e53d)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14000e500(undefined8 param_1,undefined8 param_2)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  undefined8 in_RAX;
  byte *unaff_RBX;
  uint uVar4;
  int *unaff_RSI;
  longlong unaff_RDI;
  
  puVar1 = (uint *)(unaff_RDI + -0x509df9d);
  *puVar1 = *puVar1 ^ (uint)unaff_RDI;
  cVar2 = in((short)param_2);
  if ((int)*puVar1 < 0) {
    return *unaff_RSI * 0xf;
  }
  uVar4 = (uint)unaff_RSI | _DAT_ccee3cc3;
  uVar3 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar2);
  if (uVar4 != 0) {
    out(0x6f,(int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                           CONCAT11((char)((ulonglong)in_RAX >> 8) + *(char *)((ulonglong)uVar4 + 1)
                                    ,cVar2 + *(char *)((ulonglong)uVar4 + 0x31) +
                                     (((uint)unaff_RDI + 1 >> (uVar3 & 0x1f) & 1) != 0))));
    in(0xda);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  in(0xaa);
  _DAT_64188545133d821 = uVar3;
  *unaff_RBX = *unaff_RBX & (byte)((ulonglong)param_2 >> 8);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x00014000e737) overlaps instruction at (ram,0x00014000e736)
// 
// WARNING: Removing unreachable block (ram,0x00014000e763)
// WARNING: Removing unreachable block (ram,0x00014000e77c)
// WARNING: Removing unreachable block (ram,0x00014000e7a4)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

short FUN_14000e720(byte param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined4 in_EAX;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined2 unaff_0000001a;
  short *unaff_RDI;
  byte in_CF;
  char in_SF;
  bool in_OF;
  float10 in_ST0;
  
  uVar1 = in(0xf3);
  if (!in_OF) {
    *(uint *)(param_2 + -0x35) =
         *(uint *)(param_2 + -0x35) & CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (in_SF == '\x01') {
    *unaff_RDI = (short)ROUND(in_ST0);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  return ((short)CONCAT31((int3)((uint)in_EAX >> 8),uVar1) + -0x3c92) - (ushort)in_CF;
}



// WARNING: Control flow encountered bad instruction data

void FUN_14000e7d0(undefined8 param_1,undefined2 param_2)

{
  in(param_2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x00014000e8c1) overlaps instruction at (ram,0x00014000e8bd)
// 

void FUN_14000e8a0(undefined8 param_1)

{
  longlong unaff_RBX;
  int *unaff_RDI;
  
  *unaff_RDI = -*unaff_RDI;
  if (DAT_e56177fb <= (char)((ulonglong)param_1 >> 8)) {
    *(uint *)(&stack0x0000006f + unaff_RBX) = *(uint *)(&stack0x0000006f + unaff_RBX) ^ 0xd7aca6bd;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



undefined1 FUN_14000ec00(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined1 *unaff_RSI;
  longlong in_R10;
  char in_CF;
  char unaff_retaddr;
  
  out(*unaff_RSI,param_2);
  uVar1 = unaff_RSI[1];
  *(char *)(in_R10 + -0x80) = (*(char *)(in_R10 + -0x80) - unaff_retaddr) - in_CF;
  return uVar1;
}



// WARNING: Control flow encountered bad instruction data

void FUN_14000ecd0(longlong param_1)

{
  byte *pbVar1;
  bool bVar2;
  byte bVar3;
  uint in_EAX;
  ulonglong unaff_RBX;
  longlong unaff_RDI;
  bool in_ZF;
  byte in_SF;
  byte in_OF;
  
  pbVar1 = (byte *)(unaff_RDI + -0xa9187e3);
  bVar3 = (byte)param_1 & 7;
  *pbVar1 = *pbVar1 >> bVar3 | *pbVar1 << 8 - bVar3;
  bVar2 = ((byte)param_1 & 0x1f) == 1;
  if (in_ZF || (byte)(!bVar2 & in_OF |
                     (bVar2 && (char)*pbVar1 < '\0' != (char)(*pbVar1 << 1) < '\0')) != in_SF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (param_1 == 1 || (unaff_RBX & 0x40) == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *(uint *)(unaff_RBX - 0x6a) = *(uint *)(unaff_RBX - 0x6a) & in_EAX;
  *(int *)(unaff_RBX + 0x333d3d3b) = *(int *)(unaff_RBX + 0x333d3d3b) + -1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_14000ee10(void)

{
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_14000ef80(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_14000f0c0(void)

{
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_14000f220(void)

{
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14000f2f0(byte param_1,undefined2 param_2)

{
  undefined4 in_EAX;
  longlong unaff_RBX;
  undefined1 *unaff_RSI;
  
  *(char *)(unaff_RBX + -0x116d7a1b) = *(char *)(unaff_RBX + -0x116d7a1b) << (param_1 & 0x1f);
  out(*unaff_RSI,param_2);
  out(param_2,in_EAX);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14000f480(void)

{
  undefined1 in_AL;
  longlong unaff_RBX;
  float10 in_ST0;
  
  out(0x83,in_AL);
  *(float *)(unaff_RBX + -0x65) = (float)in_ST0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



double FUN_14000f560(undefined8 param_1,double param_2)

{
  double in_XMM1_Qb;
  
  return param_2 + in_XMM1_Qb;
}



// WARNING: Control flow encountered bad instruction data

void FUN_14000f6f0(void)

{
  char *pcVar1;
  ulonglong uVar2;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  longlong unaff_RBP;
  
  uVar2 = (longlong)unaff_EBX * 0x31;
  if ((longlong)(int)uVar2 == uVar2) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  pcVar1 = (char *)(CONCAT44(unaff_0000001c,unaff_EBX) + -0x279cfe58);
  *pcVar1 = *pcVar1 << 1;
  if ((uVar2 & 0xffffffff) == 1) {
    *(undefined1 *)(unaff_RBP + -0x16) = *(undefined1 *)(unaff_RBP + -0x16);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14000f880(undefined1 *param_1)

{
  undefined1 in_AL;
  
  LOCK();
  *param_1 = (char)((ulonglong)param_1 >> 8);
  UNLOCK();
  DAT_993aab44c16f853d = in_AL;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14000fa80(int param_1)

{
  int unaff_EBX;
  int *unaff_RSI;
  byte in_CF;
  undefined1 auStack_18 [8];
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  *unaff_RSI = (*unaff_RSI - param_1) - (uint)in_CF;
  uStack_8 = 0xfffffffff88c60aa;
  if (!SCARRY4(unaff_EBX,(int)&uStack_8)) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (unaff_EBX + (int)&uStack_8 != 0) {
    uStack_10 = 0x14000fada;
    func_0xec023f7e();
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  rdpmc(param_1);
  out(0xfb,(char)auStack_18);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14000fc10(undefined8 param_1)

{
  byte bVar1;
  code *pcVar2;
  char in_AL;
  byte bVar3;
  byte in_CF;
  bool in_ZF;
  
  if (in_ZF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  bVar3 = (byte)((ulonglong)param_1 >> 8);
  bVar1 = bVar3 + 0x8f;
  if (bVar1 != in_CF) {
    DAT_3de43670 = (DAT_3de43670 - in_AL) - (bVar3 < 0x71 || bVar1 < in_CF);
    pcVar2 = (code *)swi(0x95);
    (*pcVar2)();
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14000fd50(void)

{
  undefined4 in_EAX;
  
  _DAT_c667eb0ce76081 = in_EAX;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x00014000ff33) overlaps instruction at (ram,0x00014000ff32)
// 

void FUN_14000ff30(longlong param_1,char *param_2)

{
  uint uVar1;
  ulonglong in_RAX;
  ulonglong *puVar2;
  char in_CF;
  
  while( true ) {
    uVar1 = (int)CONCAT71((int7)(in_RAX >> 8),(char)in_RAX + -0x22 + in_CF) + 0xfbf6d600;
    in_RAX = (ulonglong)uVar1 | 0x50;
    param_1 = param_1 + -1;
    if (param_1 == 0) break;
    *param_2 = *param_2 + (char)((ulonglong)param_1 >> 8);
    in_CF = '\0';
    *(uint *)((longlong)register0x00000020 + param_1) =
         *(uint *)((longlong)register0x00000020 + param_1) | (uint)in_RAX;
    puVar2 = (ulonglong *)((longlong)register0x00000020 + -8);
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
    *puVar2 = in_RAX;
  }
  *(undefined8 *)register0x00000020 = 0x4c;
  if (-1 < (char)((byte)uVar1 | 0x50)) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140010070(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  ulonglong unaff_R14;
  
  uVar3 = *(ulonglong *)(param_1 + -0x91ac234);
  *unaff_RDI = *unaff_RSI;
  puVar1 = (ulonglong *)(unaff_RBP + 0x578b4523);
  uVar4 = (ulonglong)(unaff_R14 < uVar3);
  uVar3 = *puVar1;
  uVar2 = *puVar1;
  *puVar1 = (uVar2 - 0x501dba70) - uVar4;
  DAT_18121a6f0 =
       (DAT_18121a6f0 - (char)((ulonglong)param_1 >> 8)) -
       (uVar3 < 0x501dba70 || uVar2 - 0x501dba70 < uVar4);
  in(0x40);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



undefined1 FUN_140010150(void)

{
  byte in_AL;
  longlong unaff_RBX;
  
  return *(undefined1 *)(unaff_RBX + (ulonglong)in_AL);
}



// WARNING: Control flow encountered bad instruction data

void FUN_140010420(uint *param_1)

{
  undefined4 *in_RAX;
  undefined4 unaff_EBP;
  uint unaff_retaddr;
  
  *in_RAX = unaff_EBP;
  *param_1 = *param_1 | unaff_retaddr;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400104f0(void)

{
  char in_AL;
  
  out(0x80,in_AL << 1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140010680(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x00014001070f) overlaps instruction at (ram,0x00014001070e)
// 
// WARNING: Removing unreachable block (ram,0x0001400106fe)
// WARNING: Removing unreachable block (ram,0x000140010700)
// WARNING: Removing unreachable block (ram,0x0001400106e3)
// WARNING: Removing unreachable block (ram,0x000140010701)
// WARNING: Removing unreachable block (ram,0x000140010743)
// WARNING: Removing unreachable block (ram,0x000140010703)
// WARNING: Removing unreachable block (ram,0x0001400106e7)
// WARNING: Removing unreachable block (ram,0x000140010702)
// WARNING: Removing unreachable block (ram,0x000140010751)
// WARNING: Removing unreachable block (ram,0x000140010753)
// WARNING: Removing unreachable block (ram,0x000140010755)
// WARNING: Removing unreachable block (ram,0x000140010709)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140010760(longlong param_1)

{
  uint *puVar1;
  undefined1 uVar2;
  ulonglong in_RAX;
  longlong lVar3;
  
  DAT_1897fd414 = DAT_1897fd414 >> 1;
  puVar1 = (uint *)((in_RAX | 0xc) - 0x50);
  *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
  if (-1 < (char)(DAT_1b9945250 - (char)(in_RAX >> 8))) {
    uVar2 = in(0x44);
    lVar3 = CONCAT71((int7)(in_RAX >> 8),uVar2);
    _DAT_7a9501cab3c3bf6b = (undefined4)lVar3;
    *(undefined4 *)(lVar3 + 0xa05fe43) = _DAT_7a9501cab3c3bf6b;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140010890(void)

{
  longlong unaff_RSI;
  
  *(char *)(unaff_RSI + 0x26) = *(char *)(unaff_RSI + 0x26) >> 1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400109d0(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  int in_EAX;
  char cVar2;
  byte bVar3;
  byte bVar4;
  undefined6 uVar5;
  byte bVar6;
  uint unaff_EBX;
  undefined1 *unaff_RSI;
  byte *unaff_RDI;
  longlong unaff_GS_OFFSET;
  
  cVar2 = (char)param_2;
  bVar3 = (byte)((ulonglong)param_2 >> 8);
  uVar5 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar6 = *unaff_RDI;
  bVar1 = bVar3 + *unaff_RDI;
  bVar4 = bVar1 + (*(uint *)(unaff_RDI + 0x1db1dd99) < unaff_EBX);
  out(*unaff_RSI,CONCAT11(bVar4,cVar2));
  bVar4 = bVar4 | *(byte *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 0x3a);
  *unaff_RDI = unaff_RSI[1];
  out(0xfa,(char)((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff));
  bVar6 = (char)unaff_EBX + (char)(unaff_RSI + 1) +
          (CARRY1(bVar3,bVar6) || CARRY1(bVar1,*(uint *)(unaff_RDI + 0x1db1dd99) < unaff_EBX)) ^
          *(byte *)(CONCAT62(uVar5,CONCAT11(bVar4,cVar2)) + 0x78d7b601);
  if ((POPCOUNT(bVar6) & 1U) == 0) {
    *(undefined8 *)
     ((ulonglong)
      (in_EAX + *(int *)(unaff_RDI + -0x12305669) +
      (uint)(0xf < (byte)((char)&stack0xfffffffffffffff8 - 0x1bU))) - 8) =
         *(undefined8 *)
          (unaff_GS_OFFSET +
          CONCAT62(uVar5,CONCAT11(bVar4,cVar2 - bVar6)) + -4 + (longlong)(unaff_RDI + 1) * 2);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (bVar6 == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *(int *)(unaff_RDI + 1) = (int)&stack0xfffffffffffffff8;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140010b00(longlong param_1)

{
  if (param_1 != 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140010d80(undefined8 param_1,uint *param_2)

{
  *param_2 = *param_2 >> 1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x000140010e70) overlaps instruction at (ram,0x000140010e6d)
// 
// WARNING: Removing unreachable block (ram,0x000140010e3a)
// WARNING: Removing unreachable block (ram,0x000140010e48)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140010e30(int *param_1,ulonglong param_2)

{
  int iVar1;
  int in_EAX;
  undefined1 unaff_BL;
  longlong unaff_RSI;
  byte in_CF;
  
  iVar1 = *param_1;
  LOCK();
  *(undefined1 *)(param_2 - 9) = unaff_BL;
  UNLOCK();
  if (in_EAX - iVar1 == (uint)in_CF) {
    do {
    } while( true );
  }
  *(char *)(param_2 + unaff_RSI * 8) = (char)((ulonglong)param_1 >> 8);
  _DAT_163639ee0 = 0x84ba166c;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140010f70(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  undefined8 unaff_RBX;
  
  puVar2 = (uint *)(param_1 * 2);
  *puVar2 = *puVar2 << 0x1e | *puVar2 >> 2;
  LOCK();
  uVar1 = *param_2;
  *param_2 = (int)&stack0x00000000;
  UNLOCK();
  *(undefined8 *)(CONCAT44((int)((ulonglong)&stack0x00000000 >> 0x20),uVar1) + -8) = unaff_RBX;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1400110b0(byte *param_1)

{
  byte in_AH;
  byte unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  
  *param_1 = *param_1 & in_AH;
  _DAT_b47f59d9 =
       CONCAT62(unaff_0000001a,
                CONCAT11(unaff_BH & param_1[-0xa80b09],unaff_BL & *(byte *)(unaff_RSI + 0x55)));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140011150(undefined4 param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  undefined1 in_AL;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RDI;
  
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x41);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(0x16,unaff_BL)) + -0x78);
  cVar2 = *pcVar1;
  *pcVar1 = *pcVar1 >> 4;
  *(int *)(unaff_RDI + 0x7f20d4e4) =
       (*(int *)(unaff_RDI + 0x7f20d4e4) -
       CONCAT31(CONCAT21((short)((uint)param_1 >> 0x10),(char)param_1),(char)((uint)param_1 >> 8)))
       - (uint)((cVar2 >> 3 & 1U) != 0);
  LOCK();
  (&stack0xffffffffb5fc2118)[CONCAT62(unaff_0000001a,CONCAT11(0x16,unaff_BL)) * 8] = 0x16;
  UNLOCK();
  out(0xa0,in_AL);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140011290(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400113d0(void)

{
  uint *puVar1;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  bool in_CF;
  bool in_ZF;
  
  if (in_CF || in_ZF) {
    puVar1 = (uint *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x38);
    *puVar1 = *puVar1 | (uint)&stack0x00000000;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x0001400114bb) overlaps instruction at (ram,0x0001400114b7)
// 

void FUN_140011470(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined2 uVar3;
  undefined3 uVar4;
  byte bVar5;
  undefined4 in_EAX;
  uint unaff_EBP;
  undefined1 *unaff_RSI;
  byte *unaff_RDI;
  bool in_CF;
  bool bVar6;
  char in_SF;
  char in_OF;
  float10 in_ST0;
  longlong unaff_retaddr;
  
  if (in_CF) {
    *(undefined4 *)unaff_RDI = in_EAX;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  uVar3 = (undefined2)param_2;
  out(*unaff_RSI,uVar3);
  if (in_OF != in_SF) {
    *(byte *)(param_2 + -0x797e8206) =
         *(byte *)(param_2 + -0x797e8206) & (byte)((ulonglong)unaff_retaddr >> 8);
    pcVar2 = (code *)swi(1);
    (*pcVar2)();
    return;
  }
  uVar4 = (undefined3)((ulonglong)param_2 >> 8);
  bVar5 = (byte)param_2 & (byte)unaff_retaddr;
  *(short *)(ulonglong)CONCAT31(uVar4,bVar5) = (short)ROUND(in_ST0);
  if (unaff_retaddr == 1) {
    out(unaff_RSI[1],uVar3);
    bVar6 = cRamfffffffffee80395 < '\0';
    out(uVar3,bVar5);
    *unaff_RDI = bVar5;
  }
  else {
    if (unaff_retaddr == 2) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    bVar6 = false;
    if ((char)bVar5 < '\0') {
      if ((POPCOUNT((unaff_EBP | 0xfd263e78) & 0xff) & 1U) != 0) {
        piVar1 = (int *)((ulonglong)CONCAT31(uVar4,DAT_b8f49656ed32fd50) - 0x2af5f87);
        *piVar1 = *piVar1 << 0x12;
        in(CONCAT11((char)((ulonglong)param_2 >> 8),0xec));
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      return;
    }
  }
  xbegin(0x11940a82d);
  if (bVar6) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400115b0(byte param_1,byte *param_2)

{
  undefined2 in_AX;
  longlong unaff_RSI;
  char in_CF;
  
  *(char *)(unaff_RSI + -0x25) = (*(char *)(unaff_RSI + -0x25) - (char)((ushort)in_AX >> 8)) - in_CF
  ;
  *param_2 = *param_2 ^ param_1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1400116f0(byte param_1,undefined1 param_2)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  char unaff_BL;
  byte in_SF;
  
  bVar2 = param_1 & 0x1f;
  if ((bool)(bVar2 == 0 & in_SF | (bVar2 != 0 && (char)(unaff_BL << bVar2) < '\0'))) {
    pcVar1 = (code *)swi(2);
    (*pcVar1)();
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  in(CONCAT11(0x2e,param_2));
  func_0xd6c704af();
  cVar3 = in(0xc9);
  _DAT_d97ef2d6b0626f30 = func_0xd7bd2fd5(param_1 - (cVar3 + -0x61));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140011790(undefined8 param_1,undefined2 param_2)

{
  undefined4 in_EAX;
  
  out(param_2,in_EAX);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400118d0(void)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  undefined8 uStack_10;
  
  puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\x16';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140011a10(byte param_1,undefined2 param_2)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  int *unaff_RSI;
  uint unaff_EDI;
  undefined4 unaff_0000003c;
  bool in_ZF;
  char in_SF;
  char in_OF;
  float10 in_ST0;
  float10 fVar4;
  
  fVar4 = in_ST0 / (float10)*(double *)
                             (CONCAT71(in_register_00000001,in_AL) + -0x4029bdf6 +
                             (longlong)unaff_RSI * 8);
  if (!in_ZF && in_OF == in_SF) {
    *unaff_RSI = *unaff_RSI >> (param_1 & 0x1f);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  func_0x0001326ef4ff();
  in(param_2);
  iVar2 = *(int *)(CONCAT44(unaff_0000003c,unaff_EDI) + 0x4f1b9fff);
  puVar1 = (uint *)(CONCAT44(unaff_0000003c,unaff_EDI) + 0x1a37b4df);
  *puVar1 = *puVar1 & unaff_EDI;
  if ((int)*puVar1 < 0) {
    pcVar3 = (code *)swi(0x20);
    (*pcVar3)();
    *(int *)((ulonglong)(uint)((int)unaff_RSI + iVar2) + 0x6e97e90e) = (int)fVar4;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (*puVar1 == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140011d20(longlong param_1,undefined1 param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  byte bVar3;
  undefined8 in_RAX;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  LOCK();
  uVar1 = *(undefined1 *)(param_1 + 0x35);
  *(undefined1 *)(param_1 + 0x35) = param_2;
  UNLOCK();
  bVar3 = (byte)in_RAX;
  if (0x66 < bVar3 && (byte)(bVar3 + 0x99) != '\0') {
    *unaff_RDI = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar3 + 0x99);
    unaff_RDI[1] = *unaff_RSI;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (param_1 + -1 == 0 || bVar3 == 0xa2) {
    *(undefined1 *)unaff_RDI = *(undefined1 *)unaff_RSI;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)(param_1 + -1,uVar1);
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140011e60(undefined8 *param_1,longlong param_2)

{
  char *pcVar1;
  undefined8 **ppuVar2;
  byte *pbVar3;
  char cVar4;
  int *piVar6;
  undefined8 uVar7;
  byte bVar8;
  undefined4 unaff_EBP;
  undefined4 unaff_0000002c;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  undefined8 *local_8;
  char cVar5;
  
  piVar6 = unaff_RDI + 1;
  *unaff_RDI = *unaff_RSI;
  local_8 = (undefined8 *)0x140011e75;
  uVar7 = func_0x00017e329a0a();
  local_8 = param_1;
  out((short)param_2,(int)uVar7);
  *(char *)(unaff_RSI + -0x11) = *(char *)(unaff_RSI + -0x11) + (char)((ulonglong)param_1 >> 8);
  *(char *)((longlong)unaff_RDI + 0xd3715b6) =
       *(char *)((longlong)unaff_RDI + 0xd3715b6) - (char)param_1;
  ppuVar2 = &local_8 + param_2;
  cVar4 = *(char *)ppuVar2;
  *(char *)ppuVar2 = *(char *)ppuVar2 + '\x01';
  cVar5 = *(char *)ppuVar2;
  if (cVar5 == '\0' || SCARRY1(cVar4,'\x01') != *(char *)ppuVar2 < '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (*(char *)ppuVar2 >= '\0') {
    _DAT_389501861879157b = (int)((ulonglong)uVar7 >> 8) << 8;
    pcVar1 = (char *)((ulonglong)(uint)(*piVar6 * -0x75ce18e5) + 0x69);
    *pcVar1 = *pcVar1 << 4;
    piVar6 = (int *)*local_8;
    pbVar3 = (byte *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x67);
    *pbVar3 = *pbVar3 | (byte)piVar6;
    *piVar6 = *piVar6 + (int)piVar6;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  bVar8 = (byte)((ulonglong)param_2 >> 8);
  if ((POPCOUNT(*(char *)ppuVar2) & 1U) == 0) {
    pbVar3 = (byte *)(((ulonglong)(unaff_RSI + 1) & 0xffffffff) - 0x68d6166d);
    *pbVar3 = *pbVar3 ^ bVar8;
    return;
  }
  LOCK();
  *(byte *)((longlong)unaff_RDI + 0x31) = bVar8;
  UNLOCK();
  if (cVar5 != '\0') {
    *piVar6 = *piVar6 - (int)piVar6;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_140011f10(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140012050(void)

{
  char in_AL;
  char in_CF;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (!in_ZF && in_OF == in_SF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if ((SBORROW1(in_AL,-0x66) != SBORROW1(in_AL + 'f',in_CF)) == (char)((in_AL + 'f') - in_CF) < '\0'
     ) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140012210(undefined1 *param_1,ulonglong param_2)

{
  byte bVar1;
  byte in_AL;
  undefined1 uVar3;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  undefined1 *unaff_RSI;
  byte *unaff_RDI;
  byte bVar2;
  
  out(*unaff_RSI,(short)param_2);
  bVar1 = *unaff_RDI;
  bVar2 = *unaff_RDI;
  *param_1 = unaff_BL;
  if (in_AL < bVar1 || in_AL == bVar2) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *(undefined1 *)(CONCAT71(unaff_00000019,unaff_BL) + -0x2b) = 0;
  uVar3 = in(0x1d);
  if (!SBORROW1((char)(param_2 & 0xffffffff),-0x1e)) {
    _DAT_f31303803267d037 = (undefined4)CONCAT71((int7)((param_2 & 0xffffffff) >> 8),uVar3);
    LOCK();
    unaff_RDI[1] = (byte)((ulonglong)param_1 >> 8);
    UNLOCK();
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140012350(byte param_1)

{
  char *pcVar1;
  byte *pbVar2;
  undefined1 uVar3;
  code *pcVar4;
  uint uVar5;
  byte bVar6;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  byte in_OF;
  
  bVar6 = 0xe6;
  pcVar1 = (char *)(unaff_RSI + -0x1e);
  *pcVar1 = '\0';
  if (*pcVar1 == '\0' || (bool)(in_OF & 1) != *pcVar1 < '\0') {
    uVar3 = in(0xbe6);
    *unaff_RDI = uVar3;
    in(0xbe6);
    pbVar2 = (byte *)(unaff_RBP + 0x4dbcfd0a);
    *pbVar2 = *pbVar2 >> (param_1 & 7) | *pbVar2 << 8 - (param_1 & 7);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  pcVar4 = (code *)swi(0xa0);
  uVar5 = (*pcVar4)();
  DAT_88f371c1 = (undefined1)uVar5;
  pbVar2 = (byte *)((ulonglong)(uVar5 ^ *(uint *)(unaff_RSI + -0x1fa1f1ba)) + 1);
  *(longlong *)(unaff_RSI + 0xf75a7d6) =
       (longlong)(pbVar2 + (ulonglong)(*pbVar2 < bVar6) + *(longlong *)(unaff_RSI + 0xf75a7d6));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



undefined4 FUN_140012490(void)

{
  undefined4 unaff_EBP;
  bool in_SF;
  
  do {
  } while (in_SF);
  return unaff_EBP;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140012510(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140012650(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined1 *unaff_RDI;
  
  uVar2 = in(0x7e);
  uVar3 = CONCAT11((char)((ushort)param_2 >> 8),(byte)param_2 | unaff_RDI[0x4c]);
  *unaff_RDI = (char)uVar2;
  uVar1 = func_0x00016dadb7c0(param_1,uVar3);
  out(uVar3,uVar1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140012790(void)

{
  char unaff_BL;
  char *unaff_RSI;
  char *unaff_RDI;
  
  unaff_RSI[0x21] = unaff_RSI[0x21] + unaff_BL;
  if (!SBORROW1(*unaff_RSI,*unaff_RDI)) {
    return;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140012810(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined1 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void thunk_EXT_FUN_172815c2a(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x000140012a8e)

uint FUN_140012a70(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  char cVar3;
  uint uVar4;
  undefined8 in_RAX;
  byte bVar5;
  undefined2 uVar6;
  uint unaff_EBX;
  uint uVar7;
  ulonglong uVar8;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  byte *unaff_RDI;
  byte in_CF;
  char in_AF;
  
  uVar6 = (undefined2)(uint)param_2;
  uVar4 = unaff_EBX - *(int *)CONCAT44(unaff_00000034,unaff_ESI);
  uVar7 = uVar4 - in_CF;
  uVar8 = CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                   CONCAT11(((int)uVar7 < 0) << 7 | (uVar7 == 0) << 6 | in_AF << 4 |
                            ((POPCOUNT(uVar7 & 0xff) & 1U) == 0) << 2 | 2U |
                            (unaff_EBX < *(uint *)CONCAT44(unaff_00000034,unaff_ESI) ||
                            uVar4 < in_CF),(char)in_RAX)) & 0xffffffff;
  puVar1 = (uint *)(longlong)
                   (CONCAT31((int3)(uVar7 >> 8),(char)uVar7 + *unaff_RDI) * 8 + 0x73a2ff7f);
  *puVar1 = *puVar1 | (uint)param_2;
  if (param_1 + -1 == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  cVar3 = *(char *)CONCAT44(unaff_00000034,unaff_ESI);
  *(char *)CONCAT44(unaff_00000034,unaff_ESI) = *(char *)CONCAT44(unaff_00000034,unaff_ESI) >> 8;
  bVar5 = (byte)((ulonglong)(param_1 + -1) >> 8);
  if (!CARRY1(bVar5,*unaff_RDI) && !CARRY1(bVar5 + *unaff_RDI,(cVar3 >> 7 & 1U) != 0)) {
    out(uVar6,0);
    out(uVar6,0);
    LOCK();
    bVar5 = unaff_RDI[0x7a9299a1];
    unaff_RDI[0x7a9299a1] = 0;
    UNLOCK();
    uVar4 = (uint)CONCAT71((int7)(((ulonglong)&stack0x00000000 & 0xffffffff) >> 8),bVar5);
    if ((int)(uVar4 - *(int *)unaff_RDI) < 0) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    return uVar4 ^ 0x44ae9924;
  }
  *(ulonglong *)(uVar8 - 8) = uVar8;
  out(uVar6,0);
  puVar2 = (undefined1 *)(((ulonglong)&stack0x00000000 & 0xffffffff) - 0x49);
  *puVar2 = *puVar2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140012c20(undefined8 param_1)

{
  char *pcVar1;
  byte *in_RAX;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  float10 in_ST0;
  undefined1 auStackX_10 [24];
  
  if (CONCAT71((int7)((ulonglong)param_1 >> 8),(byte)param_1 | *in_RAX) == 1 ||
      ((ulonglong)in_RAX & 0x30) != 0) {
    *(short *)(((ulonglong)auStackX_10 & 0xffffffff) + 0x42) = (short)ROUND(in_ST0);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x2e210f1c);
  *pcVar1 = (*pcVar1 - unaff_BH) - (((uint)in_RAX & 0xffffff30) < 0xf66ea0ac);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140012c60(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140012d30(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_140012e10(void)

{
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: This function may have set the stack pointer
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140012e60(undefined8 param_1,char *param_2)

{
  char cVar1;
  code *pcVar2;
  uint in_EAX;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *unaff_RBP;
  longlong unaff_RSI;
  uint *puVar6;
  uint *puVar7;
  longlong unaff_RDI;
  
  uVar4 = unaff_RSI + 1U & 0xffffffff;
  puVar6 = (uint *)(ulonglong)in_EAX;
  *(int *)(uVar4 - 0x5882842a) = (int)(int *)(unaff_RDI + 1);
  *param_2 = *param_2 + (char)uVar4;
  uVar4 = (ulonglong)(uint)(*(int *)((longlong)unaff_RBP + 0x77b622e2) * -0x34190c26);
  if (uVar4 != 0) {
    return;
  }
  _DAT_fd2b99be = (undefined8 *)0x140012ed3;
  uVar3 = func_0x00011aa471a2();
  puVar7 = puVar6;
  if (uVar4 == 1 || (byte)((byte)((uint)uVar3 >> 8) & (byte)uVar3) != 0) {
    puVar7 = puVar6 + 1;
    if (SBORROW4(*puVar6,*(int *)(unaff_RDI + 1))) {
      *(undefined4 *)(unaff_RDI + 5) = uVar3;
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
  }
  puVar5 = (undefined8 *)&DAT_fd2b99be;
  cVar1 = '\f';
  _DAT_fd2b99be = unaff_RBP;
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar5 = puVar5 + -1;
    *puVar5 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  puRam00000000fd2b9956 = &DAT_fd2b99be;
  if (*puVar7 < 0x2d46642) {
    in((short)param_2);
    pcRam00000000fd2b20a2 = param_2;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  pcVar2 = (code *)swi(200);
  DAT_13c883a50 = (byte)uVar3;
  (*pcVar2)();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: This function may have set the stack pointer
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140012f30(char *param_1,longlong param_2)

{
  undefined4 uVar1;
  char cVar2;
  code *pcVar3;
  uint in_EAX;
  uint uVar4;
  undefined2 *unaff_RBX;
  undefined8 *puVar5;
  undefined8 *unaff_RBP;
  undefined4 *unaff_RSI;
  uint *unaff_RDI;
  undefined2 in_FS;
  
  *unaff_RBX = in_FS;
  uVar4 = in((short)param_2);
  *param_1 = (*param_1 - (char)param_1) -
             (0xaeea5dc8 < uVar4 ||
             CARRY4(uVar4 + 0x5115a237,
                    (uint)((uint)unaff_RBX < *(uint *)(param_2 + 0x2d) ||
                          (uint)unaff_RBX - *(uint *)(param_2 + 0x2d) < (uint)(in_EAX < *unaff_RDI))
                   ));
  uVar1 = *unaff_RSI;
  puVar5 = (undefined8 *)&DAT_4d5ec3d2;
  cVar2 = '\f';
  _DAT_4d5ec3d2 = unaff_RBP;
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar5 = puVar5 + -1;
    *puVar5 = *unaff_RBP;
    cVar2 = cVar2 + -1;
  } while ('\0' < cVar2);
  _DAT_4d5ec36a = &DAT_4d5ec3d2;
  if ((uint)unaff_RSI[1] < 0xb2a13c2e) {
    in((short)param_2);
    _DAT_4d5e4ab6 = param_2;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  DAT_13c883a50 = (undefined1)uVar1;
  pcVar3 = (code *)swi(200);
  (*pcVar3)();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140013010(void)

{
  undefined4 in_EAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  char unaff_R15B;
  
  *(undefined1 *)(unaff_RBX + 0x3045fdaa) = 0xfc;
  _DAT_2c6c7b0cc50533a9 = in_EAX;
  *(char *)(unaff_RBP + 0xd) = *(char *)(unaff_RBP + 0xd) - unaff_R15B;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x00014001312b) overlaps instruction at (ram,0x000140013129)
// 
// WARNING: Removing unreachable block (ram,0x000140013129)
// WARNING: Removing unreachable block (ram,0x00014001312e)
// WARNING: Removing unreachable block (ram,0x00014001311c)

void FUN_1400130b0(int *param_1,longlong param_2)

{
  uint *puVar1;
  byte *pbVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  byte bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 uVar9;
  undefined8 in_RAX;
  uint uVar10;
  byte bVar12;
  ulonglong uVar11;
  byte unaff_BL;
  char unaff_BH;
  char cVar13;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  uint unaff_EBP;
  int unaff_ESI;
  longlong unaff_RDI;
  bool bVar14;
  byte in_CF;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  
  uVar10 = unaff_EBP - CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  cVar13 = unaff_BH + (char)param_2 +
           (unaff_EBP < CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) || uVar10 < in_CF);
  uVar9 = in(0xba);
  if ((POPCOUNT((int)param_2 - *(int *)(unaff_RDI + 0x43 + (longlong)param_1 * 2) & 0xff) & 1U) == 0
     ) {
    pbVar2 = (byte *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                               CONCAT11((byte)((ulonglong)param_2 >> 8) &
                                        (byte)((ulonglong)in_RAX >> 8),(char)param_2)) + 0x7d);
    *pbVar2 = *pbVar2 & unaff_BL;
    *(undefined1 *)((ulonglong)(uVar10 - in_CF) - 0x55) = 0xcb;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  iVar5 = *param_1;
  uVar7 = param_2 << 0x20 | CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar9) & 0xffffffff | 0xd0;
  uVar8 = (longlong)uVar7 % (longlong)iVar5;
  uVar11 = uVar8 & 0xffffffff;
  bVar12 = (byte)(uVar11 >> 8);
  uVar10 = (uint)CONCAT62((int6)(uVar11 >> 0x10),
                          CONCAT11(bVar12 + *(byte *)(uVar11 + 0x2ddcda7a),(char)uVar11));
  if (CARRY1(bVar12,*(byte *)(uVar11 + 0x2ddcda7a))) {
    puVar1 = (uint *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(cVar13,unaff_BL))) +
                     0x78);
    *puVar1 = *puVar1 | uVar10;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *(int *)(((ulonglong)&stack0x00000000 & 0xffffffff) - 0x41) = (int)&stack0x00000000;
  bVar14 = (byte)((ulonglong)param_1 >> 8) < (byte)((ulonglong)&stack0x00000000 >> 8);
  bVar12 = *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(cVar13,unaff_BL)));
  cVar4 = *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(cVar13,unaff_BL)));
  bVar6 = *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(cVar13,unaff_BL))) +
          0x3f;
  *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(cVar13,unaff_BL))) =
       bVar6 + bVar14;
  *(ulonglong *)(((longlong)uVar7 / (longlong)iVar5 & 0xffffffffU) - 8) =
       (ulonglong)(in_NT & 1) * 0x4000 |
       (ulonglong)(SCARRY1(cVar4,'?') != SCARRY1(bVar6,bVar14)) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)
       (*(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(cVar13,unaff_BL))) < '\0')
       * 0x80 | (ulonglong)
                (*(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(cVar13,unaff_BL))
                                  ) == '\0') * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
       (ulonglong)
       ((POPCOUNT(*(undefined1 *)
                   CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(cVar13,unaff_BL)))) & 1U
        ) == 0) * 4 | (ulonglong)(0xc0 < bVar12 || CARRY1(bVar6,bVar14)) |
       (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
       (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  piVar3 = (int *)((ulonglong)(uint)(unaff_ESI + (int)uVar8) - 0x647040f2);
  *piVar3 = *piVar3 + uVar10;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140013180(void)

{
  code *pcVar1;
  bool in_OF;
  
  in(0x2e);
  if (in_OF) {
    pcVar1 = (code *)swi(1);
    (*pcVar1)();
    return;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_140013260(void)

{
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140013300(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x000140013416)
// WARNING: Removing unreachable block (ram,0x000140013428)
// WARNING: Removing unreachable block (ram,0x00014001342d)
// WARNING: Removing unreachable block (ram,0x000140013470)
// WARNING: Removing unreachable block (ram,0x0001400133b4)

void FUN_1400133d0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400134b0(longlong param_1,undefined8 param_2)

{
  undefined4 in_EAX;
  undefined4 unaff_ESP;
  longlong unaff_RBP;
  
  *(undefined4 *)(unaff_RBP + 0x536cf1c2) = unaff_ESP;
  out(0xe5,in_EAX);
  if (param_1 == 1 || (byte)((byte)((ulonglong)param_2 >> 8) & (byte)((uint)in_EAX >> 8)) == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140013550(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140013620(undefined8 param_1,uint param_2)

{
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  byte in_CF;
  
  *(ulonglong *)
   ((ulonglong)
    (((int)&stack0x00000000 - unaff_EBP) -
    (uint)(param_2 < unaff_EBP || param_2 - unaff_EBP < (uint)in_CF)) - 8) =
       CONCAT44(unaff_0000002c,unaff_EBP);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140013700(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_140013870(int param_1,undefined2 param_2)

{
  undefined4 uVar1;
  longlong unaff_RBP;
  undefined4 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  *(int *)(unaff_RBP + 0x37) = *(int *)(unaff_RBP + 0x37) - param_1;
  return _DAT_a8e0ec1c3932b38d;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140013950(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400139f0(void)

{
  char in_SF;
  char in_OF;
  
  if (in_OF != in_SF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

undefined8 FUN_140013ac0(undefined8 param_1,uint param_2)

{
  uint uVar1;
  undefined1 in_AL;
  uint *unaff_RDI;
  byte in_CF;
  uint uVar2;
  
  uVar1 = *unaff_RDI;
  uVar2 = *unaff_RDI;
  *unaff_RDI = (uVar2 - param_2) - (uint)in_CF;
  if ((uVar1 < param_2 || uVar2 - param_2 < (uint)in_CF) || *unaff_RDI == 0) {
    out((short)param_2,in_AL);
    in((short)param_2);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if ((POPCOUNT(*unaff_RDI & 0xff) & 1U) == 0) {
    return 0x83fd3e37;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140013ba0(void)

{
  char cVar1;
  undefined4 in_EAX;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  undefined8 uStack_10;
  
  out((short)((int)in_EAX >> 0x1f),(char)in_EAX);
  puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\x05';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x000140013c44) overlaps instruction at (ram,0x000140013c43)
// 
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140013c40(undefined8 param_1,uint *param_2)

{
  byte *pbVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  byte bVar5;
  char cVar7;
  undefined4 uVar6;
  longlong lVar8;
  ulonglong uVar9;
  undefined2 uVar11;
  char cVar12;
  undefined8 unaff_RBX;
  longlong *plVar14;
  longlong *unaff_RBP;
  undefined4 *unaff_RSI;
  undefined8 uVar15;
  char in_CF;
  bool in_OF;
  undefined6 uVar10;
  longlong lVar13;
  
  if (in_OF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  uVar11 = SUB82(param_2,0);
  uVar6 = in(uVar11);
  cVar7 = (char)((uint)uVar6 >> 8);
  cVar4 = (char)unaff_RBX - cVar7;
  cVar12 = cVar4 - in_CF;
  lVar13 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar12);
  uVar10 = (undefined6)((ulonglong)param_1 >> 0x10);
  lVar8 = CONCAT62(uVar10,CONCAT11(0xb5,(char)param_1));
  bVar5 = (byte)uVar6;
  if (cVar12 == '\0' || (SBORROW1((char)unaff_RBX,cVar7) != SBORROW1(cVar4,in_CF)) != cVar12 < '\0')
  {
    if (lVar8 == 1) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    pbVar1 = (byte *)(lVar13 + 0x2f);
    *pbVar1 = *pbVar1 ^ bVar5;
    LOCK();
    *(byte *)(unaff_RSI + -0x1f) = bVar5;
    UNLOCK();
    out(*(undefined1 *)unaff_RSI,uVar11);
    piVar2 = (int *)((ulonglong)CONCAT31((int3)((uint)uVar6 >> 8),uRam43321d156c26d67f) + 0x59791e06
                    );
    *piVar2 = *piVar2 + (int)lVar13;
    if (lVar8 != 1) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  uVar15 = 0x362696a1;
  *param_2 = *param_2 | 0x362696a1;
  uVar9 = CONCAT62(uVar10,CONCAT11(DAT_133613bdf,(char)param_1)) ^ 0xb500;
  do {
    puVar3 = unaff_RSI + 1;
    out(*unaff_RSI,uVar11);
    plVar14 = unaff_RBP;
    while( true ) {
      unaff_RBP = (longlong *)*plVar14;
      LOCK();
      *(int *)(uVar9 + 0x1ba67a2f) = (int)uVar15;
      UNLOCK();
      if ('n' < (char)bVar5) {
        LOCK();
        *(undefined4 *)((longlong)unaff_RBP + 0x71a86a26) = 0xde9d2f95;
        UNLOCK();
        halt_baddata();
      }
      uVar9 = uVar9 - 1;
      if (uVar9 == 0 || bVar5 != 0x6f) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      uVar15 = plVar14[1];
      unaff_RSI = puVar3;
      if (!SBORROW1(bVar5,'o')) break;
      plVar14 = unaff_RBP;
      if (bVar5 < 0x70) {
        return;
      }
    }
  } while( true );
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x000140013d4a)
// WARNING: Removing unreachable block (ram,0x000140013d4e)
// WARNING: Removing unreachable block (ram,0x000140013d9d)

void FUN_140013d10(longlong param_1)

{
  code *pcVar1;
  undefined8 in_RAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  
  if ((POPCOUNT((byte)in_RAX | 0xa8) & 1U) == 0) {
    *(char *)(unaff_RBP + 0x4a483e76) =
         *(char *)(unaff_RBP + 0x4a483e76) + (char)((ulonglong)in_RAX >> 8);
    LOCK();
    *(undefined4 *)(unaff_RBX + 0x6474c6cb) = unaff_ESI;
    UNLOCK();
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140013e50(char *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_EAX;
  undefined4 unaff_EBX;
  undefined1 *unaff_RDI;
  
  LOCK();
  uVar3 = *(undefined4 *)(param_2 + -0x311aa1fc);
  *(undefined4 *)(param_2 + -0x311aa1fc) = unaff_EBX;
  UNLOCK();
  if (param_1 + -1 == (char *)0x0 || (char)uVar3 != *param_1) {
    *unaff_RDI = (char)in_EAX;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  piVar1 = (int *)((ulonglong)(in_EAX + 0xe0bdf4f7) + 0x1b);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 - (int)unaff_RDI;
  if (*piVar1 != 0 && SBORROW4(iVar2,(int)unaff_RDI) == *piVar1 < 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *(int *)((ulonglong)(in_EAX + 0xe0bdf4f7) - 0x6a) = (int)(param_1 + -1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x000140013f94) overlaps instruction at (ram,0x000140013f91)
// 

void FUN_140013f40(longlong param_1,byte *param_2)

{
  ulonglong *puVar1;
  byte *pbVar2;
  byte bVar3;
  ulonglong uVar4;
  byte bVar5;
  ulonglong in_RAX;
  byte bVar7;
  longlong lVar6;
  byte bVar8;
  byte unaff_BL;
  ulonglong *unaff_RSI;
  longlong *unaff_R14;
  
  bVar5 = (byte)in_RAX | 0x19;
  bVar3 = ((byte)param_1 & 0x1f) % 9;
  *param_2 = *param_2 << bVar3 | *param_2 >> 9 - bVar3;
  lVar6 = param_1 + -1;
  if (lVar6 == 0 || bVar5 == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if ((POPCOUNT(bVar5) & 1U) == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *unaff_R14 = *unaff_R14 + 0x46;
  bVar5 = (byte)lVar6;
  bVar8 = (byte)((ulonglong)param_2 >> 8);
  puVar1 = unaff_RSI + 0xe;
  uVar4 = *puVar1;
  bVar7 = (byte)((ulonglong)lVar6 >> 8);
  bVar3 = (byte)*puVar1 - bVar7;
  *(byte *)puVar1 = bVar3 - CARRY1(bVar8,bVar5);
  if ((byte)uVar4 < bVar7 || bVar3 < CARRY1(bVar8,bVar5)) {
    pbVar2 = (byte *)((in_RAX | 0x19) - 0x196c584e);
    *pbVar2 = *pbVar2 & unaff_BL;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  out(0xbe,unaff_BL);
  out(*(undefined4 *)((longlong)unaff_RSI + 4),CONCAT11(bVar8 + bVar5,(char)param_2));
  *unaff_RSI = in_RAX & 0xffffffff | 0x19;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140014080(longlong param_1,undefined8 param_2)

{
  longlong in_RAX;
  int unaff_EBP;
  uint unaff_ESI;
  bool in_OF;
  byte *unaff_retaddr;
  
  if (!in_OF) {
    *(uint *)(in_RAX + 0x50f4e58a) = *(uint *)(in_RAX + 0x50f4e58a) & unaff_ESI;
    *(byte *)(in_RAX + -0x70e61d78) =
         *(byte *)(in_RAX + -0x70e61d78) | (byte)((ulonglong)param_1 >> 8);
    *(uint *)(param_1 + -0x24) =
         *(uint *)(param_1 + -0x24) |
         (uint)CONCAT71((int7)((ulonglong)param_2 >> 8),(byte)param_2 ^ *unaff_retaddr);
    if (SBORROW4(unaff_EBP,(int)param_1)) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1400141c0(void)

{
  code *pcVar1;
  byte in_AL;
  char cVar2;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  int unaff_EBX;
  longlong unaff_RBP;
  float unaff_XMM6_Da;
  float unaff_XMM15_Da;
  
  cVar2 = (in_AL + 0x33) - (unaff_XMM15_Da < unaff_XMM6_Da);
  _DAT_828f51cd51d308 = CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2));
  *(int *)(unaff_RBP + -0x2a) =
       (*(int *)(unaff_RBP + -0x2a) - unaff_EBX) -
       (uint)(in_AL < 0xcd || (byte)(in_AL + 0x33) < (unaff_XMM15_Da < unaff_XMM6_Da));
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2)))
       << 1 | *(char *)CONCAT44(in_register_00000004,
                                CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) < '\0';
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// WARNING: Control flow encountered bad instruction data

void thunk_EXT_FUN_18ac37da5(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400143f0(void)

{
  int *piVar1;
  longlong unaff_RBP;
  
  piVar1 = (int *)(unaff_RBP * 4 + 0x384f0111);
  *piVar1 = *piVar1 << 0x10;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

int FUN_140014530(undefined1 param_1)

{
  int in_EAX;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (in_ZF || in_OF != in_SF) {
    DAT_e9d213564e0adfc1 = (undefined1)in_EAX;
    *unaff_RDI = *unaff_RSI;
    LOCK();
    *(undefined1 *)(unaff_RSI + 0x1b37775a) = param_1;
    UNLOCK();
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  return in_EAX + 0x110f2b66;
}



void FUN_140014640(void)

{
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140014780(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400148c0(longlong param_1,undefined2 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  char in_ZF;
  undefined8 uStack_10;
  
  if (param_1 == 1 || in_ZF == '\0') {
    in(param_2);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\r';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  if (param_1 == 2) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  in(0x22);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400149c0(undefined4 param_1,undefined2 param_2)

{
  byte *pbVar1;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  longlong unaff_RSI;
  
  *(undefined4 *)(CONCAT44(in_register_00000004,in_EAX) + 0x54) = param_1;
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,in_EAX) + -0x12e01c7);
  *pbVar1 = *pbVar1 | 0x87;
  out(*(undefined1 *)(unaff_RSI + 1),param_2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140014b00(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140014e70(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_140014fb0(undefined1 param_1)

{
  longlong unaff_RDI;
  
  LOCK();
  *(undefined1 *)(unaff_RDI + -0x76) = param_1;
  UNLOCK();
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140015070(longlong param_1)

{
  longlong unaff_RDI;
  byte in_CF;
  
  *(byte *)(unaff_RDI + 0x5f) =
       *(byte *)(unaff_RDI + 0x5f) << 1 |
       ((byte)param_1 < *(byte *)(param_1 + 0x51af90be) ||
       (byte)((byte)param_1 - *(byte *)(param_1 + 0x51af90be)) < in_CF);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400151b0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400152f0(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_RDI;
  
  in(0xaa);
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400153b0(longlong param_1)

{
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  if (param_1 != 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *(undefined1 *)(unaff_RBP + -0x17518e09) = 0;
  *(int *)(unaff_RSI + 0x1f) = *(int *)(unaff_RSI + 0x1f) + 0x35;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400154f0(void)

{
  code *pcVar1;
  char in_SF;
  char in_OF;
  
  if (in_OF != in_SF) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140015630(void)

{
  undefined8 in_RAX;
  longlong unaff_RDI;
  
  (&stack0x00000000)[unaff_RDI] = (&stack0x00000000)[unaff_RDI] | (byte)((ulonglong)in_RAX >> 8);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400156f0(longlong param_1,undefined2 param_2)

{
  if (param_1 == 1) {
    func_0xeac91154();
    in(param_2);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140015970(void)

{
  code *pcVar1;
  undefined4 in_EAX;
  
  pcVar1 = (code *)swi(3);
  _DAT_adda5eef3bc9f3e4 = in_EAX;
  (*pcVar1)();
  return;
}



void FUN_140015a30(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Control flow encountered bad instruction data

void FUN_140015b64(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Instruction at (ram,0x000140015b7f) overlaps instruction at (ram,0x000140015b7c)
// 
// WARNING: Control flow encountered bad instruction data

void FUN_140015b70(byte param_1,undefined2 param_2)

{
  undefined1 uVar1;
  bool bVar2;
  byte bVar3;
  uint in_EAX;
  undefined8 unaff_RBX;
  int unaff_ESI;
  uint uVar4;
  undefined8 unaff_RDI;
  ulonglong *unaff_R15;
  undefined2 in_FS;
  byte in_CF;
  bool bVar5;
  byte in_ZF;
  bool bVar6;
  byte in_SF;
  byte in_OF;
  float10 in_ST0;
  float10 in_ST1;
  
  bVar3 = param_1 & 0x1f;
  uVar4 = unaff_ESI << bVar3;
  bVar2 = (param_1 & 0x1f) != 0;
  bVar5 = (bool)(!bVar2 & in_CF | (bVar2 && unaff_ESI << bVar3 - 1 < 0));
  bVar2 = (param_1 & 0x1f) != 0;
  bVar6 = (bool)(!bVar2 & in_ZF | (bVar2 && uVar4 == 0));
  if (bVar5 || bVar6) {
    if (!bVar6) {
      in_ST0 = in_ST1;
    }
    *(char *)((ulonglong)uVar4 + 0x1d) =
         *(char *)((ulonglong)uVar4 + 0x1d) + (char)((ushort)param_2 >> 8);
    *(short *)((ulonglong)(in_EAX & 0xfdde11c5) + 0x1e) = (short)in_ST0;
    FUN_140015b64();
    return;
  }
  if ((byte)(bVar3 != 1 & in_OF | bVar3 == 1 & (bVar5 ^ (int)uVar4 < 0)) ==
      (byte)(!bVar2 & in_SF | (bVar2 && (int)uVar4 < 0))) {
    *unaff_R15 = *unaff_R15 >> 3 | *unaff_R15 << 0x3d;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  uVar1 = in(CONCAT11((char)((ulonglong)unaff_RBX >> 8),(char)param_2));
  *(undefined1 *)CONCAT62((int6)((ulonglong)unaff_RDI >> 0x10),in_FS) = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140015c50(undefined8 param_1,undefined2 param_2)

{
  char cVar1;
  code *pcVar2;
  char cVar3;
  undefined8 in_RAX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  char in_CF;
  
  *(int *)(unaff_RBP + 0x207ca1a7) = (int)&stack0x00000000;
  cVar1 = (char)in_RAX + 'y';
  cVar3 = cVar1 - in_CF;
  if (cVar3 == '\0' || (SBORROW1((char)in_RAX,-0x79) != SBORROW1(cVar1,in_CF)) != cVar3 < '\0') {
    *(int *)(unaff_RDI + 0x31eaa491) =
         *(int *)(unaff_RDI + 0x31eaa491) - (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar3);
    in(param_2);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  pcVar2 = (code *)swi(1);
  (*pcVar2)();
  return;
}



void FUN_140015d00(int param_1)

{
  int *piVar1;
  uint in_EAX;
  int unaff_EDI;
  
  out(0x19,(char)(in_EAX & 0xf0543d83));
  piVar1 = (int *)(((ulonglong)(in_EAX & 0xf0543d83) & 0xffffffffffffffcc) + 0x46552eae);
  *piVar1 = *piVar1 - (unaff_EDI + param_1);
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140015dd0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140016140(void)

{
  uint in_EAX;
  
  do {
  } while ((in_EAX >> 8 & 0x40) == 0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140016280(longlong param_1)

{
  undefined8 in_RAX;
  longlong unaff_RBP;
  int *unaff_RSI;
  undefined4 *unaff_RDI;
  bool in_CF;
  bool in_ZF;
  float10 in_ST0;
  
  *(int *)(unaff_RBP + 0x10) = (int)in_ST0;
  *unaff_RDI = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),DAT_d5c3d1486495b3b3);
  if (!in_CF && !in_ZF) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  *(uint *)(param_1 + 0x71a412ad) = *(uint *)(param_1 + 0x71a412ad) ^ *unaff_RSI * 0x5e;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_1400163e0(void)

{
  uint *puVar1;
  byte *pbVar2;
  code *pcVar3;
  longlong in_RAX;
  longlong unaff_RBX;
  longlong unaff_RDI;
  
  puVar1 = (uint *)(unaff_RDI + 0x3b);
  *puVar1 = *puVar1 >> 1 | *puVar1 << 0x1f;
  pbVar2 = (byte *)(unaff_RBX + -0x4c + in_RAX);
  *pbVar2 = *pbVar2 << 7 | *pbVar2 >> 1;
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140016520(undefined8 param_1,longlong param_2)

{
  int iVar1;
  byte in_AL;
  longlong unaff_RBX;
  uint uVar2;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  
  iVar1 = *(int *)(param_2 + 0x41);
  uVar2 = (int)&stack0x00000000 - *(int *)(param_2 + 0x41);
  *unaff_RDI = *unaff_RSI;
  if ((int)&stack0x00000000 < iVar1) {
    *(undefined2 *)(unaff_RBX + 0x34) = in_FPUControlWord;
    *(undefined2 *)(unaff_RBX + 0x38) = in_FPUStatusWord;
    *(undefined2 *)(unaff_RBX + 0x3c) = in_FPUTagWord;
    *(undefined8 *)(unaff_RBX + 0x48) = in_FPUDataPointer;
    *(undefined8 *)(unaff_RBX + 0x40) = 0x14001652a;
    *(undefined2 *)(unaff_RBX + 0x46) = in_FPULastInstructionOpcode;
    *(ulonglong *)((ulonglong)uVar2 - 8) =
         (ulonglong)(in_NT & 1) * 0x4000 |
         (ulonglong)(((in_AL >> 1 & 0x40) != 0) != ((in_AL & 1) != 0)) * 0x800 |
         (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
         (ulonglong)((int)uVar2 < 0) * 0x80 | (ulonglong)(uVar2 == 0) * 0x40 |
         (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar2 & 0xff) & 1U) == 0) * 4 |
         (ulonglong)(in_AL & 1) | (ulonglong)(in_ID & 1) * 0x200000 |
         (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
         (ulonglong)(in_AC & 1) * 0x40000;
    in(0x3d);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_140016660(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0xa2);
  (*pcVar1)();
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400167d0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + -0x45) <= param_2) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140016910(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined6 uVar5;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined1 in_CF;
  
  uVar3 = (undefined1)param_2;
  uVar4 = (undefined1)((ulonglong)param_2 >> 8);
  uVar5 = (undefined6)((ulonglong)param_2 >> 0x10);
  pcVar1 = (code *)swi(0x5a);
  (*pcVar1)();
  uVar2 = _DAT_fe5bacd644690004;
  do {
  } while (!(bool)in_CF);
  *(undefined1 *)(unaff_RDI + 4) = *(undefined1 *)(unaff_RSI + 4);
  *(undefined1 *)CONCAT62(uVar5,CONCAT11(uVar4,uVar3)) = uVar4;
  out(CONCAT11(uVar4,uVar3),uVar2);
  out(*(undefined4 *)(unaff_RSI + 9),CONCAT11(uVar4,uVar3));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140016a50(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140016af0(undefined8 param_1)

{
  code *pcVar1;
  int in_EAX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  *(uint *)(unaff_RSI + 0x29b450d3) = *(uint *)(unaff_RSI + 0x29b450d3) | 0x2e;
  *(byte *)(unaff_RBP + -0x13) = *(byte *)(unaff_RBP + -0x13) >> 1 | 0x80;
  pcVar1 = (code *)swi(9);
  (*pcVar1)(param_1,in_EAX >> 0x1f);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x000140016d03)
// WARNING: Removing unreachable block (ram,0x000140016d1d)
// WARNING: Removing unreachable block (ram,0x000140016d40)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140016c30(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  longlong in_RAX;
  byte bVar4;
  undefined8 unaff_RBX;
  byte *pbVar5;
  longlong *unaff_RBP;
  byte *unaff_RSI;
  undefined4 *unaff_RDI;
  byte in_CF;
  byte bVar6;
  
  out(0x42,(int)in_RAX);
  bVar4 = (byte)((ulonglong)param_2 >> 8);
  bVar6 = bVar4 - *(byte *)(in_RAX + 0x5599627e);
  piVar1 = (int *)((longlong)unaff_RBP + 0x2d3fc9db);
  *piVar1 = (*piVar1 - (int)unaff_RSI) -
            (uint)(*(byte *)(in_RAX + 0x5599627e) <= bVar4 && in_CF <= bVar6);
  iVar2 = *piVar1;
  uVar3 = in(CONCAT11(bVar6 - in_CF,(char)param_2));
  *unaff_RDI = uVar3;
  if (-1 < iVar2) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  bVar6 = (byte)((ulonglong)unaff_RBX >> 8) | *(byte *)(unaff_RDI + 0x16);
  pbVar5 = (byte *)CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),CONCAT11(bVar6,(char)unaff_RBX));
  if ((POPCOUNT(*(byte *)(*unaff_RBP + 0x5befb062) & bVar6) & 1U) == 0) {
    *pbVar5 = *pbVar5 << 1 | *unaff_RSI < DAT_765bd529;
    *(uint *)(param_1 + -0x3a) = *(uint *)(param_1 + -0x3a) & 0xfffffffd;
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140016d70(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140016f50(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140017090(undefined8 param_1,longlong param_2)

{
  *(byte *)(param_2 + 0x39) = ~*(byte *)(param_2 + 0x39);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140017130(void)

{
  byte in_AL;
  undefined1 unaff_BL;
  
  do {
  } while ((POPCOUNT(in_AL | 0xf7) & 1U) != 0);
  LOCK();
  DAT_177883980 = unaff_BL;
  UNLOCK();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140017270(void)

{
  undefined4 unaff_EBP;
  undefined4 unaff_0000002c;
  uint unaff_EDI;
  undefined8 local_res8;
  
  DAT_931599f60313c762 = (undefined1)unaff_EDI;
  if (unaff_EDI < 0x1ab5f460) {
    _DAT_9c014d49c40dbfaa = unaff_EDI;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *(ulonglong *)(local_res8 + -8) = CONCAT44(unaff_0000002c,unaff_EBP);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x000140017344)
// WARNING: Removing unreachable block (ram,0x000140017349)

uint FUN_1400173b0(short *param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_EAX;
  undefined4 uVar4;
  byte unaff_BL;
  undefined7 unaff_00000019;
  undefined4 *unaff_RDI;
  bool bVar5;
  bool in_ZF;
  char in_SF;
  bool bVar6;
  char in_OF;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  
  uVar4 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (in_ZF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  LOCK();
  uVar2 = *unaff_RDI;
  *unaff_RDI = (int)param_2;
  UNLOCK();
  if (in_OF == in_SF) {
    puVar1 = (uint *)((ulonglong)(uint)((int)unaff_RDI + *(int *)((longlong)unaff_RDI * 3)) + 0x17);
    *puVar1 = *puVar1 | in_EAX;
    in(0x89);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  do {
    *param_1 = (short)ROUND(in_ST0);
    bVar5 = CARRY1(unaff_BL,*(byte *)CONCAT44(uVar4,uVar2));
    bVar6 = SCARRY1(unaff_BL,*(char *)CONCAT44(uVar4,uVar2));
    unaff_BL = unaff_BL + *(char *)CONCAT44(uVar4,uVar2);
    in_ST0 = in_ST1;
    in_ST1 = in_ST2;
    in_ST2 = in_ST3;
    in_ST3 = in_ST4;
    in_ST4 = in_ST5;
    in_ST5 = in_ST6;
    in_ST6 = in_ST7;
  } while (bVar6 != (char)unaff_BL < '\0');
  iVar3 = in(0x32);
  puVar1 = (uint *)(CONCAT71(unaff_00000019,unaff_BL) + -0x6a4e631d);
  *puVar1 = *puVar1 << 2 | *puVar1 >> 0x1e;
  return (iVar3 + 0x76608ed) - (uint)bVar5 ^ 0xa1;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140017450(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



uint FUN_140017590(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  uint in_EAX;
  undefined1 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  return in_EAX & 0xb3ae6e7e;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140017670(undefined8 param_1,char param_2)

{
  int *piVar1;
  undefined4 in_EAX;
  
  piVar1 = (int *)(CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                            CONCAT11((char)((ulonglong)param_1 >> 8) + (char)((uint)in_EAX >> 8),
                                     (char)param_1)) + -0x72363563);
  *piVar1 = *piVar1 + 1;
  func_0x000127503fe9();
  if (param_2 != '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: This function may have set the stack pointer

void FUN_1400176d0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x75);
  (*pcVar1)(0x62abfc22);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x0001400177a4) overlaps instruction at (ram,0x0001400177a0)
// 
// WARNING: Removing unreachable block (ram,0x000140017713)
// WARNING: Removing unreachable block (ram,0x000140017715)
// WARNING: Removing unreachable block (ram,0x000140017732)
// WARNING: Removing unreachable block (ram,0x000140017734)
// WARNING: Removing unreachable block (ram,0x00014001772d)

ulonglong FUN_1400177a0(longlong param_1,ulonglong param_2)

{
  uint *puVar1;
  int in_EAX;
  int iVar2;
  ulonglong unaff_RBX;
  undefined4 *unaff_RSI;
  undefined1 *unaff_RDI;
  byte in_CF;
  
  if (param_1 != 0) {
    *(byte *)(param_2 - 0x356c6e8b) = *(byte *)(param_2 - 0x356c6e8b) >> 1;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (in_EAX + -0x4725b21c + (uint)in_CF != 0) {
    iVar2 = (uint)param_2 + (uint)unaff_RDI;
    if (CARRY4((uint)param_2,(uint)unaff_RDI) || iVar2 == 0) {
      *unaff_RDI = 0xe3;
      *(undefined4 *)(unaff_RDI + 1) = *unaff_RSI;
      puVar1 = (uint *)((ulonglong)(uint)(iVar2 >> 0x1f) + 0x31);
      *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    out((short)iVar2,0);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  return unaff_RBX & 0xffffffff;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x000140017816) overlaps instruction at (ram,0x000140017815)
// 
// WARNING: Removing unreachable block (ram,0x000140017815)
// WARNING: Removing unreachable block (ram,0x000140017827)
// WARNING: Removing unreachable block (ram,0x000140017829)
// WARNING: Removing unreachable block (ram,0x000140017814)

void FUN_140017880(ulonglong param_1,int *param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong in_RAX;
  char unaff_BL;
  undefined1 unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  undefined4 *unaff_RDI;
  bool bVar11;
  char in_AF;
  bool bVar12;
  bool bVar13;
  
  while( true ) {
    piVar1 = (int *)((longlong)unaff_RDI + 0x7b);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -0x1c;
    if (*piVar1 == 0 || SBORROW4(iVar3,0x1c) != *piVar1 < 0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    puVar2 = (uint *)(in_RAX + 0x7f);
    bVar11 = false;
    *puVar2 = *puVar2 ^ (uint)param_1;
    bVar13 = (int)*puVar2 < 0;
    bVar12 = *puVar2 == 0;
    uVar10 = *puVar2;
    if (bVar12) {
      bVar11 = CARRY4((uint)unaff_RBP,*(uint *)(unaff_RSI + 0x5f1f3fa));
      uVar10 = (uint)unaff_RBP + *(uint *)(unaff_RSI + 0x5f1f3fa);
      unaff_RBP = (ulonglong)uVar10;
      bVar13 = (int)uVar10 < 0;
      bVar12 = uVar10 == 0;
      if (!bVar13) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
    }
    else {
      puVar9 = (undefined8 *)((longlong)register0x00000020 + -8);
      register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
      *puVar9 = unaff_RDI;
    }
    uVar7 = (uint)CONCAT62((int6)(in_RAX >> 0x10),
                           CONCAT11(bVar13 << 7 | bVar12 << 6 | in_AF << 4 |
                                    ((POPCOUNT(uVar10 & 0xff) & 1U) == 0) << 2 | 2U | bVar11,
                                    (char)in_RAX));
    uVar10 = uVar7 + 0x78598e32;
    lVar4 = (longlong)
            *(int *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
                    0x57);
    uVar5 = (longlong)param_2 << 0x20 | (ulonglong)uVar10;
    uVar6 = (longlong)uVar5 / lVar4;
    in_RAX = uVar6 & 0xffffffff;
    param_2 = (int *)((longlong)uVar5 % lVar4 & 0xffffffff);
    *(ulonglong *)((longlong)register0x00000020 + -8) =
         CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
    param_1 = param_1 - 1;
    if (param_1 == 0) break;
    if (uVar10 == 0 || (int)uVar7 < -0x78598e32) {
      *(ulonglong *)((longlong)register0x00000020 + -0x10) = unaff_RBP;
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    unaff_BH = 0xeb;
    *unaff_RDI = (int)uVar6;
    unaff_BL = (unaff_BL - (char)*param_2) - (0x87a671cd < uVar7);
    puVar8 = (undefined8 *)((longlong)register0x00000020 + -0x10);
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -0x10);
    *puVar8 = unaff_RDI + -1;
    unaff_RDI = unaff_RDI + -1;
  }
  if ((POPCOUNT(uVar10 & 0xff) & 1U) != 0) {
    *(longlong *)((longlong)register0x00000020 + -0x10) = unaff_RSI;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400178e0(undefined8 param_1,undefined2 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  longlong in_RAX;
  ulonglong *unaff_RBP;
  longlong unaff_RSI;
  undefined4 *unaff_RDI;
  
  piVar1 = (int *)(in_RAX + 0x5ffddb89 + unaff_RSI * 4);
  *piVar1 = *piVar1 - (int)unaff_RDI;
  *(int *)(unaff_RSI + 0x731449bd) = *(int *)(unaff_RSI + 0x731449bd) + 1;
  iVar3 = *(int *)(unaff_RSI + -0x2641712c);
  uVar2 = in(param_2);
  *unaff_RDI = uVar2;
  *unaff_RBP = (ulonglong)(uint)(iVar3 * 0x1898185d);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



int FUN_1400179b0(undefined8 param_1,uint param_2)

{
  undefined8 in_RAX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  byte in_CF;
  
  *(byte *)(unaff_RDI + 0x28) = *(byte *)(unaff_RDI + 0x28) << 1 | in_CF;
  return (int)CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(7,(char)in_RAX))
                             >> 8),((char)in_RAX + '\x1c') - CARRY4(param_2,(uint)in_RAX)) +
         *(int *)(unaff_RBP + 0xc);
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x000140017ab0) overlaps instruction at (ram,0x000140017aac)
// 

void FUN_140017a90(undefined8 param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  int unaff_EBP;
  longlong unaff_RSI;
  undefined1 auStackX_8 [32];
  
  puVar1 = (uint *)(unaff_RSI + 0x1883f910);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + 100;
  if ((char)((char)((ulonglong)param_2 >> 8) + unaff_BH + (0xffffff9b < uVar2)) < '\0') {
    register0x00000020 = (BADSPACEBASE *)auStackX_8;
  }
  *(undefined8 *)((longlong)register0x00000020 + -8) = 0x58;
  *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_EBP +
       (uint)(0x49b96211 < (uint)unaff_RSI);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140017b40(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140017bb5(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x7f);
  (*pcVar1)();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Instruction at (ram,0x000140017c13) overlaps instruction at (ram,0x000140017c10)
// 
// WARNING: Control flow encountered bad instruction data

void FUN_140017c10(void)

{
  byte *in_RAX;
  undefined1 *unaff_RSI;
  bool in_CF;
  bool in_PF;
  bool in_ZF;
  
  do {
    if (!in_CF && !in_ZF) {
      *in_RAX = *in_RAX | (byte)((ulonglong)in_RAX >> 8);
      FUN_140017bb5();
      return;
    }
  } while (in_PF);
  uRam349c874368692adf = *unaff_RSI;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140017d70(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x000140017e52) overlaps instruction at (ram,0x000140017e50)
// 

void FUN_140017e40(byte *param_1,undefined8 param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  unkbyte10 Var5;
  undefined4 uVar6;
  byte bVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined4 in_EAX;
  int iVar10;
  longlong unaff_RBX;
  ulonglong uVar11;
  longlong unaff_RBP;
  char *unaff_RSI;
  longlong unaff_RDI;
  undefined4 *puVar12;
  unkbyte10 in_ST0;
  uint uVar4;
  
  puVar12 = (undefined4 *)(unaff_RDI + 1);
  bVar7 = *param_1;
  iVar10 = CONCAT31((int3)((uint)in_EAX >> 8),bVar7);
  uVar11 = (ulonglong)((uint)&stack0x00000000 ^ (uint)unaff_RBX);
  puVar2 = (uint *)(unaff_RSI + -0x5e6d03b1);
  *puVar2 = *puVar2 | 0x75;
  uVar3 = *puVar2;
  uVar4 = *puVar2;
  *(longlong *)(uVar11 - 8) = unaff_RBP;
  if ((int)uVar3 < 0) {
    uVar6 = in((short)param_2);
    *puVar12 = uVar6;
    puVar12 = (undefined4 *)(unaff_RDI + 9);
    *(int *)(unaff_RDI + 5) = iVar10;
  }
  plVar8 = *(longlong **)(uVar11 - 8);
  Var5 = to_bcd(in_ST0);
  *(unkbyte10 *)(unaff_RBP * 3 + -0x55) = Var5;
  uVar6 = in((short)param_2);
  *puVar12 = uVar6;
  if (uVar4 != 0) {
    lVar9 = *plVar8;
    if (-1 < (char)(*unaff_RSI - *(char *)(puVar12 + 1))) {
      *(char *)(unaff_RBX + -0x2a) = *(char *)(unaff_RBX + -0x2a) + '\x01';
      piVar1 = (int *)(lVar9 + -0x6d);
      *piVar1 = *piVar1 + iVar10 + (uint)((byte)((ulonglong)param_2 >> 8) < bVar7);
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140017f20(void)

{
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (!in_ZF && in_OF == in_SF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140017fa0(void)

{
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  if (SBORROW1(*(char *)(unaff_RSI + 4),*(char *)(unaff_RDI + 4))) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x000140018073) overlaps instruction at (ram,0x000140018072)
// 

void FUN_140018070(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined2 in_AX;
  longlong unaff_RBX;
  longlong unaff_RSI;
  int unaff_EDI;
  bool in_CF;
  bool in_ZF;
  
  if (!in_CF && !in_ZF) {
    piVar1 = (int *)(unaff_RBX + -0x11 + unaff_RSI * 2);
    *piVar1 = *piVar1 << 1;
    in(in_AX);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (param_1 == 1) {
    piVar1 = (int *)(unaff_RBX + -0x19 + CONCAT71((int7)((ulonglong)param_2 >> 8),0x5d) * 2);
    *piVar1 = *piVar1 + unaff_EDI + (uint)in_CF;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x0001400181d5) overlaps instruction at (ram,0x0001400181d4)
// 
// WARNING: Removing unreachable block (ram,0x0001400181ca)
// WARNING: Removing unreachable block (ram,0x0001400181d5)

void FUN_1400181d0(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_RDI;
  float10 in_ST0;
  
  *(float *)((longlong)unaff_RDI + -0xb) = (float)in_ST0;
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400182a0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140018380(void)

{
  bool in_CF;
  
  if (!in_CF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400184d0(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  
  uVar1 = in(param_2);
  out(param_2,(char)uVar1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400185b0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140018630(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  uint in_EAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  undefined4 *unaff_RDI;
  
  uVar1 = *(uint *)(unaff_RBX + -0x22c88a7f);
  *unaff_RDI = (int)(CONCAT44(param_2,in_EAX - *(uint *)(unaff_RBX + -0x22c88a7f)) /
                    (ulonglong)*(uint *)(unaff_RBP + -0x31));
  if (in_EAX < uVar1) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140018700(void)

{
  undefined4 in_EAX;
  
  _DAT_2ec3ae9fb7a676b6 = in_EAX;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void thunk_EXT_FUN_18ec27599(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140018860(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140018930(void)

{
  char in_AL;
  
  if (-0x78 < in_AL) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_140018a70(char param_1,undefined2 param_2)

{
  code *pcVar1;
  undefined1 in_AL;
  longlong unaff_RSI;
  
  *(char *)(unaff_RSI + -9) = *(char *)(unaff_RSI + -9) + '\x01';
  out(param_2,in_AL);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(param_1 + (char)param_2);
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140018b40(void)

{
  uint *puVar1;
  longlong unaff_RBP;
  uint unaff_ESI;
  longlong unaff_RDI;
  bool in_PF;
  unkbyte10 in_ST0;
  
  if (!in_PF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  puVar1 = (uint *)(unaff_RBP + -0x2c6063bf + unaff_RDI * 8);
  *puVar1 = *puVar1 | unaff_ESI;
  if (-1 < (int)*puVar1) {
    *(unkbyte10 *)(unaff_RBP + -0x46) = in_ST0;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x000140018c8d) overlaps instruction at (ram,0x000140018c8c)
// 
// WARNING: Removing unreachable block (ram,0x000140018c8e)
// WARNING: Removing unreachable block (ram,0x000140018c90)
// WARNING: Removing unreachable block (ram,0x000140018c6a)
// WARNING: Removing unreachable block (ram,0x000140018cd2)
// WARNING: Removing unreachable block (ram,0x000140018c7c)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140018c80(undefined8 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
                    // WARNING: Could not recover jumptable at 0x000140018c8d. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140018e90(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140018fd0(longlong param_1,longlong param_2)

{
  *(char *)(param_1 + -0x56) = *(char *)(param_1 + -0x56) << ((byte)param_1 & 0x1f);
  *(byte *)(param_2 + -0x28355c86) = *(byte *)(param_2 + -0x28355c86) & 0xab;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

ulonglong FUN_140019110(longlong param_1,char param_2)

{
  char *pcVar1;
  ulonglong in_RAX;
  ulonglong unaff_RBX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  bool in_PF;
  byte in_OF;
  
  if (param_1 != 0) {
    return (ulonglong)CONCAT31((int3)((uint)((int)in_RAX + -0x7059a17e) >> 8),DAT_25f9e016cd80eead);
  }
  if (!in_PF) {
    pcVar1 = (char *)((unaff_RBP & 0xffffffff) - 0x33);
    *pcVar1 = *pcVar1 + '\x01';
    *(undefined4 *)(((unaff_RBX & 0xffffffff) - 0x19) + unaff_RSI * 2) = 0;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *(undefined1 *)(unaff_RBP - 0x1a) = *(undefined1 *)(unaff_RBP - 0x1a);
  if (!(bool)(in_OF & 1)) {
    return in_RAX;
  }
  if (param_2 < '\0') {
    in(0x62);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400191f0(longlong param_1)

{
  *(char *)(param_1 + 0x2a) = *(char *)(param_1 + 0x2a) + -0x44;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140019330(void)

{
  undefined1 in_AL;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = in_AL;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140019470(void)

{
  undefined4 in_EAX;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = in_EAX;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140019550(void)

{
  longlong in_RAX;
  
  *(uint *)(in_RAX + 0x24) = *(uint *)(in_RAX + 0x24) >> 7;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x00014001972e) overlaps instruction at (ram,0x00014001972d)
// 
// WARNING: Removing unreachable block (ram,0x00014001978e)
// WARNING: Removing unreachable block (ram,0x00014001973e)
// WARNING: Removing unreachable block (ram,0x000140019790)
// WARNING: Removing unreachable block (ram,0x000140019793)
// WARNING: Removing unreachable block (ram,0x000140019810)
// WARNING: Removing unreachable block (ram,0x00014001979e)
// WARNING: Removing unreachable block (ram,0x00014001980a)
// WARNING: Removing unreachable block (ram,0x000140019775)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140019690(longlong param_1,ulonglong param_2)

{
  byte *pbVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 uVar6;
  char cVar7;
  longlong in_RAX;
  byte bVar9;
  undefined7 uVar10;
  byte bVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *unaff_RBP;
  longlong unaff_RSI;
  char *unaff_RDI;
  bool in_CF;
  bool bVar15;
  bool in_ZF;
  char in_SF;
  char in_OF;
  float10 in_ST0;
  undefined1 auStackX_8 [32];
  ulonglong uVar8;
  
  bVar11 = (byte)(param_2 >> 8);
  if (in_OF == in_SF) {
    in_ST0 = (float10)*(int *)(param_2 - 0x1c) / in_ST0;
    if (in_CF || in_ZF) {
      pbVar1 = (byte *)(unaff_RDI + -0x1e);
      bVar15 = CARRY1(*pbVar1,bVar11);
      *pbVar1 = *pbVar1 + bVar11;
      goto code_r0x000140019711;
    }
    pbVar1 = (byte *)(param_1 + -0x7b);
    *pbVar1 = *pbVar1 >> 1 | *pbVar1 << 7;
    if (*unaff_RDI < '\0') {
      in((short)param_2);
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    in(0x5b);
  }
  else {
    DAT_ed2eef44682596d8 = (undefined1)in_RAX;
    bVar15 = (int)unaff_RBP < 0;
    unaff_RBP = (undefined8 *)(param_2 & 0xffffffff);
    uVar6 = in(0xc0);
    in_RAX = CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar6);
    register0x00000020 = (BADSPACEBASE *)auStackX_8;
code_r0x000140019711:
    *(char *)(in_RAX + 0x2a869e13) = *(char *)(in_RAX + 0x2a869e13) + -0x50 + bVar15;
    uVar10 = (undefined7)((ulonglong)param_1 >> 8);
    bVar9 = (byte)param_1 >> 1 | (byte)param_1 << 7;
    *(int *)(param_2 + 0x718cc021) = (int)unaff_RDI;
    lVar5 = (longlong)*(int *)(unaff_RSI + -0x241706c0) * 0x6b5be5cd;
    iVar12 = (int)lVar5;
    if (iVar12 == lVar5) {
      puVar13 = (undefined8 *)((longlong)register0x00000020 + -8);
      register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
      *puVar13 = unaff_RDI;
      goto code_r0x00014001973c;
    }
    cVar7 = (byte)in_RAX - 0x2d;
    uVar8 = CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar7);
    if (-1 < cVar7) {
      if (0x2c < (byte)in_RAX) {
        uVar4 = in((short)param_2);
        *(undefined4 *)unaff_RDI = uVar4;
        *(ulonglong *)((longlong)register0x00000020 + -8) = CONCAT71(uVar10,bVar9);
        _DAT_ab73dc18ef693629 = iVar12;
        *(int *)(uVar8 & 0xffffffff) = (int)ROUND(in_ST0);
        if ((int)unaff_RBP != 0 || (int)CONCAT71(uVar10,bVar11) != 0) {
          pcVar3 = (char *)(CONCAT62((int6)(param_2 >> 0x10),CONCAT11(bVar9,(char)param_2)) +
                           0x7718f0da);
          *pcVar3 = *pcVar3 + cVar7;
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      piVar2 = (int *)(uVar8 + 0x5797e8bb);
      *piVar2 = *piVar2 << 1;
      goto code_r0x00014001973c;
    }
    *(undefined8 *)((longlong)register0x00000020 + -8) = 0x14001972d;
    func_0x00019be76508();
  }
  unaff_RBP = *(undefined8 **)register0x00000020;
  register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + 8);
code_r0x00014001973c:
  puVar14 = (undefined8 *)((longlong)register0x00000020 + -8);
  *(undefined8 **)((longlong)register0x00000020 + -8) = unaff_RBP;
  cVar7 = '\x04';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar14 = puVar14 + -1;
    *puVar14 = *unaff_RBP;
    cVar7 = cVar7 + -1;
  } while ('\0' < cVar7);
  *(undefined1 **)((longlong)register0x00000020 + -0x30) =
       (undefined1 *)((longlong)register0x00000020 + -8);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140019820(longlong param_1,undefined1 param_2)

{
  undefined4 uVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  undefined4 *unaff_RDI;
  char in_ZF;
  
  if (param_1 == 1 || in_ZF == '\0') {
    return;
  }
  out(0xc2,in_AL);
  uVar1 = in(CONCAT11(0x5e,param_2));
  *unaff_RDI = uVar1;
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(byte *)CONCAT71(in_register_00000001,in_AL) | (char)unaff_RDI + 4U;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140019a00(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140019b40(undefined8 param_1,uint param_2)

{
  undefined8 in_RAX;
  uint *unaff_RDI;
  
  if (SBORROW4((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + -0x6a),-0x4cd701d8)) {
    *unaff_RDI = *unaff_RDI ^ param_2;
    in((short)param_2);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140019bf0(void)

{
  undefined8 unaff_RDI;
  longlong unaff_retaddr;
  
  *(undefined8 *)(unaff_retaddr + -8) = unaff_RDI;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140019d30(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140019e70(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x000140019f48) overlaps instruction at (ram,0x000140019f44)
// 
// WARNING: Removing unreachable block (ram,0x000140019f48)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140019f20(undefined8 param_1,byte *param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  byte in_AH;
  short in_register_00000002;
  undefined4 in_register_00000004;
  char *unaff_RSI;
  byte *unaff_RDI;
  
  bVar2 = in(0x38);
  *param_2 = *param_2 ^ in_AH;
  if (bVar2 < *unaff_RDI) {
    _DAT_ffffffffaa43d86a = _DAT_ffffffffaa43d86a + ((int)in_register_00000002 >> 0xf) + 1;
    LOCK();
    unaff_RSI[0x37] = (char)((ulonglong)param_1 >> 8);
    UNLOCK();
    puVar1 = (undefined1 *)
             (CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) +
             -0x15);
    *puVar1 = *puVar1;
    *unaff_RSI = *unaff_RSI - (char)((int)in_register_00000002 >> 0xf);
    _DAT_717dbc66e3b590c0 = CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2));
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  func_0x0001034b438b();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001a060(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001a1a0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001a250(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_14001a390(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001a4d0(void)

{
  uint in_EAX;
  longlong unaff_RBX;
  
  *(uint *)(unaff_RBX + 0x2849e898) = *(uint *)(unaff_RBX + 0x2849e898) | in_EAX;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001a580(void)

{
  code *pcVar1;
  char extraout_AH;
  longlong unaff_RBP;
  char in_CF;
  
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  *(char *)(unaff_RBP + 0x54) = (*(char *)(unaff_RBP + 0x54) - extraout_AH) - in_CF;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001a6c0(void)

{
  longlong unaff_RBX;
  int unaff_EBP;
  
  *(int *)(unaff_RBX + 0x1b) = *(int *)(unaff_RBX + 0x1b) + unaff_EBP;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001a800(byte param_1,undefined2 param_2)

{
  byte bVar1;
  byte bVar2;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RBP;
  longlong unaff_RSI;
  float10 in_ST0;
  
  *(float *)(unaff_RBP + -4 + CONCAT71(in_register_00000001,in_AL) * 4) = (float)in_ST0;
  bVar2 = (param_1 & 0x1f) % 9;
  bVar1 = *(byte *)(unaff_RSI + 0x4e);
  *(byte *)(unaff_RSI + 0x4e) = bVar1 >> bVar2 | bVar1 << 9 - bVar2;
  DAT_7a7969e68c3c6337 = in(param_2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_14001a8c0(byte param_1,byte param_2)

{
  int *piVar1;
  byte bVar2;
  longlong unaff_RBX;
  longlong unaff_RSI;
  
  in(0x1a);
  do {
    bVar2 = ~param_1;
    param_2 = param_2 - DAT_87170c4fa59e4e0c;
    out(0x89,DAT_87170c4fa59e4e0c);
    param_1 = DAT_87170c4fa59e4e0c;
    DAT_87170c4fa59e4e0c = bVar2;
  } while ((POPCOUNT((uint)param_2) & 1U) == 0);
  piVar1 = (int *)(unaff_RSI + -0xc43948c + unaff_RBX);
  *piVar1 = *piVar1 << 1;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001ab40(void)

{
  undefined4 in_EAX;
  char *unaff_RDI;
  bool in_SF;
  float10 in_ST0;
  
  *(longlong *)(unaff_RDI + 6) = (longlong)ROUND(in_ST0);
  if (!in_SF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  out(0xf1,in_EAX);
  *unaff_RDI = (char)in_EAX + '8';
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14001ac00(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  bool in_CF;
  bool in_ZF;
  
  if (!in_CF && !in_ZF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  do {
    DAT_1529521ab = (char)param_2;
    if (in_CF || in_ZF) {
      uVar1 = in((short)param_2);
      *unaff_RDI = uVar1;
      in(0x46);
      *(char *)(unaff_RSI + param_2) = *(char *)(unaff_RSI + param_2) + '\x01';
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
  } while (param_1 == 0);
  *(byte *)(param_1 + -0x203b71a7) =
       *(byte *)(param_1 + -0x203b71a7) | (byte)((ulonglong)param_1 >> 8);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_14001ad40(undefined8 param_1)

{
  code *pcVar1;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  float10 in_ST0;
  
  *unaff_RDI = *unaff_RSI;
  *(undefined4 *)(unaff_RDI + 1) = *(undefined4 *)(unaff_RSI + 1);
  *(float *)(unaff_RDI + -0x35cc5f4a) = (float)in_ST0;
  pcVar1 = (code *)swi(3);
  (*pcVar1)(param_1,0x7aa483e5);
  return;
}



void FUN_14001ae20(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x00014001aec0) overlaps instruction at (ram,0x00014001aebd)
// 
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14001ae80(char param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar4;
  byte bVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  longlong unaff_RBP;
  longlong unaff_RSI;
  int *unaff_RDI;
  uint uVar3;
  
  uVar2 = *(uint *)(unaff_RBP + 0x10);
  uVar3 = *(uint *)(unaff_RBP + 0x10);
  uVar4 = *(undefined4 *)(unaff_RSI + -0x723ebaf7);
  _DAT_d9f6edf08537737c = in(0x66);
  out(0x27,_DAT_d9f6edf08537737c);
  uVar8 = _DAT_d9f6edf08537737c + 0x8249df00;
  *unaff_RDI = *unaff_RDI - (int)unaff_RDI;
  uVar8 = uVar8 | 0x66935f74;
  cVar7 = (char)uVar8;
  puVar1 = (uint *)(((ulonglong)((uint)unaff_RBP + uVar3) - 0x2c) + unaff_RSI * 8);
  bVar5 = (param_1 - (char)uVar4) - CARRY4((uint)unaff_RBP,uVar2) & 0x1f;
  uVar2 = *puVar1;
  uVar6 = (ulonglong)uVar2 << bVar5;
  *puVar1 = (uint)uVar6 | uVar2 >> 0x21 - bVar5;
  if ((uVar6 & 0x100000000) == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  out(0x17,CONCAT31((int3)(uVar8 >> 8),cVar7 + '\x1d'));
  cVar7 = cVar7 + '\"';
  if (-1 < cVar7) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if ((POPCOUNT(cVar7) & 1U) != 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001af50(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  code *pcVar2;
  short in_AX;
  undefined1 *unaff_RDI;
  undefined2 in_FS;
  longlong unaff_GS_OFFSET;
  uint unaff_retaddr;
  
  uVar1 = *(uint *)(ulonglong)(uint)(int)in_AX;
  *(undefined2 *)(param_4 + -0x386123f6) = in_FS;
  if ((int)(uVar1 & unaff_retaddr) < 1) {
    pcVar2 = (code *)swi(0x3a);
    (*pcVar2)(param_1,(byte)param_2 & *(byte *)(unaff_GS_OFFSET + param_2));
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *unaff_RDI = (char)in_AX;
  if ((POPCOUNT(uVar1 & unaff_retaddr & 0xff) & 1U) != 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001b090(void)

{
  bool in_ZF;
  
  if (!in_ZF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_14001b280(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001b3c0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_14001b470(void)

{
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001b5b0(void)

{
  undefined4 in_EAX;
  
  out(0xc2,in_EAX);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001b6f0(undefined4 *param_1,undefined2 param_2)

{
  undefined4 in_EAX;
  undefined4 unaff_ESI;
  bool in_SF;
  
  do {
  } while (in_SF);
  LOCK();
  *param_1 = unaff_ESI;
  UNLOCK();
  out(param_2,in_EAX);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001b7b0(byte param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined8 in_RAX;
  undefined4 *unaff_RDI;
  
  uVar1 = in(param_2);
  if ((((byte)in_RAX ^ 0xc1) + 0x8d & param_1) != 0) {
    *unaff_RDI = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar1);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  DAT_c5ba5f254b3eb501 = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001b8f0(undefined8 param_1,undefined2 param_2)

{
  undefined1 *unaff_RSI;
  
  out(*unaff_RSI,param_2);
  *(int *)(unaff_RSI + 0x4a2a16f2) = *(int *)(unaff_RSI + 0x4a2a16f2) << 6;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001ba30(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001bae0(int param_1,byte *param_2)

{
  uint *puVar1;
  byte bVar2;
  code *pcVar3;
  int in_EAX;
  uint uVar4;
  longlong lVar5;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  byte in_CF;
  bool bVar6;
  bool bVar7;
  undefined4 uStackX_8;
  
  uVar4 = param_1 + *(int *)(unaff_RBX + -0x1ab2f4b6) + (uint)in_CF;
  bVar7 = uVar4 == 0;
  lVar5 = (ulonglong)uVar4 - 1;
  if (lVar5 == 0 || !bVar7) {
    lVar5 = (longlong)*(int *)(longlong)(int)lVar5 * 0x2c07dda3;
    bVar6 = (int)lVar5 != lVar5;
    pcVar3 = (code *)swi(0xdb);
    (*pcVar3)();
    if (!bVar6 && !bVar7) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    puVar1 = (uint *)(unaff_RSI + 0x58 + unaff_RDI * 8);
    *puVar1 = ~*puVar1;
    param_2 = (byte *)(ulonglong)(uint)(uStackX_8 >> 0x1f);
    in_EAX = uStackX_8;
  }
  bVar2 = *param_2;
  *param_2 = *param_2 - (byte)in_EAX;
  if (bVar2 < (byte)in_EAX || *param_2 == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001bc20(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_14001bd00(void)

{
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x00014001bd4b) overlaps instruction at (ram,0x00014001bd48)
// 
// WARNING: Removing unreachable block (ram,0x00014001bdb1)
// WARNING: Removing unreachable block (ram,0x00014001bdec)
// WARNING: Removing unreachable block (ram,0x00014001bdee)
// WARNING: Removing unreachable block (ram,0x00014001bda3)
// WARNING: Removing unreachable block (ram,0x00014001bdbc)
// WARNING: Removing unreachable block (ram,0x00014001bdbe)
// WARNING: Removing unreachable block (ram,0x00014001bdcf)
// WARNING: Removing unreachable block (ram,0x00014001bd70)
// WARNING: Removing unreachable block (ram,0x00014001bd7b)
// WARNING: Removing unreachable block (ram,0x00014001bd4b)
// WARNING: Removing unreachable block (ram,0x00014001bd52)
// WARNING: Removing unreachable block (ram,0x00014001bcfe)
// WARNING: Removing unreachable block (ram,0x00014001bdfa)
// WARNING: Removing unreachable block (ram,0x00014001be13)
// WARNING: Removing unreachable block (ram,0x00014001be1a)
// WARNING: Removing unreachable block (ram,0x00014001bda9)

void FUN_14001bd40(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 in_XMM1 [16];
  undefined1 unaff_XMM6 [16];
  
  rcpps(in_XMM1,unaff_XMM6);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x00014001bebe) overlaps instruction at (ram,0x00014001bebd)
// 
// WARNING: Removing unreachable block (ram,0x00014001bebe)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14001bef0(longlong param_1,undefined2 param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  ushort uVar4;
  ulonglong in_RAX;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined4 *unaff_RDI;
  undefined2 in_CS;
  bool in_SF;
  longlong lVar5;
  byte bVar6;
  
  if (!in_SF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  bVar6 = (char)(in_RAX >> 8) - unaff_RSI[unaff_RBP * 4];
  uVar4 = CONCAT11(bVar6,*(undefined1 *)(CONCAT71(unaff_00000019,unaff_BL) + (in_RAX & 0xff)));
  if (param_1 + -1 != 0) {
    uVar3 = *(undefined1 *)(CONCAT71(unaff_00000019,unaff_BL) + ((ulonglong)uVar4 & 0xff));
    lVar5 = CONCAT71((int7)(CONCAT62((int6)(in_RAX >> 0x10),uVar4) >> 8),uVar3);
    if (bVar6 != 0) {
      *(undefined1 *)unaff_RDI = uVar3;
      pbVar1 = (byte *)(lVar5 + (param_1 + -1) * 8);
      *pbVar1 = *pbVar1 | bVar6;
      _DAT_128f53915 = _DAT_128f53915 >> 3 | _DAT_128f53915 << 0x1e;
      *(int *)((longlong)unaff_RDI + 1) = (int)lVar5;
      *(undefined2 *)((longlong)unaff_RDI + -0x34b196b3) = in_CS;
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    uVar2 = *(undefined4 *)((longlong)unaff_RDI + -0x61);
    *(undefined1 *)CONCAT71(unaff_00000019,unaff_BL) = 0;
    uVar2 = in((short)uVar2);
    *unaff_RDI = uVar2;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  out(*unaff_RSI,param_2);
  uVar3 = in(param_2);
  *(undefined1 *)unaff_RDI = uVar3;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001bf30(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001c000(longlong param_1)

{
  ulonglong uVar1;
  uint5 uVar2;
  longlong unaff_RBP;
  byte *unaff_RSI;
  byte *unaff_RDI;
  
  uVar2 = CONCAT14(*unaff_RSI < *unaff_RDI,*(uint *)(param_1 + -0x28898546));
  uVar1 = (ulonglong)uVar2 << 0x11;
  *(uint *)(param_1 + -0x28898546) = (uint)uVar1 | (uint)(uVar2 >> 0x10);
  *(byte *)(unaff_RBP + -0x1f) = ~*(byte *)(unaff_RBP + -0x1f);
  *(int *)(param_1 + 0x370f90ec) =
       (*(int *)(param_1 + 0x370f90ec) - (int)param_1) - (uint)((uVar1 & 0x100000000) != 0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001c0e0(void)

{
  longlong unaff_retaddr;
  
  *(undefined8 *)(unaff_retaddr + -8) = 0xf;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001c140(longlong param_1)

{
  undefined4 in_EAX;
  undefined4 *unaff_RDI;
  
  if (param_1 != 0) {
    *unaff_RDI = in_EAX;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Instruction at (ram,0x00014001c216) overlaps instruction at (ram,0x00014001c215)
// 
// WARNING: Control flow encountered bad instruction data

void FUN_14001c210(undefined8 param_1)

{
  code *pcVar1;
  int in_EAX;
  uint unaff_ESI;
  uint *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI | unaff_ESI;
  if ((int)*unaff_RDI < 1) {
    pcVar1 = (code *)swi(1);
    (*pcVar1)(param_1,in_EAX >> 0x1f);
    return;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x00014001c304) overlaps instruction at (ram,0x00014001c302)
// 

ulonglong FUN_14001c2f0(int *param_1,undefined1 *param_2)

{
  byte *pbVar1;
  uint *puVar2;
  undefined1 uVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  uint uVar5;
  uint uVar7;
  byte unaff_BL;
  byte bVar8;
  uint uVar9;
  char *unaff_RSI;
  undefined1 *unaff_RDI;
  bool bVar11;
  uint uVar6;
  uint uVar10;
  
  uVar4 = in_RAX | 0xd300;
  *param_1 = *param_1 - (int)param_2;
  bVar8 = unaff_BL ^ (byte)param_2;
  pbVar1 = param_2 + 0x4534066a;
  if ((SBORROW1(bVar8,*pbVar1)) && (*pbVar1 <= bVar8 && bVar8 != *pbVar1)) {
    while( true ) {
      puVar2 = (uint *)(param_2 + -0x67c1054e);
      uVar10 = (uint)unaff_RSI;
      bVar11 = uVar10 < *puVar2;
      uVar9 = uVar10 - *puVar2;
      unaff_RSI = (char *)(ulonglong)uVar9;
      if ((int)uVar9 < 0) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      if (!bVar11 && uVar9 != 0) {
        in((short)param_2);
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      if ((POPCOUNT(uVar9 & 0xff) & 1U) != 0) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      uVar3 = (undefined1)uVar4;
      if (SBORROW4(uVar10,*puVar2)) {
        if (uVar9 == 0) {
          *(int *)((longlong)param_1 + 0x7748d7bf) =
               *(int *)((longlong)param_1 + 0x7748d7bf) + (uint)bVar11;
          LOCK();
          *param_2 = (char)param_2;
          UNLOCK();
          return uVar4;
        }
        *(undefined8 **)register0x00000020 = (undefined8 *)((longlong)register0x00000020 + 8);
        if (!bVar11) {
          out((short)param_2,uVar3);
          LOCK();
          unaff_RDI[-0x58b0726a] = (char)*(undefined8 *)register0x00000020;
          UNLOCK();
          *(undefined8 *)register0x00000020 = 0xffffffffb45a727c;
          *unaff_RSI = *unaff_RSI + '\x01';
          return CONCAT71((int7)(uVar4 >> 8),DAT_1212749abe6c52bd);
        }
        *unaff_RDI = uVar3;
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      puVar2 = (uint *)(uVar4 - 0x29);
      uVar9 = *puVar2;
      uVar7 = (uint)param_2;
      uVar10 = *puVar2;
      param_2 = (undefined1 *)CONCAT44((int)((ulonglong)param_2 >> 0x20),uVar10);
      *puVar2 = *puVar2 + uVar7;
      uVar9 = (uint)CARRY4(uVar9,uVar7);
      uVar6 = (uint)param_1;
      uVar7 = uVar6 - uVar10;
      uVar5 = uVar7 - uVar9;
      param_1 = (int *)(ulonglong)uVar5;
      if (uVar6 < uVar10 || uVar7 < uVar9) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + 8);
      uVar4 = CONCAT62((int6)(uVar4 >> 0x10),CONCAT11(unaff_RDI[-0x7e],uVar3));
      if (uVar5 == 0 || (SBORROW4(uVar6,uVar10) != SBORROW4(uVar7,uVar9)) != (int)uVar5 < 0) break;
      out((short)uVar10,uVar3);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001c350(undefined8 param_1,longlong param_2)

{
  longlong in_RAX;
  uint unaff_EBX;
  
  *(uint *)(param_2 + 0x2f) = *(uint *)(param_2 + 0x2f) | unaff_EBX;
  *(char *)(in_RAX + 0x4f) = *(char *)(in_RAX + 0x4f) + (char)((ulonglong)param_2 >> 8);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



undefined1 FUN_14001c420(void)

{
  char *unaff_RSI;
  longlong unaff_RDI;
  undefined1 unaff_retaddr;
  
  LOCK();
  *(undefined1 *)(unaff_RDI + -0x58b0726a) = unaff_retaddr;
  UNLOCK();
  *unaff_RSI = *unaff_RSI + '\x01';
  return DAT_1212749abe6c52bd;
}



void FUN_14001c500(void)

{
  code *pcVar1;
  uint in_EAX;
  undefined1 unaff_BPL;
  undefined1 *unaff_RDI;
  
  *(int *)(ulonglong)in_EAX = *(int *)(ulonglong)in_EAX >> 1;
  *unaff_RDI = unaff_BPL;
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001c540(void)

{
  unkbyte10 *in_RAX;
  unkbyte10 in_ST0;
  
  *in_RAX = in_ST0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x00014001c632) overlaps instruction at (ram,0x00014001c631)
// 
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14001c610(undefined8 param_1,undefined8 param_2)

{
  uint *puVar1;
  uint in_EAX;
  byte bVar2;
  longlong unaff_RBP;
  longlong in_FS_OFFSET;
  longlong unaff_retaddr;
  
  bVar2 = (byte)((ulonglong)param_2 >> 8);
  puVar1 = (uint *)(in_FS_OFFSET +
                   (ulonglong)
                   CONCAT31((int3)((in_EAX & 0x4722d33f) >> 8),
                            (char)(in_EAX & 0x4722d33f) - (char)param_2) + 0x538d5deb);
  *puVar1 = *puVar1 ^ 0x38;
  if ((int)*puVar1 < 1) {
    do {
      bVar2 = bVar2 & *(byte *)(unaff_RBP + 0x6c671253);
    } while ((POPCOUNT(bVar2) & 1U) != 0);
    in(0x19);
    *(char *)(unaff_retaddr + -0x3c) = *(char *)(unaff_retaddr + -0x3c) + '\x01';
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001c6f0(void)

{
  bool in_SF;
  
  if (!in_SF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_14001c750(void)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 *unaff_RDI;
  undefined4 uStackX_8;
  
  uVar2 = uStackX_8 ^ 0xedfecc76;
  if ((POPCOUNT(uVar2 & 0xff) & 1U) != 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  uVar1 = in(0x8a9);
  *unaff_RDI = uVar1;
  return CONCAT31((int3)(uVar2 >> 8),(char)uVar2 + '\x19');
}



void FUN_14001c820(undefined8 param_1,longlong param_2)

{
  undefined4 in_EAX;
  byte unaff_R12B;
  
  *(uint *)(param_2 + -0x7f057245) =
       *(uint *)(param_2 + -0x7f057245) & CONCAT31((int3)((uint)in_EAX >> 8),DAT_236b2f411ab956cc);
  DAT_11de1aaaa = DAT_11de1aaaa | unaff_R12B;
  return;
}



// WARNING: Control flow encountered bad instruction data

void thunk_EXT_FUN_139be166f(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



int FUN_14001c940(void)

{
  int in_EAX;
  uint *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI | (uint)&stack0xfffffffffffffff0;
  return in_EAX + -0x296461e7;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x00014001ca69) overlaps instruction at (ram,0x00014001ca67)
// 
// WARNING: Removing unreachable block (ram,0x00014001c9d7)
// WARNING: Removing unreachable block (ram,0x00014001ca58)
// WARNING: Removing unreachable block (ram,0x00014001ca6c)
// WARNING: Removing unreachable block (ram,0x00014001ca6f)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14001ca10(ulonglong param_1,undefined8 param_2)

{
  byte *pbVar1;
  uint *puVar2;
  byte bVar3;
  undefined1 uVar4;
  char cVar5;
  char *pcVar6;
  longlong lVar7;
  char cVar8;
  uint uVar9;
  int *piVar10;
  undefined1 uVar11;
  undefined2 uVar12;
  undefined8 *puVar13;
  undefined8 *unaff_RBP;
  longlong unaff_RDI;
  undefined2 *in_R10;
  undefined2 in_GS;
  bool bVar14;
  longlong unaff_retaddr;
  longlong lStackX_8;
  
  uVar11 = (undefined1)((ulonglong)param_2 >> 8);
  uVar12 = (undefined2)((ulonglong)param_2 >> 0x10);
  uVar9 = func_0x00013044ecf9();
  DAT_0b3d361c = DAT_0b3d361c | (byte)(uVar9 >> 8);
  if (DAT_0b3d361c == 0) {
    if ((uVar9 & 0x21f43cde) == 0) {
      *(uint *)(param_1 & 0xffffffff) = *(uint *)(param_1 & 0xffffffff) & 0xffffffab;
      cVar5 = DAT_115253fee;
      DAT_115253fee = DAT_115253fee + '\x01';
                    // WARNING: Bad instruction - Truncating control flow here
      *(longlong *)(unaff_retaddr + -8) = unaff_retaddr;
      if (cVar5 < -1) {
        *(uint *)((longlong)unaff_RBP + 0x23) = *(uint *)((longlong)unaff_RBP + 0x23) ^ 0xf97c54d5;
      }
      out(0xe2,0x76);
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  (**(code **)(unaff_retaddr + -0x2ebe3a77))();
  cVar5 = cRamd96adbf07b51dac8;
  *in_R10 = in_GS;
  cVar8 = cVar5 + '\x03';
  if ((POPCOUNT(cVar8) & 1U) != 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  bVar14 = bRam000000000b3d35f0 < *(byte *)(unaff_RDI + -6);
  *(undefined1 **)(lStackX_8 + -8) = (undefined1 *)(unaff_RDI + -7);
  cVar5 = cVar5 + '=';
  *(undefined8 **)(lStackX_8 + -0x10) = unaff_RBP;
  uVar4 = in(CONCAT11(uVar11,0x3a));
  *(undefined1 *)(unaff_RDI + -7) = uVar4;
  pcVar6 = *(char **)(lStackX_8 + -0x10);
  *(char **)(lStackX_8 + -0x10) = pcVar6;
  if ((SCARRY1(cVar8,':') != SCARRY1(cVar5,bVar14)) == (char)(cVar5 + bVar14) < '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  lVar7 = *(longlong *)(lStackX_8 + -0x10);
  pbVar1 = (byte *)(unaff_retaddr + 0x7d);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + 0x11;
  if (bVar3 < 0xef) {
    out(*pcVar6,CONCAT11(uVar11,0x3a));
    puVar2 = (uint *)((longlong)unaff_RBP * 2 + 0xecffc988);
    *puVar2 = *puVar2 | CONCAT22(uVar12,CONCAT11(uVar11,0x3a));
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *(undefined4 *)(unaff_RDI + -8) = 0xb3d35ef;
  puVar13 = (undefined8 *)(lVar7 + -8);
  *(undefined8 **)(lVar7 + -8) = unaff_RBP;
  cVar5 = '\n';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar13 = puVar13 + -1;
    *puVar13 = *unaff_RBP;
    cVar5 = cVar5 + -1;
  } while ('\0' < cVar5);
  *(longlong *)(lVar7 + -0x60) = lVar7 + -8;
  cRam00000000ecffc92f = cRam00000000ecffc92f + '\x01';
  uVar9 = *(uint *)((longlong)(pcVar6 + -1) * 4 + 0xecffc92f);
  piVar10 = (int *)CONCAT71(0xb3d35,*pcVar6 - cRam00000000ecffc92f);
  *piVar10 = *piVar10 + 1;
  *(undefined4 *)(unaff_RDI + -0xc) = *(undefined4 *)(ulonglong)((uint)(pcVar6 + -1) | uVar9);
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001caf0(void)

{
  undefined1 *unaff_RDI;
  undefined1 unaff_retaddr;
  
  *(uint *)(unaff_RDI + -0x7bed4e67) = *(uint *)(unaff_RDI + -0x7bed4e67) >> 1;
  *unaff_RDI = unaff_retaddr;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x00014001cc80) overlaps instruction at (ram,0x00014001cc7e)
// 
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14001cc00(longlong param_1,longlong param_2)

{
  uint *puVar1;
  int in_EAX;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  longlong unaff_GS_OFFSET;
  undefined8 unaff_retaddr;
  
  uVar4 = param_1 - 1;
  if (uVar4 != 0 && in_EAX != -0x117aa148) {
    return;
  }
  bVar3 = (byte)uVar4;
  if (in_EAX != -0x117aa148) {
    puVar1 = (uint *)(param_2 + -9 + uVar4 * 8);
    *puVar1 = *puVar1 << (bVar3 & 0x1f) | *puVar1 >> 0x20 - (bVar3 & 0x1f);
    *unaff_RDI = *unaff_RSI;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  out((short)unaff_retaddr,_DAT_53f393fb1cd27d69);
  UNRECOVERED_JUMPTABLE =
       (code *)(ulonglong)
               ((int)uVar4 + *(int *)(unaff_GS_OFFSET + param_1 + 0x6fe47ed6) +
               (uint)((uVar4 & 0x1f) != 0 && _DAT_e5a2daab << (bVar3 & 0x1f) - 1 < 0));
  _DAT_e5a2daab = _DAT_e5a2daab << (bVar3 & 0x1f);
  lVar2 = func_0xdcc0e4f4(UNRECOVERED_JUMPTABLE,
                          CONCAT11((byte)((ulonglong)unaff_retaddr >> 8) | bVar3,(char)unaff_retaddr
                                  ));
  *(byte *)(lVar2 + 0x3b) = *(byte *)(lVar2 + 0x3b) & 0xdb;
  func_0x0001a9a1664a();
                    // WARNING: Could not recover jumptable at 0x00014001cc87. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001cce0(void)

{
  undefined4 in_EAX;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = in_EAX;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001cd20(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001cdf0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001ced0(longlong param_1)

{
  int *piVar1;
  longlong in_RAX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  
  *(char *)(param_1 + 0x29175a99) = *(char *)(param_1 + 0x29175a99) - (char)((ulonglong)in_RAX >> 8)
  ;
  if (param_1 == 1 || *(int *)(unaff_RDI + -0x1989caf3) != (int)param_1) {
    in(0x87);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  out(0x73,(char)in_RAX);
  piVar1 = (int *)(unaff_RBP + 0x5d + in_RAX * 2);
  *piVar1 = *piVar1 + 1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001cfe0(void)

{
  longlong unaff_RSI;
  byte in_CF;
  
  *(int *)(unaff_RSI + 0x41) = *(int *)(unaff_RSI + 0x41) + (int)unaff_RSI + (uint)in_CF;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



undefined4 FUN_14001d0c0(longlong param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined2 in_AX;
  longlong unaff_RBX;
  uint *unaff_RSI;
  byte in_CF;
  
  *(char *)(param_1 + 0x435571f2) =
       *(char *)(param_1 + 0x435571f2) + 'i' +
       (0xc474b7ae < param_2 || CARRY4(param_2 + 0x3b8b4851,(uint)in_CF));
  uVar2 = *unaff_RSI;
  puVar1 = (uint *)((ulonglong)uVar2 + 0x173bcc0e + unaff_RBX * 2);
  *puVar1 = *puVar1 | (uint)(unaff_RSI + 1);
  out(unaff_RSI[1],in_AX);
  return CONCAT31((int3)(uVar2 >> 8),(char)uVar2 + 'm');
}



void FUN_14001d100(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined1 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  pcVar2 = (code *)swi(3);
  (*pcVar2)(param_1,(char)param_2 << 1);
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001d2b0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x00014001d2a5)

void FUN_14001d2f0(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 in_AL;
  undefined1 *unaff_RDI;
  
  uVar1 = in((undefined2)param_2);
  *unaff_RDI = uVar1;
  out(0xe5,in_AL);
  in(0x6c);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14001d3c0(uint *param_1,undefined2 param_2)

{
  uint *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  int in_EAX;
  ulonglong uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint *unaff_RBX;
  undefined8 *puVar8;
  longlong unaff_RBP;
  uint *unaff_RSI;
  uint *puVar9;
  uint *unaff_RDI;
  uint *puVar10;
  undefined2 in_GS;
  bool bVar11;
  bool bVar12;
  ulonglong uStack_8;
  
  out(param_2,(char)in_EAX);
  puVar10 = unaff_RDI + 1;
  puVar9 = unaff_RSI + 1;
  uVar5 = (ulonglong)(in_EAX + 0x405464ca + (uint)(*unaff_RSI < *unaff_RDI));
  puVar3 = (undefined8 *)register0x00000020;
  do {
    puVar8 = puVar3;
    pcVar2 = *(code **)((uVar5 - 0x25c92ab3) + (longlong)puVar9 * 2);
    puVar8[-1] = 0x14001d3ce;
    uVar5 = (*pcVar2)();
    bVar11 = false;
    uVar6 = (uint)param_1 ^ *param_1;
    bVar12 = uVar6 == 0;
    puVar1 = puVar10 + 1;
    *puVar10 = (uint)CONCAT71((int7)(uVar5 >> 8),
                              *(undefined1 *)((longlong)unaff_RBX + (uVar5 & 0xff)));
    uVar7 = *puVar8;
    param_1 = (uint *)((ulonglong)uVar6 - 1);
    if (param_1 != (uint *)0x0 && bVar12) {
      in((short)uVar7);
      *puVar8 = 0xffffffffbacd11d8;
      *(int *)(unaff_RBP + 0x3d) = *(int *)(unaff_RBP + 0x3d) >> 1;
      uVar6 = *unaff_RBX;
      *unaff_RBX = *unaff_RBX + 0xab1f17ff;
      _DAT_6da9e974 = _DAT_6da9e974 + ((uint)unaff_RBP & 0x54e0e801) + (uint)(uVar6 < 0x54e0e801);
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    *puVar8 = 0x14001d3dd;
    uVar4 = func_0x000129d6145b();
    puVar10 = (uint *)((longlong)puVar10 + 5);
    *(undefined1 *)puVar1 = uVar4;
    uVar5 = (ulonglong)puVar9 & 0xffffffff;
    puVar9 = (uint *)(puVar8[1] & 0xffffffff);
    puVar3 = puVar8 + 2;
  } while (!bVar11 && !bVar12);
  if (bVar11) {
    puVar8[2] = 0x62d1ac64;
    *(int *)(unaff_RBP + -0x3b6fffb5) = *(int *)(unaff_RBP + -0x3b6fffb5) + -1;
    uVar6 = *puVar9;
    *(undefined2 *)((ulonglong)uVar6 + 0x5b) = in_GS;
    out((short)uVar7,(char)uVar6);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  puVar8[1] = param_1;
  *puVar8 = uVar7;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001d500(void)

{
  char in_SF;
  char in_OF;
  
  if (in_OF == in_SF) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001d580(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001d6c0(void)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  undefined8 uStack_10;
  
  puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\x1c';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: This function may have set the stack pointer
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14001d800(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  uint in_EAX;
  byte bVar4;
  int unaff_EBP;
  undefined4 unaff_ESI;
  byte in_CF;
  
  bVar4 = (byte)((ulonglong)param_2 >> 8);
  *(ulonglong *)(((ulonglong)&stack0x00000000 & 0xffffffff) - 8) = (ulonglong)in_EAX;
  *(int *)(param_2 + -0x18f7d91a) = *(int *)(param_2 + -0x18f7d91a) + in_EAX + (uint)in_CF;
  pbVar1 = (byte *)(param_2 + -0x40);
  bVar2 = *pbVar1;
  _DAT_9fbd6914a9a3b0ae = unaff_ESI;
  *pbVar1 = *pbVar1 - bVar4;
  *(int *)(param_2 + 0x28) = (*(int *)(param_2 + 0x28) - unaff_EBP) - (uint)(bVar2 < bVar4);
  pcVar3 = (code *)swi(1);
  (*pcVar3)();
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001d880(longlong param_1)

{
  byte bVar1;
  byte in_AL;
  undefined1 uVar2;
  undefined7 in_register_00000001;
  undefined4 unaff_EBX;
  undefined4 unaff_0000001c;
  
  uVar2 = *(undefined1 *)(CONCAT44(unaff_0000001c,unaff_EBX) + (ulonglong)in_AL);
  *(undefined4 *)(param_1 + 0x3416d500) = unaff_EBX;
  bVar1 = *(byte *)CONCAT71(in_register_00000001,uVar2);
  *(byte *)CONCAT71(in_register_00000001,uVar2) =
       *(byte *)CONCAT71(in_register_00000001,uVar2) >> 1 | bVar1 << 7;
  if (!(bool)(bVar1 & 1)) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_14001d9c0(undefined8 param_1,byte param_2,longlong param_3)

{
  int in_EAX;
  ulonglong uVar1;
  longlong unaff_RBX;
  ulonglong unaff_retaddr;
  
  uVar1 = (ulonglong)
          CONCAT31((int3)((in_EAX + -0x70db271e) - (uint)((unaff_retaddr & 1) != 0) >> 8),
                   DAT_fc8f0998c1adce86);
                    // WARNING: Could not recover jumptable at 0x00014001d9d5. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(param_3 + -0x42f8ff26))(param_1,param_2 ^ *(byte *)(uVar1 + unaff_RBX),uVar1);
  return;
}



void FUN_14001db00(longlong param_1,undefined2 param_2)

{
  undefined1 uVar1;
  int in_EAX;
  uint *puVar2;
  undefined1 *unaff_RDI;
  byte in_CF;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  puVar2 = (uint *)(param_1 + -1);
  if (puVar2 == (uint *)0x0 || in_EAX + 0xb284a4afU == (uint)in_CF) {
    return;
  }
                    // WARNING: Could not recover jumptable at 0x00014001daba. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(ulonglong)*puVar2)(puVar2,0x8fc04a8d);
  return;
}



undefined4 FUN_14001db80(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  uint in_EAX;
  uint *unaff_RDI;
  
  uVar1 = in(param_2);
  return CONCAT31((int3)((in_EAX + 0xa68d398c) - (uint)(*unaff_RDI < in_EAX) >> 8),uVar1);
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001dcc0(void)

{
  code *pcVar1;
  undefined1 in_PF;
  
  pcVar1 = (code *)swi(0xa3);
  (*pcVar1)();
  if (!(bool)in_PF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_14001de00(void)

{
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001de80(void)

{
  int *in_RAX;
  int unaff_EBX;
  
  *in_RAX = *in_RAX - unaff_EBX;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14001dfc0(void)

{
  undefined4 in_EAX;
  undefined1 *unaff_RSI;
  undefined4 *unaff_RDI;
  bool in_ZF;
  
  if (!in_ZF) {
    return;
  }
  _DAT_1340a65b7 = _DAT_1340a65b7 | (uint)unaff_RDI;
  *unaff_RDI = CONCAT31((int3)((uint)in_EAX >> 8),*unaff_RSI);
  in(0xb5);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001e100(undefined8 param_1,undefined2 param_2)

{
  in(param_2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_14001e180(void)

{
  return;
}



void FUN_14001e2c0(longlong param_1,byte param_2)

{
  byte bVar1;
  undefined4 in_EAX;
  byte *unaff_RDI;
  byte in_CF;
  bool bVar2;
  
  while( true ) {
    bVar2 = CARRY1(*unaff_RDI,param_2);
    bVar1 = *unaff_RDI + param_2;
    *unaff_RDI = bVar1 + in_CF;
    param_1 = param_1 + -1;
    if (param_1 == 0 || *unaff_RDI != 0) break;
    param_2 = 0x7c;
    out(0x2a,in_EAX);
    in_CF = bVar2 || CARRY1(bVar1,in_CF);
  }
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001e400(void)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  short sVar6;
  undefined4 *unaff_RDI;
  
  pcVar2 = (code *)swi(0x22);
  puVar4 = (undefined4 *)(*pcVar2)();
  *puVar4 = 0x5f4d4074;
  iVar3 = (int)CONCAT71((int7)((ulonglong)puVar4 >> 8),(char)puVar4 + 'b');
  sVar6 = (short)((ulonglong)puVar4 >> 0x10) >> 0xf;
  out(sVar6,iVar3);
  pcVar5 = (char *)(ulonglong)(iVar3 + 0x8cf2f42a);
  uVar1 = in(sVar6);
  *unaff_RDI = uVar1;
  *pcVar5 = *pcVar5 + '\x01';
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Instruction at (ram,0x00014001e492) overlaps instruction at (ram,0x00014001e491)
// 
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_14001e480(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  undefined1 uVar5;
  byte bVar9;
  short sVar6;
  uint in_EAX;
  uint uVar7;
  ulonglong uVar8;
  byte bVar10;
  char cVar11;
  longlong *unaff_RBX;
  undefined8 *puVar12;
  undefined1 *puVar14;
  undefined8 *unaff_RBP;
  uint *unaff_RSI;
  uint *puVar15;
  uint *unaff_RDI;
  uint *puVar16;
  ulonglong in_R10;
  ulonglong uVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  undefined8 uStack_20;
  undefined8 *puVar13;
  
  bVar10 = (byte)((ulonglong)param_2 >> 8);
  uVar7 = in_EAX | 0x9420ad91;
  bVar9 = (byte)uVar7;
  bVar18 = bVar9 < 0xb9;
  if ((POPCOUNT(bVar9 + 0x47) & 1U) == 0) {
    sVar6 = (ushort)bVar9 * (ushort)*(byte *)(param_2 + -0x4f + (ulonglong)uVar7 * 4);
    bVar18 = (char)((ushort)sVar6 >> 8) != '\0';
    puVar16 = (uint *)(ulonglong)CONCAT22((short)(uVar7 >> 0x10),sVar6);
    puVar15 = unaff_RSI;
    if (!bVar18 && (byte)(bVar9 + 0x47) != '\0') {
      return 0x61200abc;
    }
  }
  else {
    puVar15 = (uint *)(ulonglong)uVar7;
    puVar16 = unaff_RDI;
    unaff_RDI = unaff_RSI;
  }
  uVar8 = (ulonglong)unaff_RDI & 0xffffffff;
  bVar4 = (byte)uVar8;
  bVar9 = bVar10 - bVar4;
  bVar19 = bVar10 < bVar4 || bVar9 < bVar18;
  bVar21 = SBORROW1(bVar10,bVar4) != SBORROW1(bVar9,bVar18);
  cVar11 = bVar9 - bVar18;
  bVar20 = cVar11 < '\0';
  bVar18 = cVar11 == '\0';
  puVar14 = &stack0xffffffffffffffe8;
  puVar13 = (undefined8 *)&stack0xffffffffffffffe8;
  cVar3 = '\x1d';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar13 = puVar13 + -1;
    *puVar13 = *unaff_RBP;
    cVar3 = cVar3 + -1;
  } while ('\0' < cVar3);
  while( true ) {
    *(undefined1 **)(puVar14 + -0xf0) = &stack0xffffffffffffffe8;
    puVar12 = (undefined8 *)(puVar14 + -0xf978);
    *puVar16 = *puVar15;
    if (!bVar18 && bVar21 == bVar20) {
      return 0x61200abc;
    }
    puVar15 = (uint *)(param_1 + 0xdcbffa);
    uVar7 = *puVar15;
    uVar2 = *puVar15 - (uint)unaff_RBX;
    *puVar15 = uVar2 - bVar19;
    if (param_1 == 0) {
      return CONCAT62((int6)(uVar8 >> 0x10),CONCAT11(0x6f,(char)uVar8));
    }
    uVar7 = (int)uVar8 + 0x2bc5a773 + (uint)(uVar7 < (uint)unaff_RBX || uVar2 < bVar19);
    uVar8 = (ulonglong)uVar7;
    if (param_1 + -1 != 0) {
      *unaff_RBX = (longlong)(&stack0xffffffffffffffe8 + *unaff_RBX);
      puVar16[1] = uVar7;
      pbVar1 = (byte *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(cVar11,(char)param_2))
                       + 0x6022ecde);
      *pbVar1 = *pbVar1 - (char)(param_1 + -1);
      bVar9 = *pbVar1;
      *(undefined1 **)(puVar14 + -0xf980) = &stack0xffffffffffffffe8;
      while (-1 < (char)bVar9) {
        uVar5 = in(CONCAT11(cVar11,(char)param_2));
        bVar9 = (byte)(uVar8 >> 8) & *(byte *)(CONCAT71((int7)(uVar8 >> 8),uVar5) + 0x55);
        uVar8 = CONCAT62((int6)(uVar8 >> 0x10),CONCAT11(bVar9,uVar5));
      }
      return uVar8;
    }
    cVar11 = -0x3c;
    bVar19 = in_R10 < _DAT_c9c0fd07;
    bVar21 = SBORROW8(in_R10,_DAT_c9c0fd07);
    uVar17 = in_R10 - _DAT_c9c0fd07;
    bVar20 = (longlong)uVar17 < 0;
    bVar18 = uVar17 == 0;
    if (bVar18 || (longlong)in_R10 < (longlong)_DAT_c9c0fd07) break;
    uVar8 = (ulonglong)CONCAT31((int3)((ulonglong)unaff_RBX >> 8),0x30);
    puVar15 = *(uint **)(puVar14 + -0xf970);
    puVar14 = puVar14 + -0xf968;
    param_1 = 0;
    unaff_RBX = (longlong *)
                (CONCAT62((int6)((ulonglong)*puVar12 >> 0x10),CONCAT11(0x30,(char)*puVar12 + -0x3a))
                & 0xffffffff);
    puVar16 = puVar16 + 1;
    in_R10 = uVar17;
  }
  return (ulonglong)unaff_RBX & 0xffffffff;
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001e5c0(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined1 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001e700(void)

{
  bool in_PF;
  
  if (in_PF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x00014001e74b) overlaps instruction at (ram,0x00014001e749)
// 
// WARNING: This function may have set the stack pointer
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14001e780(longlong param_1,undefined2 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  code *pcVar4;
  uint *in_RAX;
  undefined4 *unaff_RDI;
  byte in_AF;
  char in_SF;
  byte in_TF;
  byte in_IF;
  char in_OF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  
  if (in_OF == in_SF) {
    uVar2 = in(param_2);
    *unaff_RDI = uVar2;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *(uint *)((longlong)unaff_RDI + 0x22) = *(uint *)((longlong)unaff_RDI + 0x22) | (uint)unaff_RDI;
  uVar1 = *in_RAX;
  uVar3 = uVar1 + 0xb8f896ed;
  _DAT_a4de8859 =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW4(uVar1,0x47076913) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)((int)uVar3 < 0) * 0x80 | (ulonglong)(uVar3 == 0) * 0x40 |
       (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar3 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(uVar1 < 0x47076913) | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  if (param_1 != 0) {
    pcVar4 = (code *)swi(1);
    (*pcVar4)();
    return;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001ea50(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001ec30(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001ed70(undefined8 param_1,undefined2 param_2)

{
  int *piVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  int unaff_EDI;
  byte in_CF;
  bool in_PF;
  
  if (in_PF) {
    in(param_2);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  piVar1 = (int *)(CONCAT71(in_register_00000001,in_AL) + -0xe);
  *piVar1 = *piVar1 + unaff_EDI + (uint)in_CF;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001edf0(int *param_1,undefined2 param_2)

{
  int *piVar1;
  undefined1 in_AL;
  undefined1 uVar2;
  undefined1 *unaff_RDI;
  bool bVar3;
  
  uVar2 = in(param_2);
  *unaff_RDI = uVar2;
  piVar1 = param_1 + 8;
  bVar3 = (char)*piVar1 < '\0';
  *(char *)piVar1 = (char)*piVar1 << 1;
  out(0xcc,in_AL);
  uVar2 = func_0x000164666617();
  if (!bVar3) {
    out(0xa5,uVar2);
    *param_1 = *param_1 << 1;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001ef30(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



uint FUN_14001f070(void)

{
  undefined4 unaff_EBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  *(undefined4 *)(unaff_RSI + -0x21324477) = unaff_EBX;
  *(char *)(unaff_RBP + -0x7c) = *(char *)(unaff_RBP + -0x7c) << 1;
  return (uint)unaff_RSI & 0xb356bea6;
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001f0f0(uint param_1,longlong param_2)

{
  char *pcVar1;
  undefined1 in_AL;
  undefined4 *unaff_RSI;
  undefined1 *unaff_RDI;
  char in_CF;
  
  out((short)param_2,in_AL);
  pcVar1 = (char *)(param_2 + 0x8cb2357);
  *pcVar1 = *pcVar1 + (char)(param_1 >> 8) + in_CF;
  if (-1 < *pcVar1) {
    *unaff_RDI = in_AL;
    *(uint *)(unaff_RDI + -0x405f07d9) = *(uint *)(unaff_RDI + -0x405f07d9) | param_1;
    *(undefined4 *)(unaff_RDI + 1) = *unaff_RSI;
    out(*(undefined1 *)(unaff_RSI + 1),(short)param_2);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001f370(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001f3f0(longlong param_1)

{
  undefined4 in_EAX;
  longlong unaff_RBX;
  bool in_CF;
  
  if (!in_CF) {
    if (param_1 != 1) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    *(char *)(unaff_RBX + -0x13) = *(char *)(unaff_RBX + -0x13) - (char)((uint)in_EAX >> 8);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001f530(longlong param_1)

{
  longlong unaff_RBP;
  
  LOCK();
  *(char *)(param_1 + -0x4c + unaff_RBP) = (char)((ulonglong)param_1 >> 8);
  UNLOCK();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001f6f0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001f830(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined1 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_14001f970(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001f9f0(longlong param_1,int param_2)

{
  uint *puVar1;
  longlong unaff_RBP;
  byte in_CF;
  
  *(int *)(unaff_RBP + -0x6a2f1f89) = (*(int *)(unaff_RBP + -0x6a2f1f89) - param_2) - (uint)in_CF;
  if (param_1 != 0) {
    puVar1 = (uint *)(param_1 + -0x54);
    *puVar1 = *puVar1 << 0xe | *puVar1 >> 0x12;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001fc70(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001fcf0(byte param_1,undefined2 param_2)

{
  byte *pbVar1;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int *unaff_RSI;
  
  pbVar1 = (byte *)(unaff_RBX + 0x36 + unaff_RBP * 2);
  *pbVar1 = *pbVar1 | 0xe7;
  *unaff_RSI = *unaff_RSI >> (param_1 & 0x1f);
  in(param_2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001fe30(void)

{
  bool in_CF;
  bool in_ZF;
  
  if (in_CF || in_ZF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14001ff70(uint param_1,undefined8 param_2)

{
  byte *pbVar1;
  int *piVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  byte bVar7;
  int in_EAX;
  int iVar8;
  undefined4 uVar9;
  ulonglong *unaff_RBP;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  undefined1 in_R11B;
  undefined1 *unaff_R14;
  
  uVar9 = (undefined4)((ulonglong)param_2 >> 0x20);
  lVar6 = (longlong)
          *(int *)(CONCAT44(unaff_00000034,unaff_ESI) + -0x34eec4d6 + (*unaff_RBP & 0xffffffff) * 2)
          * -0x2a;
  iVar8 = CONCAT31((int3)((ulonglong)param_2 >> 8),0x93);
  pbVar1 = (byte *)(CONCAT44(unaff_00000034,unaff_ESI) + -0x7d);
  bVar7 = (byte)param_1 & 0x1f;
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 >> bVar7;
  bVar5 = (param_1 & 0x1f) != 0;
  bVar4 = (param_1 & 0x1f) != 0;
  if ((bVar4 || -1 < in_EAX + -0x60c4ad7a) && (!bVar4 || -1 < (char)*pbVar1)) {
    piVar2 = (int *)(CONCAT44(uVar9,iVar8) + 7);
    *piVar2 = (*piVar2 - iVar8) -
              (uint)(!bVar5 && (int)lVar6 != lVar6 || bVar5 && (bVar3 >> bVar7 - 1 & 1) != 0);
    LOCK();
    *(uint *)(CONCAT44(uVar9,iVar8) + -0x713af447) = param_1;
    UNLOCK();
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *unaff_R14 = in_R11B;
  in(0x1d);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_140020130(undefined8 param_1)

{
  char cVar1;
  code *pcVar2;
  byte unaff_BL;
  undefined8 *puVar3;
  undefined8 *unaff_RBP;
  byte *unaff_RSI;
  undefined1 auStack_3722 [13962];
  undefined1 *puStack_98;
  int local_1b;
  undefined8 uStack_10;
  
  puStack_98 = &stack0xfffffffffffffff8;
  puVar3 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\x11';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar3 = puVar3 + -1;
    *puVar3 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  local_1b = (int)auStack_3722 + -0x88;
  *unaff_RSI = *unaff_RSI & unaff_BL;
  pcVar2 = (code *)swi(1);
  (*pcVar2)(param_1,0x50f36666);
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140020270(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400202f0(longlong param_1,int *param_2)

{
  uint *puVar1;
  short in_AX;
  int unaff_EBP;
  longlong unaff_RSI;
  int unaff_EDI;
  
  *(int *)(param_1 + 0x19029455) = *(int *)(param_1 + 0x19029455) + unaff_EBP;
  *param_2 = *param_2 + unaff_EDI +
             (uint)CARRY4((uint)unaff_RSI,*(uint *)(&stack0x00000000 + unaff_RSI * 2));
  out(CONCAT11(100,(char)param_2),(int)in_AX);
  puVar1 = (uint *)(param_1 + 0x1c);
  *puVar1 = *puVar1 >> 6 | *puVar1 << 0x1a;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400205f0(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined1 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  LOCK();
  *unaff_RSI = unaff_BL;
  UNLOCK();
  LOCK();
  *(undefined1 *)CONCAT44(in_register_00000004,in_EAX) = unaff_BH;
  UNLOCK();
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140020870(void)

{
  uint *puVar1;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  int unaff_EBX;
  uint unaff_EBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
  puVar1 = (uint *)(CONCAT44(in_register_00000004,in_EAX) + 0x801301e);
  *puVar1 = *puVar1 | unaff_EBP;
  _DAT_682d52a78ecbb7f1 = in_EAX;
  out(*(undefined1 *)(ulonglong)(unaff_EBX + 0xa5ed8080U),(short)(unaff_EBX + 0xa5ed8080U));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400208f0(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_AL;
  byte *unaff_RSI;
  longlong unaff_RDI;
  
  *unaff_RSI = *unaff_RSI & (byte)((ulonglong)param_1 >> 8);
  *(char *)(unaff_RDI + 0x26) = *(char *)(unaff_RDI + 0x26) + (char)((ulonglong)param_2 >> 8);
  out(0xb6,in_AL);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_140020b70(void)

{
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x000140020bf3) overlaps instruction at (ram,0x000140020bf2)
// 

void FUN_140020bf0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 in_RAX;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined6 uVar6;
  uint uVar7;
  byte *unaff_RBX;
  uint uVar8;
  longlong unaff_RBP;
  longlong unaff_RSI;
  int *piVar9;
  int *unaff_RDI;
  bool bVar10;
  char in_ZF;
  bool bVar11;
  bool bVar12;
  
  uVar4 = (undefined1)param_2;
  uVar5 = (undefined1)((ulonglong)param_2 >> 8);
  uVar6 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar2 = (undefined1)in_RAX;
  if (param_1 != 1 && in_ZF == '\0') {
    if (param_1 != 2) {
      return;
    }
    DAT_5e687c1d59d6b775 = uVar5;
    cVar1 = in(0x90);
    iVar3 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1);
    bVar10 = iVar3 == *unaff_RDI;
    if (!bVar10) {
      if (bVar10) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      bVar12 = SCARRY1(cVar1,'~');
      cVar1 = cVar1 + '~';
      bVar11 = cVar1 < '\0';
      bVar10 = cVar1 == '\0';
      piVar9 = unaff_RDI + 1;
      while( true ) {
        if (!bVar10 && bVar12 == bVar11) {
          *(undefined1 *)CONCAT62(uVar6,CONCAT11(uVar2,uVar4)) = 0x7d;
          out(0xd8,cVar1);
          cRam3fc50c3b2dda8c67 = cVar1;
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
        uVar7 = (int)unaff_RBX + *(int *)(unaff_RSI + -0x6de95f);
        uVar8 = (uint)register0x00000020 |
                *(uint *)(CONCAT62(uVar6,CONCAT11(uVar2,uVar4)) + 0x7b4701e);
        *(int *)(ulonglong)uVar7 = *(int *)(ulonglong)uVar7 - uVar7;
        *(undefined1 *)(unaff_RBP + -0x2c9fcb99) = uVar4;
        iVar3 = in(CONCAT11(uVar2,uVar4));
        *piVar9 = iVar3;
        *(char *)(unaff_RBP + -0x71fcb92b) = *(char *)(unaff_RBP + -0x71fcb92b) + -0x68;
        unaff_RBX = (byte *)(ulonglong)uVar7;
        uVar7 = (uint)(*unaff_RBX < (byte)uVar7);
        iVar3 = uVar8 - *(int *)(unaff_RBP + -0x6347ef9c);
        bVar12 = SBORROW4(uVar8,*(int *)(unaff_RBP + -0x6347ef9c)) != SBORROW4(iVar3,uVar7);
        uVar7 = iVar3 - uVar7;
        register0x00000020 = (BADSPACEBASE *)(ulonglong)uVar7;
        bVar11 = (int)uVar7 < 0;
        bVar10 = uVar7 == 0;
        if (!bVar12) break;
        *(char *)(unaff_RSI + (longlong)(piVar9 + 1) * 2) = cVar1;
        piVar9 = piVar9 + 1;
      }
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    if (!bVar10 && *unaff_RDI <= iVar3) {
      *(undefined1 *)(unaff_RBP + -0x72f8ae9a) = *(undefined1 *)(unaff_RBP + -0x72f8ae9a);
      out(0xc4,cVar1);
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140020d30(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140020e70(void)

{
  uint uVar1;
  undefined8 in_RAX;
  longlong unaff_RBX;
  uint unaff_ESP;
  undefined1 *unaff_RSI;
  
  uVar1 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),*unaff_RSI) & *(uint *)(unaff_RSI + 1);
  out(0xa9,uVar1);
  if ((uVar1 & 0x3cbc3c1a) != 0) {
    *(uint *)(unaff_RBX + -0x5b) = *(uint *)(unaff_RBX + -0x5b) | unaff_ESP;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140020ef0(void)

{
  int in_EAX;
  longlong unaff_RDI;
  
  *(int *)(unaff_RDI + -0x20) = *(int *)(unaff_RDI + -0x20) + in_EAX;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140021030(char param_1,undefined2 param_2)

{
  code *pcVar1;
  longlong unaff_RBX;
  
  in(param_2);
  pcVar1 = (code *)swi(0x17);
  (*pcVar1)(param_1 + (&stack0xffffffffbc7edcb1)[unaff_RBX * 2]);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Instruction at (ram,0x00014002111f) overlaps instruction at (ram,0x00014002111e)
// 
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140021110(uint param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  char unaff_BH;
  longlong unaff_RSI;
  bool bVar4;
  bool in_PF;
  byte bVar3;
  
  if (!in_PF) {
    unaff_RSI = 0xec69095f;
  }
  bVar4 = param_1 < _DAT_f308be53;
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x5a);
  bVar2 = *pbVar1;
  bVar3 = *pbVar1;
  *pbVar1 = bVar3 + in_AH + bVar4;
  *(char *)(unaff_RSI + -0x1396f6a1) =
       (*(char *)(unaff_RSI + -0x1396f6a1) - unaff_BH) -
       (CARRY1(bVar2,in_AH) || CARRY1(bVar3 + in_AH,bVar4));
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140021150(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  byte bVar4;
  uint *puVar5;
  char cVar6;
  byte bVar8;
  uint uVar7;
  uint in_EAX;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  ulonglong *puVar9;
  undefined4 *unaff_RSI;
  undefined8 unaff_RDI;
  undefined4 *puVar10;
  longlong in_R11;
  longlong unaff_R15;
  byte in_CF;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  bool bVar11;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  float10 in_ST0;
  
  LOCK();
  uVar3 = *unaff_RSI;
  *unaff_RSI = (int)unaff_RDI;
  puVar10 = (undefined4 *)CONCAT44((int)((ulonglong)unaff_RDI >> 0x20),uVar3);
  UNLOCK();
  puVar9 = (ulonglong *)(ulonglong)in_EAX;
  puVar5 = (uint *)*puVar9;
  cVar6 = in((short)param_2);
  *puVar10 = *unaff_RSI;
  if ((longlong)puVar5 + -1 != 0 && (char)((ulonglong)puVar5 >> 8) != '\0') {
    _DAT_2167c4ffe745f005 =
         CONCAT31((int3)((int)&stack0x00000000 + (int)(puVar9 + 1) + (uint)in_CF >> 8),cVar6 + 'k')
         ^ 0xb6564bbc;
    uVar7 = _DAT_2167c4ffe745f005 & 0x3e93e72b;
    *puVar9 = CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
    puVar9[-1] = param_2;
    if (uVar7 == 0) {
      *puVar5 = *puVar5 | (uint)(puVar9 + -1);
      unaff_RSI[1] = unaff_RSI[1] << 1;
    }
    else {
      pbVar1 = (byte *)((ulonglong)uVar7 + 0x5a);
      bVar4 = *pbVar1;
      bVar8 = (byte)(uVar7 >> 8);
      *pbVar1 = *pbVar1 + bVar8;
      *(char *)((longlong)unaff_RSI + -0x1396f69d) =
           (*(char *)((longlong)unaff_RSI + -0x1396f69d) - unaff_BH) - CARRY1(bVar4,bVar8);
    }
    return;
  }
  pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x35);
  *pbVar1 = *pbVar1 & (byte)((ulonglong)((longlong)puVar5 + -1) >> 8);
  if (puVar5 == (uint *)0x2) {
    puVar10[0x988d1dd] = puVar10[0x988d1dd] + (int)(puVar9 + 1);
    puVar2 = (undefined4 *)(unaff_R15 * 8 + 0x5e0632bd);
    *puVar2 = *puVar2;
    *(int *)(in_R11 + -0x59) = (int)in_ST0;
    bVar11 = SBORROW1('\0',DAT_137e7c833);
    cVar6 = -DAT_137e7c833;
    bVar4 = *(byte *)((longlong)puVar10 + -0x1f);
    *(byte *)((longlong)puVar10 + -0x1f) =
         (byte)(CONCAT11(DAT_137e7c833 != '\0',bVar4) >> 5) | bVar4 << 4;
    *puVar9 = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)bVar11 * 0x800 |
              (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
              (ulonglong)(cVar6 < '\0') * 0x80 | (ulonglong)(cVar6 == '\0') * 0x40 |
              (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(cVar6) & 1U) == 0) * 4 |
              (ulonglong)((bVar4 & 0x10) != 0) | (ulonglong)(in_ID & 1) * 0x200000 |
              (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
              (ulonglong)(in_AC & 1) * 0x40000;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *puVar9 = unaff_R15;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



undefined2 FUN_140021220(void)

{
  byte in_AL;
  
  return CONCAT11(0xcd,in_AL & 0xf5);
}



void FUN_140021304(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_140021320(undefined8 param_1,undefined2 param_2)

{
  uint *puVar1;
  longlong unaff_RBP;
  
  puVar1 = (uint *)(unaff_RBP + 0x41);
  *puVar1 = *puVar1 >> 0xe | *puVar1 << 0x12;
  in(param_2);
  FUN_140021304();
  return;
}



void FUN_140021380(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x00014002150b) overlaps instruction at (ram,0x00014002150a)
// 
// WARNING: Removing unreachable block (ram,0x00014002152d)
// WARNING: Removing unreachable block (ram,0x9bb9f72d)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140021450(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  uint *puVar2;
  char *pcVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  int3 iVar8;
  ulonglong uVar9;
  char unaff_BH;
  undefined1 *unaff_RSI;
  uint *unaff_RDI;
  undefined2 in_CS;
  float10 in_ST0;
  float10 in_ST1;
  
  uVar7 = *unaff_RDI;
  _DAT_1563b86ea = (short)in_ST0;
  uVar6 = in((short)param_2);
  *unaff_RDI = uVar6;
  if ((POPCOUNT((byte)uVar7 | 0x2d) & 1U) != 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  do {
  } while (param_1 == 0);
  if (param_1 == 1) {
    return;
  }
  uVar4 = *unaff_RSI;
  iVar8 = (int3)(uVar7 >> 8);
  uVar6 = CONCAT31(iVar8,uVar4);
  if ((uVar7 & 0x4000) != 0) {
    out(0x4c,*(undefined4 *)(unaff_RSI + 1));
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *(undefined1 *)(unaff_RDI + 1) = unaff_RSI[1];
  uVar9 = (ulonglong)(uint)((int)iVar8 >> 0x17);
  if ((uVar7 & 0x100) != 0) {
    in(0x69);
    *(undefined2 *)(unaff_RSI + 0x100c5331) = in_CS;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *(uint *)(unaff_RSI + 0x56) = *(uint *)(unaff_RSI + 0x56) & 0x7148676a;
  uVar5 = in((short)((int)uVar7 >> 0x1f));
  *(undefined1 *)((longlong)unaff_RDI + 5) = uVar5;
  out((short)(char)(uVar7 >> 0x18) >> 7,uVar4);
  piVar1 = (int *)(uVar9 - 0x21);
  *piVar1 = *piVar1 - ((int)unaff_RSI + 2);
  puVar2 = (uint *)((ulonglong)uVar6 - 0xd93c15e);
  uVar7 = *puVar2;
  *puVar2 = *puVar2 - uVar6;
  if ((int)*puVar2 < 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *(double *)(unaff_RSI + 0x7596c613) = (double)in_ST1;
  pcVar3 = (char *)(uVar9 + 0x78e5a803);
  *pcVar3 = (*pcVar3 - unaff_BH) - (uVar7 < uVar6);
  if (param_1 == 2 || *pcVar3 == '\0') {
    return;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_140021519(void)

{
  code *pcVar1;
  longlong unaff_RBP;
  
  *(char *)(unaff_RBP + -0x4d) = *(char *)(unaff_RBP + -0x4d) + '\x01';
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140021530(void)

{
  int iVar1;
  code *pcVar2;
  longlong in_RAX;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  int unaff_EDI;
  
  iVar1 = *(int *)(in_RAX + 0x12);
  pcVar2 = (code *)swi(0xe2);
  (*pcVar2)();
  in(0xd9);
  in(0xb1);
  LOCK();
  DAT_158dcffba = unaff_BH;
  *(int *)(unaff_RSI + 0x7a + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 4) =
       unaff_EDI - iVar1;
  UNLOCK();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_140021570(char *param_1,longlong param_2)

{
  undefined1 uVar1;
  byte bVar2;
  uint *in_RAX;
  uint uVar3;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  uint unaff_EDI;
  
  uVar3 = (int)param_2 +
          *(int *)(param_2 + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 8);
  uVar1 = in((short)uVar3);
  *(undefined1 *)(ulonglong)(unaff_EDI | 0x37) = uVar1;
  *in_RAX = *in_RAX & uVar3;
  bVar2 = *(byte *)((longlong)in_RAX + 0x7a);
  *(byte *)((longlong)in_RAX + 0x7a) = bVar2 >> 2 | bVar2 << 7;
  *param_1 = *param_1 << ((byte)param_1 & 0x1f);
  FUN_140021519();
  return;
}



// WARNING: Instruction at (ram,0x0001400215bb) overlaps instruction at (ram,0x0001400215ba)
// 

ulonglong FUN_140021640(longlong param_1,ulonglong param_2)

{
  code *pcVar1;
  undefined2 uVar2;
  uint uVar3;
  ulonglong uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  longlong unaff_RDI;
  undefined4 *unaff_retaddr;
  
  *(int *)(unaff_RDI + -0xb27f3) = *(int *)(unaff_RDI + -0xb27f3) + (int)param_1;
  uVar7 = (uint)unaff_RDI;
  uVar3 = *(uint *)(unaff_RDI + 0x2f041eaa);
  if ((int)(uVar7 - uVar3) < 0) {
    uVar4 = param_1 - 1;
    if (uVar4 == 0 || uVar7 != uVar3) {
      uVar3 = 0x8755aeb2 - (uVar7 < *(uint *)(unaff_RDI + 0x2f041eaa));
      if ((POPCOUNT(uVar3 & 0xff) & 1U) != 0) goto LAB_140021665;
      uVar2 = (undefined2)uVar4;
      bVar5 = (byte)(uVar3 >> 8);
      bVar6 = (byte)(param_2 >> 8);
      param_2 = CONCAT62((int6)(param_2 >> 0x10),CONCAT11(bVar6 - bVar5,(char)param_2));
      if (bVar6 < bVar5) {
        return uVar4 & 0xffffffff;
      }
    }
    else {
      uVar2 = (undefined2)*unaff_retaddr;
    }
    out(uVar2,(int)param_2);
    out(0xad,(char)(param_2 & 0xffffffff));
    return param_2 & 0xffffffff;
  }
LAB_140021665:
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140021720(void)

{
  in(0xbc);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140021770(byte param_1)

{
  byte bVar1;
  byte bVar2;
  longlong unaff_RBP;
  undefined1 in_CF;
  bool in_ZF;
  
  if (!in_ZF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  bVar2 = (param_1 & 0x1f) % 9;
  bVar1 = *(byte *)(unaff_RBP + -0x2157657d);
  *(byte *)(unaff_RBP + -0x2157657d) = (byte)(CONCAT11(in_CF,bVar1) >> bVar2) | bVar1 << 9 - bVar2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



undefined4 FUN_140021840(undefined4 param_1,undefined2 param_2)

{
  undefined4 *unaff_RSI;
  
  out(*unaff_RSI,param_2);
  return param_1;
}



void FUN_140021980(void)

{
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140021a00(longlong param_1)

{
  uint in_EAX;
  undefined8 unaff_RBX;
  undefined4 unaff_EDI;
  undefined4 unaff_0000003c;
  char in_ZF;
  char in_SF;
  char in_OF;
  undefined1 auStack_6c [108];
  
  if (param_1 != 1 && in_ZF != '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (in_OF == in_SF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  LOCK();
  auStack_6c[CONCAT44(unaff_0000003c,unaff_EDI) * 2] = (char)((ulonglong)unaff_RBX >> 8);
  UNLOCK();
  if ((int)(in_EAX & (uint)&stack0x00000000) < 1) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x000140021b60) overlaps instruction at (ram,0x000140021b5f)
// 
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140021b40(longlong param_1,longlong param_2)

{
  uint *puVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined8 in_RAX;
  longlong lVar4;
  byte bVar5;
  undefined8 unaff_RBX;
  byte unaff_BPL;
  undefined7 unaff_00000029;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  bVar5 = (byte)unaff_RBX;
  if (param_1 != 1) {
    puVar1 = (uint *)(CONCAT71(unaff_00000029,unaff_BPL) + 0x1f);
    *puVar1 = *puVar1 | 0x6b;
    if (param_1 == 1) {
      LOCK();
      *(char *)(CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),
                         CONCAT11((byte)((ulonglong)unaff_RBX >> 8) & (byte)((ulonglong)in_RAX >> 8)
                                  ,bVar5)) + 0x29) = (char)param_2;
      UNLOCK();
      in(0x68);
    }
    else {
      if (SBORROW1((char)in_RAX,'F')) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      if ((char)in_RAX < 'F') {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
    }
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  if (in_ZF || in_OF != in_SF) {
    pcVar3 = (code *)swi(0xc1);
    lVar4 = (*pcVar3)();
    _DAT_d9b04563 = _DAT_d9b04563 << 0x1c;
    *(uint *)(lVar4 + 0x7f) = *(uint *)(lVar4 + 0x7f) | (uint)unaff_RDI;
    out(*(undefined1 *)(unaff_RSI + 4),(short)param_2);
    if (bVar5 < DAT_1030f19f5) {
      param_2 = 0xc4533603;
    }
    else if (bVar5 != DAT_1030f19f5) {
      return;
    }
    if (-1 < (int)((uint)unaff_RDI - *(int *)(param_2 + -0x3bacc9fd))) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  uVar2 = in((short)param_2);
  *unaff_RDI = uVar2;
  if ((char)unaff_BPL < -0x3b) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (unaff_BPL < 0xc4) {
    if (-1 < (int)unaff_RBX << 0x1b) {
      func_0x00016c9e70bb();
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    func_0x0001bb0bcfee();
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *(uint *)(unaff_RSI + 0x25) = *(uint *)(unaff_RSI + 0x25) >> 1 | (uint)(0xc3 < unaff_BPL) << 0x1f;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140021c80(void)

{
  char in_AL;
  longlong unaff_RBP;
  
  if (in_AL == '\0' && *(char *)(unaff_RBP + 0x673e81c0) == '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140021d00(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RBX;
  
  *(char *)(unaff_RBX + -0x7e) = (char)((ulonglong)param_2 >> 8);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140021e40(void)

{
  byte *pbVar1;
  code *pcVar2;
  char cVar3;
  uint *unaff_RDI;
  byte in_AF;
  byte bVar4;
  
  bVar4 = (byte)_DAT_1634b76fa78e727a;
  cVar3 = bVar4 + (9 < (bVar4 & 0xf) | in_AF) * -6 +
          (0x99 < bVar4 || _DAT_1634b76fa78e727a < *unaff_RDI) * -0x60;
  if (cVar3 != '\0' && SBORROW4(_DAT_1634b76fa78e727a,*unaff_RDI) == cVar3 < '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (cVar3 != '\0' && SBORROW4(_DAT_1634b76fa78e727a,*unaff_RDI) == cVar3 < '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  pbVar1 = (byte *)((ulonglong)CONCAT31((int3)(_DAT_1634b76fa78e727a >> 8),cVar3) + 0x720ea7d6);
  *pbVar1 = *pbVar1 << 3 | *pbVar1 >> 5;
  pcVar2 = (code *)swi(1);
  (*pcVar2)();
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140021fd0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400221b0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400222f0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

undefined1 FUN_140022360(undefined8 param_1,longlong param_2)

{
  byte in_AL;
  longlong unaff_RBX;
  bool in_OF;
  
  if (!in_OF) {
    return *(undefined1 *)(unaff_RBX + (ulonglong)in_AL);
  }
  *(uint *)(unaff_RBX + -0x57) = *(uint *)(unaff_RBX + -0x57) | 0xc3ae7a8;
  if (CARRY1((byte)((ulonglong)param_1 >> 8),*(byte *)(param_2 + -0x2ec9c4c0))) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_1400224a0(void)

{
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x0001400225ec)

void FUN_1400225e0(undefined8 param_1,undefined4 param_2)

{
  ulonglong unaff_RBX;
  undefined4 unaff_ESI;
  byte *unaff_RDI;
  
  in((undefined2)param_2);
  *unaff_RDI = *unaff_RDI ^ (byte)(undefined2)param_2;
  *(undefined4 *)(unaff_RBX & 0xffffffff) = unaff_ESI;
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x000140022602) overlaps instruction at (ram,0x000140022601)
// 
// WARNING: Removing unreachable block (ram,0x000140022602)

void FUN_140022650(uint *param_1,undefined2 param_2)

{
  uint *puVar1;
  byte bVar2;
  undefined8 in_RAX;
  undefined4 unaff_EBX;
  undefined4 unaff_0000001c;
  longlong unaff_RBP;
  uint uVar3;
  longlong unaff_RSI;
  longlong unaff_RDI;
  float10 in_ST0;
  undefined1 auStack_10 [16];
  
  *param_1 = *param_1 ^ (uint)auStack_10;
  *(char *)(unaff_RBP + 0x76) = *(char *)(unaff_RBP + 0x76) + -0x28;
  bVar2 = (char)in_RAX + 0xab;
  *(undefined4 *)CONCAT44(unaff_0000001c,unaff_EBX) = unaff_EBX;
  if (!SCARRY1((char)in_RAX,-0x55)) {
    out(*(undefined1 *)(unaff_RSI + 4),param_2);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *(int *)(unaff_RDI + 5) = (int)param_1;
  uVar3 = (uint)(undefined1 *)(unaff_RSI + 4);
  *(uint *)CONCAT44(unaff_0000001c,unaff_EBX) = *(uint *)CONCAT44(unaff_0000001c,unaff_EBX) ^ uVar3;
  if ((bVar2 & 0xbc) == 0) {
    if (SCARRY4((uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2) & 0xffffffbc,0x33d342f3)) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *(int *)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x40cba84c) = (int)ROUND(in_ST0);
  puVar1 = (uint *)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x6f21bf47);
  *puVar1 = *puVar1 ^ uVar3 + 1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140022790(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400228d0(int *param_1,char *param_2)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  undefined4 in_EAX;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  byte *unaff_RSI;
  byte *unaff_RDI;
  float10 in_ST0;
  
  if ((byte)in_EAX < *unaff_RDI) {
    piVar1 = (int *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
                    -0x7f498e58);
    *piVar1 = *piVar1 + CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 1;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (-1 < (char)((byte)in_EAX - *unaff_RDI)) {
    out(0xa8,in_EAX);
    cVar2 = *param_2;
    *param_2 = *param_2 + unaff_BH;
    if (SCARRY1(cVar2,unaff_BH) != *param_2 < '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    *param_1 = (int)ROUND(in_ST0);
    bVar3 = in((short)param_2);
    unaff_RDI[1] = bVar3;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  unaff_RDI[1] = *unaff_RSI;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140022a80(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140022bc0(void)

{
  bool in_CF;
  
  if (!in_CF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140022c30(char param_1)

{
  longlong unaff_RBX;
  
  *(char *)(unaff_RBX + 0x3bd1d855) = *(char *)(unaff_RBX + 0x3bd1d855) - param_1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140022d70(longlong param_1)

{
  char *pcVar1;
  char in_AH;
  longlong unaff_RSI;
  char in_CF;
  
  pcVar1 = (char *)(unaff_RSI + 0x7b + param_1);
  *pcVar1 = (*pcVar1 - in_AH) - in_CF;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140022eb0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140022f20(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = param_1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140023060(void)

{
  bool in_OF;
  
  if (!in_OF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



undefined1 * FUN_1400231a0(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  undefined2 in_FS;
  
  *unaff_RDI = *unaff_RSI;
  uVar1 = in((short)param_2);
  *(undefined4 *)(unaff_RDI + 2) = uVar1;
  *(undefined2 *)(param_2 + 0x1b7c863c) = in_FS;
  return unaff_RSI;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140023210(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte unaff_BL;
  
  *(byte *)(param_2 + 0x3087811b) = *(byte *)(param_2 + 0x3087811b) & unaff_BL;
  uVar3 = in(0x7d);
  *(undefined1 *)(param_1 + 0x2c) = 0;
  bVar2 = ((byte)param_1 & 0x1f) % 9;
  bVar1 = *(byte *)((ulonglong)uVar3 - 0x1add5d5b);
  *(byte *)((ulonglong)uVar3 - 0x1add5d5b) = bVar1 >> bVar2 | bVar1 << 9 - bVar2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

undefined8 FUN_140023350(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong in_RAX;
  uint unaff_EBX;
  uint *unaff_RSI;
  int unaff_EDI;
  
  uVar1 = (uint)(unaff_EBX < *(uint *)(in_RAX + param_2 * 4));
  iVar2 = (int)in_RAX + -0x25f22bf9;
  if (SBORROW4((int)in_RAX,0x25f22bf9) == SBORROW4(iVar2,uVar1)) {
    *unaff_RSI = *unaff_RSI | (uint)&stack0x00000000;
    out((short)param_2,iVar2 - uVar1 ^ 0xa000);
    LOCK();
    *param_3 = (char)unaff_EBX;
    UNLOCK();
    in((short)param_2);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  pcVar3 = (code *)swi(0x57);
  (*pcVar3)();
  if (-1 < unaff_EDI - *(int *)((longlong)unaff_RSI + -0x41)) {
    return 0x440b6fa9;
  }
  pcVar3 = (code *)swi(3);
  uVar4 = (*pcVar3)();
  return uVar4;
}



void FUN_140023490(void)

{
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x0001400235df)

void FUN_140023500(longlong param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 unaff_RBX;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *unaff_RBP;
  ulonglong unaff_RSI;
  undefined2 in_CS;
  undefined2 in_SS;
  byte in_CF;
  char in_PF;
  char in_AF;
  char in_ZF;
  char in_SF;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  longlong unaff_retaddr;
  undefined1 auStackX_10 [24];
  
  uVar5 = 0;
  if (param_1 != 0) {
    pbVar1 = (byte *)(param_1 + 0xd);
    bVar2 = *pbVar1;
    *pbVar1 = *pbVar1 + 5;
    if (0xfa < bVar2) {
      *(int *)(unaff_retaddr + 0x46ae47a6) =
           *(int *)(unaff_retaddr + 0x46ae47a6) -
           (int)CONCAT62((int6)((unaff_RSI & 0xffffffff) >> 0x10),
                         CONCAT11(in_SF << 7 | in_ZF << 6 | in_AF << 4 | in_PF << 2 | 2U | in_CF,
                                  (char)(unaff_RSI & 0xffffffff)));
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    if ((POPCOUNT(*pbVar1) & 1U) != 0) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    if (param_1 != 1 && *pbVar1 == 0) {
      lVar6 = CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),in_SS);
      *(undefined2 *)(lVar6 + -0x7cf387e) = in_FPUControlWord;
      *(undefined2 *)(lVar6 + -0x7cf387a) = in_FPUStatusWord;
      *(undefined2 *)(lVar6 + -0x7cf3876) = in_FPUTagWord;
      *(undefined8 *)(lVar6 + -0x7cf386a) = in_FPUDataPointer;
      *(undefined8 *)(lVar6 + -0x7cf3872) = in_FPUInstructionPointer;
      *(undefined2 *)(lVar6 + -0x7cf386c) = in_FPULastInstructionOpcode;
      DAT_6d8ec089 = DAT_6d8ec089 << 1 | (char)DAT_6d8ec089 < '\0';
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    in(0x86);
    uVar5 = *(undefined8 *)((ulonglong)auStackX_10 & 0xffffffff);
    register0x00000020 = (BADSPACEBASE *)((undefined8 *)((ulonglong)auStackX_10 & 0xffffffff) + 1);
    *(undefined2 *)((longlong)unaff_RBP + 0x3af8287f) = in_CS;
  }
  puVar7 = (undefined8 *)((longlong)register0x00000020 + -8);
  *(undefined8 **)((longlong)register0x00000020 + -8) = unaff_RBP;
  cVar3 = '\x06';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar7 = puVar7 + -1;
    *puVar7 = *unaff_RBP;
    cVar3 = cVar3 + -1;
  } while ('\0' < cVar3);
  *(undefined1 **)((longlong)register0x00000020 + -0x40) =
       (undefined1 *)((longlong)register0x00000020 + -8);
  pcVar4 = (code *)swi(3);
  (*pcVar4)(uVar5);
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140023640(void)

{
  longlong unaff_RBX;
  longlong unaff_RDI;
  float10 in_ST0;
  
  *(double *)(unaff_RBX + unaff_RDI * 8) = (double)in_ST0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140023780(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_140023930(longlong param_1)

{
  uint *puVar1;
  undefined4 in_EAX;
  char *unaff_RBX;
  uint unaff_EBP;
  longlong unaff_GS_OFFSET;
  
  puVar1 = (uint *)((ulonglong)
                    (unaff_EBP |
                    CONCAT31((int3)((uint)in_EAX >> 8),
                             (((byte)in_EAX + 0x9f) - *unaff_RBX) - ((byte)in_EAX < 0x61) ^
                             *(byte *)(unaff_GS_OFFSET + param_1))) - 0xe190ffb);
  *puVar1 = *puVar1 | (uint)param_1;
  return;
}



void FUN_140023a10(void)

{
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140023a50(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140023b20(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140023c00(void)

{
  ulonglong uVar1;
  byte in_CF;
  
  uVar1 = (((ulonglong)in_CF & 7) << 0x20 | (ulonglong)&stack0x00000000 & 0xffffffff) >> 3;
  *(ulonglong *)(uVar1 - 8) = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x000140023bf7)

void FUN_140023c50(longlong param_1,undefined2 param_2)

{
  undefined4 *unaff_RSI;
  longlong unaff_R13;
  longlong unaff_R14;
  
  if (param_1 == 0) {
    *(longlong *)(unaff_R14 + -0x3640297d) = *(longlong *)(unaff_R14 + -0x3640297d) - unaff_R13;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  out(*unaff_RSI,param_2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_140023e60(void)

{
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140023f40(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140024080(uint param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  ulonglong in_RAX;
  byte bVar5;
  uint *unaff_RBX;
  uint unaff_EBP;
  char in_CF;
  bool in_ZF;
  
  if (!in_ZF) {
    if ((in_RAX & 0xffffffff) == 1 ||
        (bool)((char)((ulonglong)param_2 >> 8) - *(char *)((in_RAX & 0xffffffff) - 0x4f)) ==
        (unaff_EBP < param_1 || unaff_EBP - param_1 < (uint)(in_CF == '\0'))) {
      pcVar4 = (code *)swi(0);
      (*pcVar4)();
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  iVar3 = 0;
  if (*unaff_RBX != 0) {
    for (; (*unaff_RBX >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
    }
  }
  pbVar1 = (byte *)(in_RAX + 0x23aa7445);
  bVar2 = *pbVar1;
  bVar5 = (byte)((ulonglong)unaff_RBX >> 8);
  *pbVar1 = *pbVar1 + bVar5;
  if (CARRY1(bVar2,bVar5) || *pbVar1 == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400241c0(void)

{
  undefined4 in_EAX;
  longlong unaff_GS_OFFSET;
  
  *(undefined4 *)(unaff_GS_OFFSET + 0x7a2db08a004c697a) = in_EAX;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400242a0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140024520(void)

{
  char in_SF;
  char in_OF;
  
  if (in_OF != in_SF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140024740(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140024820(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x0001400248c2) overlaps instruction at (ram,0x0001400248c0)
// 

undefined4 FUN_140024860(longlong param_1,byte *param_2,byte param_3,undefined1 param_4)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *in_RAX;
  char *unaff_RBX;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 in_CF;
  bool bVar7;
  undefined1 in_ZF;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  ulonglong uStack_8;
  
  while( true ) {
    uVar2 = (uint)in_RAX;
    if ((bool)in_CF || (bool)in_ZF) {
      *(uint *)(unaff_RBP + 1) =
           (int)register0x00000020 + *(int *)param_2 + (uint)(0xb89abb7 < uVar2) + 8;
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    bVar7 = (char)*in_RAX < '\0';
    *in_RAX = *in_RAX << 1 | bVar7;
    *unaff_RSI = param_4;
    if (bVar7 || (bool)in_ZF) {
      *(int *)(unaff_RSI + 0x6c) = (int)ROUND(in_ST0);
      uVar3 = (uVar2 + 0x3c7334f2) - (uint)bVar7;
      out(0x30,uVar3);
      DAT_ea92877f = (char)uVar3;
      uVar2 = (uint)(uVar2 < 0xc38ccb0e || uVar2 + 0x3c7334f2 < (uint)bVar7);
      *(ulonglong *)((longlong)register0x00000020 + -8) = unaff_RBP;
      iVar4 = (((uVar3 + 0xf430369a) - uVar2) + 0x708bef4b) -
              (uint)(param_3 < DAT_716134e2 ||
                    (byte)(param_3 - DAT_716134e2) <
                    (uVar3 < 0xbcfc966 || uVar3 + 0xf430369a < uVar2));
      return CONCAT31((int3)((uint)iVar4 >> 8),(char)iVar4 + -0x15);
    }
    *(short *)(unaff_RSI + 0x21) = (short)in_ST0;
    unaff_RBP = (ulonglong)((int)unaff_RBP + -0x156d7881 + (uint)bVar7);
    DAT_14b1666a7 = DAT_14b1666a7 ^ (byte)((ulonglong)param_2 >> 8);
    uVar1 = (longlong)(int)uVar2 * -0x3b15;
    unaff_RSI = (undefined1 *)(uVar1 & 0xffffffff);
    uVar2 = in((short)param_2);
    if ((longlong)(int)uVar1 != uVar1) break;
    *unaff_RBX = *unaff_RBX - (char)((ulonglong)unaff_RBX >> 8);
    param_2 = *(byte **)register0x00000020;
    puVar5 = (undefined8 *)((longlong)register0x00000020 + 8);
    out((short)param_2,uVar2);
    in_RAX = (byte *)((ulonglong)uVar2 | 0x58);
    in_CF = false;
    in_ZF = (byte)((byte)((ulonglong)param_2 >> 8) & (byte)in_RAX) == 0;
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + 8);
    puVar6 = puVar5;
    in_ST0 = in_ST1;
    in_ST1 = in_ST2;
    in_ST2 = in_ST3;
    in_ST3 = in_ST4;
    in_ST4 = in_ST5;
    in_ST5 = in_ST6;
    in_ST6 = in_ST7;
    if (param_1 == 0) {
LAB_1400248c0:
      *param_2 = *param_2 ^ 0x18;
      *(undefined1 **)((longlong)puVar6 + -8) = &DAT_ea92877f;
      *(undefined1 **)((longlong)puVar6 + -0x10) = &DAT_ea92877f;
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
  }
  param_2 = (byte *)((ulonglong)unaff_RBX & 0xffffffff);
  puVar6 = (undefined8 *)register0x00000020;
  goto LAB_1400248c0;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140024930(undefined8 param_1,byte *param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  code *pcVar3;
  byte bVar4;
  char cVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined2 uVar8;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  byte bVar9;
  bool bVar10;
  
  bVar9 = CARRY1((byte)param_1,*param_2);
  uVar7 = CONCAT71((int7)((ulonglong)param_1 >> 8),(byte)param_1 + *param_2);
  pcVar3 = (code *)swi(0xce);
  uVar6 = (*pcVar3)();
  uVar8 = SUB82(param_2,0);
  out(*unaff_RSI,uVar8);
  pcVar1 = (char *)(uVar7 + 0x16 + unaff_RBP * 2);
  bVar4 = (byte)uVar7 & 0x1f;
  cVar5 = *pcVar1;
  *pcVar1 = *pcVar1 << bVar4;
  bVar10 = (uVar7 & 0x1f) != 0;
  cVar5 = ((char)uVar6 + 'E') - (!bVar10 & bVar9 | (bVar10 && (char)(cVar5 << bVar4 - 1) < '\0'));
  bVar10 = cVar5 == '7';
  out(0x75,(byte)uVar7);
  func_0x000154b093be((uint)CONCAT71((int7)((ulonglong)uVar6 >> 8),cVar5) ^ 0x37);
  if (bVar10) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  uVar2 = in(uVar8);
  *unaff_RDI = uVar2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140024a10(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140024a50(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_140024b20(void)

{
  return;
}



void FUN_140024c60(byte param_1)

{
  char *pcVar1;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  
  pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + -0x7ce2817f);
  *pcVar1 = *pcVar1 >> (param_1 & 0x1f);
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140024ce0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x000140024e2d)

void FUN_140024e20(longlong param_1,undefined2 param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 in_RAX;
  undefined1 unaff_BH;
  undefined1 *unaff_RSI;
  uint *unaff_RDI;
  char in_CF;
  char in_SF;
  char in_OF;
  
  if (in_OF != in_SF) {
    DAT_1b67df048 = DAT_1b67df048 >> 1;
    out(*unaff_RSI,param_2);
    *unaff_RDI = *unaff_RDI | (int)unaff_RSI + 1U;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  cVar2 = in(param_2);
  cVar2 = cVar2 + 'j' + in_CF;
  *(uint *)((longlong)unaff_RDI + 0x2f) = *(uint *)((longlong)unaff_RDI + 0x2f) | (uint)param_1;
  uVar1 = in(param_2);
  *(undefined1 *)unaff_RDI = uVar1;
  if ((param_1 != 0) && (cVar2 != '\0' || (char)(cVar2 + -1) == '\0')) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *(int *)((longlong)unaff_RDI + 1) =
       (int)CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(unaff_BH,cVar2)) >>
                           8),cVar2 + -1);
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140024f60(longlong param_1,undefined2 param_2)

{
  byte in_AL;
  undefined8 uVar1;
  
  in(param_2);
  if (in_AL < 0x2e) {
    if (param_1 == 1 || in_AL == 0x2d) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (in_AL < 0x2e) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  uVar1 = func_0x0001370060c2();
  _DAT_b2da28b7636c461d = (int)CONCAT71((int7)((ulonglong)uVar1 >> 8),0xf1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x000140025047) overlaps instruction at (ram,0x000140025046)
// 

void FUN_140024fe0(int param_1,undefined8 *param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint in_EAX;
  undefined4 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined6 uVar11;
  byte unaff_BH;
  uint uVar12;
  ulonglong uVar13;
  longlong unaff_RBP;
  byte *unaff_RSI;
  undefined1 *unaff_RDI;
  byte in_CF;
  char in_ZF;
  char in_SF;
  char in_OF;
  uint uVar4;
  
  uVar9 = SUB81(param_2,0);
  uVar10 = (undefined1)((ulonglong)param_2 >> 8);
  uVar11 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar13 = (ulonglong)in_EAX;
  *(undefined8 *)(uVar13 - 8) = 0xffffffff9c404101;
  uVar8 = in((short)param_2);
  if (in_OF == in_SF) {
    *unaff_RDI = (char)uVar8;
    if (param_1 == 1 || in_ZF == '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    pcVar5 = (code *)*param_2;
    *(undefined8 *)(uVar13 - 0x10) = 0x140025048;
    (*pcVar5)();
    *(undefined8 *)(uVar13 - 0x10) = 0x14002504d;
    uVar8 = func_0x000126d78e6d();
    puVar1 = (uint *)(unaff_RBP + -0x40);
    uVar6 = (uint)in_CF;
    uVar3 = *puVar1;
    uVar12 = (uint)(uVar13 - 8);
    uVar4 = *puVar1;
    uVar7 = *puVar1 - uVar12;
    *puVar1 = uVar7 - uVar6;
    if (SBORROW4(uVar4,uVar12) != SBORROW4(uVar7,uVar6)) {
      if ((int)*puVar1 < 0) {
        *unaff_RSI = *unaff_RSI & unaff_BH & ((byte)uVar8 ^ 0x1c) - 0xc;
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    *(undefined4 *)(unaff_RDI + 1) = uVar8;
    piVar2 = (int *)(CONCAT62(uVar11,CONCAT11(uVar10,uVar9)) + 0x1e);
    *piVar2 = *piVar2 + uVar12 + (uint)(uVar3 < uVar12 || uVar7 < uVar6);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140025120(void)

{
  undefined4 in_EAX;
  
  out(0xac,in_EAX);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140025260(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1400252e0(byte param_1,undefined2 param_2)

{
  uint *puVar1;
  longlong unaff_RBX;
  undefined1 unaff_BPL;
  longlong unaff_RDI;
  
  puVar1 = (uint *)(unaff_RBX + -0x1a);
  *puVar1 = *puVar1 << (param_1 & 0x1f) | *puVar1 >> 0x20 - (param_1 & 0x1f);
  *(uint *)(unaff_RDI + -0x73) =
       *(uint *)(unaff_RDI + -0x73) << (param_1 & 0x1f) | 0xfeee4194U >> 0x20 - (param_1 & 0x1f);
  out(param_2,unaff_BPL);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_140025420(undefined1 param_1)

{
  undefined1 in_AL;
  undefined2 unaff_BP;
  undefined6 unaff_0000002a;
  undefined1 *unaff_RSI;
  
  *unaff_RSI = in_AL;
  *(undefined1 *)(CONCAT62(unaff_0000002a,unaff_BP) + 0x10b07879) = param_1;
  return;
}



undefined4 FUN_140025560(undefined8 param_1,undefined4 param_2)

{
  byte *pbVar1;
  byte unaff_BL;
  undefined7 unaff_00000019;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  pbVar1 = (byte *)(CONCAT71(unaff_00000019,unaff_BL) + -0x35a400d9);
  *pbVar1 = *pbVar1 ^ unaff_BL;
  *unaff_RDI = *unaff_RSI;
  return param_2;
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400255e0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140025720(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined1 in_AL;
  longlong unaff_RBP;
  undefined4 *unaff_RDI;
  char in_CF;
  
  out(param_2,in_AL);
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  *(char *)(unaff_RBP + 0x4d) = (*(char *)(unaff_RBP + 0x4d) - (char)((ushort)param_2 >> 8)) - in_CF
  ;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140025860(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_1400258f0(void)

{
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140025a30(undefined8 param_1,longlong param_2)

{
  *(byte *)(param_2 + -0x6e4ec66f) = *(byte *)(param_2 + -0x6e4ec66f) | (byte)param_2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140025b70(longlong param_1,undefined2 param_2)

{
  longlong unaff_RBX;
  byte in_CF;
  
  if (param_1 == 1) {
    DAT_2337f6794983cfed = in(param_2);
    *(char *)(unaff_RBX + 0x5a31bdba) =
         (*(char *)(unaff_RBX + 0x5a31bdba) + 'p') - ((in_CF & 1) != 0);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  in(param_2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140025c00(uint param_1,undefined2 param_2)

{
  uint *puVar1;
  undefined4 in_EAX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  bool in_CF;
  bool in_ZF;
  
  out(0xab,in_EAX);
  out(param_2,in_EAX);
  if (!in_CF && !in_ZF) {
    puVar1 = (uint *)(unaff_RDI + -2 + unaff_RBP);
    *puVar1 = *puVar1 ^ param_1;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140025d40(void)

{
  func_0x000133e73b1f();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140025e80(void)

{
  code *pcVar1;
  undefined8 in_RAX;
  undefined8 unaff_RDI;
  bool bVar2;
  
  do {
    *(undefined8 *)((longlong)register0x00000020 + -8) = unaff_RDI;
    *(undefined8 *)((longlong)register0x00000020 + -0x10) = in_RAX;
    bVar2 = (char)((byte)in_RAX ^ 0x22) < '\0';
    pcVar1 = (code *)swi(0xf8);
    in_RAX = (*pcVar1)();
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
  } while (!bVar2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140026040(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x000140026186) overlaps instruction at (ram,0x000140026182)
// 

void FUN_140026180(uint param_1,longlong param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  
  uVar4 = (ulonglong)(param_1 & *(uint *)(unaff_RBP + -0x23fb0038));
  if (uVar4 != 0) {
    iVar3 = *(int *)(param_2 + 0x262c3c6e);
    puVar1 = (uint *)(uVar4 + CONCAT71(unaff_00000019,unaff_BL) * 8);
    *puVar1 = *puVar1 >> 5 | *puVar1 << 0x1b;
    puVar1 = (uint *)((ulonglong)(uint)(iVar3 * -0x1e104b4e) - 0x50);
    *puVar1 = *puVar1 ^ (uint)&stack0x00000000;
    piVar2 = (int *)(CONCAT71(unaff_00000019,unaff_BL) + -0xc + uVar4 * 8);
    *piVar2 = *piVar2 + (uint)&stack0x00000000;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



byte FUN_140026200(void)

{
  byte in_AL;
  
  return in_AL & 0x5d;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140026340(undefined8 param_1,undefined2 param_2)

{
  undefined4 in_EAX;
  
  out(param_2,in_EAX);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x000140026514) overlaps instruction at (ram,0x000140026511)
// 
// WARNING: Removing unreachable block (ram,0x000140026514)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140026500(undefined8 param_1,undefined2 param_2)

{
  undefined1 *unaff_RSI;
  undefined1 auStackX_8 [32];
  
  out(*unaff_RSI,param_2);
  LOCK();
  _DAT_f74765eb = (int)auStackX_8;
  UNLOCK();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_140026640(void)

{
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140026780(void)

{
  byte bVar1;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  char in_CF;
  
  *unaff_RDI = *unaff_RSI;
  bVar1 = *(byte *)(unaff_RBP + 0x1e);
  *(byte *)(unaff_RBP + 0x1e) = (byte)(CONCAT11(in_CF == '\0',bVar1) >> 2) | bVar1 << 7;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140026800(void)

{
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  undefined4 unaff_EBX;
  longlong unaff_RBP;
  
  DAT_c2d130b6d999fdcd = (undefined1)in_EAX;
  *(undefined4 *)(CONCAT44(in_register_00000004,in_EAX) + 0x578e59a7 + unaff_RBP) = unaff_EBX;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140026940(undefined8 param_1,undefined2 param_2)

{
  undefined1 in_AL;
  
  out(param_2,in_AL);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_140026c40(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Control flow encountered bad instruction data

void FUN_140026d80(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140026e00(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140026f40(void)

{
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  undefined2 in_FPUControlWord;
  
  *(undefined2 *)(unaff_RSI + 0xd782262) = in_FPUControlWord;
  *unaff_RDI = *unaff_RSI;
  in(0xb3);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140027080(int param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  longlong unaff_RBX;
  
  iVar2 = param_1 + *(int *)(unaff_RBX + 0x76);
  uVar1 = func_0xcd5e0604(CONCAT31((int3)((uint)iVar2 >> 8),
                                   (byte)iVar2 | (byte)((ulonglong)param_2 >> 8)));
  out(0xd4,uVar1);
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140027100(void)

{
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (in_ZF || in_OF != in_SF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140027240(void)

{
  char *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + -1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_140027380(void)

{
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140027400(uint param_1)

{
  *(char *)((ulonglong)param_1 + 0x72) = *(char *)((ulonglong)param_1 + 0x72) - (char)param_1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140027680(void)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint unaff_EBX;
  longlong unaff_RBP;
  byte *unaff_RSI;
  longlong unaff_RDI;
  longlong in_FS_OFFSET;
  float10 in_ST0;
  
  uVar2 = *(undefined4 *)(unaff_RBP + 0x55);
  *(short *)((ulonglong)(uint)((int)unaff_RBP + (int)unaff_RSI) - 0x49f12bfc) = (short)ROUND(in_ST0)
  ;
  pbVar1 = unaff_RSI + 0x6f48f19;
  *(longlong *)pbVar1 = *(longlong *)pbVar1 << 1;
  lVar4 = *(longlong *)pbVar1;
  uVar3 = *(undefined4 *)(in_FS_OFFSET + (ulonglong)unaff_EBX + 0x4a);
  *(byte *)(unaff_RDI + 0x5f) = (byte)((uint)uVar2 >> 8) ^ 0x81;
  if (lVar4 != 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *unaff_RSI = *unaff_RSI | (byte)((uint)uVar3 >> 8);
  in(0x4a);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Control flow encountered bad instruction data

void FUN_140027700(undefined8 param_1,byte param_2)

{
  int in_EAX;
  byte *unaff_RSI;
  bool in_SF;
  
  if (!in_SF) {
    *unaff_RSI = *unaff_RSI | (byte)((in_EAX + -0x5dbc275f) - (uint)(*unaff_RSI < param_2) >> 8);
    in(0x4a);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x000108943fa8)

undefined4 FUN_140027840(undefined4 *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  uint in_EAX;
  undefined4 in_register_00000004;
  int unaff_EDI;
  uint uVar3;
  bool in_CF;
  
  if (!in_CF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  piVar1 = (int *)((CONCAT44(in_register_00000004,in_EAX) & 0xffffffffffffff14) - 0x5f);
  uVar3 = unaff_EDI + *piVar1;
  if (SCARRY4(unaff_EDI,*piVar1) == (int)uVar3 < 0) {
    uVar2 = in((short)*param_1);
    return CONCAT31((int3)((in_EAX & 0xffffff14) >> 8),uVar2);
  }
  *(char *)(ulonglong)uVar3 = (char)(in_EAX & 0xffffff14);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140027980(int param_1,uint *param_2)

{
  byte *pbVar1;
  uint *puVar2;
  longlong in_RAX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  puVar2 = (uint *)(unaff_RSI + -0x3d + (longlong)param_2 * 2);
  *puVar2 = *puVar2 >> 0xc | *puVar2 << 0x14;
  *(int *)(unaff_RDI + -0x61) = *(int *)(unaff_RDI + -0x61) + param_1 + (uint)((int)*puVar2 < 0);
  *param_2 = *param_2 & (uint)param_2;
  pbVar1 = (byte *)(in_RAX + 0x4360aeda);
  *pbVar1 = *pbVar1 << 1 | (char)*pbVar1 < '\0';
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140027a00(void)

{
  char in_AH;
  longlong unaff_RDI;
  
  (&stack0xffffffffbc7c54cf)[unaff_RDI] = (&stack0xffffffffbc7c54cf)[unaff_RDI] + in_AH;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140027b40(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  char cVar3;
  uint in_EAX;
  int *piVar4;
  uint unaff_EBX;
  undefined8 *puVar5;
  undefined8 *unaff_RBP;
  uint unaff_ESI;
  undefined2 *unaff_RDI;
  longlong in_R11;
  undefined2 in_SS;
  
  lVar2 = *(longlong *)(in_R11 + (ulonglong)unaff_ESI);
  *(ulonglong *)(lVar2 + -8) = (ulonglong)in_EAX;
  piVar4 = (int *)(param_1 + -1);
  if (piVar4 == (int *)0x0 || (char)unaff_ESI == '9') {
    *(undefined2 **)(lVar2 + -0x10) = unaff_RDI;
    *unaff_RDI = in_SS;
    puVar5 = (undefined8 *)(lVar2 + -0x18);
    *(undefined8 **)(lVar2 + -0x18) = unaff_RBP;
    cVar3 = '\x11';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar5 = puVar5 + -1;
      *puVar5 = *unaff_RBP;
      cVar3 = cVar3 + -1;
    } while ('\0' < cVar3);
    *(longlong *)(lVar2 + -0xa8) = lVar2 + -0x18;
    *piVar4 = (int)lVar2 + -0x18;
    DAT_acbde695 = (char)unaff_ESI;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  puVar1 = (uint *)((longlong)unaff_RBP + (longlong)piVar4 * 2 + 0x43b92035);
  *puVar1 = *puVar1 & unaff_EBX;
  out(0x9b,unaff_ESI);
  if ((int)*puVar1 < 1) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (*puVar1 != 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_140027c80(void)

{
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x000140027e4d) overlaps instruction at (ram,0x000140027e4c)
// 

ulonglong FUN_140027e40(longlong param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  char cVar6;
  byte bVar7;
  undefined1 uVar8;
  ulonglong in_RAX;
  longlong lVar9;
  longlong lVar10;
  ulonglong unaff_RBX;
  undefined8 *puVar12;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  undefined1 in_CF;
  char in_PF;
  char in_AF;
  undefined1 in_ZF;
  undefined1 in_SF;
  char in_OF;
  float10 in_ST0;
  longlong lVar11;
  
  while( true ) {
    bVar7 = (byte)in_RAX;
    uVar5 = in_RAX >> 8;
    if ((bool)in_ZF) {
      return in_RAX & 0xffffffffffffff93;
    }
    *(longlong **)((longlong)register0x00000020 + -8) = unaff_RDI;
    lVar11 = param_1 + -1;
    if (param_1 + -1 != 0) break;
    in_CF = bVar7 < 0x94;
    in_OF = SBORROW1(bVar7,-0x6c);
    cVar6 = bVar7 + 0x6c;
    in_SF = cVar6 < '\0';
    in_ZF = cVar6 == '\0';
    in_PF = (POPCOUNT(cVar6) & 1U) == 0;
    puVar12 = (undefined8 *)((longlong)register0x00000020 + -0x10);
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -0x10);
    *puVar12 = 0x2050c327;
    in_RAX = (ulonglong)unaff_RDI & 0xffffffff;
    unaff_RDI = (longlong *)(CONCAT71((int7)uVar5,cVar6) & 0xffffffff);
    param_1 = 0;
  }
  while( true ) {
    lVar10 = CONCAT71((int7)((ulonglong)lVar11 >> 8),0x93);
    LOCK();
    puVar2 = (undefined4 *)(lVar10 + -0xde2e09a);
    uVar3 = *puVar2;
    *puVar2 = (int)in_RAX;
    lVar9 = CONCAT44((int)(in_RAX >> 0x20),uVar3);
    UNLOCK();
    puVar4 = (undefined1 *)((longlong)unaff_RDI + 1);
    uVar8 = (undefined1)uVar3;
    *(undefined1 *)unaff_RDI = uVar8;
    unaff_RDI = (longlong *)((longlong)unaff_RDI + 2);
    *puVar4 = uVar8;
    if ((bool)in_CF) {
      puVar1 = (uint *)(lVar9 + 0x35);
      *puVar1 = *puVar1 ^ (uint)(undefined1 *)((longlong)register0x00000020 + -8);
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    if (!(bool)in_SF) break;
    if (in_OF != in_SF) {
      *(undefined8 *)((longlong)register0x00000020 + -0x10) = 0xffffffffad4870f5;
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    in_RAX = unaff_RBX & 0xffffffff;
    unaff_RBX = CONCAT62((int6)((ulonglong)lVar9 >> 0x10),
                         CONCAT11(in_SF << 7 | in_AF << 4 | in_PF << 2,uVar8)) & 0xffffffff | 0x200;
    lVar11 = lVar10;
  }
  *unaff_RDI = (longlong)ROUND(in_ST0);
  *(char *)(unaff_RSI + 0x5b1a8fc) =
       *(char *)(unaff_RSI + 0x5b1a8fc) + (char)((ulonglong)lVar11 >> 8);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140028000(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x0001400281cc) overlaps instruction at (ram,0x0001400281cb)
// 

int FUN_140028140(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int in_EAX;
  ulonglong uVar9;
  undefined8 *unaff_RSI;
  char *unaff_RDI;
  int in_R10D;
  bool bVar10;
  char in_AF;
  bool bVar11;
  byte bVar3;
  
  DAT_c40bb3252215056 = (undefined1)in_EAX;
  pbVar1 = (byte *)(param_1 + -0x133d9b1a);
  bVar10 = false;
  *pbVar1 = *pbVar1 | (byte)((ulonglong)param_2 >> 8);
  bVar2 = *pbVar1;
  bVar3 = *pbVar1;
  if ((char)*pbVar1 < '\0') {
    uVar5 = in((short)param_2);
    *(undefined4 *)unaff_RDI = uVar5;
    *(undefined8 *)(unaff_RDI + 4) = *unaff_RSI;
    *(undefined4 *)(unaff_RDI + 0xc) = *(undefined4 *)(unaff_RSI + 1);
    cVar4 = in((short)param_2);
    unaff_RDI[0x10] = cVar4;
    sysret();
    return in_R10D + -0x536d5b64;
  }
  uVar9 = (ulonglong)(uint)(in_EAX >> 0x1f);
  bVar11 = false;
  while( true ) {
    uVar8 = CONCAT22((short)in_EAX >> 0xf,
                     CONCAT11(bVar11 << 7 | (bVar2 == 0) << 6 | in_AF << 4 |
                              ((POPCOUNT(bVar3) & 1U) == 0) << 2 | 2U | bVar10,(char)in_EAX));
    uVar6 = (uint)bVar10;
    uVar7 = uVar8 + 0xbcd92085;
    bVar10 = uVar8 < 0x4326df7b || uVar7 < uVar6;
    in_EAX = uVar7 - uVar6;
    if (param_1 != 0) break;
    pbVar1 = (byte *)((longlong)unaff_RSI + -0x488d3107);
    *pbVar1 = *pbVar1 + 1;
    bVar11 = (char)*pbVar1 < '\0';
    bVar2 = *pbVar1;
    bVar3 = *pbVar1;
    uVar9 = 0;
  }
  if (param_1 != 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *unaff_RDI = (char)in_EAX + ':';
  *(byte *)(uVar9 + 8) = *(byte *)(uVar9 + 8) ^ (byte)uVar9;
  iRamffffffffce63ae25 = iRamffffffffce63ae25 - (int)unaff_RSI;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void thunk_EXT_FUN_13dc9374b(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140028270(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140028350(void)

{
  code *pcVar1;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  pcVar1 = (code *)swi(0xe3);
  (*pcVar1)();
  *unaff_RDI = *unaff_RSI;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140028440(longlong param_1,undefined2 param_2)

{
  char in_AL;
  short sVar1;
  uint unaff_EBX;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  bool in_ZF;
  float10 in_ST0;
  unkbyte10 in_ST2;
  
  if (!in_ZF) {
    out(*(undefined1 *)unaff_RSI,param_2);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  ffree(in_ST2);
  sVar1 = (short)in_AL * (short)*(char *)(param_1 + -0x670eff02);
  *(float *)(param_1 + -0x68) = (float)in_ST0;
  *unaff_RDI = *unaff_RSI;
  if (0x3a5002f6 < unaff_EBX || CARRY4(unaff_EBX + 0xc5affd09,(uint)((char)sVar1 != sVar1))) {
    return;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140028520(undefined8 param_1,byte param_2)

{
  longlong in_RAX;
  
  *(byte *)(in_RAX + -0x1c) = *(byte *)(in_RAX + -0x1c) & param_2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400285b0(ushort *param_1,byte param_2)

{
  byte *pbVar1;
  byte bVar2;
  char in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  undefined4 unaff_EBP;
  uint unaff_ESI;
  uint uVar3;
  longlong unaff_RDI;
  ushort in_GS;
  byte in_CF;
  bool bVar4;
  char in_AF;
  longlong unaff_retaddr;
  
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -8);
  bVar4 = param_2 < *pbVar1;
  bVar2 = param_2 - *pbVar1;
  if ((bVar4 || bVar2 < in_CF) || bVar2 == in_CF) {
    return;
  }
  uVar3 = unaff_ESI &
          *(uint *)(CONCAT71(unaff_00000019,unaff_BL) + 0x76 + CONCAT71(unaff_00000019,unaff_BL));
  LOCK();
  *(undefined4 *)
   (CONCAT62(in_register_00000002,
             (CONCAT11(((int)uVar3 < 0) << 7 | (uVar3 == 0) << 6 | in_AF << 4 |
                       ((POPCOUNT(uVar3 & 0xff) & 1U) == 0) << 2,
                       (in_AL + 'V') - (bVar4 || bVar2 < in_CF)) | 0x200) & *param_1) +
   unaff_RDI * 4) = unaff_EBP;
  UNLOCK();
  *(ulonglong *)(unaff_retaddr + -8) = (ulonglong)in_GS;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

undefined4 FUN_140028750(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  bool in_CF;
  
  if (in_CF) {
    uVar1 = in(param_2);
    return uVar1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

ulonglong FUN_140028800(longlong param_1)

{
  byte *pbVar1;
  byte bVar2;
  longlong in_RAX;
  byte unaff_BL;
  byte in_CF;
  bool in_OF;
  byte bVar3;
  
  if (in_OF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  pbVar1 = (byte *)(in_RAX + -0x71b4f6d);
  bVar2 = *pbVar1;
  bVar3 = *pbVar1;
  *pbVar1 = (bVar3 - unaff_BL) - in_CF;
  if (param_1 == 1) {
    cRam0000000008a807e5 = cRam0000000008a807e5 + '\x01';
    return (ulonglong)&stack0x00000000 & 0xffffffff;
  }
  if (bVar2 < unaff_BL || (byte)(bVar3 - unaff_BL) < in_CF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_1400289c0(void)

{
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140028b10(void)

{
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  *(uint *)(unaff_RSI + -1) = *(uint *)(unaff_RSI + -1) | 0xbfaea316;
  LOCK();
  *(char *)(ulonglong)*(uint *)(unaff_RBP + -0x67) = (char)*(uint *)(unaff_RBP + -0x67);
  UNLOCK();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140028d50(void)

{
  undefined4 in_EAX;
  
  out(0x6b,in_EAX);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140028f00(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  longlong unaff_RBX;
  longlong unaff_RBP;
  byte in_CF;
  bool in_ZF;
  
  if (in_ZF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  bVar1 = *param_1;
  bVar3 = (byte)((ulonglong)param_2 >> 8);
  bVar2 = *param_1 - bVar3;
  *param_1 = bVar2 - in_CF;
  *(char *)(unaff_RBP + -0x65aa3f2a) =
       (*(char *)(unaff_RBP + -0x65aa3f2a) + 'c') - (bVar1 < bVar3 || bVar2 < in_CF);
  in((short)param_2);
  *(int *)(unaff_RBX + -0x33) = *(int *)(unaff_RBX + -0x33) + -1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



undefined8 FUN_140029050(undefined8 param_1,undefined2 param_2)

{
  in(param_2);
  return 0xadad402c;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140029260(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined4 in_EAX;
  undefined1 unaff_BL;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *(undefined1 *)(param_1 + 0x22) = unaff_BL;
  uVar1 = in((short)param_2);
  *unaff_RDI = *unaff_RSI;
  *(uint *)(param_2 + -0x37c36b05) =
       *(uint *)(param_2 + -0x37c36b05) | CONCAT31((int3)((uint)in_EAX >> 8),uVar1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140029300(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x0001400295a8) overlaps instruction at (ram,0x0001400295a3)
// 

void FUN_140029560(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  char *pcVar2;
  char cVar3;
  byte bVar5;
  undefined8 in_RAX;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined4 unaff_EBP;
  undefined4 unaff_0000002c;
  uint unaff_ESI;
  uint uVar6;
  bool bVar7;
  int local_8c;
  undefined1 auStack_10 [8];
  char cVar4;
  
  uVar6 = unaff_ESI | *(uint *)(param_2 + 2);
  bVar5 = (byte)((ulonglong)in_RAX >> 8);
  if ((byte)((byte)in_RAX + bVar5) != '\0') {
    puVar1 = (uint *)(CONCAT71(unaff_00000019,unaff_BL) + -0x51);
    *puVar1 = ~*puVar1;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  uVar6 = CONCAT22((short)(uVar6 >> 0x10),CONCAT11(0xa5,(char)uVar6)) + 0xbab58a3f;
  if (uVar6 == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  puVar1 = (uint *)((ulonglong)(uVar6 | *(uint *)((ulonglong)uVar6 - 0x24d63a41)) - 0x55);
  *puVar1 = *puVar1 >> 1;
  bVar7 = *(uint *)((ulonglong)(((int)param_2 - local_8c) - (uint)CARRY1((byte)in_RAX,bVar5)) - 0x35
                   ) < (uint)auStack_10;
  pcVar2 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + -0x51e88933);
  cVar3 = *pcVar2;
  cVar4 = *pcVar2;
  *pcVar2 = (cVar4 - unaff_BL) - bVar7;
  if (SBORROW1(cVar3,unaff_BL) == SBORROW1(cVar4 - unaff_BL,bVar7)) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140029770(longlong param_1,undefined2 param_2)

{
  char cVar1;
  uint in_EAX;
  uint uVar2;
  undefined4 unaff_ESI;
  undefined1 *unaff_RDI;
  bool in_ZF;
  unkbyte10 in_ST0;
  
  out(param_2,unaff_ESI);
  if (!in_ZF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  cVar1 = (char)unaff_ESI + '6';
  uVar2 = CONCAT31((int3)(char)((uint)unaff_ESI >> 8),cVar1);
  if ((POPCOUNT(cVar1) & 1U) != 0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  *(uint *)(param_1 + 0x7c197207) = *(uint *)(param_1 + 0x7c197207) | 0xfffffff3;
  *(int *)((ulonglong)in_EAX + 0x68) = *(int *)((ulonglong)in_EAX + 0x68) + uVar2;
  uVar2 = uVar2 ^ 0x82969a19;
  *(unkbyte10 *)((ulonglong)uVar2 + 0x32d22cee) = in_ST0;
  *unaff_RDI = (char)uVar2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

undefined8 FUN_140029810(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined6 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined6 uVar7;
  undefined8 unaff_RBX;
  undefined4 *unaff_RSI;
  longlong unaff_RDI;
  bool in_ZF;
  float10 in_ST0;
  undefined8 auStackX_8 [4];
  
  uVar5 = (undefined1)param_2;
  uVar6 = (undefined1)((ulonglong)param_2 >> 8);
  uVar7 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar3 = (byte)param_1;
  uVar4 = (undefined6)((ulonglong)param_1 >> 0x10);
  if (in_ZF) {
    *(byte *)CONCAT62(uVar4,CONCAT11(0x6c,bVar3)) =
         *(byte *)CONCAT62(uVar4,CONCAT11(0x6c,bVar3)) & (byte)((ulonglong)unaff_RBX >> 8);
    out(*unaff_RSI,(short)param_2);
    *(int *)(param_2 + 0x635bdcb9) = *(int *)(param_2 + 0x635bdcb9) >> (bVar3 & 0x1f);
    *(byte *)(unaff_RDI + -0x40) = ~*(byte *)(unaff_RDI + -0x40);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  pcVar1 = (code *)swi(0x3d);
  uVar2 = (*pcVar1)();
  out(0x6d,(char)uVar2);
  if (!SBORROW4(*(int *)(CONCAT62(uVar7,CONCAT11(uVar6,uVar5)) + 0x5eba40bb),(int)auStackX_8)) {
    *(short *)(param_4 + 0x7b) = (short)ROUND(in_ST0);
    out(CONCAT11(uVar6,uVar5),uVar2);
    out(CONCAT11(99,uVar5),(char)uVar2);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  return auStackX_8[0];
}



// WARNING: Control flow encountered bad instruction data

void FUN_140029920(void)

{
  undefined4 uVar1;
  undefined8 unaff_RBX;
  undefined8 unaff_retaddr;
  
  uVar1 = in(0x94);
  *(undefined8 *)
   ((ulonglong)
    CONCAT31((int3)((uint)uVar1 >> 8),
             ((char)uVar1 + '?') - (((byte)((ulonglong)unaff_RBX >> 8) >> 5 & 1) != 0)) + 0x71) =
       unaff_retaddr;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x000140029a75)

char FUN_140029a70(longlong param_1,undefined2 param_2)

{
  int iVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined1 in_AL;
  char cVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_0000001c;
  int unaff_EBP;
  int *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = in_AL;
  pcVar3 = (code *)swi(0x6b);
  cVar4 = (*pcVar3)();
  iVar1 = *unaff_RSI;
  uVar2 = in(param_2);
  unaff_RDI[5] = uVar2;
  if (param_1 == 1) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (SBORROW4(iVar1,*(int *)(unaff_RDI + 1))) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  iVar1 = *(int *)CONCAT44(unaff_0000001c,unaff_EBX);
  *(int *)CONCAT44(unaff_0000001c,unaff_EBX) =
       *(int *)CONCAT44(unaff_0000001c,unaff_EBX) + unaff_EBP;
  if (*(int *)CONCAT44(unaff_0000001c,unaff_EBX) != 0 &&
      SCARRY4(iVar1,unaff_EBP) == *(int *)CONCAT44(unaff_0000001c,unaff_EBX) < 0) {
    return cVar4 + -0x2f;
  }
  if (((ulonglong)(unaff_RDI + 6) & 0x100) == 0 && ((ulonglong)(unaff_RDI + 6) & 0x4000) == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140029c80(void)

{
  uint unaff_ESP;
  longlong unaff_RDI;
  
  *(uint *)(unaff_RDI + -0xe) = *(uint *)(unaff_RDI + -0xe) & unaff_ESP;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x000140029d27) overlaps instruction at (ram,0x000140029d26)
// 

void FUN_140029d20(longlong param_1)

{
  uint unaff_ESI;
  
  if (unaff_ESI < *(uint *)(param_1 + -0x11)) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140029e30(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140029f80(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002a18d(undefined8 param_1,undefined2 param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  uint *in_RAX;
  char unaff_BL;
  char unaff_BH;
  undefined8 *puVar4;
  undefined8 *unaff_RBP;
  uint *unaff_RSI;
  ulonglong unaff_RDI;
  undefined8 uStack_18;
  
  uVar1 = *in_RAX;
  *in_RAX = *in_RAX + param_4;
  cVar3 = (char)(unaff_RDI & 0xffffffff) + '\x15' + CARRY4(uVar1,param_4);
  *(char *)(CONCAT71((int7)((unaff_RDI & 0xffffffff) >> 8),cVar3) + 0x2c) =
       (char)((ushort)param_2 >> 8);
  uVar2 = in(param_2);
  *(undefined4 *)((ulonglong)in_RAX & 0xffffffff) = uVar2;
  out(param_2,cVar3);
  *unaff_RSI = *unaff_RSI | (int)in_RAX + 4U;
  if ((POPCOUNT(unaff_BL - unaff_BH) & 1U) == 0) {
    puVar4 = (undefined8 *)&stack0xfffffffffffffff0;
    cVar3 = '\x0e';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *unaff_RBP;
      cVar3 = cVar3 + -1;
    } while ('\0' < cVar3);
    FUN_14002a18d(param_1,param_2,param_3,param_4);
    return;
  }
  func_0x00014178d753();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002a190(undefined8 param_1,undefined2 param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  uint *in_RAX;
  char unaff_BL;
  char unaff_BH;
  undefined8 *puVar4;
  undefined8 *unaff_RBP;
  uint *unaff_RSI;
  ulonglong unaff_RDI;
  undefined8 uStack_18;
  
  uVar1 = *in_RAX;
  *in_RAX = *in_RAX + (uint)param_1;
  cVar3 = (char)(unaff_RDI & 0xffffffff) + '\x15' + CARRY4(uVar1,(uint)param_1);
  *(char *)(CONCAT71((int7)((unaff_RDI & 0xffffffff) >> 8),cVar3) + 0x2c) =
       (char)((ushort)param_2 >> 8);
  uVar2 = in(param_2);
  *(undefined4 *)((ulonglong)in_RAX & 0xffffffff) = uVar2;
  out(param_2,cVar3);
  *unaff_RSI = *unaff_RSI | (int)in_RAX + 4U;
  if ((POPCOUNT(unaff_BL - unaff_BH) & 1U) == 0) {
    puVar4 = (undefined8 *)&stack0xfffffffffffffff0;
    cVar3 = '\x0e';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *unaff_RBP;
      cVar3 = cVar3 + -1;
    } while ('\0' < cVar3);
    FUN_14002a18d(param_1,param_2,param_3,param_4);
    return;
  }
  func_0x00014178d753();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002a230(void)

{
  undefined1 uVar1;
  undefined1 *unaff_RDI;
  undefined2 unaff_retaddr;
  
  uVar1 = in(unaff_retaddr);
  *unaff_RDI = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002a340(int *param_1,undefined2 param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined1 in_AL;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  byte *unaff_RSI;
  char *unaff_RDI;
  
  if ((int)(*param_1 - unaff_EBX) < 0) {
    *unaff_RDI = -*unaff_RDI;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if ((int)unaff_EBX < *param_1) {
    uVar2 = in(param_2);
    *(undefined4 *)unaff_RDI = uVar2;
    *param_1 = *param_1 + unaff_EBX;
    bVar3 = (byte)param_1 & 7;
    *unaff_RSI = *unaff_RSI >> bVar3 | *unaff_RSI << 8 - bVar3;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  puVar1 = (uint *)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x4d);
  DAT_6c09bfdb45cb7e19 = in_AL;
  *puVar1 = *puVar1 & unaff_EBX;
  out(param_2,DAT_98399ab5e620aa29);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002a490(undefined2 *param_1,longlong param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong lVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  undefined8 in_RAX;
  longlong unaff_RBX;
  byte *unaff_RDI;
  char in_CF;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  
  *param_1 = in_FPUControlWord;
  param_1[2] = in_FPUStatusWord;
  param_1[4] = in_FPUTagWord;
  *(undefined8 *)(param_1 + 10) = in_FPUDataPointer;
  *(undefined8 *)(param_1 + 6) = in_FPUInstructionPointer;
  param_1[9] = in_FPULastInstructionOpcode;
  uVar8 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + 'B' + in_CF) + 0x2ad0a2d;
  bVar7 = (byte)uVar8;
  bVar3 = *unaff_RDI;
  if ((longlong)param_1 + -1 == 0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  uVar4 = in((short)param_2);
  *(undefined4 *)(unaff_RDI + 1) = uVar4;
  if (*unaff_RDI <= bVar7 && bVar7 != bVar3) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  unaff_RDI[5] = bVar7;
  pbVar1 = (byte *)((ulonglong)uVar8 + 9);
  bVar6 = (byte)((longlong)param_1 + -1) & 7;
  *pbVar1 = *pbVar1 >> bVar6 | *pbVar1 << 8 - bVar6;
  if (param_1 + -1 != (undefined2 *)0x0 && bVar7 == bVar3) {
    lVar5 = (longlong)*(int *)(unaff_RBX + 0x56) * 0x22fde659;
    *(int *)(param_2 + -0x48) =
         *(int *)(param_2 + -0x48) + (int)param_2 + (uint)((int)lVar5 != lVar5);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  pcVar2 = (char *)((ulonglong)uVar8 - 0x7a);
  *pcVar2 = *pcVar2 >> ((byte)(param_1 + -1) & 0x1f);
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002a6a0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14002a740(longlong param_1,longlong param_2)

{
  byte bVar1;
  code *pcVar2;
  byte unaff_BL;
  longlong unaff_RSI;
  
  bVar1 = *(byte *)(param_2 + -0x35cdb551 + unaff_RSI * 2);
  *(byte *)(param_1 + 0x65) = *(byte *)(param_1 + 0x65) | unaff_BL;
  out(_DAT_ffffffffcdf23915,CONCAT11((byte)((ulonglong)param_2 >> 8) & bVar1,(char)param_2));
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002a850(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 unaff_EBX;
  longlong unaff_RBP;
  longlong in_FS_OFFSET;
  bool in_ZF;
  char in_SF;
  char in_OF;
  char cVar4;
  
  LOCK();
  puVar1 = (undefined4 *)(in_FS_OFFSET + unaff_RBP + -0x112702a7);
  uVar2 = *puVar1;
  *puVar1 = unaff_EBX;
  UNLOCK();
  if (!in_ZF && in_OF == in_SF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  cVar4 = (char)((uint)uVar2 >> 8);
  cVar3 = cVar4 + *(char *)(param_2 + -0x9185023);
  if (cVar3 != '\0' && SCARRY1(cVar4,*(char *)(param_2 + -0x9185023)) == cVar3 < '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14002a9a0(undefined8 param_1,undefined8 param_2)

{
  uint *puVar1;
  code *pcVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined6 uVar7;
  longlong unaff_RSI;
  undefined1 *puVar8;
  undefined1 in_CF;
  float10 in_ST0;
  
  uVar5 = (undefined1)param_2;
  uVar6 = (undefined1)((ulonglong)param_2 >> 8);
  uVar7 = (undefined6)((ulonglong)param_2 >> 0x10);
  pcVar2 = (code *)swi(0xd6);
  uVar3 = (*pcVar2)();
  out(CONCAT11(uVar6,uVar5),uVar3);
  if ((bool)in_CF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  puVar1 = (uint *)(CONCAT62(uVar7,CONCAT11(uVar6,uVar5)) + -0x35fba357);
  uVar4 = 0x1f;
  if (*puVar1 != 0) {
    for (; *puVar1 >> uVar4 == 0; uVar4 = uVar4 - 1) {
    }
  }
  puVar8 = (undefined1 *)(ulonglong)uVar4;
  uVar4 = func_0x000134183776();
  *(double *)(puVar8 + 0x5d) = (double)in_ST0;
  *puVar8 = *(undefined1 *)(unaff_RSI + 4);
  if (SBORROW4(uVar4 & 0xfd00ac22,*(int *)(puVar8 + 1))) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002ac50(longlong param_1,undefined2 param_2)

{
  undefined1 uVar1;
  char in_AL;
  undefined4 unaff_EBX;
  undefined4 unaff_0000001c;
  undefined1 *unaff_RDI;
  char in_CF;
  
  if (SBORROW1(in_AL + -0x78 + in_CF,'}')) {
    *(char *)(param_1 + -0x1a) = *(char *)(param_1 + -0x1a) + -0x6b;
    uVar1 = in(param_2);
    *unaff_RDI = uVar1;
    *(undefined4 *)(&stack0x0000005e + CONCAT44(unaff_0000001c,unaff_EBX) * 2) = unaff_EBX;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_14002af10(void)

{
  return;
}



void FUN_14002b080(char param_1)

{
  longlong unaff_RDI;
  char in_CF;
  
  *(char *)(unaff_RDI + -0x40) = (*(char *)(unaff_RDI + -0x40) - param_1) - in_CF;
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002b170(undefined8 param_1,uint param_2)

{
  char in_AL;
  uint *unaff_RSI;
  uint *unaff_RDI;
  
  *(char *)((longlong)unaff_RSI + 0x6b) =
       *(char *)((longlong)unaff_RSI + 0x6b) + in_AL + (*unaff_RSI < *unaff_RDI);
  if ((int)(param_2 & 0xffffff61) < 0x7d0b9df2) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  out(0x2f,(char)(param_2 & 0xffffff61) + '\x0e');
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002b250(undefined8 param_1,undefined2 param_2)

{
  undefined1 *unaff_RSI;
  
  out(*unaff_RSI,param_2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002b370(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_14002b440(void)

{
  code *pcVar1;
  undefined1 *in_RAX;
  undefined1 unaff_BL;
  undefined8 unaff_retaddr;
  
  LOCK();
  *in_RAX = unaff_BL;
  UNLOCK();
  pcVar1 = (code *)swi(1);
  (*pcVar1)(unaff_retaddr);
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002b490(undefined8 param_1)

{
  undefined1 uVar1;
  uint in_EAX;
  undefined1 *unaff_RDI;
  longlong unaff_retaddr;
  
  in((short)in_EAX);
  *(char *)((ulonglong)in_EAX - 0x516898c) = *(char *)((ulonglong)in_EAX - 0x516898c) + -1;
  uVar1 = in((short)in_EAX);
  *unaff_RDI = uVar1;
  *(undefined8 *)(unaff_retaddr + -8) = param_1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002b560(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

undefined4 FUN_14002b660(void)

{
  uint in_EAX;
  undefined4 unaff_ESI;
  undefined4 *unaff_RDI;
  bool in_CF;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  *unaff_RDI = *(undefined4 *)(ulonglong)in_EAX;
  if (in_OF != in_SF) {
    *(undefined1 *)((longlong)unaff_RDI + 0x7ec4d03a) = 0xdc;
    return unaff_ESI;
  }
  if (in_CF || in_ZF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_14002b720(void)

{
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002b7e0(undefined8 param_1,int param_2)

{
  int *piVar1;
  int in_EAX;
  uint unaff_EBX;
  uint unaff_EBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
  if (!SCARRY4(in_EAX,-0x18cdad38)) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *(int *)((longlong)unaff_RDI + -0x1e) = *(int *)((longlong)unaff_RDI + -0x1e) - param_2;
  piVar1 = (int *)((ulonglong)
                   CONCAT31(CONCAT21((short)((unaff_EBP & unaff_EBX) >> 0x10),
                                     (char)((unaff_EBP & unaff_EBX) >> 8) - (char)unaff_EBX),
                            *(undefined1 *)(unaff_RSI + 1)) + 0x1b7f9d2f);
  *piVar1 = *piVar1 << 8;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002ba40(undefined8 param_1,undefined2 param_2)

{
  undefined4 in_EAX;
  
  out(param_2,in_EAX);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002bb10(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002bbd0(void)

{
  int *unaff_RBX;
  int unaff_EDI;
  
  *unaff_RBX = *unaff_RBX - unaff_EDI;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002bcb0(void)

{
  char in_SF;
  char in_OF;
  
  if (in_OF != in_SF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



ulonglong FUN_14002bdb0(void)

{
  undefined1 auStack_8 [8];
  
  return (ulonglong)auStack_8 & 0xffffffff;
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002bec0(void)

{
  bool in_PF;
  
  if (in_PF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002bf90(void)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  undefined8 uStack_10;
  
  puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\x01';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x00014002c061)

void FUN_14002c040(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14002c0d0(void)

{
  code *pcVar1;
  int unaff_EBX;
  byte in_CF;
  bool in_OF;
  
  if (in_OF) {
    _DAT_17c46af32 = _DAT_17c46af32 + unaff_EBX + (uint)in_CF;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



ulonglong FUN_14002c150(void)

{
  undefined1 in_AL;
  
  out(0x40,in_AL);
  return (ulonglong)&stack0x00000000 & 0xffffffff;
}



void FUN_14002c1f0(undefined8 param_1,longlong param_2)

{
  undefined1 in_AL;
  uint unaff_ESI;
  
  *(uint *)(param_2 + 0x21f63812) = *(uint *)(param_2 + 0x21f63812) | unaff_ESI;
  out(0x9d,in_AL);
  return;
}



// WARNING: Control flow encountered bad instruction data

void thunk_EXT_FUN_cc578688(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002c450(undefined8 param_1,byte *param_2)

{
  byte unaff_BL;
  
  *param_2 = *param_2 ^ unaff_BL;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002c520(byte param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint in_EAX;
  undefined1 unaff_BL;
  undefined6 unaff_0000001a;
  undefined1 *unaff_RDI;
  
  puVar1 = (uint *)((ulonglong)(in_EAX & 0x182517c8) + 0x20e85b89 +
                   CONCAT62(unaff_0000001a,CONCAT11(0xef,unaff_BL)) * 8);
  bVar4 = param_1 & 0x1f;
  *puVar1 = *puVar1 >> bVar4 | *puVar1 << 0x20 - bVar4;
  uVar2 = *puVar1;
  *unaff_RDI = (char)(in_EAX & 0x182517c8);
  puVar1 = (uint *)(CONCAT62(unaff_0000001a,CONCAT11(0xef,unaff_BL)) + -8);
  uVar3 = *puVar1;
  *puVar1 = uVar3 << 0x19 | (uint)(CONCAT14(bVar4 != 0 && (int)uVar2 < 0,uVar3) >> 8);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002c5f0(void)

{
  byte in_AL;
  
  if (0x16 < in_AL) {
    return;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002c730(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  undefined8 in_RAX;
  char unaff_BL;
  longlong unaff_RBP;
  byte in_CF;
  bool in_PF;
  
  if (in_PF) {
    pbVar2 = (byte *)(unaff_RBP + 0x70 + param_1 * 4);
    bVar3 = (byte)param_2 + *pbVar2;
    uVar4 = (uint)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(0xa0,(char)in_RAX));
    pcVar1 = (char *)(CONCAT71((int7)((ulonglong)param_2 >> 8),bVar3 + in_CF) + -0xc);
    *pcVar1 = (*pcVar1 - unaff_BL) -
              (0x1f1d710b < uVar4 ||
              CARRY4(uVar4 + 0xe0e28ef4,(uint)(CARRY1((byte)param_2,*pbVar2) || CARRY1(bVar3,in_CF))
                    ));
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14002c800(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined4 in_EAX;
  
  uVar1 = in(param_2);
  _DAT_86099551d406c622 = CONCAT31((int3)((uint)in_EAX >> 8),uVar1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002c8a0(longlong param_1)

{
  undefined6 uVar1;
  float10 in_ST0;
  
  uVar1 = *(undefined6 *)(&stack0x41ac2d20 + param_1 * 4);
  *(float *)(param_1 + -0x2831198c) = (float)in_ST0;
  *(undefined8 *)((ulonglong)(uint)uVar1 - 8) = 8;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002c990(undefined8 param_1,undefined2 param_2)

{
  code *pcVar1;
  undefined1 *unaff_RSI;
  
  out(*unaff_RSI,param_2);
  pcVar1 = (code *)swi(0x23);
  (*pcVar1)();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

undefined4 FUN_14002ca80(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 unaff_BL;
  longlong unaff_RDI;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (param_1 == 1 || in_ZF != false) {
    *(char *)(param_2 + 0x59a4886b) = *(char *)(param_2 + 0x59a4886b) + '\x01';
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (in_ZF || in_OF != in_SF) {
    uVar1 = in(0xd1);
    return uVar1;
  }
  *(undefined1 *)(unaff_RDI + -4) = unaff_BL;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_14002cb50(void)

{
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002cce0(longlong param_1)

{
  *(byte *)(param_1 + -0x2a671b06) =
       *(byte *)(param_1 + -0x2a671b06) | (byte)((ulonglong)param_1 >> 8);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002cd80(void)

{
  byte in_AL;
  
  out(0x8f,(in_AL | 0x7a) + 0x25);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002cf20(void)

{
  bool in_SF;
  
  if (!in_SF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002d0c0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002d190(undefined8 param_1,undefined2 param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined2 *unaff_RDI;
  undefined2 in_ES;
  
  *unaff_RDI = in_ES;
  uVar2 = func_0xf3a533d7();
  out(param_2,uVar2);
  pcVar1 = (code *)swi(0xdf);
  (*pcVar1)();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14002d330(undefined8 param_1,undefined2 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  byte bVar3;
  code *pcVar4;
  char cVar5;
  undefined8 in_RAX;
  char cVar6;
  undefined7 uVar7;
  undefined8 unaff_RSI;
  undefined4 *puVar8;
  byte in_CF;
  longlong lStackX_8;
  undefined1 auStackX_10 [24];
  
  cVar6 = (char)param_1;
  uVar7 = (undefined7)((ulonglong)param_1 >> 8);
  bVar3 = (byte)in_RAX + 0xab;
  cVar5 = bVar3 + in_CF;
  if (((byte)in_RAX < 0x55 && !CARRY1(bVar3,in_CF)) && cVar5 != '\0') {
    out(param_2,(int)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar5));
    pcVar4 = (code *)swi(0xa4);
    (*pcVar4)();
    pcVar1 = (char *)(CONCAT71(uVar7,cVar6) + -1);
    *pcVar1 = *pcVar1 + cVar6;
    LOCK();
    uVar2 = *(undefined4 *)(lStackX_8 + -0x27);
    *(undefined4 *)(lStackX_8 + -0x27) = (int)unaff_RSI;
    puVar8 = (undefined4 *)CONCAT44((int)((ulonglong)unaff_RSI >> 0x20),uVar2);
    UNLOCK();
    uVar2 = *(undefined4 *)CONCAT71(uVar7,cVar6);
    _DAT_43db53aa =
         _DAT_43db53aa + (int)auStackX_10 + (uint)((uint)lStackX_8 < *(uint *)CONCAT71(uVar7,cVar6))
    ;
    *(short *)((longlong)puVar8 + -0x16) =
         (short)ROUND((float10)*(longlong *)(CONCAT71(uVar7,cVar6) + -0x7f6878cd));
    out(*puVar8,(short)lStackX_8 - (short)uVar2);
    return;
  }
  func_0x000152aae0d5();
  in(param_2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_14002d400(void)

{
  return;
}



void FUN_14002d4d0(void)

{
  float *unaff_RDI;
  float10 in_ST0;
  
  *unaff_RDI = (float)in_ST0;
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002d5a0(uint param_1,undefined1 param_2)

{
  int *piVar1;
  int iVar2;
  int unaff_EBX;
  undefined1 *unaff_RDI;
  unkbyte10 in_ST1;
  uint *puStackX_8;
  
  piVar1 = (int *)(unaff_RDI + -0x1be581c1);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 - unaff_EBX;
  if (*piVar1 != 0 && SBORROW4(iVar2,unaff_EBX) == *piVar1 < 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *puStackX_8 = *puStackX_8 ^ param_1;
  *unaff_RDI = param_2;
  ffree(in_ST1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_14002d640(void)

{
  char cVar1;
  code *pcVar2;
  undefined8 *unaff_RBP;
  
  cVar1 = '\x16';
  do {
    unaff_RBP = unaff_RBP + -1;
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
    *(undefined8 *)register0x00000020 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  pcVar2 = (code *)swi(1);
  (*pcVar2)();
  return;
}



void FUN_14002d6e0(void)

{
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002d780(undefined8 param_1,undefined2 param_2)

{
  undefined4 *unaff_RSI;
  undefined1 unaff_DIL;
  undefined7 unaff_00000039;
  char in_CF;
  
  out(*unaff_RSI,param_2);
  *(char *)CONCAT71(unaff_00000039,unaff_DIL) =
       (*(char *)CONCAT71(unaff_00000039,unaff_DIL) + -0x80) - in_CF;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002d820(longlong param_1)

{
  uint in_EAX;
  longlong unaff_RSI;
  
  *(uint *)(&stack0x0000007e + param_1 * 4) = *(uint *)(&stack0x0000007e + param_1 * 4) & in_EAX;
  *(char *)(unaff_RSI + -0x3f4e61f9) = (char)((ulonglong)param_1 >> 8);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x00014002d88b)

void FUN_14002d8c0(undefined8 param_1,char param_2)

{
  char *pcVar1;
  code *pcVar2;
  byte bVar4;
  undefined8 uVar3;
  byte unaff_BL;
  longlong unaff_RSI;
  char cVar5;
  
  cVar5 = '\0';
  pcVar2 = (code *)swi(0xa7);
  uVar3 = (*pcVar2)();
  bVar4 = ((char)((ulonglong)uVar3 >> 8) - *(char *)(unaff_RSI + -0x74)) - cVar5;
  *(byte *)(unaff_RSI + -0x79) = *(byte *)(unaff_RSI + -0x79) | unaff_BL;
  pcVar1 = (char *)(CONCAT62((int6)((ulonglong)uVar3 >> 0x10),CONCAT11(bVar4,(char)uVar3)) + 0xb);
  *pcVar1 = (*pcVar1 - (param_2 >> 1)) - ((bVar4 & 1) != 0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_14002d960(void)

{
  char unaff_BH;
  char *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + unaff_BH;
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14002da00(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  uint in_EAX;
  uint uVar4;
  longlong unaff_RBX;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  uVar4 = (in_EAX | 0x88868349) & 0xae651309;
  piVar1 = (int *)(unaff_RSI + -0x65);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + param_1;
  if (*piVar1 == 0 || SCARRY4(iVar2,param_1) != *piVar1 < 0) {
    out((short)param_2,uVar4);
    uVar3 = in((short)param_2);
    *unaff_RDI = uVar3;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *unaff_RDI = *unaff_RSI;
  uVar3 = *(undefined1 *)(unaff_RBX + ((ulonglong)uVar4 & 0xff));
  _DAT_d235fddd = _DAT_d235fddd >> 0xc | _DAT_d235fddd << 0x14;
  unaff_RDI[-0x46bb30f4] =
       unaff_RDI[-0x46bb30f4] + (char)((uint)param_1 >> 8) + ((int)_DAT_d235fddd < 0);
  _DAT_c9eb5484 = 0xffffffffcf80bbe4;
  _DAT_c9eb547c = 0xffffffffffffffef;
  if ((int)(param_2 | (int)unaff_RDI + 1U) < 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  out(0xd74,CONCAT22((short)(uVar4 >> 0x10),
                     CONCAT11((byte)(uVar4 >> 8) ^ (byte)(param_2 >> 8),uVar3)));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002daa0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002db40(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002dce0(undefined8 param_1,undefined2 param_2)

{
  char in_SF;
  char in_OF;
  
  if (in_OF != in_SF) {
    in(param_2);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002ddb0(void)

{
  undefined4 *puVar1;
  undefined7 unaff_00000019;
  
  puVar1 = (undefined4 *)(CONCAT71(unaff_00000019,0x26) + -0x1c97a3d4);
  *puVar1 = *puVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002de80(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  int iVar3;
  int in_EAX;
  undefined4 unaff_EBX;
  undefined4 unaff_0000001c;
  longlong unaff_RBP;
  longlong unaff_RSI;
  byte in_CF;
  
  iVar3 = *(int *)(unaff_RSI + -0x1f636ad8 + unaff_RBP * 8);
  pbVar1 = (byte *)(CONCAT44(unaff_0000001c,unaff_EBX) + -0x5d);
  *pbVar1 = *pbVar1 ^ 0xd3;
  pcVar2 = (char *)((ulonglong)(in_EAX + iVar3 + (uint)in_CF) - 0x5d2ebcef);
  *pcVar2 = *pcVar2 - (char)((ulonglong)param_2 >> 8);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_14002df70(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  code *pcVar3;
  char cVar4;
  longlong unaff_RSI;
  byte in_CF;
  byte bVar5;
  
  bVar5 = (byte)((ulonglong)param_2 >> 8);
  bVar2 = bVar5 + *(byte *)(unaff_RSI + -0x2715b3af);
  cVar4 = bVar2 + in_CF;
  pcVar1 = (char *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(cVar4,(char)param_2)) +
                   -0x34);
  *pcVar1 = (*pcVar1 - cVar4) -
            (CARRY1(bVar5,*(byte *)(unaff_RSI + -0x2715b3af)) || CARRY1(bVar2,in_CF));
  pcVar3 = (code *)swi(3);
  (*pcVar3)(0x9e19f7a5);
  return;
}



// WARNING: This function may have set the stack pointer

void FUN_14002e040(void)

{
  code *pcVar1;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (in_ZF || in_OF != in_SF) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)(0xe0);
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002e1e0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002e2b0(byte param_1,uint *param_2)

{
  *param_2 = *param_2 >> (param_1 & 0x1f);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_14002e350(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  uint uVar2;
  char in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RBX;
  undefined4 unaff_EBP;
  uint unaff_EDI;
  longlong unaff_retaddr;
  
  uVar2 = *(uint *)(param_2 + -0x72);
  *(longlong *)(unaff_retaddr + -8) = param_2;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0x6d5abd02);
  *pcVar1 = (*pcVar1 - in_AL) - (unaff_EDI < uVar2);
  LOCK();
  DAT_d838b98011f54a01 = in_AL;
  *(undefined4 *)(unaff_RBX + 0x706c361c) = unaff_EBP;
  UNLOCK();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14002e420(byte param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int in_EAX;
  int unaff_EBX;
  byte *pbVar5;
  uint *unaff_RDI;
  
  _DAT_135aaa7fe = _DAT_135aaa7fe >> 1;
  piVar1 = (int *)((ulonglong)(uint)(in_EAX >> 0x1f) - 0x7f);
  *piVar1 = *piVar1 + unaff_EBX;
  uVar4 = _DAT_4760fe90fad324e2;
  *unaff_RDI = _DAT_4760fe90fad324e2;
  pbVar5 = (byte *)(ulonglong)uVar4;
  iVar2 = *(int *)((longlong)unaff_RDI + -0x1e167cc2);
  *pbVar5 = *pbVar5 << (param_1 & 7) | *pbVar5 >> 8 - (param_1 & 7);
  pcVar3 = (code *)swi(3);
  (*pcVar3)(param_1,iVar2 * 0x705f4b5a);
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002e690(void)

{
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002e760(longlong param_1,undefined2 param_2)

{
  uint *puVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 uVar5;
  longlong in_RAX;
  undefined4 *unaff_RSI;
  int *unaff_RDI;
  char in_AF;
  uint uVar4;
  
  out(*unaff_RSI,param_2);
  pcVar2 = (char *)(param_1 + in_RAX * 2);
  *pcVar2 = *pcVar2 + -1;
  *unaff_RDI = *unaff_RDI - (int)&stack0xfffffffffffffff8;
  *(char *)(in_RAX + 0x39) = *(char *)(in_RAX + 0x39) - (char)((ushort)param_2 >> 8);
  puVar1 = (uint *)(in_RAX + -0x57);
  uVar3 = *puVar1;
  *puVar1 = (int)*puVar1 >> 0x13;
  uVar4 = *puVar1;
  uVar5 = in(0x94);
  *unaff_RDI = CONCAT22((short)((uint)uVar5 >> 0x10),
                        CONCAT11(((int)*puVar1 < 0) << 7 | (uVar4 == 0) << 6 | in_AF << 4 |
                                 ((POPCOUNT(*puVar1 & 0xff) & 1U) == 0) << 2 | 2U |
                                 ((int)uVar3 >> 0x12 & 1U) != 0,(char)uVar5));
  if (uVar4 == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002e830(undefined8 param_1,undefined2 param_2)

{
  longlong unaff_RSI;
  undefined4 unaff_EDI;
  undefined4 unaff_0000003c;
  float10 in_ST0;
  undefined1 unaff_retaddr;
  
  out(param_2,unaff_retaddr);
  *(short *)(unaff_RSI + CONCAT44(unaff_0000003c,unaff_EDI) * 8) = (short)in_ST0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002e900(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0xb3);
  (*pcVar1)();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002e9a0(undefined8 param_1,undefined2 param_2)

{
  longlong unaff_RBX;
  undefined1 *unaff_RSI;
  
  out(*unaff_RSI,param_2);
  *(char *)(unaff_RBX + -0x4e) = *(char *)(unaff_RBX + -0x4e) + '\x01';
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

int FUN_14002eae0(void)

{
  int in_EAX;
  byte in_CF;
  char in_SF;
  char in_OF;
  
  if (in_OF == in_SF) {
    return in_EAX + -0x737b1ced + (uint)in_CF;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002eb80(void)

{
  code *pcVar1;
  uint uVar2;
  longlong in_RAX;
  undefined1 *unaff_RDI;
  uint auStack_7c [29];
  
  uVar2 = (uint)in_RAX ^ *(uint *)((longlong)auStack_7c + in_RAX);
  if (uVar2 != 0) {
    *unaff_RDI = (char)uVar2;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002ecc0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 in_EAX;
  char cVar2;
  char in_CF;
  
  cVar2 = (char)((ulonglong)param_2 >> 8);
  cVar1 = (char)param_2 + cVar2;
  if ((SCARRY1((char)param_2,cVar2) != SCARRY1(cVar1,in_CF)) != (char)(cVar1 + in_CF) < '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  out(0x68,in_EAX);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x00014002ed3d)

void FUN_14002ed60(undefined8 param_1,undefined2 param_2)

{
  undefined1 *unaff_RSI;
  
  out(*unaff_RSI,param_2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002ee00(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002eea0(void)

{
  byte in_AL;
  longlong unaff_RBX;
  
  *(byte *)(unaff_RBX + -0x49ddc277) = *(byte *)(unaff_RBX + -0x49ddc277) ^ in_AL;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002ef70(void)

{
  byte *pbVar1;
  longlong lVar2;
  byte in_AL;
  byte bVar3;
  char unaff_BH;
  longlong unaff_RDI;
  longlong alStackX_8 [4];
  
  bVar3 = in_AL ^ 0xa0;
  do {
    if ((POPCOUNT(bVar3) & 1U) == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    lVar2 = *(longlong *)register0x00000020;
    pbVar1 = (byte *)(unaff_RDI + -0x6331e80b);
    *pbVar1 = *pbVar1 - unaff_BH;
    bVar3 = *pbVar1;
    in(0x58);
    unaff_RDI = *(longlong *)((longlong)register0x00000020 + 8);
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + 0x10);
  } while (lVar2 != 1 && *pbVar1 == 0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002f040(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002f110(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002f1e0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002f2d0(void)

{
  int *unaff_RBX;
  int unaff_ESP;
  
  *unaff_RBX = *unaff_RBX + unaff_ESP;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14002f470(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  char cVar2;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  longlong unaff_RBX;
  int unaff_EBP;
  undefined4 unaff_0000002c;
  uint uVar3;
  
  cVar2 = (char)in_EAX + '\x1f';
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),cVar2);
  DAT_1505b42bb = DAT_1505b42bb | (byte)((ulonglong)param_1 >> 8);
  *(int *)(unaff_RBX + -0x5ca069c5) = *(int *)(unaff_RBX + -0x5ca069c5) - unaff_EBP;
  _DAT_8871f20c487b7235 = CONCAT44(in_register_00000004,uVar3);
  puVar1 = (uint *)(param_2 + CONCAT44(unaff_0000002c,unaff_EBP) * 8);
  *puVar1 = *puVar1 ^ uVar3;
  *(char *)(CONCAT44(in_register_00000004,uVar3) + 0x5b5c05c7) = cVar2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_14002f540(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  char cVar3;
  uint uVar5;
  int iVar6;
  undefined8 in_RAX;
  undefined2 uVar7;
  longlong unaff_RBP;
  undefined4 *unaff_RDI;
  bool bVar8;
  float10 in_ST0;
  undefined1 in_XMM3 [16];
  undefined1 unaff_XMM15 [16];
  short sVar4;
  
  uVar7 = (undefined2)param_2;
  out(uVar7,(int)in_RAX);
  vpacksswb_avx(unaff_XMM15,in_XMM3);
  *(byte *)(unaff_RBP + -0x45) = *(byte *)(unaff_RBP + -0x45) & (byte)(param_2 * -3);
  uVar2 = in(uVar7);
  uVar5 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar2);
  uVar1 = in(uVar7);
  *unaff_RDI = uVar1;
  iVar6 = (uVar5 + 0x6c3294d6) - (uint)(uVar5 < 0x9fa58dd5);
  if (SBORROW4(uVar5,-0x6c3294d6) != SBORROW4(uVar5 + 0x6c3294d6,(uint)(uVar5 < 0x9fa58dd5))) {
    uVar1 = in(uVar7);
    unaff_RDI[1] = uVar1;
    bVar8 = _DAT_6c0a7b64 < (uint)(param_2 * -3);
    _DAT_6c0a7b64 = _DAT_6c0a7b64 + param_2 * 3;
    *(double *)(unaff_RDI + 2) = (double)in_ST0;
    sVar4 = (short)iVar6;
    cVar3 = (char)(sVar4 / (short)DAT_5213a807);
    return CONCAT31((int3)(CONCAT22((short)((uint)iVar6 >> 0x10),
                                    CONCAT11((char)(sVar4 % (short)DAT_5213a807),cVar3)) >> 8),
                    cVar3 + -0x71 + bVar8);
  }
  in(uVar7);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x00014002f66c) overlaps instruction at (ram,0x00014002f668)
// 
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14002f610(int *param_1,undefined2 param_2)

{
  uint *puVar1;
  char *pcVar2;
  int iVar3;
  int in_EAX;
  uint uVar4;
  undefined4 *unaff_RSI;
  int *unaff_RDI;
  undefined1 in_CF;
  undefined1 in_ZF;
  byte bVar5;
  bool bVar6;
  
  *unaff_RDI = in_EAX;
  do {
    if ((bool)in_CF || (bool)in_ZF) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    in_CF = (uint)register0x00000020 < (uint)param_1;
    register0x00000020 = (BADSPACEBASE *)(ulonglong)((uint)register0x00000020 - (uint)param_1);
    iVar3 = *param_1;
    *param_1 = *param_1 + 1;
    bVar6 = *param_1 < 0;
    in_ZF = *param_1 == 0;
    _DAT_4af2f72d = in(param_2);
    param_1 = (int *)((longlong)param_1 + -1);
    if (param_1 == (int *)0x0 || !(bool)in_ZF) {
      out(0x9f,(char)in_EAX);
      if ((!SCARRY4(iVar3,1)) && ((bool)in_CF || (bool)in_ZF)) {
        uVar4 = in_EAX + -0x2218eee8 + (uint)(byte)in_CF;
        if ((int)uVar4 < 0) {
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
        pcVar2 = (char *)((ulonglong)uVar4 + 0x1638eb19);
        *pcVar2 = *pcVar2 + '\x01';
        return;
      }
      LOCK();
      *(char *)param_1 = (char)param_1;
      UNLOCK();
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    if (!(bool)in_CF && !(bool)in_ZF) {
      pcVar2 = (char *)((longlong)param_1 * 5 + -0x540f1070);
      *pcVar2 = *pcVar2 - (char)((ulonglong)param_1 >> 8);
      _DAT_4af2f731 = *unaff_RSI;
      param_1 = (int *)(ulonglong)(uint)((int)param_1 + unaff_RSI[1]);
      *(undefined4 **)((longlong)register0x00000020 + -8) = unaff_RSI + 1;
      bVar5 = 0;
      DAT_e2c7d4bb8d3bb1f0 = (char)in_EAX;
      goto code_r0x00014002f5b7;
    }
  } while ((bool)in_CF || (bool)in_ZF);
  while (bVar6) {
    bVar5 = 1;
code_r0x00014002f5b7:
    puVar1 = (uint *)((longlong)param_1 + -0x75e3d496);
    *puVar1 = *puVar1 >> ((byte)param_1 & 0x1f);
    bVar6 = ((ulonglong)param_1 & 0x1f) != 0;
    bVar6 = (bool)(!bVar6 & bVar5 | (bVar6 && (int)*puVar1 < 0));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14002f6e0(void)

{
  longlong in_RAX;
  longlong unaff_RDI;
  undefined2 in_FS;
  undefined2 in_FPUControlWord;
  
  _DAT_1287a0144 = in_FPUControlWord;
  *(undefined2 *)(in_RAX + -0x59084766 + unaff_RDI) = in_FS;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002f7b0(undefined2 *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 in_RAX;
  longlong lVar2;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  byte in_CF;
  char in_PF;
  char in_AF;
  char in_ZF;
  char in_SF;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  unkbyte10 in_ST2;
  unkbyte10 in_ST3;
  unkbyte10 in_ST4;
  unkbyte10 in_ST5;
  unkbyte10 in_ST6;
  unkbyte10 in_ST7;
  
  lVar2 = CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                   CONCAT11(in_SF << 7 | in_ZF << 6 | in_AF << 4 | in_PF << 2 | 2U | in_CF,
                            (char)in_RAX));
  *param_1 = in_FPUControlWord;
  param_1[2] = in_FPUStatusWord;
  param_1[4] = in_FPUTagWord;
  *(undefined8 *)(param_1 + 10) = in_FPUDataPointer;
  *(undefined8 *)(param_1 + 6) = in_FPUInstructionPointer;
  param_1[9] = in_FPULastInstructionOpcode;
  *(unkbyte10 *)(param_1 + 0xe) = in_ST0;
  *(unkbyte10 *)(param_1 + 0x13) = in_ST1;
  *(unkbyte10 *)(param_1 + 0x18) = in_ST2;
  *(unkbyte10 *)(param_1 + 0x1d) = in_ST3;
  *(unkbyte10 *)(param_1 + 0x22) = in_ST4;
  *(unkbyte10 *)(param_1 + 0x27) = in_ST5;
  *(unkbyte10 *)(param_1 + 0x2c) = in_ST6;
  *(unkbyte10 *)(param_1 + 0x31) = in_ST7;
  pbVar1 = (byte *)(CONCAT71(unaff_00000019,unaff_BL) + -0x651b1fba);
  *pbVar1 = *pbVar1 >> ((byte)param_1 & 0x1f);
  out((ushort)param_2 & (ushort)*(undefined4 *)(lVar2 + -0x6045fe24 + param_2 * 4),(int)lVar2);
  in(0x24);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_14002f850(void)

{
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x00014002f9e6)
// WARNING: Removing unreachable block (ram,0x00014002f998)
// WARNING: Removing unreachable block (ram,0x00014002f9eb)

ulonglong FUN_14002f9f0(undefined8 param_1,longlong param_2)

{
  bool in_CF;
  byte in_PF;
  byte in_AF;
  bool in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  
  if (in_ZF || in_OF != in_SF) {
    if (!in_CF && !in_ZF) {
      *(ulonglong *)(ulonglong)~(uint)&stack0x00000000 =
           (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_OF & 1) * 0x800 |
           (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
           (ulonglong)(in_SF & 1) * 0x80 | (ulonglong)(in_ZF & 1) * 0x40 |
           (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)(in_PF & 1) * 4 | 1 |
           (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
           (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (!in_CF) {
    *(int *)(param_2 + 0x2d) = (int)param_2;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  return (ulonglong)&stack0x00000000 & 0xffffffff;
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002fac0(byte param_1,undefined8 param_2)

{
  byte *pbVar1;
  code *pcVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined2 uVar5;
  undefined6 uVar6;
  undefined1 *unaff_RSI;
  undefined4 *unaff_RDI;
  byte *unaff_retaddr;
  
  uVar5 = (undefined2)param_2;
  uVar6 = (undefined6)((ulonglong)param_2 >> 0x10);
  pcVar2 = (code *)swi(0xcb);
  uVar4 = (*pcVar2)();
  out(*unaff_RSI,uVar5);
  uVar3 = (undefined4)CONCAT71((int7)(uVar4 >> 8),unaff_retaddr[uVar4 & 0xff]);
  out(uVar5,uVar3);
  unaff_RSI[(ulonglong)(((ulonglong)unaff_RDI & 0x400) != 0) * -2 + -0x48] =
       (unaff_RSI[(ulonglong)(((ulonglong)unaff_RDI & 0x400) != 0) * -2 + -0x48] -
       unaff_retaddr[uVar4 & 0xff]) - (param_1 < *unaff_retaddr);
  *unaff_RDI = uVar3;
  pbVar1 = (byte *)(CONCAT62(uVar6,uVar5) + -0x4234ec23);
  *pbVar1 = *pbVar1 >> 1 | *pbVar1 << 7;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002fb90(undefined8 param_1,uint param_2)

{
  uint in_EAX;
  longlong unaff_RBX;
  uint unaff_EBP;
  int *unaff_RSI;
  
  *(uint *)(unaff_RBX + -0x54e2abe5) = *(uint *)(unaff_RBX + -0x54e2abe5) | param_2;
  *(ulonglong *)((ulonglong)(((uint)&stack0x00000000 ^ unaff_EBP) - *unaff_RSI) - 8) =
       (ulonglong)in_EAX;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002fc30(longlong param_1)

{
  undefined8 unaff_RBX;
  byte in_CF;
  
  *(undefined8 *)((ulonglong)((int)&stack0x00000000 + *(int *)(param_1 * 9) + (uint)in_CF) - 8) =
       unaff_RBX;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002fcd0(void)

{
  int in_EAX;
  uint unaff_EBX;
  longlong unaff_RDI;
  
  *(uint *)(unaff_RDI + -0x120086f4) = *(uint *)(unaff_RDI + -0x120086f4) | unaff_EBX;
  if (in_EAX != 0x3b879c6d) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002fd70(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002fe10(int param_1,uint param_2)

{
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  byte in_CF;
  
  *unaff_RDI = *unaff_RSI;
  *(uint *)(unaff_RDI + 1) =
       (*(int *)(unaff_RDI + 1) - param_1) -
       (uint)(0xffffffac < param_2 || CARRY4(param_2 + 0x53,(uint)in_CF));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



undefined8 FUN_14002feb0(void)

{
  uint *puVar1;
  code *pcVar2;
  uint in_EAX;
  undefined8 uVar3;
  ulonglong unaff_RBP;
  undefined1 *unaff_RSI;
  byte bVar4;
  char cVar5;
  char in_AF;
  char cVar6;
  char cVar7;
  
  DAT_cb25ba5c2275eeea = (undefined1)in_EAX;
  puVar1 = (uint *)((unaff_RBP & 0xffffffff) - 0xe224b86);
  bVar4 = 0;
  *puVar1 = *puVar1 & in_EAX;
  cVar7 = (int)*puVar1 < 0;
  cVar6 = *puVar1 == 0;
  cVar5 = (POPCOUNT(*puVar1 & 0xff) & 1U) == 0;
  pcVar2 = (code *)swi(0x4d);
  uVar3 = (*pcVar2)();
  DAT_75700585b64cb93b = (char)uVar3;
  return CONCAT71((int7)(CONCAT62((int6)((ulonglong)uVar3 >> 0x10),
                                  CONCAT11(cVar7 << 7 | cVar6 << 6 | in_AF << 4 | cVar5 << 2 | 2U |
                                           bVar4,(char)uVar3)) >> 8),*unaff_RSI);
}



// WARNING: Control flow encountered bad instruction data

void FUN_14002ff50(undefined8 param_1)

{
  char *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI - (char)((ulonglong)param_1 >> 8);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x00014002fffc)
// WARNING: Removing unreachable block (ram,0x00014002ffff)
// WARNING: Removing unreachable block (ram,0x000140030016)
// WARNING: Removing unreachable block (ram,0x000140030018)
// WARNING: Removing unreachable block (ram,0x00014003001a)
// WARNING: Removing unreachable block (ram,0xe0044a0c)
// WARNING: Removing unreachable block (ram,0x000140030054)
// WARNING: Removing unreachable block (ram,0x000140030057)

void FUN_14002fff0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  char *in_RAX;
  longlong unaff_RDI;
  char in_CF;
  char *pcVar2;
  
  cVar1 = (char)in_RAX + *in_RAX + in_CF;
  pcVar2 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1);
  LOCK();
  *(char *)(unaff_RDI + 0x73) = (char)((uint)param_2 >> 8);
  UNLOCK();
  *pcVar2 = *pcVar2 + cVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x0001400300a5) overlaps instruction at (ram,0x0001400300a0)
// 
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140030090(longlong param_1)

{
  undefined4 in_EAX;
  float10 in_ST0;
  
  *(float *)(param_1 + 0x32dc5e28) = (float)in_ST0;
  _DAT_e28de71a519d188e = in_EAX;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



undefined4 FUN_140030130(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined8 in_RAX;
  longlong unaff_RBP;
  
  in(0x7a);
  *(undefined8 *)(unaff_RBP + 8) = 0xfffffffffffffff6;
  uVar1 = in(param_2);
  return CONCAT31((int3)(char)((ulonglong)in_RAX >> 8),uVar1);
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400301d0(void)

{
  bool in_CF;
  bool in_PF;
  
  if (in_PF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (in_CF) {
    DAT_15575edce = DAT_15575edce + '\x01';
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140030270(void)

{
  undefined4 in_EAX;
  
  out(0xc3c7,in_EAX);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140030310(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400303e0(undefined8 param_1,undefined2 param_2)

{
  undefined4 in_EAX;
  
  out(param_2,in_EAX);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400304b0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140030650(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char in_CF;
  
  pcVar1 = (char *)(param_2 + -0x5b);
  *pcVar1 = (*pcVar1 - (char)((ulonglong)param_2 >> 8)) - in_CF;
  if (param_1 == 1 || *pcVar1 == '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140030720(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1400307f0(undefined8 param_1,byte param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  uint uVar8;
  undefined8 in_RAX;
  char unaff_BPL;
  char *unaff_RSI;
  longlong unaff_RDI;
  
  uVar8 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),0xed) ^ 0x4eaa8bae;
  sVar7 = (ushort)(byte)uVar8 * (ushort)param_2;
  puVar1 = (uint *)(unaff_RDI + 0x1c93ba17);
  uVar5 = (uint)((char)((ushort)sVar7 >> 8) != '\0');
  uVar3 = *puVar1;
  uVar6 = *puVar1 + (uint)&stack0x00000000;
  *puVar1 = uVar6 + uVar5;
  cVar4 = *unaff_RSI;
  out(0x40,CONCAT31((int3)((uint)_DAT_54fa0605a056c876 >> 8),cVar4));
  piVar2 = (int *)((ulonglong)CONCAT22((short)(uVar8 >> 0x10),sVar7) - 0x4284435e);
  *piVar2 = *piVar2 - ((int)unaff_RSI + 1);
  if (-1 < (char)((cVar4 - unaff_BPL) -
                  (CARRY4(uVar3,(uint)&stack0x00000000) || CARRY4(uVar6,uVar5)) | 0xf1U)) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x0001400308f8) overlaps instruction at (ram,0x0001400308f7)
// 

void FUN_1400308c0(uint param_1,undefined2 param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  code *pcVar3;
  char cVar4;
  byte bVar5;
  ulonglong uVar6;
  byte bVar8;
  uint *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *unaff_RBP;
  undefined8 *puVar13;
  int unaff_ESI;
  undefined4 *unaff_RDI;
  byte *pbVar14;
  undefined2 in_CS;
  undefined2 in_FS;
  char cVar15;
  undefined8 uStack_8;
  undefined2 *puVar7;
  longlong lVar9;
  
  puVar10 = (uint *)(ulonglong)(param_1 ^ (uint)&stack0x00000000);
  uVar2 = in(param_2);
  *unaff_RDI = uVar2;
  puVar12 = &uStack_8;
  uStack_8 = 0x36;
  *puVar10 = *puVar10 + 0x9148a59a;
  uVar6 = (longlong)*(int *)((longlong)unaff_RDI + -6) * 0x7d;
  pbVar14 = (byte *)(uVar6 & 0xffffffff);
  if ((POPCOUNT(*puVar10 & 0xff) & 1U) != 0) {
    if ((longlong)(int)uVar6 != uVar6) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  while( true ) {
    pbVar1 = pbVar14 + 1;
    uVar11 = (ulonglong)(uint)(unaff_ESI >> 0x1f);
    pcVar3 = *(code **)((longlong)puVar10 + 0x6b);
    *(undefined8 *)((longlong)puVar12 + -8) = 0x14003092b;
    uVar6 = (*pcVar3)();
    bVar8 = (byte)puVar10 << ((byte)puVar10 & 0x1f);
    lVar9 = CONCAT71((int7)((ulonglong)puVar10 >> 8),bVar8);
    bVar5 = (byte)uVar6 ^ 0xc4;
    puVar7 = (undefined2 *)(uVar6 ^ 0xc4);
    pbVar14 = pbVar14 + 5;
    *(int *)pbVar1 = (int)puVar7;
    if (lVar9 == 0) break;
    *(char *)((longlong)unaff_RBP + -0x698c0e93) = (char)puVar7;
    cVar4 = *(char *)((ulonglong)bVar5 + 0x6eb75a66) + -8;
    cVar15 = cVar4 == '\0';
    puVar13 = (undefined8 *)*unaff_RBP;
    *(undefined2 *)((longlong)unaff_RBP + 4) = in_CS;
    *(undefined4 *)unaff_RBP = 0x4003093f;
    unaff_ESI = (*(code *)CONCAT71((int7)(uVar6 >> 8),cVar4))();
    puVar12 = unaff_RBP + 1;
    puVar10 = (uint *)(lVar9 + -1);
    unaff_RBP = puVar13;
    if (puVar10 == (uint *)0x0 || cVar15 != '\0') {
      xabort(0x3a);
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
  }
  if ((char)bVar5 < '\x01') {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (SBORROW1(bVar5,*pbVar14) == (char)((char)puVar7 - *pbVar14) < '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  bVar8 = bVar8 & 0x3f;
  uVar6 = *(ulonglong *)(uVar11 + 0x51);
  *(ulonglong *)(uVar11 + 0x51) =
       uVar6 >> bVar8 | uVar6 << 0x41 - bVar8 | (ulonglong)(bVar5 < *pbVar14) << 0x40 - bVar8;
  *puVar7 = in_FS;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400309b0(uint param_1,undefined2 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte in_AL;
  longlong unaff_RBX;
  longlong unaff_RDI;
  
  puVar1 = (uint *)(unaff_RBX + -0x21);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - param_1;
  *(char *)(unaff_RDI + 0x3cd4c3ed) = (*(char *)(unaff_RDI + 0x3cd4c3ed) + '~') - (uVar2 < param_1);
  out(param_2,in_AL & (byte)*(undefined4 *)(unaff_RDI + 0x5be69fe6));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140030b50(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RBP;
  longlong unaff_RSI;
  
  piVar1 = (int *)(param_2 + 0x60f60fe1);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 0x66;
  if (SBORROW4(iVar2,-0x66) == *piVar1 < 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (*piVar1 < 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  out(*(undefined4 *)(unaff_RSI + 4),(short)param_2);
  puVar4 = (undefined8 *)&DAT_9ab07357;
  cVar3 = '\a';
  _DAT_9ab07357 = unaff_RBP;
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar4 = puVar4 + -1;
    *puVar4 = *unaff_RBP;
    cVar3 = cVar3 + -1;
  } while ('\0' < cVar3);
  _DAT_9ab07317 = &DAT_9ab07357;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140030c20(longlong param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined2 uVar3;
  longlong unaff_RBX;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined4 *unaff_RDI;
  undefined2 in_CS;
  bool in_CF;
  char in_ZF;
  
  uVar3 = 0xf140;
  if (!in_CF && !(bool)in_ZF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  pcVar2 = (code *)swi(9);
  (*pcVar2)();
  if (param_1 == 1 || in_ZF == '\0') {
    uVar1 = in(uVar3);
    *unaff_RDI = uVar1;
    *(undefined2 *)(unaff_RBP + 0x60 + unaff_RBX) = in_CS;
    out(*unaff_RSI,uVar3);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(longlong *)(unaff_RDI + -0x74e6aa1) = *(longlong *)(unaff_RDI + -0x74e6aa1) << 0x1c;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x000140030cf8) overlaps instruction at (ram,0x000140030cf7)
// 

void FUN_140030cf0(int *param_1,uint param_2)

{
  uint in_EAX;
  uint uVar1;
  int iVar2;
  longlong unaff_RSI;
  
  iVar2 = (int)((longlong)*param_1 * -0x26);
  *(int *)(unaff_RSI + 0x7c) =
       (*(int *)(unaff_RSI + 0x7c) - iVar2) - (uint)((longlong)iVar2 != (longlong)*param_1 * -0x26);
  in(0x84);
  uVar1 = (uint)param_1 | param_2;
  if ((int)uVar1 < 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if ((char)((byte)uVar1 & *(byte *)((ulonglong)uVar1 + 0x79)) < '\0') {
    *(undefined1 *)(ulonglong)in_EAX = uRam00000000c02fc76d;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_140030dc0(void)

{
  return;
}



void FUN_140030f60(void)

{
  ulonglong unaff_RBP;
  
                    // WARNING: Could not recover jumptable at 0x000140030f69. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)((unaff_RBP & 0xffffffff) + 0xf))();
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140031030(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RBP;
  undefined1 *unaff_RDI;
  undefined8 uStack_10;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  puVar3 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar2 = '\v';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar3 = puVar3 + -1;
    *puVar3 = *unaff_RBP;
    cVar2 = cVar2 + -1;
  } while ('\0' < cVar2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_140031100(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400311d0(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  int *unaff_RBX;
  undefined4 *unaff_RDI;
  byte in_CF;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  *unaff_RBX = *unaff_RBX + (int)unaff_RDI + 4 + (uint)in_CF;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400312a0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Instruction at (ram,0x000140031396) overlaps instruction at (ram,0x000140031394)
// 
// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x000140031396)

void FUN_140031370(uint param_1,longlong param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint unaff_EBX;
  longlong unaff_RBP;
  undefined4 *unaff_RDI;
  undefined2 in_DS;
  
  lVar5 = 0x405be83d;
  uVar6 = param_1 & *(uint *)((longlong)unaff_RDI + -0x32f9e6cf);
  uVar7 = (ulonglong)uVar6 - 1;
  if (uVar7 == 0 || uVar6 != 0) {
    do {
      iVar4 = (int)lVar5;
      lVar5 = CONCAT62((int6)((ulonglong)lVar5 >> 0x10),CONCAT11(0xfc,(char)lVar5));
    } while (iVar4 == 0x72254dec);
    uVar2 = in((short)param_2);
    *unaff_RDI = uVar2;
    uVar6 = (int)unaff_RDI + 4U & (uint)uVar7;
    if ((int)uVar6 < 1) {
      if ((int)uVar6 < 0) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      pcVar3 = (code *)swi(1);
      (*pcVar3)();
      return;
    }
    pbVar1 = (byte *)((ulonglong)uVar6 + 0x55);
    *pbVar1 = *pbVar1 >> 1 | *pbVar1 << 7;
    if (uVar6 != 0) {
      *(uint *)(lVar5 + -0x5b15d665) = *(uint *)(lVar5 + -0x5b15d665) ^ 0xaa6cb0c1;
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
  }
  *(char *)(unaff_RBP + -0x25) = *(char *)(unaff_RBP + -0x25) << ((byte)uVar7 & 0x1f);
  *(undefined2 *)((uVar7 & 0xffffffff) - 0x66) = in_DS;
  *(uint *)(param_2 + 0x78) = *(uint *)(param_2 + 0x78) | unaff_EBX;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400314b0(undefined8 param_1,undefined2 param_2)

{
  longlong unaff_RDI;
  byte in_CF;
  
  in(param_2);
  *(uint *)(&stack0x6d72049c + unaff_RDI * 8) =
       *(uint *)(&stack0x6d72049c + unaff_RDI * 8) << 1 | (uint)in_CF;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140031550(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400316c0(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  
  if ((char)(*(byte *)(unaff_RSI + 0xd1ee549) & (byte)param_2) < '\0') {
    uVar1 = in(param_2);
    *unaff_RDI = uVar1;
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140031790(undefined8 param_1,undefined2 param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 *unaff_RSI;
  bool in_CF;
  bool in_ZF;
  
  out(param_2,*unaff_RSI);
  uVar1 = in(param_2);
  if (!in_CF && !in_ZF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  puVar2 = (undefined1 *)((ulonglong)&stack0x00000000 & 0xffffffff);
  if (in_ZF) {
    puVar2 = (undefined1 *)(ulonglong)*(uint *)(ulonglong)uVar1;
  }
  *(undefined2 *)(puVar2 + -2) = param_2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140031880(undefined8 param_1,byte param_2)

{
  if (!CARRY1(param_2,param_2)) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140031950(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  byte *pbVar2;
  char *pcVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  longlong in_RAX;
  ulonglong uVar10;
  byte bVar11;
  undefined2 uVar12;
  byte unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined4 *unaff_retaddr;
  uint uVar9;
  
  bVar11 = (byte)param_1;
  pbVar2 = (byte *)(in_RAX + 0x56 + unaff_RSI * 8);
  *pbVar2 = *pbVar2 | unaff_BL;
  if ((char)*pbVar2 < '\0') {
    if (*(char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x43) !=
        (char)((ulonglong)param_1 >> 8)) {
      halt_baddata();
    }
  }
  else {
    LOCK();
    cVar4 = *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) = (char)((ulonglong)param_2 >> 8);
    uVar12 = CONCAT11(cVar4,0x4f);
    UNLOCK();
    uVar10 = (ulonglong)CONCAT31((int3)(char)((ulonglong)in_RAX >> 8),(char)in_RAX) &
             0xffffffffffffff55;
    puVar1 = (uint *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),uVar12) + 6);
    *puVar1 = *puVar1 >> (bVar11 & 0x1f);
    out(*unaff_retaddr,uVar12);
    cVar6 = (char)uVar10;
    LOCK();
    cVar5 = *(char *)(param_1 + 0x73);
    *(char *)(param_1 + 0x73) = cVar6 + '&';
    UNLOCK();
    if (!SCARRY1(cVar6,'&')) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    uVar9 = (uint)CONCAT71((int7)(uVar10 >> 8),cVar5);
    uVar8 = uVar9 + 0xe3364a5b;
    bVar7 = (byte)uVar8;
    pcVar3 = (char *)((ulonglong)uVar8 + 0x79de6436 + unaff_RBP * 8);
    *pcVar3 = (*pcVar3 - cVar4) -
              (CARRY1(bVar11,bVar7) || CARRY1(bVar11 + bVar7,0x1cc9b5a4 < uVar9));
    unaff_retaddr = unaff_retaddr + 1;
  }
  *(undefined1 *)(unaff_RDI + 4) = *(undefined1 *)unaff_retaddr;
  in(0xf9);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140031a20(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140031af0(void)

{
  undefined4 in_EAX;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  bool in_CF;
  bool in_ZF;
  
  out(0x23,in_EAX);
  *(undefined1 *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x18) = unaff_BH;
  if (!in_CF && !in_ZF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

int * FUN_140031bc0(longlong param_1)

{
  undefined4 unaff_EBX;
  int unaff_EBP;
  int *piVar1;
  int unaff_EDI;
  char in_ZF;
  
  piVar1 = (int *)(ulonglong)(uint)(unaff_EDI + 0xd2856f4 + unaff_EBP);
  if (param_1 == 1 || in_ZF != '\0') {
    *piVar1 = *piVar1 + CONCAT31((int3)((uint)unaff_EBX >> 8),0x7e);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  return piVar1;
}



// WARNING: Control flow encountered bad instruction data

int FUN_140031c90(void)

{
  uint *puVar1;
  longlong unaff_RDI;
  bool in_PF;
  
  puVar1 = (uint *)(unaff_RDI * 2 + -0x44f58c66);
  *puVar1 = *puVar1 << 1 | (uint)((int)*puVar1 < 0);
  if (!in_PF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  return *(int *)(unaff_RDI + 0x67483e4e) + -0x51e6970f;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x000140031da7)
// WARNING: Removing unreachable block (ram,0x000140031d9c)
// WARNING: Removing unreachable block (ram,0x000140031daf)

void FUN_140031d60(void)

{
  char cVar1;
  code *pcVar2;
  undefined1 uVar3;
  int in_EAX;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *unaff_RBP;
  undefined1 *unaff_RDI;
  byte in_CF;
  bool in_SF;
  undefined8 uStack_10;
  
  puVar5 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\x12';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar5 = puVar5 + -1;
    *puVar5 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  if (!in_SF) {
    uVar4 = (ulonglong)((in_EAX + -0x5ee0b6d3) - (uint)in_CF);
    pcVar2 = (code *)swi(4);
    uVar3 = (*pcVar2)();
    *unaff_RDI = uVar3;
    if (uVar4 == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_140031e30(void)

{
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140031f00(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  byte unaff_BH;
  int unaff_ESP;
  longlong unaff_RBP;
  longlong unaff_RDI;
  undefined2 in_ES;
  bool bVar2;
  bool bVar3;
  
  pbVar1 = (byte *)(unaff_RDI + 0x4a9f115b);
  *pbVar1 = *pbVar1 << 1 | *pbVar1 >> 7;
  *(undefined2 *)(unaff_RBP + -0x52516088) = in_ES;
  bVar2 = CARRY1(unaff_BH,*(byte *)(param_2 + -0x73));
  bVar3 = (byte)(unaff_BH + *(byte *)(param_2 + -0x73)) != '\0';
  if ((bVar2 || !bVar3) && (!bVar2 && bVar3)) {
    _DAT_1818acb93 = _DAT_1818acb93 + unaff_ESP;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *(int *)(param_2 + -0x70) = *(int *)(param_2 + -0x70) >> 0x1b;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140032040(undefined8 param_1,undefined2 param_2)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  char cVar4;
  uint unaff_EBX;
  undefined8 *puVar5;
  undefined8 *unaff_RBP;
  int *unaff_RDI;
  undefined8 auStack_882c [4355];
  undefined8 uStack_10;
  undefined8 *puVar6;
  
  puVar5 = (undefined8 *)&stack0xfffffffffffffff8;
  puVar6 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar4 = '\x06';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar5 = puVar5 + -1;
    *puVar5 = *unaff_RBP;
    cVar4 = cVar4 + -1;
  } while ('\0' < cVar4);
  piVar1 = (int *)(CONCAT71((int7)((ulonglong)param_1 >> 8),0x5f) + 0x7913e05f);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 << 0x12;
  puVar5 = auStack_882c + 1;
  cVar4 = '\b';
  do {
    puVar6 = puVar6 + -1;
    puVar5 = puVar5 + -1;
    *puVar5 = *puVar6;
    cVar4 = cVar4 + -1;
  } while ('\0' < cVar4);
  *unaff_RDI = *unaff_RDI + (unaff_EBX | 0xc80bc1a) + (uint)(iVar3 << 0x11 < 0);
  uVar2 = in(param_2);
  *(undefined1 *)(unaff_RDI + 1) = uVar2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140032110(undefined8 param_1,longlong param_2)

{
  char in_AH;
  char in_CF;
  
  *(char *)(param_2 + -0x7c4cf715) = (*(char *)(param_2 + -0x7c4cf715) - in_AH) - in_CF;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1400321e0(undefined8 param_1)

{
  uint *puVar1;
  undefined1 uVar2;
  byte bVar3;
  uint in_EAX;
  char cVar5;
  uint uVar6;
  ushort uVar8;
  ulonglong uVar9;
  longlong unaff_RBX;
  longlong unaff_RSI;
  byte *pbVar11;
  bool bVar12;
  longlong unaff_retaddr;
  ulonglong uVar4;
  byte *pbVar7;
  byte bVar10;
  
  uVar6 = in_EAX | *(uint *)(unaff_RSI + 0x186ce774);
  pbVar7 = (byte *)(ulonglong)uVar6;
  if (uVar6 == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  puVar1 = (uint *)(unaff_RBX + -0x32);
  *puVar1 = *puVar1 & (uint)&stack0x00000000;
  if ((int)*puVar1 < 1) {
    *pbVar7 = *pbVar7 - (char)uVar6;
    uVar2 = in((short)unaff_retaddr);
    uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),uVar2) & 0xffffffff;
    *(uint *)(unaff_retaddr + 0x69c95ed7) = (uint)&stack0x00000000;
    _DAT_15b602c22 = 0x3b8b64a7;
    uVar9 = CONCAT71((int7)((ulonglong)unaff_retaddr >> 8),0xf0);
    bVar12 = false;
    uVar6 = ((short)uVar4 / (short)*(char *)(uVar4 + 0x70) & 0xff) & 0xc2b9ff83;
    pbVar11 = (byte *)((ulonglong)&stack0x00000000 & 0xffffffff);
    while( true ) {
      bVar3 = (char)uVar6 + -0x5e + bVar12;
      bVar10 = (byte)(uVar9 >> 8) & *pbVar7;
      uVar8 = CONCAT11(bVar10,(char)uVar9);
      uVar9 = (ulonglong)uVar8;
      if (-1 < (char)bVar10) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      bVar10 = (byte)pbVar7;
      cVar5 = bVar10 - pbVar11[-0x6b5763bd];
      pbVar7 = (byte *)CONCAT71((int7)((ulonglong)pbVar7 >> 8),cVar5);
      out(uVar8,bVar3);
      if (bVar10 < pbVar11[-0x6b5763bd] || cVar5 == '\0') break;
      uVar6 = (uint)bVar3 & *(uint *)(pbVar7 + -0xb3b4bad);
      bVar12 = (byte)uVar6 < *pbVar11;
      bVar3 = *pbVar11;
      pbVar11 = pbVar11 + 1;
      if (bVar12 || (byte)uVar6 == bVar3) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
    }
    _DAT_8466cb95 = pbVar7;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140032350(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400323f0(longlong param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_1 + 0x167e5f04);
  *pbVar1 = *pbVar1 >> 7 | *pbVar1 << 1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



undefined4 FUN_1400324c0(void)

{
  undefined4 unaff_ESI;
  
  return unaff_ESI;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140032590(longlong param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint in_EAX;
  longlong unaff_RBP;
  byte in_CF;
  bool bVar4;
  
  uVar2 = param_2 - *(uint *)(param_1 + -0x6f);
  bVar4 = param_2 < *(uint *)(param_1 + -0x6f) || uVar2 < in_CF;
  out((short)uVar2 - (ushort)in_CF,(char)(in_EAX + 0xdd51ee12) + bVar4);
  bVar3 = ((byte)param_1 & 0x1f) % 9;
  bVar1 = *(byte *)(unaff_RBP + 0x72);
  *(byte *)(unaff_RBP + 0x72) =
       bVar1 << bVar3 |
       (byte)(CONCAT11(0x22ae11ed < in_EAX || CARRY4(in_EAX + 0xdd51ee12,(uint)bVar4),bVar1) >>
             9 - bVar3);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140032660(void)

{
  bool in_CF;
  bool in_ZF;
  
  if (!in_CF && !in_ZF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140032800(longlong param_1,undefined2 param_2)

{
  undefined1 uVar1;
  uint uVar2;
  longlong unaff_RBX;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  bool in_SF;
  
  uVar2 = in(0x30);
  if (!in_SF) {
    *(char *)((ulonglong)uVar2 + 0x23 + unaff_RBX * 8) = (char)param_1;
    out(0x4a,(char)uVar2);
    in(param_2);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  out(*unaff_RSI,param_2);
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  if (param_1 != 0) {
    out(0x17,(char)uVar2);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400328d0(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int *unaff_RSI;
  int *unaff_RDI;
  
  iVar3 = *unaff_RDI;
  iVar2 = *unaff_RSI;
  puVar1 = (uint *)(unaff_RBP + -0x657ac151);
  *puVar1 = *puVar1 >> 0x13 | *puVar1 << 0xd;
  if (SBORROW4(iVar2,iVar3)) {
    *(byte *)(unaff_RBX + -0x1bae57b5) = *(byte *)(unaff_RBX + -0x1bae57b5) >> 2;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140032e80(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140032f50(void)

{
  longlong lVar1;
  int unaff_EBP;
  undefined4 unaff_0000002c;
  longlong unaff_RDI;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  
  if (unaff_EBP <= *(int *)(unaff_RDI + 0x23ce607)) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  lVar1 = CONCAT44(unaff_0000002c,unaff_EBP);
  *(undefined2 *)(lVar1 + 0x65) = in_FPUControlWord;
  *(undefined2 *)(lVar1 + 0x69) = in_FPUStatusWord;
  *(undefined2 *)(lVar1 + 0x6d) = in_FPUTagWord;
  *(undefined8 *)(lVar1 + 0x79) = in_FPUDataPointer;
  *(undefined8 *)(lVar1 + 0x71) = in_FPUInstructionPointer;
  *(undefined2 *)(lVar1 + 0x77) = in_FPULastInstructionOpcode;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140033020(undefined8 param_1,uint param_2)

{
  undefined1 uVar1;
  uint in_EAX;
  ulonglong uVar2;
  uint uVar3;
  byte unaff_BL;
  undefined1 *puVar4;
  undefined8 unaff_RBP;
  uint *unaff_RSI;
  uint *puVar5;
  uint *unaff_RDI;
  int unaff_retaddr;
  
  *unaff_RDI = in_EAX & 0xffffff46;
  uVar3 = in((short)param_2);
  unaff_RDI[1] = uVar3;
  *unaff_RSI = *unaff_RSI >> 1;
  uVar2 = (ulonglong)unaff_RSI & 0xffffffff;
  puVar4 = &stack0x00000006;
  puVar5 = (uint *)(ulonglong)(unaff_retaddr + 0x560d56cc);
  do {
    *(undefined8 *)(puVar4 + -8) = unaff_RBP;
    uVar3 = param_2 ^ (uint)(unaff_RDI + 2);
    out((short)uVar3,(char)uVar2);
    *(byte *)(ulonglong)uVar3 = *(byte *)(ulonglong)uVar3 & unaff_BL;
    uVar3 = *puVar5;
    uVar2 = (ulonglong)uVar3;
    param_2 = 0x8acb96bb;
    puVar4 = _DAT_b9a82fa4;
    puVar5 = puVar5 + 1;
  } while ((POPCOUNT(uVar3 & 0xc1) & 1U) == 0);
  uVar1 = in(0x96bb);
  *(undefined1 *)(unaff_RDI + 2) = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1400331c0(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  longlong lVar5;
  byte bVar6;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  bool bVar7;
  bool in_SF;
  bool in_OF;
  undefined2 in_FPUStatusWord;
  undefined1 auStack_2 [2];
  
  if (!in_OF) {
    if (in_SF) {
      return;
    }
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  bVar7 = _DAT_a1aae9fe < unaff_EBX;
  _DAT_a1aae9fe = _DAT_a1aae9fe - unaff_EBX;
  *(undefined2 *)(unaff_RSI + -0x1a) = in_FPUStatusWord;
  pbVar1 = (byte *)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x6d0f7a82);
  bVar3 = *pbVar1;
  bVar6 = (byte)((ulonglong)param_2 >> 8);
  bVar4 = *pbVar1 + bVar6;
  *pbVar1 = bVar4 + bVar7;
  if ((CARRY1(bVar3,bVar6) || CARRY1(bVar4,bVar7)) || *pbVar1 == 0) {
    *unaff_RDI = *unaff_RSI;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  lVar5 = param_1 + -1;
  if (lVar5 == 0 ||
      ((uint)auStack_2 &
      *(uint *)(CONCAT44(unaff_0000001c,
                         CONCAT31((int3)(unaff_EBX >> 8),(byte)unaff_EBX | unaff_RDI[0x27])) + -3))
      != 0) {
    pbVar1 = (byte *)(CONCAT44(in_register_00000004,in_EAX) + -0x6dae95e2);
    *pbVar1 = *pbVar1 ^ (byte)((ulonglong)lVar5 >> 8);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  pcVar2 = (char *)(lVar5 * 2 + 0xa1aae99d);
  *pcVar2 = *pcVar2 << 1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140033290(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x000140033331) overlaps instruction at (ram,0x000140033330)
// 
// WARNING: Removing unreachable block (ram,0x00014003334b)

undefined1 FUN_140033330(ulonglong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  longlong in_RAX;
  undefined2 uVar6;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  undefined1 *unaff_RSI;
  undefined1 *puVar8;
  undefined1 *unaff_RDI;
  longlong unaff_R13;
  undefined2 in_ES;
  byte in_CF;
  byte bVar9;
  byte in_ZF;
  bool bVar10;
  undefined1 uVar11;
  char cVar7;
  
  piVar1 = (int *)(in_RAX + 0x18);
  bVar9 = (byte)param_1 & 0x1f;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 << bVar9;
  bVar10 = (param_1 & 0x1f) != 0;
  bVar9 = !bVar10 & in_CF | (bVar10 && iVar2 << bVar9 - 1 < 0);
  bVar10 = (param_1 & 0x1f) != 0;
  bVar10 = (bool)(!bVar10 & in_ZF | (bVar10 && *piVar1 == 0));
  do {
    param_1 = param_1 - 1;
    if (param_1 == 0 || bVar10 != false) {
      *(uint *)(unaff_RSI + -0x3b) = *(uint *)(unaff_RSI + -0x3b) << 1 | (uint)bVar9;
      uVar11 = in((short)*(undefined4 *)CONCAT44(unaff_0000001c,unaff_EBX) * 0x3a);
      *unaff_RDI = uVar11;
      *(char *)(unaff_R13 + -0x18) = *(char *)(unaff_R13 + -0x18) << 1;
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    bVar4 = (byte)param_2;
    bVar3 = bVar4 - 0x20;
    bVar10 = bVar4 < 0x20 || bVar3 < bVar9;
    if (SBORROW1(bVar4,' ') != SBORROW1(bVar3,bVar9)) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    uVar11 = bVar3 == bVar9;
    *(undefined2 *)(unaff_RDI + 0x13) = in_ES;
    *unaff_RDI = *unaff_RSI;
    puVar8 = unaff_RSI + 1;
    do {
      uVar5 = in((short)param_2);
      unaff_EBX = CONCAT31((int3)(unaff_EBX >> 8),(char)(param_1 >> 8));
      if (!bVar10 && !(bool)uVar11) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      if (param_1 == 0) {
        return uVar5;
      }
      bVar9 = (byte)(param_2 >> 8);
      bVar10 = bVar9 < *(byte *)(param_2 + 0x5d39c3ae);
      cVar7 = bVar9 - *(byte *)(param_2 + 0x5d39c3ae);
      uVar6 = CONCAT11(cVar7,(char)param_2);
      param_2 = CONCAT62((int6)(param_2 >> 0x10),uVar6);
      uVar11 = cVar7 == '\0';
      in(uVar6);
      func_0x0001a11f5956();
      unaff_RSI = puVar8 + 1;
      out(*puVar8,(short)param_2);
      puVar8 = unaff_RSI;
    } while (!bVar10);
    bVar9 = 0;
    param_2._0_4_ = (uint)param_2;
    param_2._0_4_ = (uint)param_2 & unaff_EBX;
    param_2 = (ulonglong)(uint)param_2;
    bVar10 = (uint)param_2 == 0;
    unaff_RDI = unaff_RDI + 1;
  } while( true );
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400333d0(undefined8 param_1,undefined2 param_2)

{
  in(param_2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x000140033529) overlaps instruction at (ram,0x000140033527)
// 

void FUN_1400334a0(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 in_RAX;
  ulonglong uVar3;
  uint unaff_ESI;
  uint unaff_EDI;
  char in_CF;
  bool bVar4;
  char cVar5;
  char cVar6;
  
  if (param_1 + -1 != 0 && (int)param_1 == *(int *)(param_2 + -0x6a)) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (param_1 != 2 && (char)((ulonglong)param_2 >> 8) == (char)(param_1 + -1)) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  uVar1 = (uint)(0xd6 < (byte)param_2);
  uVar2 = unaff_ESI + 0xc1bdaed;
  if (SCARRY4(unaff_ESI,0xc1bdaed) != SCARRY4(uVar2,uVar1)) {
    LOCK();
    *(byte *)(param_1 + 0x60) = (byte)param_2;
    UNLOCK();
    *(undefined4 *)
     ((CONCAT71((int7)((ulonglong)in_RAX >> 8),((char)in_RAX + -0x29) - in_CF) & 0xffffffff) + 1) =
         *(undefined4 *)(ulonglong)unaff_EDI;
    *(char *)(param_3 + 0x3181ab11) = *(char *)(param_3 + 0x3181ab11) - (char)param_3;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (0xf3e42512 < unaff_ESI || CARRY4(uVar2,uVar1)) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  uVar3 = (ulonglong)(uVar2 + uVar1 & 0xf1b0c445);
  cVar6 = SBORROW8(uVar3,0x5f5ed14e);
  cVar5 = (longlong)(uVar3 - 0x5f5ed14e) < 0;
  bVar4 = uVar3 == 0x5f5ed14e;
  func_0xc6cf99bb();
  in(0x8e);
  if (bVar4 || cVar6 != cVar5) {
    func_0xf7c8537b();
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140033570(uint param_1)

{
  uint *puVar1;
  longlong unaff_RBX;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  float10 in_ST0;
  
  *unaff_RDI = *unaff_RSI;
  puVar1 = (uint *)(unaff_RBX + -0x217a88e2 + unaff_RBP);
  *puVar1 = *puVar1 ^ param_1;
  *(double *)(unaff_RBP + -0x1e1eaeec) = (double)in_ST0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140033610(longlong param_1)

{
  if (param_1 != 0) {
    return;
  }
  in(0xdb);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140033670(void)

{
  undefined4 in_EAX;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (in_ZF || in_OF != in_SF) {
    _DAT_ebda316ccea658c6 = in_EAX;
    return;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_1400336d0(byte param_1)

{
  int *piVar1;
  ulonglong in_R10;
  undefined8 local_res8;
  
  piVar1 = (int *)((in_R10 & 0xffffff83) - 0x30);
  *piVar1 = *piVar1 << (param_1 & 0x1f);
  *(char *)*local_res8 = (char)(in_R10 & 0xffffff83);
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140033730(void)

{
  uint in_EAX;
  uint *unaff_RDI;
  
  _DAT_eb0ef8b0 = -_DAT_eb0ef8b0;
  *unaff_RDI = in_EAX & 0x890aeec6;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140035540(longlong param_1)

{
  char cVar1;
  code *pcVar2;
  short in_AX;
  undefined8 *puVar3;
  undefined8 *unaff_RBP;
  char in_ZF;
  undefined8 uStack_10;
  
  puVar3 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\x0e';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar3 = puVar3 + -1;
    *puVar3 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  if (param_1 == 1 || in_ZF == '\0') {
    pcVar2 = (code *)swi(1);
    _DAT_c833e2c4edd72d2b = (int)in_AX;
    (*pcVar2)();
    return;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x000140035649)
// WARNING: Removing unreachable block (ram,0x00014003561a)
// WARNING: Removing unreachable block (ram,0x00014003561c)
// WARNING: Removing unreachable block (ram,0x00014003561e)
// WARNING: Removing unreachable block (ram,0x000140035593)

void FUN_1400355f0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined2 uVar3;
  byte bVar4;
  byte bVar5;
  bool in_ZF;
  unkbyte10 in_ST0;
  
  if (!in_ZF) {
    lVar2 = (longlong)(int)param_1 * -0x5781ac83;
    bVar4 = in(0xf5);
    if ((int)lVar2 != lVar2) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    *(unkbyte10 *)(param_2 + -0x5ebea6c8) = in_ST0;
    bVar5 = (byte)((ulonglong)param_2 >> 8);
    cVar1 = bVar4 + bVar5;
    uVar3 = (undefined2)CONCAT71((int7)((ulonglong)param_1 >> 8),cVar1);
    if (CARRY1(bVar4,bVar5) || cVar1 == '\0') {
      if (CARRY1(bVar4,bVar5)) {
        in(uVar3);
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    if ((POPCOUNT(cVar1) & 1U) != 0) {
      out(uVar3,(int)param_2);
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_1400356a0(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_140035750(void)

{
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140035800(longlong param_1)

{
  uint uVar1;
  uint in_EAX;
  undefined1 *unaff_RSI;
  longlong unaff_RDI;
  bool bVar2;
  float10 in_ST0;
  
  do {
    bVar2 = 0xe1ad2712 < in_EAX;
    in_EAX = in_EAX + 0x1e52d8ed;
    uVar1 = *(uint *)(param_1 + 0x517c6a06);
    *(uint *)(param_1 + 0x517c6a06) = uVar1 << 0x17 | (uint)(CONCAT14(bVar2,uVar1) >> 10);
    param_1 = param_1 + -1;
  } while (param_1 != 0 && in_EAX == 0);
  *(float *)(unaff_RDI + -0x28307fb0) = (float)in_ST0;
  *unaff_RSI = 0x41;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400358b0(void)

{
  unkbyte10 Var1;
  longlong unaff_RDI;
  unkbyte10 in_ST0;
  
  Var1 = to_bcd(in_ST0);
  *(unkbyte10 *)(unaff_RDI + 0x7194d2a0) = Var1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140035960(void)

{
  bool in_CF;
  
  if (!in_CF) {
    in(0xcd);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140035b50(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140035c80(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140035cc0(longlong param_1,uint param_2)

{
  int *piVar1;
  longlong unaff_GS_OFFSET;
  float10 in_ST0;
  
  func_0x0001757b9fcd();
  piVar1 = (int *)(unaff_GS_OFFSET + param_1 + -0x57a12639);
  *piVar1 = *piVar1 + -0x65708112;
  *(short *)((ulonglong)(param_2 ^ 0xfffffff7) + 0x6d7466b9) = (short)ROUND(in_ST0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140035d00(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140035d70(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(99);
  (*pcVar1)();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140035f20(longlong param_1,int param_2)

{
  undefined4 uVar1;
  char in_SF;
  char in_OF;
  
  if (param_1 == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  uVar1 = in((short)param_2);
  out((short)param_2,uVar1);
  if (in_OF == in_SF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *(int *)(param_1 + 0xd00dfa8) = *(int *)(param_1 + 0xd00dfa8) - param_2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



undefined4 FUN_140036050(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined4 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  uVar1 = *unaff_RSI;
  uVar2 = in(param_2);
  *unaff_RDI = uVar2;
  return uVar1;
}



void FUN_1400361d0(void)

{
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140036300(void)

{
  int unaff_ESP;
  int *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI - unaff_ESP;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_140036510(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140037160(longlong param_1)

{
  char in_ZF;
  float10 in_ST0;
  
  if (param_1 == 1 || in_ZF != '\0') {
    *(short *)(ulonglong)_DAT_395bf092dc3b0f2e = (short)ROUND(in_ST0);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  DAT_bd94dd076cee3d92 = (char)_DAT_395bf092dc3b0f2e;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140037290(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140037350(void)

{
  undefined4 in_EAX;
  undefined1 unaff_BL;
  longlong unaff_RSI;
  bool in_OF;
  
  if (in_OF) {
    out((short)((int)in_EAX >> 0x1f),in_EAX);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *(undefined1 *)(unaff_RSI + 0x7f) = unaff_BL;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x0001400373e7)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1400373d0(longlong param_1)

{
  bool in_CF;
  
  if (param_1 != 1) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (in_CF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140037420(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_140038190(void)

{
  in(0x76);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Control flow encountered bad instruction data

void FUN_140038570(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void thunk_FUN_140038669(void)

{
  return;
}



void FUN_140038669(void)

{
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140038740(undefined8 param_1,undefined2 param_2)

{
  longlong lVar1;
  undefined1 *unaff_RSI;
  
  lVar1 = 0x106b1533;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    out(*unaff_RSI,param_2);
    unaff_RSI = unaff_RSI + 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140038890(void)

{
  undefined4 in_EAX;
  longlong unaff_RDI;
  
  *(undefined4 *)(unaff_RDI + 4) = in_EAX;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



ulonglong FUN_1400389b0(byte *param_1,undefined2 param_2)

{
  byte bVar1;
  byte bVar6;
  uint unaff_EBX;
  undefined1 *unaff_RSI;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  
  out(param_2,unaff_EBX & 0xf8794df5);
  out(*unaff_RSI,param_2);
  bVar1 = *param_1;
  bVar6 = (byte)((ushort)param_2 >> 8);
  bVar2 = *param_1;
  *param_1 = *param_1 - bVar6;
  bVar3 = *param_1;
  bVar4 = *param_1;
  bVar5 = *param_1;
  *(undefined1 *)
   (CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(0x5f,(char)param_1)) + 0x1ad6b30d) = 0xe1;
  return (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW1(bVar2,bVar6) * 0x800 |
         (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
         (ulonglong)((char)bVar3 < '\0') * 0x80 | (ulonglong)(bVar4 == 0) * 0x40 |
         (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(bVar5) & 1U) == 0) * 4 |
         (ulonglong)(bVar1 < bVar6) | (ulonglong)(in_ID & 1) * 0x200000 |
         (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
         (ulonglong)(in_AC & 1) * 0x40000;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140038a80(ulonglong param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar4;
  undefined8 in_RAX;
  ulonglong uVar3;
  byte bVar5;
  longlong unaff_RBX;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  longlong unaff_R14;
  float10 in_ST0;
  
  bVar5 = (byte)((ulonglong)param_2 >> 8);
  if ((char)(bVar5 - 0x1c) < '\0') {
    *unaff_RDI = *unaff_RSI;
    *(int *)(unaff_RDI + 1) =
         (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(0xe4,(char)in_RAX));
    uVar3 = param_1 & 0xffffffff;
    bVar1 = unaff_RDI[0x1f4eb2b8];
    bVar4 = (byte)(uVar3 >> 8);
    bVar2 = bVar4 + unaff_RDI[0x1f4eb2b8];
    out(CONCAT11(bVar5 - 0x1c,(char)param_2),
        (int)CONCAT62((int6)(uVar3 >> 0x10),CONCAT11(bVar2 + (0x1b < bVar5),(char)uVar3)));
    *(short *)(unaff_R14 + -0xe) = (short)ROUND((float10)*(double *)(unaff_RBX + -0x30) - in_ST0);
    _DAT_10fa1a711 =
         _DAT_10fa1a711 << 0x1f |
         (uint)(CONCAT14(CARRY1(bVar4,bVar1) || CARRY1(bVar2,0x1b < bVar5),_DAT_10fa1a711) >> 2);
    *(int *)(unaff_RSI + -0x57f8f269) = *(int *)(unaff_RSI + -0x57f8f269) - ((int)unaff_RDI + 5);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140038bf0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140038c50(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140038dd0(undefined4 param_1,longlong param_2)

{
  LOCK();
  *(undefined4 *)(param_2 + -0x15) = param_1;
  UNLOCK();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x000140038e3b) overlaps instruction at (ram,0x000140038e38)
// 

void FUN_140038e30(uint param_1,byte *param_2)

{
  char *pcVar1;
  longlong in_RAX;
  byte bVar2;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RDI;
  
  bVar2 = (byte)param_2 & *param_2;
  if (-1 < (char)bVar2) {
    register0x00000020 = (BADSPACEBASE *)(ulonglong)((uint)&stack0x00000000 | param_1);
    unaff_BH = unaff_BH - bVar2;
  }
  *(ulonglong *)((longlong)register0x00000020 + -8) =
       CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  pcVar1 = (char *)(in_RAX + -0x28e71ef5 + unaff_RDI * 2);
  *pcVar1 = *pcVar1 + bVar2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140039020(uint param_1)

{
  uint *puVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_0000001c;
  
  puVar1 = (uint *)(CONCAT44(unaff_0000001c,unaff_EBX) + -0x12);
  *puVar1 = *puVar1 ^ param_1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140039080(undefined8 param_1,longlong param_2)

{
  int unaff_ESI;
  byte in_CF;
  
  *(int *)(param_2 + 0xe8dd6a) = *(int *)(param_2 + 0xe8dd6a) + unaff_ESI + (uint)in_CF;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1400391d0(void)

{
  undefined4 in_EAX;
  
  _DAT_32c30b6e8024a7c9 = in_EAX;
  return;
}



undefined4 FUN_14003bf50(int param_1,char param_2)

{
  undefined4 uVar1;
  uint *in_RAX;
  longlong unaff_RBX;
  longlong unaff_R13;
  undefined4 *unaff_retaddr;
  
  *(char *)(unaff_R13 + -0x6d) = *(char *)(unaff_R13 + -0x6d) + '\x01';
  *in_RAX = *in_RAX ^ (uint)&stack0x00000000;
  *(char *)(unaff_RBX + 0x368e9542) = *(char *)(unaff_RBX + 0x368e9542) + param_2 + -0x33;
  sysenter();
  *unaff_retaddr = *(undefined4 *)(ulonglong)(param_1 + 0x24);
  uVar1 = in(0x82);
  return uVar1;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x00014003c03a) overlaps instruction at (ram,0x00014003c036)
// 

void FUN_14003c030(byte param_1,uint *param_2)

{
  byte *pbVar1;
  code *pcVar2;
  undefined8 uVar3;
  byte bVar4;
  uint in_EAX;
  uint uVar5;
  ulonglong unaff_RBX;
  undefined8 *puVar6;
  ulonglong *puVar7;
  longlong unaff_RBP;
  uint *unaff_RDI;
  undefined8 in_MM0;
  undefined8 *puVar8;
  
  uVar5 = in_EAX | 0xac;
  *unaff_RDI = uVar5;
  if ((char)((byte)in_EAX | 0xac) < '\x01') {
    puVar6 = (undefined8 *)(unaff_RBP + 8);
    while( true ) {
      pbVar1 = (byte *)((longlong)param_2 + -0x5e);
      *pbVar1 = *pbVar1 & (byte)(uVar5 >> 8) & 0xe8;
      uVar3 = *puVar6;
      bVar4 = param_1 & 0x1f;
      uVar5 = *param_2;
      *param_2 = *param_2 >> bVar4;
      if (bVar4 == 1 && (int)uVar5 < 0) break;
      pcVar2 = (code *)swi(0x8f);
      uVar5 = (*pcVar2)();
      unaff_RBX = unaff_RBX & 0xffffffff;
      param_2 = (uint *)&DAT_54a33eff;
      puVar7 = puVar6 + 3;
      puVar8 = puVar6 + 3;
      puVar6 = puVar6 + 3;
      *puVar7 = unaff_RBX;
      if ((int)uVar3 <= (int)puVar8) {
        *(char *)((longlong)unaff_RDI + -0x5282f7cb) =
             (*(char *)((longlong)unaff_RDI + -0x5282f7cb) - (char)(uVar5 >> 8)) -
             (uVar5 < 0x9b36ff46);
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
    }
    if (bVar4 != 0 && (uVar5 >> bVar4 - 1 & 1) != 0) {
      if (bVar4 == 0 && (char)*pbVar1 < '\0' || bVar4 != 0 && (int)*param_2 < 0) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      psubusw(in_MM0,*(undefined8 *)(((ulonglong)(unaff_RDI + 1) & 0xffffffff) - 0x1a3e562f));
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14003c170(undefined8 param_1)

{
  uint in_EAX;
  byte bVar1;
  undefined7 uVar2;
  undefined4 unaff_EBX;
  undefined4 unaff_0000001c;
  longlong unaff_R14;
  
  uVar2 = (undefined7)((ulonglong)param_1 >> 8);
  *(ulonglong *)(ulonglong)in_EAX = CONCAT44(unaff_0000001c,unaff_EBX);
  bVar1 = (byte)param_1 & (byte)unaff_EBX;
  *(char *)CONCAT71(uVar2,bVar1) = *(char *)CONCAT71(uVar2,bVar1) << (bVar1 & 0x1f);
  vpmovsxbq_avx(ZEXT216(*(ushort *)(unaff_R14 + -0x58)));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14003c210(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  uint uVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined4 in_EAX;
  undefined8 uVar7;
  byte bVar8;
  undefined1 uVar9;
  undefined6 uVar10;
  undefined1 uVar11;
  byte bVar12;
  undefined6 uVar13;
  undefined1 unaff_BH;
  uint unaff_ESI;
  char *unaff_RDI;
  char in_SF;
  char in_OF;
  
  bVar12 = (byte)((ulonglong)param_2 >> 8);
  uVar13 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar8 = (byte)param_1;
  uVar9 = (undefined1)((ulonglong)param_1 >> 8);
  uVar10 = (undefined6)((ulonglong)param_1 >> 0x10);
  uVar4 = (char)param_2;
  uVar5 = in_EAX;
  if (in_OF != in_SF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  do {
    _DAT_f3a6c4fe4407c8a7 = uVar5;
    uVar11 = uVar4;
    uVar7 = func_0x00012b936fca();
    pcVar1 = (char *)(CONCAT62(uVar10,CONCAT11(uVar9,bVar8)) + 0x34);
    cVar6 = (char)uVar7;
    *pcVar1 = *pcVar1 - cVar6;
    uVar9 = 0x39;
    bVar3 = bVar8 & 0x1f;
    uVar2 = unaff_ESI >> bVar3 - 1;
    _DAT_89dc99a1d504b344 =
         (undefined4)
         CONCAT62((int6)((ulonglong)uVar7 >> 0x10),
                  CONCAT11((byte)((ulonglong)uVar7 >> 8) &
                           unaff_RDI[CONCAT62(uVar13,CONCAT11(bVar12,unaff_BH)) * 2],cVar6));
    uVar4 = unaff_BH;
    unaff_BH = uVar11;
    unaff_ESI = unaff_ESI >> bVar3;
    uVar5 = _DAT_f3a6c4fe4407c8a7;
  } while (bVar3 != 0 && (uVar2 & 1) != 0);
  *unaff_RDI = cVar6;
  unaff_RDI[-0x1e] = unaff_RDI[-0x1e] & bVar12;
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x00014003c52e)
// WARNING: Removing unreachable block (ram,0x00014003c4d9)
// WARNING: Removing unreachable block (ram,0x00014003c4e5)
// WARNING: Removing unreachable block (ram,0x00014003c497)

void FUN_14003c4c0(uint param_1,longlong param_2)

{
  int unaff_EDI;
  
  *(int *)(param_2 + 0x1d) = unaff_EDI + 4;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14003c650(undefined8 param_1,undefined2 param_2)

{
  undefined1 in_AL;
  longlong unaff_RBX;
  longlong unaff_RDI;
  
  *(byte *)(unaff_RBX + -0x55) = ~*(byte *)(unaff_RBX + -0x55);
  out(param_2,in_AL);
  *(undefined1 *)(unaff_RDI + 1) = in_AL;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14003c960(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14003cb50(undefined4 param_1,uint param_2)

{
  uint *unaff_RSI;
  
  *(undefined4 *)((longlong)unaff_RSI + -0x2b) = param_1;
  *unaff_RSI = *unaff_RSI ^ param_2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x00014003d82c) overlaps instruction at (ram,0x00014003d82b)
// 
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14003d848(void)

{
  longlong *plVar1;
  char cVar2;
  uint in_EAX;
  uint uVar3;
  int iVar4;
  longlong *unaff_RBP;
  longlong *plVar5;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  unkbyte10 *unaff_R15;
  bool bVar6;
  longlong unaff_retaddr;
  undefined1 auStack_8 [8];
  
  uVar3 = in_EAX | 0x8a3363d;
  if ((POPCOUNT(uVar3 & 0xff) & 1U) == 0) {
    if ((int)uVar3 < 0) {
      *unaff_RDI = *unaff_RSI;
      _DAT_1549cf61d = _DAT_1549cf61d + -1;
      *(uint *)((longlong)unaff_RSI + -0x447d236b) =
           *(uint *)((longlong)unaff_RSI + -0x447d236b) ^ 0x2693a937;
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    unaff_RSI = (undefined4 *)((longlong)unaff_RSI + 1);
    plVar5 = (longlong *)*unaff_RBP;
    if ('n' < (char)(byte)uVar3) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    bVar6 = (byte)uVar3 < *(byte *)((longlong)unaff_RDI + 1);
    if (unaff_retaddr != 0) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    *unaff_RBP = (longlong)plVar5;
    cVar2 = '\x06';
    plVar1 = unaff_RBP;
    do {
      plVar5 = plVar5 + -1;
      plVar1 = plVar1 + -1;
      *plVar1 = *plVar5;
      cVar2 = cVar2 + -1;
    } while ('\0' < cVar2);
    unaff_RBP[-7] = (longlong)unaff_RBP;
    iVar4 = (int)unaff_RBP + -0x1114;
    from_bcd(*(unkbyte10 *)((longlong)unaff_RDI + 2));
  }
  else {
    iVar4 = (int)auStack_8;
    bVar6 = false;
    from_bcd(*unaff_R15);
  }
  *(char *)((longlong)unaff_RBP + 0x7e) = *(char *)((longlong)unaff_RBP + 0x7e) + -0x4b + bVar6;
  *(int *)((ulonglong)unaff_RSI & 0xffffffff) = iVar4;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14003d92c(void)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  int in_EAX;
  byte in_CF;
  
  uVar1 = (uint)in_CF;
  uVar2 = in_EAX + 0x40093ef7;
  if (uVar2 == uVar1 ||
      (SBORROW4(in_EAX,-0x40093ef7) != SBORROW4(uVar2,uVar1)) != (int)(uVar2 - uVar1) < 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  pcVar3 = (code *)swi(1);
  (*pcVar3)();
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x00014003daa3) overlaps instruction at (ram,0x00014003daa1)
// 

void FUN_14003daa0(ulonglong param_1,ulonglong param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  byte *pbVar5;
  uint uVar6;
  longlong lVar7;
  byte bVar10;
  int iVar8;
  uint unaff_EBX;
  uint uVar9;
  undefined1 *unaff_RDI;
  undefined1 unaff_R13B;
  char cVar11;
  char in_CF;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 fVar12;
  float10 in_ST7;
  undefined1 *unaff_retaddr;
  
  while( true ) {
    unaff_retaddr[in_RAX] = unaff_retaddr[in_RAX] + -0x30 + in_CF;
    uVar9 = ~unaff_EBX;
    uVar4 = in_RAX & 0xffffffffffffff5f;
    fVar12 = (float10)*(double *)(ulonglong)uVar9;
    lVar7 = CONCAT71((int7)(param_2 >> 8),(char)(uVar4 >> 8));
    pbVar5 = (byte *)CONCAT62((int6)(uVar4 >> 0x10),CONCAT11((char)param_2,(char)uVar4));
    bVar10 = (byte)(uVar9 >> 8) | *pbVar5;
    if ((char)bVar10 < '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    uVar6 = (uint)param_1 ^ *(uint *)(lVar7 + -0x4d);
    param_1 = (ulonglong)uVar6;
    if (0 < (int)uVar6) break;
    uVar6 = (uint)pbVar5;
    if (0x38fa80a4 < uVar6) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    uVar2 = (int)unaff_RDI + 1;
    uVar1 = in((short)lVar7);
    *unaff_RDI = uVar1;
    out(*unaff_retaddr,(short)lVar7);
    iVar8 = CONCAT22((short)(uVar9 >> 0x10),CONCAT11(bVar10,(char)uVar9)) - uVar2;
    cVar11 = '\0';
    unaff_RDI = (undefined1 *)(ulonglong)(uVar2 ^ 0x42edfb11);
    fVar12 = in_ST7;
    uVar3 = func_0x000178a51476();
    unaff_EBX = CONCAT31((int3)((uint)iVar8 >> 8),
                         (char)iVar8 + *(char *)(param_1 + 0x5d685a77) + cVar11);
    uVar9 = (uint)lVar7 | *(uint *)(unaff_retaddr + 0x79);
    param_2 = (ulonglong)uVar9;
    in_CF = '\0';
    in_RAX = CONCAT71((int7)((ulonglong)uVar3 >> 8),(byte)uVar3 ^ (byte)uVar9);
    in_ST0 = in_ST1;
    in_ST1 = in_ST2;
    in_ST2 = in_ST3;
    in_ST3 = in_ST4;
    in_ST4 = in_ST5;
    in_ST5 = in_ST6;
    in_ST6 = in_ST7;
    in_ST7 = fVar12;
    unaff_retaddr = (undefined1 *)(ulonglong)(uVar6 + 0xc7057f5b);
  }
  DAT_7d425df777e3afd9 = unaff_R13B;
  *(undefined2 *)(lVar7 + 0x5f1cf44) = in_FPUControlWord;
  *(ushort *)(lVar7 + 0x5f1cf48) =
       (ushort)(in_ST0 < fVar12) << 8 | (ushort)(NAN(in_ST0) || NAN(fVar12)) << 10 |
       (ushort)(in_ST0 == fVar12) << 0xe;
  *(undefined2 *)(lVar7 + 0x5f1cf4c) = in_FPUTagWord;
  *(undefined8 *)(lVar7 + 0x5f1cf58) = in_FPUDataPointer;
  *(undefined8 *)(lVar7 + 0x5f1cf50) = 0x14003daac;
  *(undefined2 *)(lVar7 + 0x5f1cf56) = in_FPULastInstructionOpcode;
  *(float10 *)(lVar7 + 0x5f1cf60) = in_ST1;
  *(float10 *)(lVar7 + 0x5f1cf6a) = in_ST2;
  *(float10 *)(lVar7 + 0x5f1cf74) = in_ST3;
  *(float10 *)(lVar7 + 0x5f1cf7e) = in_ST4;
  *(float10 *)(lVar7 + 0x5f1cf88) = in_ST5;
  *(float10 *)(lVar7 + 0x5f1cf92) = in_ST6;
  *(float10 *)(lVar7 + 0x5f1cf9c) = in_ST7;
  *(float10 *)(lVar7 + 0x5f1cfa6) = in_ST7;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14003dab4(ulonglong param_1,ulonglong param_2)

{
  undefined1 uVar1;
  float10 fVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  byte *in_RAX;
  uint uVar5;
  byte bVar8;
  int iVar6;
  uint uVar7;
  int unaff_EBX;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  undefined1 unaff_R13B;
  char cVar9;
  undefined1 in_SF;
  undefined2 in_FPUControlWord;
  ushort in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  
  while( true ) {
    if ((bool)in_SF) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    uVar5 = (uint)param_1 ^ *(uint *)(param_2 - 0x4d);
    param_1 = (ulonglong)uVar5;
    if (0 < (int)uVar5) break;
    *(ulonglong *)((longlong)register0x00000020 + -8) = (ulonglong)((uint)in_RAX + 0xc7057f5b);
    if (0x38fa80a4 < (uint)in_RAX) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    uVar5 = (int)unaff_RDI + 1;
    uVar1 = in((short)param_2);
    *unaff_RDI = uVar1;
    out(*unaff_RSI,(short)param_2);
    iVar6 = unaff_EBX - uVar5;
    cVar9 = '\0';
    unaff_RDI = (undefined1 *)(ulonglong)(uVar5 ^ 0x42edfb11);
    *(undefined8 *)((longlong)register0x00000020 + -0x10) = 0x14003da95;
    uVar3 = func_0x000178a51476();
    uVar5 = (uint)param_2 | *(uint *)(unaff_RSI + 0x79);
    bVar8 = (byte)uVar5;
    uVar7 = ~CONCAT31((int3)((uint)iVar6 >> 8),(char)iVar6 + *(char *)(param_1 + 0x5d685a77) + cVar9
                     );
    uVar4 = CONCAT71((int7)((ulonglong)uVar3 >> 8),(byte)uVar3 ^ bVar8) & 0xffffffffffffff5f;
    in_FPUInstructionPointer = 0x14003daac;
    fVar2 = (float10)*(double *)(ulonglong)uVar7;
    in_FPUStatusWord =
         (ushort)(in_ST0 < fVar2) << 8 | (ushort)(NAN(in_ST0) || NAN(fVar2)) << 10 |
         (ushort)(in_ST0 == fVar2) << 0xe;
    param_2 = (ulonglong)CONCAT31((int3)(uVar5 >> 8),(char)(uVar4 >> 8));
    in_RAX = (byte *)CONCAT62((int6)(uVar4 >> 0x10),CONCAT11(bVar8,(char)uVar4));
    bVar8 = (byte)(uVar7 >> 8) | *in_RAX;
    unaff_EBX = CONCAT22((short)(uVar7 >> 0x10),CONCAT11(bVar8,(char)uVar7));
    in_SF = (char)bVar8 < '\0';
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
    unaff_RSI = unaff_RSI + 1;
    in_ST0 = in_ST1;
    in_ST1 = in_ST2;
    in_ST2 = in_ST3;
    in_ST3 = in_ST4;
    in_ST4 = in_ST5;
    in_ST5 = in_ST6;
    in_ST6 = in_ST7;
  }
  DAT_7d425df777e3afd9 = unaff_R13B;
  *(undefined2 *)(param_2 + 0x5f1cf44) = in_FPUControlWord;
  *(ushort *)(param_2 + 0x5f1cf48) = in_FPUStatusWord;
  *(undefined2 *)(param_2 + 0x5f1cf4c) = in_FPUTagWord;
  *(undefined8 *)(param_2 + 0x5f1cf58) = in_FPUDataPointer;
  *(undefined8 *)(param_2 + 0x5f1cf50) = in_FPUInstructionPointer;
  *(undefined2 *)(param_2 + 0x5f1cf56) = in_FPULastInstructionOpcode;
  *(float10 *)(param_2 + 0x5f1cf60) = in_ST0;
  *(float10 *)(param_2 + 0x5f1cf6a) = in_ST1;
  *(float10 *)(param_2 + 0x5f1cf74) = in_ST2;
  *(float10 *)(param_2 + 0x5f1cf7e) = in_ST3;
  *(float10 *)(param_2 + 0x5f1cf88) = in_ST4;
  *(float10 *)(param_2 + 0x5f1cf92) = in_ST5;
  *(float10 *)(param_2 + 0x5f1cf9c) = in_ST6;
  *(float10 *)(param_2 + 0x5f1cfa6) = in_ST7;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_14003daf0(void)

{
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14003dc14(longlong param_1,undefined2 param_2)

{
  uint in_EAX;
  undefined4 unaff_EBP;
  
  LOCK();
  *(undefined4 *)(param_1 + -0x5f) = unaff_EBP;
  UNLOCK();
  _DAT_133eaf7d7 = _DAT_133eaf7d7 | in_EAX;
  _DAT_3d8d191c = in(param_2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14003dcd4(void)

{
  undefined1 *puVar1;
  longlong in_R10;
  longlong in_R11;
  
  puVar1 = (undefined1 *)(in_R11 + in_R10 * 2);
  *puVar1 = *puVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_14003dd00(void)

{
  code *pcVar1;
  
  DAT_15110700b = DAT_15110700b & 0x48;
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



longlong FUN_14003dd50(ulonglong param_1)

{
  return (param_1 & 0xffffffff) - 0x4f631247;
}



void FUN_14003dd68(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_14003de3c(undefined8 param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)(param_1,(int)&stack0x00000000 * -0x78);
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_14003de7c(uint *param_1,undefined8 param_2)

{
  byte *pbVar1;
  longlong lVar2;
  byte bVar3;
  char cVar6;
  uint in_EAX;
  ulonglong uVar4;
  longlong lVar5;
  byte bVar8;
  ulonglong uVar7;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  longlong *plVar9;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  undefined2 in_SS;
  undefined2 in_FS;
  undefined2 in_GS;
  longlong in_FS_OFFSET;
  byte in_CF;
  bool bVar10;
  bool in_ZF;
  char in_SF;
  char in_OF;
  unkbyte10 in_ST0;
  
  *(undefined2 *)(unaff_RSI - 0x6923e06e) = in_GS;
  plVar9 = (longlong *)((ulonglong)&stack0x00000000 & 0xffffffff);
  if (!in_ZF && in_OF == in_SF) {
    plVar9 = (longlong *)(ulonglong)*param_1;
  }
  pbVar1 = (byte *)(in_FS_OFFSET + unaff_RDI + -0x5e6c3297);
  bVar8 = (byte)((ulonglong)param_2 >> 8);
  bVar10 = CARRY1(bVar8,*pbVar1) || CARRY1(bVar8 + *pbVar1,in_CF);
  fptan(in_ST0);
  uVar4 = unaff_RSI & 0xffffffff;
  uVar7 = (ulonglong)(uint)((int)unaff_RSI >> 0x1f);
  bVar8 = (byte)uVar4 + 0x2c;
  bVar3 = bVar8 + bVar10;
  if (0xd3 < (byte)uVar4 || CARRY1(bVar8,bVar10)) {
    out(*(undefined1 *)(ulonglong)in_EAX,(short)(unaff_RSI >> 0x10) >> 0xf);
    cVar6 = (char)(uVar4 >> 8);
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar6;
    lVar2 = *plVar9;
    *(undefined2 *)
     ((ulonglong)
      (uint)(*(int *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x40296200) *
            0x760a1d2e) + 0xf) = in_FS;
    lVar5 = CONCAT62((int6)(uVar4 >> 0x10),CONCAT11(cVar6 + *(char *)(unaff_RDI + 0x29),bVar3));
    *(ulonglong *)(lVar5 + -8) = uVar7;
    if ((POPCOUNT(bVar3 & unaff_BH) & 1U) != 0) {
      *(uint *)(uVar7 + lVar2 * 2) = *(uint *)(uVar7 + lVar2 * 2) | (int)lVar5 - 8U;
      return _DAT_2e0340c8069c7738;
    }
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *(undefined2 *)(uVar7 + 0x5c) = in_SS;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_14003dfc8(longlong param_1,undefined8 param_2)

{
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
  *(byte *)(param_1 + 0x54350707) =
       *(byte *)(param_1 + 0x54350707) & (byte)((ulonglong)param_2 >> 8);
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_14003e070(void)

{
  bool in_SF;
  
  if (!in_SF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_14003e0a8(void)

{
  code *pcVar1;
  bool in_CF;
  
  do {
  } while (in_CF);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_14003e0e4(void)

{
  bool in_CF;
  bool in_ZF;
  
  if (!in_CF && !in_ZF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14003e120(ulonglong param_1,uint param_2)

{
  char *pcVar1;
  uint *puVar2;
  bool bVar3;
  ulonglong uVar4;
  byte bVar5;
  ulonglong in_RAX;
  ulonglong uVar6;
  int unaff_EBX;
  uint uVar7;
  int unaff_EBP;
  undefined4 unaff_0000002c;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  byte in_CF;
  ulonglong *puVar8;
  
  uVar6 = ((ulonglong)param_2 << 0x20 | in_RAX & 0xffffffff) /
          (ulonglong)*(uint *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x40550d1) & 0xffffffff;
  bVar5 = (byte)uVar6;
  uVar7 = (int)&stack0x00000000 + unaff_EBX +
          (uint)(CARRY1(bVar5,*(byte *)(unaff_RSI + -0x71)) ||
                CARRY1(bVar5 + *(byte *)(unaff_RSI + -0x71),in_CF));
  puVar8 = (ulonglong *)(ulonglong)uVar7;
  pcVar1 = (char *)(param_1 + 0x71);
  *pcVar1 = *pcVar1 << ((byte)param_1 & 0x1f);
  bVar3 = (param_1 & 0x1f) != 0;
  uVar4 = (longlong)unaff_EBP * -0xedd8486;
  if ((!bVar3 && uVar7 == 0 || bVar3 && *pcVar1 == '\0') ||
      ((longlong)(int)uVar4 != uVar4) != (!bVar3 && (int)uVar7 < 0 || bVar3 && *pcVar1 < '\0')) {
    puVar8[-1] = unaff_RDI;
    puVar8[-2] = uVar4 & 0xffffffff;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  puVar2 = (uint *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x6a);
  *puVar2 = *puVar2 & 0xffffffc9;
  *puVar8 = (ulonglong)((int)CONCAT71((int7)(uVar6 >> 8),0xa1) + 0x9a7a57d1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14003e340(longlong param_1)

{
  byte bVar1;
  undefined4 in_EAX;
  longlong unaff_RBX;
  char *unaff_RSI;
  char *unaff_RDI;
  unkbyte10 in_ST0;
  
  _DAT_238a96c6a8afc1e4 = in_EAX;
  *unaff_RSI = *unaff_RSI << ((byte)param_1 & 0x1f);
  bVar1 = (byte)((uint)in_EAX >> 8);
  if (param_1 + -1 == 0 || *(byte *)(unaff_RBX + 0x61) == bVar1) {
    *(unkbyte10 *)(unaff_RBX + -0x4b) = in_ST0;
    out(0x203e,(char)in_EAX);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (bVar1 <= *(byte *)(unaff_RBX + 0x61)) {
    *unaff_RDI = *unaff_RDI + (char)((ulonglong)(param_1 + -1) >> 8);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14003e4a0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14003e4c8(void)

{
  undefined2 *unaff_RBX;
  undefined2 in_GS;
  
  *unaff_RBX = in_GS;
  *(char *)(ulonglong)_DAT_57d56a58e82ab33d =
       *(char *)(ulonglong)_DAT_57d56a58e82ab33d - (char)_DAT_57d56a58e82ab33d;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14003e528(longlong param_1,uint param_2)

{
  undefined1 uVar1;
  undefined8 in_RAX;
  longlong unaff_RBP;
  int *piVar2;
  
  uVar1 = in(0xe6);
  piVar2 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar1);
  _DAT_f0b303a42e451cea =
       (int)((longlong)
             ((ulonglong)(param_2 ^ *(uint *)(param_1 + 0x71 + unaff_RBP * 8)) << 0x20 |
             (ulonglong)piVar2 & 0xffffffff) / (longlong)*piVar2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14003e590(void)

{
  bool in_SF;
  
  if (in_SF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14003e5e0(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined2 in_AX;
  undefined1 unaff_BL;
  int unaff_EBP;
  char *unaff_RSI;
  undefined8 unaff_RDI;
  
  cVar2 = DAT_f631316e9e6b5251;
  *(char *)unaff_RDI = DAT_f631316e9e6b5251;
  *(int *)(param_1 + 0x71) =
       *(int *)(param_1 + 0x71) + unaff_EBP + (uint)((byte)(cVar2 + 0x43U) < 0xfc);
  if ((POPCOUNT(*unaff_RSI -
                *(char *)CONCAT44((int)((ulonglong)unaff_RDI >> 0x20),(char *)unaff_RDI + 1)) & 1U)
      != 0) {
    out(in_AX,unaff_BL);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14003e660(uint param_1)

{
  byte bVar1;
  uint in_EAX;
  uint uVar2;
  byte *unaff_RBX;
  uint unaff_EBP;
  undefined2 *unaff_RDI;
  undefined2 in_DS;
  undefined1 in_CF;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  unkbyte10 in_ST2;
  unkbyte10 in_ST3;
  unkbyte10 in_ST4;
  unkbyte10 in_ST5;
  unkbyte10 in_ST6;
  unkbyte10 in_ST7;
  
  bVar1 = ((byte)param_1 & 0x1f) % 9;
  *unaff_RBX = (byte)(CONCAT11(in_CF,*unaff_RBX) >> bVar1) | *unaff_RBX << 9 - bVar1;
  uVar2 = in_EAX ^ 0x6149ebf0;
  if (-1 < (int)uVar2) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *(byte *)(unaff_RDI + -0x1b) = *(byte *)(unaff_RDI + -0x1b) ^ (byte)(uVar2 >> 8);
  *(char *)(ulonglong)uVar2 = -*(char *)(ulonglong)uVar2;
  *unaff_RDI = in_DS;
  if (-1 < (int)(param_1 & unaff_EBP)) {
    return;
  }
  _DAT_f27a0017 = in_FPUControlWord;
  _DAT_f27a001b = in_FPUStatusWord;
  _DAT_f27a001f = in_FPUTagWord;
  _DAT_f27a002b = in_FPUDataPointer;
  _DAT_f27a0023 = CONCAT26(in_FPULastInstructionOpcode,(int6)in_FPUInstructionPointer);
  _DAT_f27a0033 = in_ST0;
  _DAT_f27a003d = in_ST1;
  _DAT_f27a0047 = in_ST2;
  _DAT_f27a0051 = in_ST3;
  _DAT_f27a005b = in_ST4;
  _DAT_f27a0065 = in_ST5;
  _DAT_f27a006f = in_ST6;
  _DAT_f27a0079 = in_ST7;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x00014003e69a)

void FUN_14003e6c0(void)

{
  char *in_RAX;
  undefined2 *unaff_RDI;
  undefined2 in_DS;
  
  *(byte *)(unaff_RDI + -0x1b) = *(byte *)(unaff_RDI + -0x1b) ^ (byte)((ulonglong)in_RAX >> 8);
  *in_RAX = -*in_RAX;
  *unaff_RDI = in_DS;
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x00014003e81c) overlaps instruction at (ram,0x00014003e817)
// 

void FUN_14003e800(longlong param_1,undefined2 param_2)

{
  undefined4 uVar1;
  char in_AL;
  byte in_AH;
  undefined1 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  if ((char)*(byte *)(param_1 + -0x1af43156) < (char)in_AH) {
    out(*unaff_RSI,param_2);
    DAT_e58d87ea942c3711 = (in_AL + -0x2c) - (in_AH < *(byte *)(param_1 + -0x1af43156)) ^ 0x2b;
    uVar1 = in(param_2);
    *unaff_RDI = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_14003f0c0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_14003fe70(void)

{
  return;
}



undefined1 FUN_1400403d0(undefined8 param_1,undefined2 param_2)

{
  byte in_AL;
  undefined1 uVar1;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  
  uVar1 = *(undefined1 *)(CONCAT71(unaff_00000019,unaff_BL) + (ulonglong)in_AL);
  out(param_2,uVar1);
  *(char *)(unaff_RBP + 0x1c272f01) = *(char *)(unaff_RBP + 0x1c272f01) << 1;
  LOCK();
  *(undefined1 *)(CONCAT71(unaff_00000019,unaff_BL) + 0x37aee) = unaff_BL;
  UNLOCK();
  return uVar1;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140041290(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: This is an inlined function

int _guard_dispatch_icall(undefined8 param_1,undefined2 param_2)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  longlong unaff_RBP;
  char in_CF;
  
  uVar1 = CONCAT71((int7)((ulonglong)in_RAX >> 8),
                   ((char)in_RAX - (char)((ulonglong)param_1 >> 8)) - in_CF);
  out(CONCAT11((byte)((ushort)param_2 >> 8) | *(byte *)(unaff_RBP + 0x651af04b),(char)param_2),
      (int)uVar1);
  return (int)(short)uVar1;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140041ea0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140041ef0(void)

{
  char *pcVar1;
  undefined1 in_AL;
  char unaff_BL;
  undefined4 unaff_EDI;
  undefined4 unaff_0000003c;
  char in_CF;
  
  pcVar1 = (char *)(CONCAT44(unaff_0000003c,unaff_EDI) + 0x65);
  DAT_fa9b5b5ad8addc1b = in_AL;
  *pcVar1 = *pcVar1 + unaff_BL + in_CF;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140041f10(void)

{
  undefined4 in_EAX;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = in_EAX;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140041f2f(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_140041f4d(void)

{
  return;
}



void FUN_140041f70(void)

{
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_140041fa0(void)

{
  char *pcVar1;
  int unaff_EBX;
  longlong unaff_RSI;
  
  pcVar1 = (char *)((ulonglong)(uint)(unaff_EBX - *(int *)(unaff_RSI + -0x3c83dc78)) + 0x7c);
  *pcVar1 = *pcVar1 + '\x01';
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140041fd0(void)

{
  int *piVar1;
  undefined4 *unaff_RSI;
  int unaff_retaddr;
  
  piVar1 = (int *)func_0x0001950de9e6();
  *(undefined4 *)(ulonglong)(uint)(unaff_retaddr - *piVar1) = *unaff_RSI;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x0001400420d1) overlaps instruction at (ram,0x0001400420d0)
// 

void FUN_1400420d0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_RDI;
  
  if (param_1 != 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  uVar1 = in((short)param_2);
  *unaff_RDI = uVar1;
  *(undefined1 *)(param_2 + 0x4f443121) = 0xe3;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_140042160(uint param_1)

{
  undefined4 in_EAX;
  undefined4 uVar1;
  undefined4 in_register_00000004;
  int *unaff_RBX;
  int unaff_ESI;
  char in_CF;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + '\b' + in_CF);
  out(0x25,uVar1);
  *unaff_RBX = *unaff_RBX + unaff_ESI;
  *(uint *)CONCAT44(in_register_00000004,uVar1) =
       *(uint *)CONCAT44(in_register_00000004,uVar1) ^ param_1;
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_1400421d0(void)

{
  int *piVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  int unaff_ESP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  piVar1 = (int *)(CONCAT71(in_register_00000001,in_AL) + 0x1b96e0d5);
  *piVar1 = *piVar1 + unaff_ESP;
  *unaff_RDI = *unaff_RSI;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

char FUN_140042220(void)

{
  uint *puVar1;
  ulonglong in_RAX;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  longlong unaff_RBP;
  longlong unaff_RSI;
  byte unaff_R14B;
  char unaff_retaddr;
  
  DAT_49f50ad7ac17a6c2 = *(undefined1 *)(CONCAT44(unaff_0000001c,unaff_EBX) + (in_RAX & 0xff));
  *(byte *)(unaff_RSI + 0x7f08ee26) = *(byte *)(unaff_RSI + 0x7f08ee26) ^ unaff_R14B;
  puVar1 = (uint *)((ulonglong)(uint)(_DAT_a98db367 * 0x4840b426) + unaff_RBP);
  *puVar1 = *puVar1 | unaff_EBX;
  return unaff_retaddr + ',';
}



// WARNING: Control flow encountered bad instruction data

void FUN_140042270(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x00014004236e) overlaps instruction at (ram,0x00014004236d)
// 
// WARNING: Removing unreachable block (ram,0x0001400423a6)
// WARNING: Removing unreachable block (ram,0x00014004241b)
// WARNING: Removing unreachable block (ram,0x00014004241e)
// WARNING: Removing unreachable block (ram,0x0001400423db)
// WARNING: Removing unreachable block (ram,0x0001400423b1)
// WARNING: Removing unreachable block (ram,0x0001400423b9)
// WARNING: Removing unreachable block (ram,0x0001400423a0)

ulonglong FUN_1400422c0(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ulonglong uVar6;
  uint in_EAX;
  uint uVar7;
  ulonglong uVar8;
  byte bVar9;
  undefined1 uVar10;
  int *unaff_RBX;
  longlong unaff_RBP;
  byte *unaff_RSI;
  byte *unaff_RDI;
  byte *pbVar11;
  undefined2 in_GS;
  bool in_CF;
  bool bVar12;
  bool bVar13;
  byte in_AF;
  bool in_ZF;
  bool bVar14;
  byte in_TF;
  byte in_IF;
  bool bVar15;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined1 auStack_8 [6];
  undefined1 auStack_2 [2];
  
  bVar9 = (byte)param_2;
  uVar10 = (undefined1)((ulonglong)param_2 >> 8);
  if (!in_CF && !in_ZF) {
    *(int *)unaff_RDI = *(int *)unaff_RDI + 0xd;
    return (ulonglong)(uint)(int)(short)in_EAX;
  }
  *unaff_RBX = (*unaff_RBX - (int)unaff_RDI) - (uint)in_CF;
  pbVar11 = unaff_RDI + 1;
  bVar4 = *unaff_RDI;
  bVar3 = *unaff_RSI;
  if ((char)bVar3 <= (char)bVar4) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  uVar7 = in_EAX & 0xa4c799b1;
  uVar8 = (ulonglong)uVar7;
  bVar5 = unaff_RDI[0x10cbe688];
  pbVar1 = (byte *)((longlong)unaff_RBX + 0xb);
  bVar15 = false;
  *pbVar1 = *pbVar1 & (byte)(uVar7 >> 8);
  bVar14 = *pbVar1 == 0;
  bVar2 = *pbVar1;
  auStack_2[unaff_RBP * 4] = 0x68;
  *(undefined2 *)(uVar8 - 0x12) = in_GS;
  if (CONCAT71((int7)(CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                               CONCAT11((char)((ulonglong)param_1 >> 8) +
                                        (char)((ulonglong)unaff_RBX >> 8) + (bVar3 < bVar4),
                                        (byte)param_1)) >> 8),(byte)param_1 ^ bVar5) == 1 || !bVar14
     ) {
    uVar6 = (longlong)*(int *)(uVar8 + 0x4c) * 0x310f4848;
    bVar12 = (longlong)(int)uVar6 != uVar6;
    register0x00000020 = (BADSPACEBASE *)auStack_8;
    pbVar1 = (byte *)((uVar6 & 0xffffffff) + 0x4b + uVar8 * 2);
    bVar13 = CARRY1(bVar9,*pbVar1);
    bVar3 = bVar9 + *pbVar1;
    bVar15 = SCARRY1(bVar9,*pbVar1) != SCARRY1(bVar3,bVar12);
    bVar9 = bVar3 + bVar12;
    bVar14 = bVar9 == 0;
    uVar8 = (ulonglong)(uint3)(uVar7 >> 8) << 8;
    bVar2 = bVar9;
    if (bVar13 || CARRY1(bVar3,bVar12)) goto code_r0x00014004236b;
  }
  bVar3 = in(CONCAT11(uVar10,bVar9));
  *pbVar11 = bVar3;
  *(ulonglong *)((longlong)register0x00000020 + -8) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)bVar15 * 0x800 | (ulonglong)(in_IF & 1) * 0x200
       | (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((char)bVar2 < '\0') * 0x80 |
       (ulonglong)bVar14 * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
       (ulonglong)((POPCOUNT(bVar2) & 1U) == 0) * 4 | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  in(CONCAT11(uVar10,bVar9));
  pbVar11 = unaff_RDI + 2;
  if ((uVar8 & 0x8000) == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
code_r0x00014004236b:
  *(undefined4 *)pbVar11 = *(undefined4 *)(unaff_RSI + 1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x00014004236e) overlaps instruction at (ram,0x00014004236d)
// 
// WARNING: Removing unreachable block (ram,0x0001400423a6)
// WARNING: Removing unreachable block (ram,0x00014004241b)
// WARNING: Removing unreachable block (ram,0x00014004241e)
// WARNING: Removing unreachable block (ram,0x0001400423db)
// WARNING: Removing unreachable block (ram,0x0001400423b1)
// WARNING: Removing unreachable block (ram,0x0001400423b9)
// WARNING: Removing unreachable block (ram,0x0001400423a0)

ulonglong FUN_140042310(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  byte bVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong in_RAX;
  ulonglong uVar7;
  byte bVar8;
  undefined1 uVar9;
  longlong unaff_RBX;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  undefined2 in_GS;
  char in_CF;
  bool bVar10;
  bool bVar11;
  byte in_AF;
  bool bVar12;
  bool in_SF;
  byte in_TF;
  byte in_IF;
  bool bVar13;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  
  bVar8 = (byte)param_2;
  uVar9 = (undefined1)((ulonglong)param_2 >> 8);
  if (!in_SF) {
    return in_RAX;
  }
  DAT_f7149d8454e37d6b = (undefined1)in_RAX;
  uVar6 = (uint)in_RAX & 0xa4c799b1;
  uVar7 = (ulonglong)uVar6;
  bVar4 = *(byte *)((longlong)unaff_RDI + 0x10cbe687);
  pbVar1 = (byte *)(unaff_RBX + 0xb);
  bVar13 = false;
  *pbVar1 = *pbVar1 & (byte)(uVar6 >> 8);
  bVar12 = *pbVar1 == 0;
  bVar2 = *pbVar1;
  (&stack0xfffffffffffffffe)[unaff_RBP * 4] = 0x68;
  *(undefined2 *)(uVar7 - 0x12) = in_GS;
  if (CONCAT71((int7)(CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                               CONCAT11((char)((ulonglong)param_1 >> 8) +
                                        (char)((ulonglong)unaff_RBX >> 8) + in_CF,(byte)param_1)) >>
                     8),(byte)param_1 ^ bVar4) == 1 || !bVar12) {
    uVar5 = (longlong)*(int *)(uVar7 + 0x4c) * 0x310f4848;
    bVar10 = (longlong)(int)uVar5 != uVar5;
    register0x00000020 = (BADSPACEBASE *)&stack0xfffffffffffffff8;
    pbVar1 = (byte *)((uVar5 & 0xffffffff) + 0x4b + uVar7 * 2);
    bVar11 = CARRY1(bVar8,*pbVar1);
    bVar4 = bVar8 + *pbVar1;
    bVar13 = SCARRY1(bVar8,*pbVar1) != SCARRY1(bVar4,bVar10);
    bVar8 = bVar4 + bVar10;
    bVar12 = bVar8 == 0;
    uVar7 = (ulonglong)(uint3)(uVar6 >> 8) << 8;
    bVar2 = bVar8;
    if (bVar11 || CARRY1(bVar4,bVar10)) goto code_r0x00014004236b;
  }
  uVar3 = in(CONCAT11(uVar9,bVar8));
  *(undefined1 *)unaff_RDI = uVar3;
  *(ulonglong *)((longlong)register0x00000020 + -8) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)bVar13 * 0x800 | (ulonglong)(in_IF & 1) * 0x200
       | (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((char)bVar2 < '\0') * 0x80 |
       (ulonglong)bVar12 * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
       (ulonglong)((POPCOUNT(bVar2) & 1U) == 0) * 4 | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  in(CONCAT11(uVar9,bVar8));
  unaff_RDI = (undefined4 *)((longlong)unaff_RDI + 1);
  if ((uVar7 & 0x8000) == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
code_r0x00014004236b:
  *unaff_RDI = *unaff_RSI;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_140042360(void)

{
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  bool in_SF;
  
  if (in_SF) {
    *unaff_RDI = *unaff_RSI;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Restarted to delay deadcode elimination for space: stack

undefined8 entry(void)

{
  undefined8 in_RAX;
  
  FUN_1400fc3d0(0x1400fc310);
  return in_RAX;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

undefined8 FUN_1400fc315(void)

{
  undefined8 in_RAX;
  longlong unaff_retaddr;
  
  FUN_1400fc3d0(unaff_retaddr + -5);
  return in_RAX;
}



// WARNING: Type propagation algorithm not settling

longlong FUN_1400fc3d0(longlong param_1)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  short sVar4;
  short *psVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  code *pcVar10;
  short *psVar11;
  longlong lVar12;
  char *pcVar13;
  int *piVar14;
  longlong unaff_GS_OFFSET;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  longlong in_stack_00000028;
  char local_d28;
  char local_d27;
  uint local_d10;
  uint local_d08;
  uint local_d00;
  uint local_cf8;
  uint local_cf0;
  short *local_ce8;
  uint local_cd4;
  uint local_cd0;
  undefined1 *local_cc8;
  uint local_cc0;
  int local_cb0;
  int local_ca8;
  short *local_ca0;
  code *local_c98;
  uint *local_c90;
  code *local_c88;
  uint local_c80;
  uint local_c7c;
  int local_c78;
  uint local_c74;
  int local_c70;
  uint local_c6c;
  uint local_c68;
  uint local_c64;
  uint local_c60;
  uint local_c5c;
  uint local_c54;
  uint local_c50;
  uint local_c4c;
  uint *local_c48;
  code **local_c40;
  undefined1 *local_c28;
  int local_c18;
  uint local_c14;
  uint local_c08;
  int local_bfc;
  uint local_bf8;
  int local_bf0;
  uint local_bec;
  uint local_be4;
  int local_be0;
  int local_bdc;
  int local_bd8;
  int local_bd4;
  int local_bd0;
  uint local_bc8;
  uint *local_bb8;
  ulonglong *local_bb0;
  short *local_ba0;
  undefined1 local_b90 [8];
  short *local_b88;
  undefined1 *local_b80;
  int *local_b78;
  longlong local_b70;
  char *local_b68;
  char *local_b60;
  char *local_b58;
  short *local_b50;
  longlong *local_b48;
  char *local_b40;
  char *local_b38;
  uint *local_b30;
  uint local_b28;
  uint local_b20;
  uint local_b18;
  uint local_b14;
  uint local_b10;
  uint local_b0c;
  uint local_b08;
  uint local_b04;
  uint *local_b00;
  uint *local_af8;
  longlong local_af0;
  uint *local_ae8;
  longlong local_ae0;
  int *local_ad8;
  short *local_ad0;
  uint *local_ac8;
  short *local_ac0;
  char *local_ab8;
  char *local_ab0;
  char *local_aa8;
  char *local_aa0;
  int *local_a98;
  undefined2 local_a90;
  undefined2 uStack_a8e;
  undefined2 uStack_a8c;
  undefined2 uStack_a8a;
  undefined2 uStack_a88;
  undefined2 uStack_a86;
  undefined2 uStack_a84;
  undefined2 uStack_a82;
  undefined2 uStack_a80;
  undefined2 uStack_a7e;
  undefined2 uStack_a7c;
  undefined2 uStack_a7a;
  undefined2 uStack_a78;
  uint local_a70;
  uint local_a6c;
  uint local_a68;
  int local_a64;
  uint local_a58;
  uint local_a54;
  uint local_a50;
  uint local_a4c;
  uint local_a48;
  uint local_a44;
  uint local_a40;
  uint local_a38;
  int local_a34;
  int local_a30;
  undefined1 *local_a28;
  uint *local_a20;
  longlong local_a18;
  code **local_a10;
  longlong local_a08;
  undefined1 *local_a00;
  uint *local_9f8;
  ulonglong local_9f0;
  uint *local_9e8;
  ushort *local_9e0;
  undefined1 *local_9d0;
  short *local_9c8;
  ulonglong local_9c0;
  undefined1 *local_9b8;
  longlong local_9b0;
  short *local_9a8;
  undefined1 *local_9a0;
  ulonglong local_998;
  undefined1 *local_990;
  ulonglong local_988;
  undefined1 *local_980;
  undefined1 *local_978;
  undefined1 *local_970;
  ulonglong local_968;
  longlong local_960;
  longlong local_958;
  short *local_950;
  ulonglong local_948;
  uint *local_940;
  ushort *local_938;
  uint *local_930;
  longlong local_928;
  code **local_920;
  longlong local_918;
  uint *local_910;
  longlong local_908;
  uint *local_900;
  longlong local_8f8;
  code **local_8f0;
  longlong local_8e8;
  uint *local_8e0;
  longlong local_8d8;
  char *local_8d0;
  longlong local_8c8;
  longlong local_8c0;
  longlong local_8b8;
  longlong local_8b0;
  undefined8 local_8a8;
  uint *local_8a0;
  longlong local_898;
  code **local_890;
  longlong local_888;
  uint *local_880;
  longlong local_878;
  uint *local_870;
  longlong local_868;
  code **local_860;
  longlong local_858;
  uint *local_850;
  longlong local_848;
  uint local_840;
  longlong local_838;
  longlong local_830;
  int *local_828;
  ulonglong local_820;
  undefined1 *local_818;
  short *local_810;
  uint *local_808;
  short *local_800;
  int *local_7f8;
  longlong local_7f0;
  longlong *local_7e8;
  uint *local_7e0;
  code *local_7d8;
  short *local_7d0;
  code *local_7c8;
  short *local_7c0;
  code *local_7b8;
  uint *local_7b0;
  longlong local_7a8;
  longlong local_7a0;
  code *local_798;
  short *local_790;
  code *local_788;
  code *local_780;
  code *local_778;
  code *local_770;
  code *local_768;
  code *local_760;
  code *local_758;
  code *local_750;
  code *local_748;
  longlong local_740;
  code *local_738;
  undefined1 *local_730;
  uint *local_728;
  uint *local_720;
  longlong local_718;
  short *local_710;
  code *local_708;
  code *local_700;
  code *local_6f8;
  code *local_6f0;
  code *local_6e8;
  undefined1 *local_6e0;
  ulonglong local_6d8;
  code *local_6d0;
  longlong local_6c8;
  code *local_6c0;
  code *local_6b8;
  longlong local_6b0;
  code *local_6a8;
  code *local_6a0;
  code *local_698;
  code *local_690;
  code *local_688;
  code *local_680;
  code *local_678;
  code *local_670;
  longlong local_668;
  code *local_660;
  code *local_658;
  code *local_650;
  longlong local_640;
  char *local_638;
  code *local_630;
  code *local_628;
  code *local_620;
  code *local_618;
  code *local_610;
  code *local_608;
  code *local_600;
  code *local_5f8;
  code *local_5f0;
  code *local_5e8;
  code *local_5e0;
  code *local_5d8;
  code *local_5d0;
  code *local_5c8;
  code *local_5c0;
  undefined1 local_5b8 [8];
  undefined1 *local_5b0;
  code *local_5a8;
  code *local_5a0;
  code *local_590;
  code *local_588;
  code *local_580;
  code *local_578;
  code *local_570;
  code *local_568;
  code *local_560;
  code *local_558;
  code *local_550;
  code *local_548;
  code *local_540;
  code *local_538;
  code *local_530;
  code *local_528;
  code *local_518;
  code *local_510;
  code *local_508;
  code *local_500;
  code *local_4f8;
  code *local_4f0;
  char *apcStack_4e8 [34];
  char local_3d8 [56];
  char local_3a0 [40];
  uint local_378 [5];
  undefined4 uStack_364;
  uint local_360;
  int local_35c;
  longlong local_358;
  uint local_350;
  uint local_34c;
  uint local_348;
  uint local_344;
  undefined4 local_340;
  uint local_33c;
  uint local_334;
  int aiStack_2e0 [4];
  uint local_2d0;
  longlong local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  longlong local_298;
  longlong local_290;
  uint local_288 [162];
  
  local_a20 = local_378;
  local_a28 = (undefined1 *)(param_1 + -0xf0);
  for (local_a18 = 0xf0; local_a18 != 0; local_a18 = local_a18 + -1) {
    uVar1 = *local_a28;
    local_a28 = local_a28 + 1;
    *(undefined1 *)local_a20 = uVar1;
    local_a20 = (uint *)((longlong)local_a20 + 1);
  }
  local_b30 = local_378;
  local_bf8 = local_378[0];
  for (local_bfc = SUB164((ZEXT816(0) << 0x40 | ZEXT816(0xec)) / ZEXT816(4),0);
      local_b30 = local_b30 + 1, local_bfc != 0; local_bfc = local_bfc + -1) {
    local_840 = *local_b30;
    *local_b30 = *local_b30 ^ local_bf8;
    local_bf8 = local_840;
  }
  local_a70 = local_bf8;
  local_a6c = local_bf8;
  if (local_378[1] != -0x3f213f21) {
LAB_1400fefde:
    local_900 = local_378;
    for (local_8f8 = 0xf0; local_8f8 != 0; local_8f8 = local_8f8 + -1) {
      *(undefined1 *)local_900 = 0;
      local_900 = (uint *)((longlong)local_900 + 1);
    }
    local_8f0 = &local_5a8;
    for (local_8e8 = 0x1d0; local_8e8 != 0; local_8e8 = local_8e8 + -1) {
      *(undefined1 *)local_8f0 = 0;
      local_8f0 = (code **)((longlong)local_8f0 + 1);
    }
    local_8e0 = local_288;
    for (local_8d8 = 0x280; local_8d8 != 0; local_8d8 = local_8d8 + -1) {
      *(undefined1 *)local_8e0 = 0;
      local_8e0 = (uint *)((longlong)local_8e0 + 1);
    }
    pcVar10 = (code *)swi(3);
    lVar12 = (*pcVar10)();
    return lVar12;
  }
  local_b70 = param_1 - CONCAT44(uStack_364,local_378[4]);
  local_830 = param_1 - (ulonglong)local_360;
  local_a10 = &local_5a8;
  for (local_a08 = 0x1d0; local_a08 != 0; local_a08 = local_a08 + -1) {
    *(undefined1 *)local_a10 = 0;
    local_a10 = (code **)((longlong)local_a10 + 1);
  }
  uVar6 = local_34c + 0xf & 0xfffffff0;
  if ((uVar6 == 0) || (0x280 < uVar6)) goto LAB_1400fefde;
  local_5b0 = (undefined1 *)(local_830 + (ulonglong)local_350);
  local_9f8 = local_288;
  local_a00 = local_5b0;
  for (local_9f0 = (ulonglong)uVar6; local_9f0 != 0; local_9f0 = local_9f0 - 1) {
    uVar1 = *local_a00;
    local_a00 = local_a00 + 1;
    *(undefined1 *)local_9f8 = uVar1;
    local_9f8 = (uint *)((longlong)local_9f8 + 1);
  }
  local_b20 = local_bf8;
  local_b00 = local_288;
  for (local_bf0 = SUB164(ZEXT416(uVar6) / ZEXT816(4),0); local_bf0 != 0; local_bf0 = local_bf0 + -1
      ) {
    local_a68 = *local_b00;
    *local_b00 = *local_b00 ^ local_b20;
    local_b00 = local_b00 + 1;
    local_b20 = local_a68;
  }
  local_c48 = local_288;
  for (local_c68 = 0; local_c68 < 0x22; local_c68 = local_c68 + 1) {
    if ((uint *)((longlong)local_288 + (ulonglong)local_34c) <= local_c48) goto LAB_1400fefde;
    apcStack_4e8[local_c68] = (char *)local_c48;
    while ((char)*local_c48 != '\0') {
      local_c48 = (uint *)((longlong)local_c48 + 1);
      if ((uint *)((longlong)local_288 + (ulonglong)local_34c) <= local_c48) goto LAB_1400fefde;
    }
    local_c48 = (uint *)((longlong)local_c48 + 1);
  }
  if (local_c48 != (uint *)((longlong)local_288 + (ulonglong)local_34c)) goto LAB_1400fefde;
  local_ce8 = (short *)0x0;
  local_a90 = 0x6b;
  uStack_a8e = 0x65;
  uStack_a8c = 0x72;
  uStack_a8a = 0x6e;
  uStack_a88 = 0x65;
  uStack_a86 = 0x6c;
  uStack_a84 = 0x33;
  uStack_a82 = 0x32;
  uStack_a80 = 0x2e;
  uStack_a7e = 100;
  uStack_a7c = 0x6c;
  uStack_a7a = 0x6c;
  uStack_a78 = 0;
  if (local_2b0 == 0) {
    if (local_2a8 == 0) {
      if (local_2a0 == 0) {
        if (local_298 != 0) {
          local_770 = *(code **)(local_b70 + local_298);
          local_4f8 = local_770;
          local_ce8 = (short *)(*local_770)(&local_a90,(ulonglong)uVar6 % 4);
        }
      }
      else {
        local_778 = *(code **)(local_b70 + local_2a0);
        local_500 = local_778;
        local_ce8 = (short *)(*local_778)(apcStack_4e8[0x14]);
      }
    }
    else {
      local_780 = *(code **)(local_b70 + local_2a8);
      local_508 = local_780;
      local_ce8 = (short *)(*local_780)(&local_a90);
    }
  }
  else {
    local_788 = *(code **)(local_b70 + local_2b0);
    local_510 = local_788;
    local_ce8 = (short *)(*local_788)(apcStack_4e8[0x14]);
  }
  if (local_ce8 == (short *)0x0) goto LAB_1400fefde;
  if (local_290 == 0) {
    local_790 = local_ce8;
    if (*local_ce8 == 0x5a4d) {
      local_ad8 = (int *)((longlong)local_ce8 + (longlong)*(int *)(local_ce8 + 0x1e));
      if (*local_ad8 == 0x4550) {
        if ((short)local_ad8[1] == -0x799c) {
          if ((short)local_ad8[5] == 0xf0) {
            local_af8 = (uint *)(local_ad8 + 0x22);
            if (local_ad8[0x23] == 0) {
              local_c98 = (code *)0x0;
            }
            else {
              uVar3 = *local_af8;
              if ((*(int *)((longlong)local_ce8 + (ulonglong)uVar3 + 0x18) == 0) ||
                 (*(int *)((longlong)local_ce8 + (ulonglong)uVar3 + 0x14) == 0)) {
                local_c98 = (code *)0x0;
              }
              else {
                local_9e8 = (uint *)((longlong)local_ce8 +
                                    (ulonglong)
                                    *(uint *)((longlong)local_ce8 + (ulonglong)uVar3 + 0x20));
                local_9e0 = (ushort *)
                            ((longlong)local_ce8 +
                            (ulonglong)*(uint *)((longlong)local_ce8 + (ulonglong)uVar3 + 0x24));
                local_c50 = 0xffffffff;
                for (local_bec = 0;
                    local_bec < *(uint *)((longlong)local_ce8 + (ulonglong)uVar3 + 0x18);
                    local_bec = local_bec + 1) {
                  local_b58 = apcStack_4e8[0x17];
                  for (local_b60 = (char *)((longlong)local_ce8 + (ulonglong)*local_9e8);
                      (*local_b58 != '\0' && (*local_b60 != '\0')); local_b60 = local_b60 + 1) {
                    if (*local_b58 < *local_b60) {
                      local_cb0 = -1;
                      goto LAB_1400fce43;
                    }
                    if (*local_b60 < *local_b58) {
                      local_cb0 = 1;
                      goto LAB_1400fce43;
                    }
                    local_b58 = local_b58 + 1;
                  }
                  if (*local_b60 == '\0') {
                    if (*local_b58 == '\0') {
                      local_cb0 = 0;
                    }
                    else {
                      local_cb0 = 1;
                    }
                  }
                  else {
                    local_cb0 = -1;
                  }
LAB_1400fce43:
                  if (local_cb0 == 0) {
                    local_c50 = (uint)*local_9e0;
                    break;
                  }
                  local_9e8 = local_9e8 + 1;
                  local_9e0 = local_9e0 + 1;
                }
                if (local_c50 == 0xffffffff) {
                  local_c98 = (code *)0x0;
                }
                else if (*(uint *)((longlong)local_ce8 + (ulonglong)uVar3 + 0x14) < local_c50) {
                  local_c98 = (code *)0x0;
                }
                else {
                  uVar3 = *(uint *)((longlong)local_ce8 +
                                   (longlong)(int)local_c50 * 4 +
                                   (ulonglong)
                                   *(uint *)((longlong)local_ce8 + (ulonglong)uVar3 + 0x1c));
                  if ((uVar3 < *local_af8) || (*local_af8 + local_ad8[0x23] <= uVar3)) {
                    local_c98 = (code *)((longlong)local_ce8 + (ulonglong)uVar3);
                  }
                  else {
                    local_c98 = (code *)0x0;
                  }
                }
              }
            }
          }
          else {
            local_c98 = (code *)0x0;
          }
        }
        else {
          local_c98 = (code *)0x0;
        }
      }
      else {
        local_c98 = (code *)0x0;
      }
    }
    else {
      local_c98 = (code *)0x0;
    }
    local_4f0 = local_c98;
    if (local_c98 == (code *)0x0) goto LAB_1400fefde;
  }
  else {
    local_4f0 = *(code **)(local_b70 + local_290);
  }
  if (local_2b0 == 0) {
    local_768 = local_4f0;
    local_510 = (code *)(*local_4f0)(local_ce8,apcStack_4e8[0x18]);
    if (local_510 == (code *)0x0) goto LAB_1400fefde;
  }
  local_760 = local_4f0;
  local_500 = (code *)(*local_4f0)(local_ce8);
  if ((local_500 == (code *)0x0) ||
     (local_758 = local_500, local_838 = (*local_500)(apcStack_4e8[0x15]), local_838 == 0))
  goto LAB_1400fefde;
  local_c40 = &local_5a8;
  for (local_c64 = 0; local_c64 < 3; local_c64 = local_c64 + 1) {
    local_750 = local_4f0;
    pcVar10 = (code *)(*local_4f0)(local_838);
    *local_c40 = pcVar10;
    if (*local_c40 == (code *)0x0) goto LAB_1400fefde;
    local_c40 = local_c40 + 1;
  }
  local_c40 = &local_590;
  for (local_c60 = 0; local_c60 < 0x10; local_c60 = local_c60 + 1) {
    local_748 = local_4f0;
    pcVar10 = (code *)(*local_4f0)(local_ce8);
    *local_c40 = pcVar10;
    if (*local_c40 == (code *)0x0) goto LAB_1400fefde;
    local_c40 = local_c40 + 1;
  }
  if ((local_33c & 0x20) == 0) {
    local_af0 = *(longlong *)(unaff_GS_OFFSET + 0x30);
    if ((((local_af0 == 0) || (*(longlong *)(local_af0 + 0x30) != local_af0)) ||
        (*(longlong *)(local_af0 + 0x60) == 0)) ||
       (*(char *)(*(longlong *)(local_af0 + 0x60) + 2) != '\0')) {
      bVar15 = true;
    }
    else {
      bVar15 = false;
    }
    local_740 = local_af0;
    if (bVar15) {
      local_d28 = 'T';
      goto LAB_1400ff0ef;
    }
  }
  if (((local_2d0 & 1) != 0) && (local_a64 = *(int *)(in_stack_00000028 + 0x58), local_a64 != 1))
  goto LAB_1400feea4;
  local_738 = local_5a8;
  psVar11 = (short *)(*local_5a8)(1);
  uVar3 = local_334;
  if (psVar11 == (short *)0x0) {
    local_d28 = 'W';
    local_334 = uVar3;
    goto LAB_1400ff0ef;
  }
  local_730 = (undefined1 *)(local_830 + (ulonglong)local_348);
  local_9d0 = local_730;
  local_9c8 = psVar11;
  for (local_9c0 = (ulonglong)local_344; local_9c0 != 0; local_9c0 = local_9c0 - 1) {
    uVar1 = *local_9d0;
    local_9d0 = local_9d0 + 1;
    *(undefined1 *)local_9c8 = uVar1;
    local_9c8 = (short *)((longlong)local_9c8 + 1);
  }
  local_828 = aiStack_2e0;
  local_a58 = local_344 / 8;
  local_b18 = 0x55555555;
  local_b14 = 0x55555555;
  for (local_c5c = 0; local_c5c < local_a58; local_c5c = local_c5c + 1) {
    uVar7 = local_c5c * 2;
    local_a54 = *(uint *)(psVar11 + (ulonglong)uVar7 * 2);
    local_a50 = *(uint *)(psVar11 + (ulonglong)(uVar7 + 1) * 2);
    local_cc0 = 0xc6ef3720;
    local_cd4 = local_a54;
    local_cd0 = local_a50;
    for (local_be4 = 0; local_be4 < 0x20; local_be4 = local_be4 + 1) {
      local_cd0 = local_cd0 -
                  ((local_cd4 << 4 ^ local_cd4 >> 5) + local_cd4 ^
                  local_cc0 + local_828[local_cc0 >> 0xb & 3]);
      local_cc0 = local_cc0 + 0x61c88647;
      local_cd4 = local_cd4 -
                  ((local_cd0 * 0x10 ^ local_cd0 >> 5) + local_cd0 ^
                  local_cc0 + local_828[local_cc0 & 3]);
    }
    *(uint *)(psVar11 + (ulonglong)uVar7 * 2) = local_cd4 ^ local_b18;
    *(uint *)(psVar11 + (ulonglong)(uVar7 + 1) * 2) = local_cd0 ^ local_b14;
    local_b18 = local_a54;
    local_b14 = local_a50;
  }
  local_334 = 0;
  local_d10 = 0;
  local_728 = local_288;
  for (local_c54 = 0; local_c54 < uVar6; local_c54 = local_c54 + 1) {
    local_d10 = local_d10 ^ (uint)*(byte *)((longlong)local_728 + (ulonglong)local_c54) << 0x18;
    for (local_be0 = 8; 0 < local_be0; local_be0 = local_be0 + -1) {
      if ((local_d10 & 0x80000000) == 0) {
        local_d10 = local_d10 << 1;
      }
      else {
        local_d10 = local_d10 << 1 ^ 0x488781ed;
      }
    }
  }
  local_a4c = local_d10;
  local_d08 = local_d10;
  local_720 = local_378;
  for (local_c4c = 0; local_c4c < 0xf0; local_c4c = local_c4c + 1) {
    local_d08 = local_d08 ^ (uint)*(byte *)((longlong)local_720 + (ulonglong)local_c4c) << 0x18;
    for (local_bdc = 8; 0 < local_bdc; local_bdc = local_bdc + -1) {
      if ((local_d08 & 0x80000000) == 0) {
        local_d08 = local_d08 << 1;
      }
      else {
        local_d08 = local_d08 << 1 ^ 0x488781ed;
      }
    }
  }
  local_a48 = local_d08;
  local_d00 = local_d08;
  for (local_c80 = 0; local_c80 < (local_35c + 0xfU & 0xfffffff0); local_c80 = local_c80 + 1) {
    local_d00 = local_d00 ^ (uint)*(byte *)(param_1 + (ulonglong)local_c80) << 0x18;
    for (local_bd8 = 8; 0 < local_bd8; local_bd8 = local_bd8 + -1) {
      if ((local_d00 & 0x80000000) == 0) {
        local_d00 = local_d00 << 1;
      }
      else {
        local_d00 = local_d00 << 1 ^ 0x488781ed;
      }
    }
  }
  local_a44 = local_d00;
  local_cf8 = local_d00;
  for (local_c7c = 0; local_c7c < local_344; local_c7c = local_c7c + 1) {
    local_cf8 = local_cf8 ^ (uint)*(byte *)((longlong)psVar11 + (ulonglong)local_c7c) << 0x18;
    for (local_bd4 = 8; 0 < local_bd4; local_bd4 = local_bd4 + -1) {
      if ((local_cf8 & 0x80000000) == 0) {
        local_cf8 = local_cf8 << 1;
      }
      else {
        local_cf8 = local_cf8 << 1 ^ 0x488781ed;
      }
    }
  }
  local_a40 = local_cf8;
  local_ad0 = psVar11;
  local_718 = param_1;
  local_710 = psVar11;
  if (local_cf8 != uVar3) {
    local_d28 = 'Q';
    local_334 = uVar3;
    goto LAB_1400ff0ef;
  }
  local_820 = (ulonglong)local_344;
  local_b50 = psVar11;
  if ((local_820 < 0x40) || (*psVar11 != 0x5a4d)) {
    local_ba0 = (short *)0x0;
    local_334 = uVar3;
  }
  else {
    piVar14 = (int *)((longlong)psVar11 + (longlong)*(int *)(psVar11 + 0x1e));
    if ((local_820 < (longlong)*(int *)(psVar11 + 0x1e) + 0x108U) || (*piVar14 != 0x4550)) {
      local_ba0 = (short *)0x0;
      local_334 = uVar3;
    }
    else {
      local_708 = local_540;
      local_334 = uVar3;
      local_ca0 = (short *)(*local_540)(*(undefined8 *)(piVar14 + 0xc),piVar14[0x14],0x2000,4);
      if (local_ca0 == (short *)0x0) {
        local_700 = local_540;
        local_ca0 = (short *)(*local_540)(0,piVar14[0x14],0x2000,4);
      }
      if (local_ca0 == (short *)0x0) {
        local_ba0 = (short *)0x0;
      }
      else {
        local_9b8 = local_b90;
        for (local_9b0 = 0x18; local_9b0 != 0; local_9b0 = local_9b0 + -1) {
          *local_9b8 = 0;
          local_9b8 = local_9b8 + 1;
        }
        local_b88 = local_ca0;
        local_6f8 = local_540;
        local_818 = (undefined1 *)(*local_540)(local_ca0,piVar14[0x14],0x1000,4);
        local_a38 = *(int *)(local_b50 + 0x1e) + piVar14[0x15];
        local_9a8 = local_b50;
        local_9a0 = local_818;
        for (local_998 = (ulonglong)local_a38; local_998 != 0; local_998 = local_998 - 1) {
          sVar4 = *local_9a8;
          local_9a8 = (short *)((longlong)local_9a8 + 1);
          *local_9a0 = (char)sVar4;
          local_9a0 = local_9a0 + 1;
        }
        local_b80 = local_818 + *(int *)(local_b50 + 0x1e);
        *(short **)(local_b80 + 0x30) = local_ca0;
        local_810 = local_b88;
        local_c28 = local_b80 + (ulonglong)*(ushort *)(local_b80 + 0x14) + 0x18;
        for (local_bd0 = 0; psVar5 = local_b88, local_bd0 < (int)(uint)*(ushort *)(local_b80 + 6);
            local_bd0 = local_bd0 + 1) {
          if (*(int *)(local_c28 + 0x10) == 0) {
            uVar6 = piVar14[0xe];
            if (uVar6 != 0) {
              local_6f0 = local_540;
              local_980 = (undefined1 *)
                          (*local_540)((longlong)local_810 + (ulonglong)*(uint *)(local_c28 + 0xc),
                                       uVar6,0x1000,4);
              local_990 = local_980;
              for (local_988 = (ulonglong)uVar6; local_988 != 0; local_988 = local_988 - 1) {
                *local_990 = 0;
                local_990 = local_990 + 1;
              }
            }
          }
          else {
            local_6e8 = local_540;
            local_980 = (undefined1 *)
                        (*local_540)((longlong)local_810 + (ulonglong)*(uint *)(local_c28 + 0xc),
                                     *(undefined4 *)(local_c28 + 0x10),0x1000,4);
            local_6e0 = (undefined1 *)((longlong)psVar11 + (ulonglong)*(uint *)(local_c28 + 0x14));
            local_978 = local_6e0;
            local_970 = local_980;
            for (local_968 = (ulonglong)*(uint *)(local_c28 + 0x10); local_968 != 0;
                local_968 = local_968 - 1) {
              uVar1 = *local_978;
              local_978 = local_978 + 1;
              *local_970 = uVar1;
              local_970 = local_970 + 1;
            }
          }
          local_c28 = local_c28 + 0x28;
        }
        local_960 = (longlong)local_ca0 - *(longlong *)(piVar14 + 0xc);
        if (local_960 != 0) {
          local_800 = local_b88;
          local_808 = (uint *)(local_b80 + 0xb0);
          if (*(int *)(local_b80 + 0xb4) != 0) {
            for (local_bb8 = (uint *)((longlong)local_b88 + (ulonglong)*local_808); *local_bb8 != 0;
                local_bb8 = (uint *)((longlong)local_bb8 + (ulonglong)local_bb8[1])) {
              local_7f0 = (longlong)local_b88 + (ulonglong)*local_bb8;
              local_ac8 = local_bb8 + 2;
              for (local_bc8 = 0; local_6d8 = (ulonglong)local_bc8,
                  local_6d8 < ((ulonglong)local_bb8[1] - 8) / 2; local_bc8 = local_bc8 + 1) {
                local_a34 = (int)(uint)(ushort)*local_ac8 >> 0xc;
                local_b10 = (ushort)*local_ac8 & 0xfff;
                if (local_a34 != 0) {
                  if (local_a34 == 3) {
                    local_7f8 = (int *)(local_7f0 + (int)local_b10);
                    *local_7f8 = *local_7f8 + (int)local_960;
                  }
                  else {
                    if (local_a34 != 10) {
                      pcVar10 = (code *)swi(3);
                      lVar12 = (*pcVar10)();
                      return lVar12;
                    }
                    local_7e8 = (longlong *)(local_7f0 + (int)local_b10);
                    *local_7e8 = *local_7e8 + local_960;
                  }
                }
                local_ac8 = (uint *)((longlong)local_ac8 + 2);
              }
            }
          }
        }
        local_7e0 = (uint *)(local_b80 + 0x90);
        if (*(int *)(local_b80 + 0x94) != 0) {
          local_c90 = (uint *)((longlong)local_b88 + (ulonglong)*local_7e0);
          while( true ) {
            local_6d0 = local_528;
            iVar8 = (*local_528)(local_c90);
            if ((iVar8 != 0) || (local_c90[3] == 0)) break;
            local_6c8 = (longlong)psVar5 + (ulonglong)local_c90[3];
            local_6c0 = local_500;
            local_958 = (*local_500)(local_6c8);
            if (local_958 == 0) {
              bVar15 = false;
              goto LAB_1400fe3d3;
            }
            if (*local_c90 == 0) {
              uVar6 = local_c90[4];
              uVar3 = local_c90[4];
            }
            else {
              uVar6 = *local_c90;
              uVar3 = local_c90[4];
            }
            local_b48 = (longlong *)((longlong)psVar5 + (ulonglong)uVar3);
            for (local_bb0 = (ulonglong *)((longlong)psVar5 + (ulonglong)uVar6); *local_bb0 != 0;
                local_bb0 = local_bb0 + 1) {
              if ((*local_bb0 & 0x8000000000000000) == 0) {
                local_6b0 = (longlong)psVar5 + *local_bb0;
                local_6a8 = local_4f0;
                lVar12 = (*local_4f0)(local_958);
                *local_b48 = lVar12;
              }
              else {
                local_6b8 = local_4f0;
                lVar12 = (*local_4f0)(local_958);
                *local_b48 = lVar12;
              }
              if (*local_b48 == 0) {
                bVar15 = false;
                goto LAB_1400fe3d3;
              }
              local_b48 = local_b48 + 1;
            }
            local_c90 = local_c90 + 5;
          }
        }
        bVar15 = true;
LAB_1400fe3d3:
        if (bVar15) {
          local_cc8 = local_b80 + (ulonglong)*(ushort *)(local_b80 + 0x14) + 0x18;
          for (local_c18 = 0; local_c18 < (int)(uint)*(ushort *)(local_b80 + 6);
              local_c18 = local_c18 + 1) {
            bVar15 = (*(uint *)(local_cc8 + 0x24) & 0x20000000) != 0;
            local_b0c = (uint)bVar15;
            bVar16 = (*(uint *)(local_cc8 + 0x24) & 0x40000000) != 0;
            local_b08 = (uint)bVar16;
            bVar17 = (*(uint *)(local_cc8 + 0x24) & 0x80000000) != 0;
            local_b04 = (uint)bVar17;
            if ((*(uint *)(local_cc8 + 0x24) & 0x2000000) == 0) {
              if (bVar16) {
                if (bVar17) {
                  local_cf0 = 4;
                }
                else {
                  local_cf0 = 2;
                }
              }
              else if (bVar17) {
                local_cf0 = 8;
              }
              else {
                local_cf0 = 1;
              }
              if (bVar15) {
                local_cf0 = local_cf0 << 4;
              }
              if ((*(uint *)(local_cc8 + 0x24) & 0x4000000) != 0) {
                local_cf0 = local_cf0 | 0x200;
              }
              local_c78 = *(int *)(local_cc8 + 0x10);
              if (local_c78 == 0) {
                if ((*(uint *)(local_cc8 + 0x24) & 0x40) == 0) {
                  if ((*(uint *)(local_cc8 + 0x24) & 0x80) != 0) {
                    local_c78 = *(int *)(local_b80 + 0x24);
                  }
                }
                else {
                  local_c78 = *(int *)(local_b80 + 0x20);
                }
              }
              if (local_c78 != 0) {
                local_698 = local_530;
                (*local_530)((ulonglong)*(uint *)(local_cc8 + 0xc) + (longlong)local_b88,
                             *(undefined4 *)(local_cc8 + 0x10),local_cf0,local_5b8);
              }
            }
            else {
              local_6a0 = local_538;
              (*local_538)((ulonglong)*(uint *)(local_cc8 + 0xc) + (longlong)local_b88);
            }
            local_cc8 = local_cc8 + 0x28;
          }
          if (*(int *)(local_b80 + 0x28) == 0) {
LAB_1400fe725:
            local_ba0 = local_ca0;
          }
          else {
            local_7d8 = (code *)((longlong)local_ca0 + (ulonglong)*(uint *)(local_b80 + 0x28));
            if (local_7d8 == (code *)0x0) {
              local_ba0 = (short *)0x0;
            }
            else {
              local_690 = local_7d8;
              local_a30 = (*local_7d8)(local_ca0,1,0);
              if (local_a30 != 0) {
                local_b90[0] = 1;
                goto LAB_1400fe725;
              }
              local_ba0 = (short *)0x0;
            }
          }
        }
        else {
          local_ba0 = (short *)0x0;
        }
      }
    }
  }
  local_950 = psVar11;
  for (local_948 = (ulonglong)local_344; local_948 != 0; local_948 = local_948 - 1) {
    *(undefined1 *)local_950 = 0;
    local_950 = (short *)((longlong)local_950 + 1);
  }
  local_688 = local_5a0;
  (*local_5a0)(psVar11);
  if (local_ba0 == (short *)0x0) {
    local_d28 = 'B';
  }
  else {
    local_7d0 = local_ba0;
    if (*local_ba0 == 0x5a4d) {
      local_a98 = (int *)((longlong)local_ba0 + (longlong)*(int *)(local_ba0 + 0x1e));
      if (*local_a98 == 0x4550) {
        if ((short)local_a98[1] == -0x799c) {
          if ((short)local_a98[5] == 0xf0) {
            local_ae8 = (uint *)(local_a98 + 0x22);
            if (local_a98[0x23] == 0) {
              local_c88 = (code *)0x0;
            }
            else {
              uVar6 = *local_ae8;
              if ((*(int *)((longlong)local_ba0 + (ulonglong)uVar6 + 0x18) == 0) ||
                 (*(int *)((longlong)local_ba0 + (ulonglong)uVar6 + 0x14) == 0)) {
                local_c88 = (code *)0x0;
              }
              else {
                local_940 = (uint *)((longlong)local_ba0 +
                                    (ulonglong)
                                    *(uint *)((longlong)local_ba0 + (ulonglong)uVar6 + 0x20));
                local_938 = (ushort *)
                            ((longlong)local_ba0 +
                            (ulonglong)*(uint *)((longlong)local_ba0 + (ulonglong)uVar6 + 0x24));
                local_c74 = 0xffffffff;
                for (local_c14 = 0;
                    local_c14 < *(uint *)((longlong)local_ba0 + (ulonglong)uVar6 + 0x18);
                    local_c14 = local_c14 + 1) {
                  local_b38 = apcStack_4e8[0x21];
                  for (local_b40 = (char *)((longlong)local_ba0 + (ulonglong)*local_940);
                      (*local_b38 != '\0' && (*local_b40 != '\0')); local_b40 = local_b40 + 1) {
                    if (*local_b38 < *local_b40) {
                      local_ca8 = -1;
                      goto LAB_1400feaef;
                    }
                    if (*local_b40 < *local_b38) {
                      local_ca8 = 1;
                      goto LAB_1400feaef;
                    }
                    local_b38 = local_b38 + 1;
                  }
                  if (*local_b40 == '\0') {
                    if (*local_b38 == '\0') {
                      local_ca8 = 0;
                    }
                    else {
                      local_ca8 = 1;
                    }
                  }
                  else {
                    local_ca8 = -1;
                  }
LAB_1400feaef:
                  if (local_ca8 == 0) {
                    local_c74 = (uint)*local_938;
                    break;
                  }
                  local_940 = local_940 + 1;
                  local_938 = local_938 + 1;
                }
                if (local_c74 == 0xffffffff) {
                  local_c88 = (code *)0x0;
                }
                else if (*(uint *)((longlong)local_ba0 + (ulonglong)uVar6 + 0x14) < local_c74) {
                  local_c88 = (code *)0x0;
                }
                else {
                  uVar6 = *(uint *)((longlong)local_ba0 +
                                   (longlong)(int)local_c74 * 4 +
                                   (ulonglong)
                                   *(uint *)((longlong)local_ba0 + (ulonglong)uVar6 + 0x1c));
                  if ((uVar6 < *local_ae8) || (*local_ae8 + local_a98[0x23] <= uVar6)) {
                    local_c88 = (code *)((longlong)local_ba0 + (ulonglong)uVar6);
                  }
                  else {
                    local_c88 = (code *)0x0;
                  }
                }
              }
            }
          }
          else {
            local_c88 = (code *)0x0;
          }
        }
        else {
          local_c88 = (code *)0x0;
        }
      }
      else {
        local_c88 = (code *)0x0;
      }
    }
    else {
      local_c88 = (code *)0x0;
    }
    local_7c8 = local_c88;
    if (local_c88 == (code *)0x0) {
      local_d28 = 'C';
    }
    else {
      local_680 = local_c88;
      local_d28 = (*local_c88)(param_1,local_378,0xf0);
      if (local_d28 == '0') {
        local_7c0 = local_ba0;
        if ((((*local_ba0 == 0x5a4d) &&
             (local_b78 = (int *)((longlong)local_ba0 + (longlong)*(int *)(local_ba0 + 0x1e)),
             *local_b78 == 0x4550)) && ((short)local_b78[1] == -0x799c)) &&
           ((short)local_b78[5] == 0xf0)) {
          local_ac0 = local_ba0;
          if (local_b78[10] != 0) {
            local_7b8 = (code *)((longlong)local_ba0 + (ulonglong)(uint)local_b78[10]);
            if (local_7b8 == (code *)0x0) goto LAB_1400feea4;
            local_678 = local_7b8;
            (*local_7b8)(local_ba0,0,0);
          }
          local_7b0 = (uint *)(local_b78 + 0x24);
          if (local_b78[0x25] != 0) {
            local_ae0 = (longlong)local_ac0 + (ulonglong)*local_7b0;
            while( true ) {
              local_670 = local_528;
              iVar8 = (*local_528)(local_ae0,0x14);
              if ((iVar8 != 0) || (*(int *)(local_ae0 + 0xc) == 0)) break;
              local_668 = (longlong)local_ac0 + (ulonglong)*(uint *)(local_ae0 + 0xc);
              local_660 = local_510;
              local_7a8 = (*local_510)(local_668);
              if (local_7a8 != 0) {
                local_658 = local_518;
                (*local_518)(local_7a8);
              }
              local_ae0 = local_ae0 + 0x14;
            }
          }
          local_650 = local_538;
          (*local_538)(local_ba0,0,0x8000);
        }
LAB_1400feea4:
        local_930 = local_378;
        for (local_928 = 0xf0; local_928 != 0; local_928 = local_928 + -1) {
          *(undefined1 *)local_930 = 0;
          local_930 = (uint *)((longlong)local_930 + 1);
        }
        local_920 = &local_5a8;
        for (local_918 = 0x1d0; local_918 != 0; local_918 = local_918 + -1) {
          *(undefined1 *)local_920 = 0;
          local_920 = (code **)((longlong)local_920 + 1);
        }
        local_910 = local_288;
        for (local_908 = 0x280; local_908 != 0; local_908 = local_908 + -1) {
          *(undefined1 *)local_910 = 0;
          local_910 = (uint *)((longlong)local_910 + 1);
        }
        return local_b70 + local_358;
      }
    }
  }
LAB_1400ff0ef:
  local_5c8 = local_590;
  iVar8 = (*local_588)();
  if (((local_d28 != '5') && (local_d28 != '0')) && (local_d28 != 'E')) {
    local_ab0 = apcStack_4e8[0x1d];
    local_aa8 = local_3a0;
    while (*local_ab0 != '\0') {
      cVar2 = *local_ab0;
      local_ab0 = local_ab0 + 1;
      *local_aa8 = cVar2;
      local_aa8 = local_aa8 + 1;
    }
    *local_aa8 = '\0';
    local_aa0 = apcStack_4e8[0x1e];
    local_ab8 = local_3d8;
    while (*local_aa0 != '\0') {
      cVar2 = *local_aa0;
      local_aa0 = local_aa0 + 1;
      *local_ab8 = cVar2;
      local_ab8 = local_ab8 + 1;
    }
    *local_ab8 = '\0';
    local_c08 = iVar8 + 0xff98;
    local_8c8 = 0;
    for (local_8d0 = local_3d8; *local_8d0 != '\0'; local_8d0 = local_8d0 + 1) {
      local_8c8 = local_8c8 + 1;
    }
    local_640 = local_8c8;
    pcVar13 = local_3d8 + local_8c8;
    do {
      local_b68 = pcVar13;
      pcVar13 = local_b68 + -1;
      if (pcVar13 <= local_3d8) goto LAB_1400ff3f4;
    } while (*pcVar13 != ':');
    local_b68[-2] = local_d28;
    local_638 = local_b68;
    local_c6c = 1000000000;
    for (local_c70 = 0; local_c70 < 10; local_c70 = local_c70 + 1) {
      local_b28 = local_c08 / local_c6c;
      local_b68[local_c70] = (char)local_b28 + '0';
      local_c08 = local_c08 - local_b28 * local_c6c;
      local_c6c = local_c6c / 10;
    }
LAB_1400ff3f4:
    local_b68 = pcVar13;
    if (CONCAT44(uStack_364,local_378[4]) < 0x100000000) {
      local_630 = local_580;
      local_8b0 = (*local_580)(0x100000,0,apcStack_4e8[0x1c]);
      local_628 = local_578;
      local_8b8 = (*local_578)(2,0,apcStack_4e8[0x1b]);
      if ((local_8b0 == 0) || (local_8b8 == 0)) {
        local_d27 = '5';
      }
      else {
        local_620 = local_568;
        iVar8 = (*local_568)(local_8b0,5000);
        if (iVar8 == 0) {
          local_618 = local_570;
          lVar12 = (*local_570)(local_8b8,2,0,0,0);
          local_8c0 = lVar12;
          if (lVar12 == 0) {
            local_d27 = 'H';
          }
          else if (*(int *)(lVar12 + 0x90) == 2) {
            if (*(int *)(lVar12 + 0x94) == 0) {
              local_610 = local_560;
              local_8a8 = (*local_560)(0,0,0,0);
              uVar9 = (*local_548)();
              *(undefined4 *)(lVar12 + 0x98) = uVar9;
              *(undefined4 *)(lVar12 + 0xa8) = local_340;
              *(uint *)(lVar12 + 0xac) = local_334;
              *(uint *)(lVar12 + 0xb4) = local_378[4] + -0xf0;
              *(int *)(lVar12 + 0xb0) = (int)local_d28;
              *(undefined8 *)(lVar12 + 0xa0) = local_8a8;
              *(undefined4 *)(lVar12 + 0x94) = 2;
              local_608 = local_568;
              iVar8 = (*local_568)(local_8a8,5000);
              local_600 = local_558;
              (*local_558)(local_8c0);
              local_5f8 = local_550;
              (*local_550)(local_8b8);
              local_5f0 = local_550;
              (*local_550)(local_8b0);
              local_5e8 = local_550;
              (*local_550)(local_8a8);
              if (iVar8 == 0) {
                local_d27 = '0';
              }
              else {
                local_d27 = 'L';
              }
            }
            else {
              local_d27 = 'J';
            }
          }
          else {
            local_d27 = 'I';
          }
        }
        else {
          local_d27 = 'G';
        }
      }
    }
    else {
      local_d27 = '5';
    }
    if ((local_d27 != '0') && ((local_33c & 0x40) == 0)) {
      local_5e0 = local_500;
      local_7a0 = (*local_500)(apcStack_4e8[0x16]);
      if (local_7a0 != 0) {
        local_5d8 = local_4f0;
        local_798 = (code *)(*local_4f0)(local_7a0,apcStack_4e8[0x1a]);
        local_8a0 = local_378;
        for (local_898 = 0xf0; local_898 != 0; local_898 = local_898 + -1) {
          *(undefined1 *)local_8a0 = 0;
          local_8a0 = (uint *)((longlong)local_8a0 + 1);
        }
        local_890 = &local_5a8;
        for (local_888 = 0x1d0; local_888 != 0; local_888 = local_888 + -1) {
          *(undefined1 *)local_890 = 0;
          local_890 = (code **)((longlong)local_890 + 1);
        }
        local_880 = local_288;
        for (local_878 = 0x280; local_878 != 0; local_878 = local_878 + -1) {
          *(undefined1 *)local_880 = 0;
          local_880 = (uint *)((longlong)local_880 + 1);
        }
        if (local_798 != (code *)0x0) {
          local_5d0 = local_798;
          (*local_798)(0,local_3d8,local_3a0,0x10);
        }
      }
    }
  }
  local_870 = local_378;
  for (local_868 = 0xf0; local_868 != 0; local_868 = local_868 + -1) {
    *(undefined1 *)local_870 = 0;
    local_870 = (uint *)((longlong)local_870 + 1);
  }
  local_860 = &local_5a8;
  for (local_858 = 0x1d0; local_858 != 0; local_858 = local_858 + -1) {
    *(undefined1 *)local_860 = 0;
    local_860 = (code **)((longlong)local_860 + 1);
  }
  local_850 = local_288;
  for (local_848 = 0x280; local_848 != 0; local_848 = local_848 + -1) {
    *(undefined1 *)local_850 = 0;
    local_850 = (uint *)((longlong)local_850 + 1);
  }
  local_5c0 = local_5c8;
  (*local_5c8)(0xffffffffffffffff,(int)local_d28);
  return 0;
}


