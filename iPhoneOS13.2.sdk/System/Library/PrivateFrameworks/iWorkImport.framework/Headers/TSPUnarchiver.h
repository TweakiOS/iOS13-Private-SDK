//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID, TSPObjectContext, TSPUnknownContent;
@protocol TSPLazyReferenceDelegate, TSPObjectDelegate, TSPUnarchiverDelegate;

__attribute__((visibility("hidden")))
@interface TSPUnarchiver : NSObject
{
    unsigned int _messageType;
    auto_ptr_4370f086 _message;
    long long _objectIdentifier;
    auto_ptr_945ad503 _strongReferences;
    unsigned long long _messageVersion;
    TSPUnknownContent *_unknownContent;
    id <TSPObjectDelegate> _objectDelegate;
    id <TSPLazyReferenceDelegate> _lazyReferenceDelegate;
    id <TSPUnarchiverDelegate> _delegate;
    vector_adb99b2c _references;
    vector_cc556b2d _repeatedReferences;
    vector_3c415888 _finalizeHandlers;
    // Error parsing type: ^{FieldPath=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedField<unsigned int>=ii(Pointer=^{Arena}^{Rep})}i}, name: _currentFieldPath
}

@property(readonly, nonatomic) __weak id <TSPUnarchiverDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak id <TSPObjectDelegate> objectDelegate; // @synthesize objectDelegate=_objectDelegate;
@property(readonly, nonatomic) TSPUnknownContent *unknownContent; // @synthesize unknownContent=_unknownContent;
@property(readonly, nonatomic) long long objectIdentifier; // @synthesize objectIdentifier=_objectIdentifier;
@property(readonly, nonatomic) unsigned long long messageVersion; // @synthesize messageVersion=_messageVersion;
@property(readonly, nonatomic) unsigned int messageType; // @synthesize messageType=_messageType;
- (id).cxx_construct;
- (void)readRepeatedLazyReferenceMessage:(const RepeatedPtrField_54b3089c *)arg1 ownershipMode:(long long)arg2 validateStrongReferences:(_Bool)arg3 allowUnknownObject:(_Bool)arg4 selector:(SEL)arg5 completion:(id /* block */)arg6;
- (void)validateReferenceToObjectIdentifier:(long long)arg1 isWeak:(_Bool *)arg2 validateStrongReferences:(_Bool)arg3 selector:(SEL)arg4 weakSelector:(SEL)arg5;
@property(readonly, nonatomic) _Bool canValidateReferences;
- (vector_3c415888 *)finalizeHandlers;
- (vector_cc556b2d *)repeatedReferences;
- (vector_adb99b2c *)references;
- (unordered_map_38045d47 *)strongReferences;
@property(readonly, nonatomic) NSUUID *objectUUID;
- (id)initWithMessageType:(unsigned int)arg1 message:(auto_ptr_4370f086)arg2 identifier:(long long)arg3 strongReferences:(auto_ptr_945ad503)arg4 messageVersion:(unsigned long long)arg5 unknownContent:(id)arg6 objectDelegate:(id)arg7 lazyReferenceDelegate:(id)arg8 delegate:(id)arg9;
- (id)readRepeatedWeakObjectUUIDPathReferenceMessage:(const RepeatedPtrField_4f2d564d *)arg1 completion:(id /* block */)arg2;
- (id)readRepeatedWeakObjectUUIDReferenceMessage:(const RepeatedPtrField_c4607516 *)arg1 completion:(id /* block */)arg2;
-     // Error parsing type: @32@0:8r^{UUIDPath=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::UUID>=^{Arena}ii^{Rep}}}16@?24, name: readWeakObjectUUIDPathReferenceMessage:completion:
-     // Error parsing type: @32@0:8r^{UUID=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}QQ}16@?24, name: readWeakObjectUUIDReferenceMessage:completion:
- (void)readWeakReferenceToObjectUUID:(id)arg1 delegate:(id)arg2 completion:(id /* block */)arg3;
@property(readonly, nonatomic) long long sourceType;
@property(readonly, nonatomic) _Bool hasDocumentVersionUUID;
- (void)addFinalizeHandler:(id /* block */)arg1;
@property(readonly, nonatomic) _Bool documentHasCurrentFileFormatVersion;
@property(readonly, nonatomic) unsigned long long fileFormatVersion;
-     // Error parsing type: @24@0:8r^{DataReference=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}Q}16, name: readDataReferenceMessage:
- (void)readRepeatedLazyReferenceMessage:(const RepeatedPtrField_54b3089c *)arg1 ownershipMode:(long long)arg2 validateStrongReferences:(_Bool)arg3 allowUnknownObject:(_Bool)arg4 selector:(SEL)arg5 delegate:(id)arg6 completion:(id /* block */)arg7;
- (void)readRepeatedWeakLazyReferenceMessage:(const RepeatedPtrField_54b3089c *)arg1 retainObjectUntilArchived:(_Bool)arg2 completion:(id /* block */)arg3;
- (void)readRepeatedWeakLazyReferenceMessage:(const RepeatedPtrField_54b3089c *)arg1 completion:(id /* block */)arg2;
- (void)readRepeatedLazyReferenceMessage:(const RepeatedPtrField_54b3089c *)arg1 completion:(id /* block */)arg2;
-     // Error parsing type: v64@0:8r^{Reference=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}QiB}16q24B32B36:40@48@?56, name: readLazyReferenceMessage:ownershipMode:validateStrongReferences:allowUnknownObject:selector:delegate:completion:
-     // Error parsing type: v36@0:8r^{Reference=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}QiB}16B24@?28, name: readWeakLazyReferenceMessage:retainObjectUntilArchived:completion:
-     // Error parsing type: v32@0:8r^{Reference=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}QiB}16@?24, name: readWeakLazyReferenceMessage:completion:
-     // Error parsing type: v32@0:8r^{Reference=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}QiB}16@?24, name: readLazyReferenceMessage:completion:
- (void)readRepeatedReferenceMessage:(const RepeatedPtrField_54b3089c *)arg1 isWeak:(_Bool)arg2 validateStrongReferences:(_Bool)arg3 allowUnknownObject:(_Bool)arg4 selector:(SEL)arg5 completion:(id /* block */)arg6;
- (void)readRepeatedUnownedReferenceMessage:(const RepeatedPtrField_54b3089c *)arg1 completion:(id /* block */)arg2;
- (void)readRepeatedWeakReferenceMessage:(const RepeatedPtrField_54b3089c *)arg1 completion:(id /* block */)arg2;
- (void)readRepeatedReferenceMessage:(const RepeatedPtrField_54b3089c *)arg1 completion:(id /* block */)arg2;
-     // Error parsing type: v60@0:8r^{Reference=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}QiB}16B24B28B32:36:44@?52, name: readReferenceMessage:isWeak:validateStrongReferences:allowUnknownObject:selector:weakSelector:completion:
-     // Error parsing type: v32@0:8r^{Reference=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}QiB}16@?24, name: readUnownedReferenceMessage:completion:
-     // Error parsing type: v32@0:8r^{Reference=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}QiB}16@?24, name: readWeakReferenceMessage:completion:
-     // Error parsing type: v32@0:8r^{Reference=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}QiB}16@?24, name: readReferenceMessage:completion:
- (void)pushScopeForField:(int)arg1 usingBlock:(id /* block */)arg2;
- (const struct Message *)message;
@property(readonly, nonatomic) __weak TSPObjectContext *context;
- (void)dealloc;
-     // Error parsing type: v40@0:8r^{Reference=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}QiB}16r^{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}24@?32, name: readWeakReferenceMessage:repeatedMessage:completion:
-     // Error parsing type: v40@0:8r^{Reference=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}QiB}16r^{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}24@?32, name: readReferenceMessage:repeatedMessage:completion:
-     // Error parsing type: v40@0:8r^{Reference=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}QiB}16r^{Reference=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}QiB}24@?32, name: readWeakReferenceMessage1:message2:completion:
-     // Error parsing type: v40@0:8r^{Reference=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}QiB}16r^{Reference=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}QiB}24@?32, name: readReferenceMessage1:message2:completion:
- (set_713dd2e1 *)filterIdentifiers:(const set_713dd2e1 *)arg1;
@property(readonly, nonatomic) unsigned long long preUFFVersion;
@property(readonly, nonatomic) _Bool hasPreUFFVersion;
-     // Error parsing type: @24@0:8r^{SparseUUIDPathArray=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::SparseUUIDPathArray_Entry>=^{Arena}ii^{Rep}}I}16, name: readSparseWeakObjectUUIDPathReferenceArrayMessage:
-     // Error parsing type: @24@0:8r^{SparseUUIDArray=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::SparseUUIDArray_Entry>=^{Arena}ii^{Rep}}I}16, name: readSparseWeakObjectUUIDReferenceArrayMessage:
-     // Error parsing type: v36@0:8r^{SparseReferenceArray=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::SparseReferenceArray_Entry>=^{Arena}ii^{Rep}}I}16B24@?28, name: readSparseReferenceArrayMessage:isWeak:completion:
-     // Error parsing type: v32@0:8r^{SparseReferenceArray=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::SparseReferenceArray_Entry>=^{Arena}ii^{Rep}}I}16@?24, name: readSparseWeakReferenceArrayMessage:completion:
-     // Error parsing type: v32@0:8r^{SparseReferenceArray=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::SparseReferenceArray_Entry>=^{Arena}ii^{Rep}}I}16@?24, name: readSparseReferenceArrayMessage:completion:
@property(readonly, nonatomic) _Bool isCrossAppPaste;
@property(readonly, nonatomic) _Bool isCrossDocumentPaste;
@property(readonly, nonatomic) _Bool isFromCopy;

@end
