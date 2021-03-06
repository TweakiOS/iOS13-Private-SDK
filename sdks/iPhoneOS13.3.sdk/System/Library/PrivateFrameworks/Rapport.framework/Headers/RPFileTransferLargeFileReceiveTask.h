//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RPFileTransferItem;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface RPFileTransferLargeFileReceiveTask : NSObject
{
    int _fileFD;
    struct CC_SHA256state_st _sha256Ctx;
    RPFileTransferItem *_fileItem;
    NSObject<OS_dispatch_queue> *_queue;
    NSUInteger _taskID;
}

@property(nonatomic) NSUInteger taskID; // @synthesize taskID=_taskID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) RPFileTransferItem *fileItem; // @synthesize fileItem=_fileItem;
@property(nonatomic) int fileFD; // @synthesize fileFD=_fileFD;
// - (void).cxx_destruct;

@end

