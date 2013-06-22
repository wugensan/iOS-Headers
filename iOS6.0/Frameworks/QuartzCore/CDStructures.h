/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct Animation {
    void **_field1;
    struct Atomic _field2;
    float _field3;
    struct Ref<CA::Render::Timing> _field4;
    struct Ref<CA::Render::Vector> _field5;
    void *_field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
};

struct Atomic {
    CDStruct_fcaf9308 _field1;
};

struct Behavior {
    void **_field1;
    struct Atomic _field2;
    unsigned int _field3;
    struct Ref<CA::Render::String> _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int :8;
    unsigned int :8;
    struct Ref<const CA::Render::Behavior> _field7;
};

struct Bounds {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
};

struct CAColorMatrix {
    float m11;
    float m12;
    float m13;
    float m14;
    float m15;
    float m21;
    float m22;
    float m23;
    float m24;
    float m25;
    float m31;
    float m32;
    float m33;
    float m34;
    float m35;
    float m41;
    float m42;
    float m43;
    float m44;
    float m45;
};

struct CADoublePoint {
    double x;
    double y;
};

struct CADoubleRect {
    struct CADoublePoint origin;
    struct CADoubleSize size;
};

struct CADoubleSize {
    double width;
    double height;
};

struct CAEAGLBuffer;

struct CALinearMaskContext {
    void *_field1;
    unsigned int _field2;
    int _field3;
    int _field4;
    struct CGAffineTransform _field5;
    struct CGGlyphLock *_field6;
};

struct CAMediaTimingFunctionPrivate {
    float _field1[2];
    float _field2[2];
};

struct CAMeshFace {
    unsigned int _field1[4];
    float _field2[4];
};

struct CAMeshVertex {
    struct CGPoint _field1;
    struct CAPoint3D _field2;
};

struct CAPoint3D {
    float x;
    float y;
    float z;
};

struct CARendererPriv {
    id _field1;
    struct Weak<id> _field2;
    id _field3;
    struct Context *_field4;
    struct Renderer *_field5;
    struct CGRect _field6;
    struct Update *_field7;
    unsigned int _field8;
    unsigned int _field9[2];
    unsigned int _field10[2];
    unsigned int _field11;
    unsigned int :8;
    unsigned int _field12;
    char _field13[0];
};

struct CATransform3D {
    float m11;
    float m12;
    float m13;
    float m14;
    float m21;
    float m22;
    float m23;
    float m24;
    float m31;
    float m32;
    float m33;
    float m34;
    float m41;
    float m42;
    float m43;
    float m44;
};

struct CAWindowServerImpl {
    struct __CFArray *_field1;
    unsigned int _field2;
};

struct CGAffineTransform {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
};

struct CGColorSpace;

struct CGGlyphLock;

struct CGPathElement {
    int _field1;
    struct CGPoint *_field2;
};

struct CGPoint {
    float x;
    float y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    float width;
    float height;
};

struct CVSMPTETime {
    short _field1;
    short _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    short _field6;
    short _field7;
    short _field8;
    short _field9;
};

struct Command;

struct Commit;

struct Condition {
    struct _opaque_pthread_cond_t {
        long _field1;
        char _field2[24];
    } _field1;
};

struct Context {
    unsigned int _field1;
    struct Context *_field2;
    struct Mutex _field3;
    id _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    id _field8;
    struct Context *_field9;
    struct CGColorSpace *_field10;
    struct __CFDictionary *_field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    struct ObjectCache *_field15;
    unsigned int _field16;
    struct __CFMachPort *_field17;
    struct __CFRunLoopSource *_field18;
    float _field19;
    struct Commit *_field20;
    struct Generic _field21;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
};

struct ContextItem;

struct Data {
    unsigned int _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5;
    unsigned int :2;
    unsigned int :2;
    unsigned int :4;
    unsigned int :4;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :32;
    struct Vec2<double> _field6;
    struct Rect _field7;
};

struct Deleted;

struct Display {
    void **_field1;
    id _field2;
    struct __CFString *_field3;
    struct __CFString *_field4;
    unsigned int _field5;
    struct __CFString *_field6;
    struct ModeSet _field7;
    int _field8;
    int _field9;
    int _field10;
    struct Bounds _field11;
    unsigned int _field12;
    unsigned int _field13;
    float _field14;
    int _field15;
    _Bool _field16;
    _Bool _field17;
    _Bool _field18;
    _Bool _field19;
    _Bool _field20;
    _Bool _field21;
    unsigned int _field22;
    double _field23;
    _Bool _field24;
};

struct DisplayLink {
    void **_field1;
    struct Display *_field2;
    void *_field3;
    SEL _field4;
    void *_field5;
    int _field6;
    struct Mutex _field7;
    struct Condition _field8;
    struct _opaque_pthread_t *_field9;
    id _field10;
    struct __CFRunLoop *_field11;
    struct List<const __CFString *> *_field12;
    unsigned long long _field13;
    unsigned long long _field14;
    unsigned int :1;
};

struct Ext;

struct Generic {
    void **_field1;
    struct Context *_field2;
};

struct Handle;

struct HashTable<CA::Layer *, CA::Layer *>;

struct HashTable<CA::Layer *, unsigned int *>;

struct Interpolator {
    void **_field1;
    struct Atomic _field2;
    struct Ref<CA::Render::Object> _field3;
    struct Ref<CA::Render::Object> _field4;
    struct Ref<CA::Render::Object> _field5;
    struct Ref<CA::Render::Object> _field6;
    struct ValueInterpolator _field7;
};

