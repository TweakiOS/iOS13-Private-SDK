//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSProcessInfo, NSData, NSDictionary, NSError, NSURLSession, NSURLSessionTask, NSURLSessionTaskMetrics;
@protocol AMSBagProtocol;

@interface AMSMetricsLoadURLContext : NSObject
{
    id <AMSBagProtocol> _bag;
    NSError *_error;
    AMSProcessInfo *_processInfo;
    NSData *_responseBody;
    NSURLSession *_session;
    NSURLSessionTask *_task;
    NSURLSessionTaskMetrics *_taskMetrics;
    NSDictionary *_decodedResponseBody;
}

@property(retain, nonatomic) NSDictionary *decodedResponseBody; // @synthesize decodedResponseBody=_decodedResponseBody;
@property(retain, nonatomic) NSURLSessionTaskMetrics *taskMetrics; // @synthesize taskMetrics=_taskMetrics;
@property(retain, nonatomic) NSURLSessionTask *task; // @synthesize task=_task;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSData *responseBody; // @synthesize responseBody=_responseBody;
@property(retain, nonatomic) AMSProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
// - (void).cxx_destruct;
- (void)setBagContract:(id)arg1;
- (id)bagContract;
- (id)initWithTaskInfo:(id)arg1 serverPayload:(id)arg2;
- (id)initWithTask:(id)arg1 metrics:(id)arg2;

@end
