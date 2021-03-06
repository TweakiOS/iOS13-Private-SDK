//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class ML3ServiceDatabaseImport, NSData, NSError;

@interface ML3ImportOperation : NSOperation
{
    id /* CDUnknownBlockType */ _clientCompletionHandler;
    BOOL _suspended;
    BOOL _success;
    float _progress;
    ML3ServiceDatabaseImport *_import;
    id /* CDUnknownBlockType */ _progressBlock;
    NSError *_error;
    NSData *_returnData;
}

+ (id)importOperationWithSourceType:(NSUInteger)arg1 databaseImport:(id)arg2;
@property(readonly, nonatomic) NSData *returnData; // @synthesize returnData=_returnData;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) BOOL success; // @synthesize success=_success;
@property(copy, nonatomic) id /* CDUnknownBlockType */ progressBlock; // @synthesize progressBlock=_progressBlock;
@property(readonly, nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic, getter=isSuspended) BOOL suspended; // @synthesize suspended=_suspended;
@property(readonly, nonatomic) ML3ServiceDatabaseImport *import; // @synthesize import=_import;
// - (void).cxx_destruct;
- (void)_setClientCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (id /* CDUnknownBlockType */)_clientCompletionHandler;
- (void)_writerTransactionWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)main;
- (id)longDescription;
@property(readonly, nonatomic) NSUInteger importSource;
- (id)init;
- (id)initWithDatabaseImport:(id)arg1;

@end