struct KeyValueArray {
    void **_field1;
    struct Atomic _field2;
    unsigned int _field3;
    struct Object *_field4[1];
};

struct Layer {
    void **_field1;
    struct Atomic _field2;
    struct Data _field3;
    struct Ref<CA::Render::Object> _field4;
    struct Ref<CA::Render::TypedArray<CA::Render::Layer>> _field5;
    struct Layer *_field6;
    struct Ref<CA::Render::Layer::Ext> _field7;
    struct Ref<CA::Render::TypedArray<CA::Render::Animation>> _field8;
    struct Ref<CA::Render::Handle> _field9;
};

struct LayoutList;

struct Level;

struct List<const __CFString *>;

struct List<const void *>;

struct List<void (^)()>;

struct ModeSet {
    unsigned int _field1;
    unsigned int _field2[1];
};

struct Mutex {
    struct _opaque_pthread_mutex_t {
        long _field1;
        char _field2[40];
    } _field1;
};

struct Object {
    void **_field1;
    struct Atomic _field2;
};

struct ObjectCache;

struct PendingOperation;

struct Proxy {
    void **_field1;
    struct Atomic _field2;
    unsigned long long _field3;
};

struct Rect {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct Ref<CA::Render::Handle> {
    struct Handle *_field1;
};

struct Ref<CA::Render::Layer::Ext> {
    struct Ext *_field1;
};

struct Ref<CA::Render::Object> {
    struct Object *_field1;
};

struct Ref<CA::Render::String> {
    struct String *_field1;
};

struct Ref<CA::Render::Timing> {
    struct Timing *_field1;
};

struct Ref<CA::Render::TypedArray<CA::Render::Animation>> {
    struct TypedArray<CA::Render::Animation> *_field1;
};

struct Ref<CA::Render::TypedArray<CA::Render::Layer>> {
    struct TypedArray<CA::Render::Layer> *_field1;
};

struct Ref<CA::Render::Vector> {
    struct Vector *_field1;
};

struct Ref<const CA::Render::Behavior> {
    struct Behavior *_field1;
};

struct Renderer;

struct Server {
    void **_field1;
    struct SpinLock _field2;
    struct Mutex _field3;
    struct Display *_field4;
    struct __CFString *_field5;
    struct ContextItem *_field6;
    unsigned int _field7;
    unsigned int _field8;
    struct SpinLock _field9;
    struct PendingOperation *_field10;
    struct Context *_field11;
    unsigned int _field12;
    struct Shape *_field13;
    unsigned int _field14;
    struct Context *_field15;
    struct Renderer *_field16;
    double _field17;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
};

struct Shape;

struct Shared;

struct SpinLock {
    CDStruct_fcaf9308 _field1;
};

struct String;

struct Timing;

struct Transaction {
    struct Shared *_field1;
    int _field2;
    struct HashTable<CA::Layer *, unsigned int *> *_field3;
    struct SpinLock *_field4;
    unsigned int _field5;
    struct Level *_field6;
    struct List<void (^)()> *_field7;
    struct Command *_field8;
    struct Deleted *_field9;
    struct List<const void *> *_field10;
    struct Context *_field11;
    struct HashTable<CA::Layer *, CA::Layer *> *_field12;
    struct __CFRunLoop *_field13;
    struct __CFRunLoopObserver *_field14;
    struct LayoutList *_field15;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
};

struct TypedArray<CA::Render::Animation>;

struct TypedArray<CA::Render::Layer>;

struct Update;

struct ValueInterpolator {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    _Bool _field10;
};

struct Vec2<double> {
    double _field1;
    double _field2;
};

struct Vector;

struct Weak<id> {
    id _field1;
};

struct _CAEAGLNativeWindow {
    struct _EAGLWindowObject _field1;
    struct CAEAGLBuffer *_field2;
    struct Atomic _field3;
    struct Atomic _field4;
    struct SpinLock _field5;
    struct _CAImageQueue *_field6;
    id _field7;
    struct x_list_struct *_field8;
    unsigned int _field9;
    struct CAEAGLBuffer *_field10;
    struct CAEAGLBuffer *_field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    struct CAEAGLBuffer *_field15;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
};

struct _CAImageQueue;

struct _CALayerArrayIvars {
    id *layers;
    unsigned int count;
    unsigned int capacity;
    unsigned long mutations;
    char retained;
};

struct _CALayerIvars {
    int refcount;
    unsigned int magic;
    void *layer;
    void *unused1[8];
};

struct _CAPackageData {
    id _field1;
    id _field2;
    id _field3;
    _Bool _field4;
    _Bool _field5;
};

struct _CAStateControllerData {
    id _field1;
    struct __CFDictionary *_field2;
    id _field3;
    id _field4;
};

struct _EAGLWindowObject {
    void *_field1;
    void *_field2;
    void *_field3;
};

struct _NSRange {
    unsigned int _field1;
    unsigned int _field2;
};

struct __CFDictionary;

struct __CFRunLoop;

struct __CFString;

struct x_list_struct;

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long _field1;
    id *_field2;
    unsigned long *_field3;
    unsigned long _field4[5];
} CDStruct_11f37819;

typedef struct {
    int _field1;
} CDStruct_fcaf9308;

typedef struct {
    unsigned int _field1;
    int _field2;
    long long _field3;
    unsigned long long _field4;
    double _field5;
    long long _field6;
    struct CVSMPTETime _field7;
    unsigned long long _field8;
    unsigned long long _field9;
} CDStruct_e50ab651;

