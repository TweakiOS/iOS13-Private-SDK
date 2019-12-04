//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocs/BROperation.h>



@class BRGlobalProgressProxy, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString;

@interface BRUploadAllFilesForLogOutOperation : BROperation <NSProgressReporting>
{
    BRGlobalProgressProxy *_progress;
    id /* block */ _uploadAllFilesCompletionBlock;
    NSMutableDictionary *_errorsByContainerID;
    NSMutableArray *_hiddenContainersWithError;
    NSOperationQueue *_opQueue;
    _Bool _shouldKeepDataLocal;
}

@property _Bool shouldKeepDataLocal; // @synthesize shouldKeepDataLocal=_shouldKeepDataLocal;
@property(retain) BRGlobalProgressProxy *progress; // @synthesize progress=_progress;
@property(copy) id /* block */ uploadAllFilesCompletionBlock; // @synthesize uploadAllFilesCompletionBlock=_uploadAllFilesCompletionBlock;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (void)evictAllFilesInGroup:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)cancel;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
