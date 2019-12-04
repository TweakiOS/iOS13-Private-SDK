//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSThread (NSThread_TSUAdditions)
+ (id)tsu_currentThreadName;
+ (void)tsp_performSynchronousOperationWithThreadDictionaryObject:(id)arg1 forKey:(id)arg2 usingBlock:(id /* block */)arg3;
+ (void)tsp_performSynchronousOperationWithReadFileAccessUsingBlock:(id /* block */)arg1;
+ (_Bool)tsp_hasReadFileAccess;
+ (void)tsp_runFinalizeHandlersForReadCompletionInfo:(id)arg1 usingBlock:(id /* block */)arg2;
+ (id)tsp_currentReadCompletionInfo;
+ (_Bool)tsp_isRunningFinalizeHandlersForLegacyDocument;
+ (_Bool)tsp_isRunningFinalizeHandlersForUpgrade;
+ (_Bool)tsp_isPerformingLegacyDocumentReferenceResolution;
+ (void)tsp_performSynchronousLegacyDocumentReferenceResolutionUsingBlock:(id /* block */)arg1;
+ (void)tsp_performSynchronousArchiverOperationUsingBlock:(id /* block */)arg1;
+ (_Bool)tsp_isArchiverThread;
+ (_Bool)tsp_isUnarchiverThread;
+ (id)tsp_newUnarchiverQueueWithName:(const char *)arg1;
@property(readonly) unsigned int tsu_qualityOfServiceClass;
@end
