//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AWFaceDetectMetadata {
    _Bool _field1;
    double _field2;
    double _field3;
    double _field4;
    unsigned long long _field5;
};

struct AWRemoteMetadata {
    long long _field1;
    long long _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long sampleCount;
    unsigned long long pollCount;
    unsigned long long singleShotCount;
} CDStruct_2c6bab44;

typedef struct {
    double _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    _Bool _field9;
    _Bool _field10;
    _Bool _field11;
} CDStruct_264b1ab3;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    struct {
        CDStruct_264b1ab3 _field1;
        unsigned long long _field2;
        int _field3;
        int _field4;
    } _field5[0];
} CDStruct_89f0e72b;

#pragma mark Typedef'd Unions

typedef union {
    struct AWFaceDetectMetadata _field1;
    struct AWRemoteMetadata _field2;
} CDUnion_4b9e79fd;
