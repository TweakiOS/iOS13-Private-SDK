//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSMergePolicy.h>

@interface NoteResurrectionMergePolicy : NSMergePolicy
{
}

+ (id)sharedNoteResurrectionMergePolicy;
- (BOOL)resolveConflicts:(id)arg1 error:(id )arg2;
- (id)snapshotFromRecord:(id)arg1;
- (BOOL)accountExists:(id)arg1;
- (id)localStoreForNote:(id)arg1;

@end

