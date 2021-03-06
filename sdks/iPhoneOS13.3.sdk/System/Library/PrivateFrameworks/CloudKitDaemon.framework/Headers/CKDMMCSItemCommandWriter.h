//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKDMMCSItemReaderWriterProtocol-Protocol.h>

@class CKDMMCSItem, CKDMMCSItemGroupContext, NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface CKDMMCSItemCommandWriter : NSObject <CKDMMCSItemReaderWriterProtocol>
{
    CKDMMCSItemGroupContext *_MMCSRequest;
    CKDMMCSItem *_MMCSItem;
    NSMutableIndexSet *_byteRanges;
    NSUInteger _maximumLength;
}

@property(nonatomic) NSUInteger maximumLength; // @synthesize maximumLength=_maximumLength;
@property(retain, nonatomic) NSMutableIndexSet *byteRanges; // @synthesize byteRanges=_byteRanges;
@property(retain, nonatomic) CKDMMCSItem *MMCSItem; // @synthesize MMCSItem=_MMCSItem;
@property(retain, nonatomic) CKDMMCSItemGroupContext *MMCSRequest; // @synthesize MMCSRequest=_MMCSRequest;
// - (void).cxx_destruct;
- (BOOL)writeBytesAtOffset:(NSUInteger)arg1 bytes:(char )arg2 length:(NSUInteger)arg3 bytesWritten:(NSUInteger )arg4 error:(id )arg5;
- (BOOL)isContiguous;
- (BOOL)readBytesAtOffset:(NSUInteger)arg1 bytes:(char )arg2 length:(NSUInteger)arg3 bytesRead:(NSUInteger )arg4 error:(id )arg5;
- (id)getFileMetadataWithError:(id )arg1;
- (BOOL)closeWithError:(id )arg1;
- (BOOL)openWithError:(id )arg1;
- (void)dealloc;
- (id)initWithMMCSItem:(id)arg1 MMCSRequest:(id)arg2;

@end

