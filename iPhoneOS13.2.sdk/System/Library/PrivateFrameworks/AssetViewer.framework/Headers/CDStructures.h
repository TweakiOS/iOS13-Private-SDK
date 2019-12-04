//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CATransform3D {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
    double _field14;
    double _field15;
    double _field16;
};




struct FLCompoundSpring {
    struct FLSimpleSpringState state;
    struct FLSimpleSpring stiffness;
    struct FLSimpleSpring damping;
    struct FLSimpleSpring dampingRatio;
    struct FLSimpleSpring response;
    struct FLSimpleSpring anchor;
    _Bool usesDampingRatioResponse;
};

struct FLSimpleSpring {
    struct FLSimpleSpringState state;
    double mass;
    double stiffness;
    double damping;
    double anchor;
    double stablePositionThreshold;
    double stableVelocityThreshold;
};

struct FLSimpleSpringState {
    double position;
    double velocity;
};

struct FLSpringParameters {
    double dampingRatio;
    double dampingRatioSmoothing;
    double response;
    double responseSmoothing;
};


struct vector<ASVControlPoint, std::__1::allocator<ASVControlPoint>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<ASVControlPoint *, std::__1::allocator<ASVControlPoint>> {
        CDStruct_183601bc *__value_;
    } __end_cap_;
};

struct vector<ASVPatchData, std::__1::allocator<ASVPatchData>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<ASVPatchData *, std::__1::allocator<ASVPatchData>> {
        CDStruct_183601bc *__value_;
    } __end_cap_;
};

struct vector<unsigned short, std::__1::allocator<unsigned short>> {
    unsigned short *__begin_;
    unsigned short *__end_;
    struct __compressed_pair<unsigned short *, std::__1::allocator<unsigned short>> {
        unsigned short *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long footprint;
    unsigned long long peak;
} CDStruct_ba838cea;

typedef struct {
    float _field1;
} CDStruct_37a3040a;

typedef struct {
    long long colorModel;
    long long pixelEncoding;
} CDStruct_e791d03f;

typedef struct CDStruct_183601bc;
