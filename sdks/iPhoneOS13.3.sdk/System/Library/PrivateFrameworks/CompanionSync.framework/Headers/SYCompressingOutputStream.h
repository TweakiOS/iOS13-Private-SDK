//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOutputStream.h>

#import <CompanionSync/SYCompressionBufferOptimization-Protocol.h>
#import <CompanionSync/SYOutputCompressor-Protocol.h>
#import <CompanionSync/SYStreamEventHandlerBlocks-Protocol.h>
#import <CompanionSync/SYStreamProgress-Protocol.h>
#import <CompanionSync/SYStreamThroughputCounter-Protocol.h>
#import <CompanionSync/_SYStreamRunLoopSourceHandler-Protocol.h>

@class NSProgress, _SYStreamGuts, _SYZlibStreamInternal;

@interface SYCompressingOutputStream : NSOutputStream <_SYStreamRunLoopSourceHandler, NSStreamDelegate, SYCompressionBufferOptimization, SYOutputCompressor, SYStreamEventHandlerBlocks, SYStreamThroughputCounter, SYStreamProgress>
{
    NSOutputStream *_stream;
    _SYZlibStreamInternal *_internal;
    id /* CDUnknownBlockType */ _onOpenComplete;
    id /* CDUnknownBlockType */ _onBytesAvailable;
    id /* CDUnknownBlockType */ _onSpaceAvailable;
    id /* CDUnknownBlockType */ _onEndOfFile;
    id /* CDUnknownBlockType */ _onError;
    id /* CDUnknownBlockType */ _onClose;
    NSProgress *_progress;
    NSUInteger _byteCount;
    long long _level;
}

@property(nonatomic) long long compressionLevel; // @synthesize compressionLevel=_level;
@property(readonly, nonatomic) NSUInteger bytesThroughput; // @synthesize bytesThroughput=_byteCount;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(copy, nonatomic) id /* CDUnknownBlockType */ onClose; // @synthesize onClose=_onClose;
@property(copy, nonatomic) id /* CDUnknownBlockType */ onError; // @synthesize onError=_onError;
@property(copy, nonatomic) id /* CDUnknownBlockType */ onEndOfFile; // @synthesize onEndOfFile=_onEndOfFile;
@property(copy, nonatomic) id /* CDUnknownBlockType */ onSpaceAvailable; // @synthesize onSpaceAvailable=_onSpaceAvailable;
@property(copy, nonatomic) id /* CDUnknownBlockType */ onBytesAvailable; // @synthesize onBytesAvailable=_onBytesAvailable;
@property(copy, nonatomic) id /* CDUnknownBlockType */ onOpenComplete; // @synthesize onOpenComplete=_onOpenComplete;
// - (void).cxx_destruct;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (BOOL)hasSpaceAvailable;
- (long long)write:(const char )arg1 maxLength:(NSUInteger)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)_SY_notifyOnQueue:(id)arg1 handler:(id /* CDUnknownBlockType */)arg2;
- (void)stream:(id)arg1 handleEvent:(NSUInteger)arg2;
- (void)_dispatchMyEvent:(NSUInteger)arg1;
- (int)_handlePendingInput;
- (void)_postEventToDelegate:(NSUInteger)arg1;
@property(readonly, nonatomic, getter=_internal) _SYStreamGuts *internal;
- (void)close;
- (void)open;
@property(nonatomic) NSUInteger outputBufferSize;
@property(nonatomic) NSUInteger inputBufferSize;
- (NSUInteger)streamStatus;
- (id)streamError;
- (void)dealloc;
- (id)initToMemory;
- (id)initWithURL:(id)arg1 append:(BOOL)arg2;
- (id)initToFileAtPath:(id)arg1 append:(BOOL)arg2;
- (id)initToBuffer:(char )arg1 capacity:(NSUInteger)arg2;
- (id)initWithDestinationStream:(id)arg1;

@end

