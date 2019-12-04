//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineScopedTask.h>

@protocol CPLEngineTransportDeleteTransportScopeTask, CPLEngineTransportUpdateTransportScopeTask;

@interface CPLTransportUpdateScopeTask : CPLEngineScopedTask
{
    id <CPLEngineTransportDeleteTransportScopeTask> _deleteTask;
    id <CPLEngineTransportUpdateTransportScopeTask> _updateTask;
}

- (id)taskIdentifier;
- (void)cancel;
- (void)launch;
- (_Bool)checkScopeIsValidInTransaction:(id)arg1;

@end
