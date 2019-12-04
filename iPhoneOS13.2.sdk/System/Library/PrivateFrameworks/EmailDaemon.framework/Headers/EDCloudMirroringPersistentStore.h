//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EFLoggable-Protocol.h>

@class EDTaskScheduler, NSManagedObjectContext, NSPersistentContainer, NSString;

@interface EDCloudMirroringPersistentStore : NSObject <EFLoggable>
{
    NSPersistentContainer *_persistentContainer;
    EDTaskScheduler *_importScheduler;
    EDTaskScheduler *_exportScheduler;
    NSManagedObjectContext *_managedObjectContext;
}

+ (id)log;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain, nonatomic) EDTaskScheduler *exportScheduler; // @synthesize exportScheduler=_exportScheduler;
@property(retain, nonatomic) EDTaskScheduler *importScheduler; // @synthesize importScheduler=_importScheduler;
@property(readonly, nonatomic) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
- (id /* block */)_wrapCompletion:(id /* block */)arg1 forRequestKind:(int)arg2;
- (void)_executeRequestWithKind:(int)arg1 completionBlock:(id /* block */)arg2;
- (id)_schedulerForKind:(int)arg1;
- (void)_requestWithKind:(int)arg1 completionBlock:(id /* block */)arg2;
- (void)requestExportWithCompletionBlock:(id /* block */)arg1;
- (void)requestImportWithCompletionBlock:(id /* block */)arg1;
- (void)performBlockAndWait:(id /* block */)arg1;
- (void)performBlock:(id /* block */)arg1;
- (void)_setupCoreDataStack;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
