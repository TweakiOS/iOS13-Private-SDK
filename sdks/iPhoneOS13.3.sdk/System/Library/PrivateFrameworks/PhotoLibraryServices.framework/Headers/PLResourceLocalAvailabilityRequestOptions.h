//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PLResourceLocalAvailabilityRequestOptions : NSObject
{
    BOOL _networkAccessAllowed;
    BOOL _shouldPrioritize;
    BOOL _transient;
    NSString *_taskIdentifier;
    id /* CDUnknownBlockType */ _progressHandler;
    id /* CDUnknownBlockType */ _dataHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ dataHandler; // @synthesize dataHandler=_dataHandler;
@property(nonatomic, getter=isTransient) BOOL transient; // @synthesize transient=_transient;
@property(copy, nonatomic) id /* CDUnknownBlockType */ progressHandler; // @synthesize progressHandler=_progressHandler;
@property(copy, nonatomic) NSString *taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
@property(nonatomic) BOOL shouldPrioritize; // @synthesize shouldPrioritize=_shouldPrioritize;
@property(nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed; // @synthesize networkAccessAllowed=_networkAccessAllowed;
// - (void).cxx_destruct;

@end

