//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorage.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class NSArray;

@interface CPLEngineClientCache : CPLEngineStorage <CPLAbstractObject>
{
    NSArray *__lastModifiedProperties;
}

@property(copy, setter=_setLastModifiedProperties:) NSArray *_lastModifiedProperties; // @synthesize _lastModifiedProperties=__lastModifiedProperties;
// - (void).cxx_destruct;
- (void)fillRelatedIdentifiersInChange:(id)arg1;
- (id)statusDictionary;
- (id)status;
- (id)resourceOfType:(NSUInteger)arg1 forRecordWithScopedIdentifier:(id)arg2 recordClass:(Class )arg3 error:(id )arg4;
- (id)resourceOfType:(NSUInteger)arg1 forRecordWithScopedIdentifier:(id)arg2 error:(id )arg3;
- (BOOL)applyBatch:(id)arg1 direction:(NSUInteger)arg2 withError:(id )arg3;
- (id)localChangeBatchFromCloudBatch:(id)arg1 usingMapping:(id)arg2 withError:(id )arg3;
- (id)compactedBatchFromExpandedBatch:(id)arg1;
- (NSUInteger)countOfRecordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;
- (BOOL)hasRecordWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;
- (id)recordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;
- (id)recordsWithRelatedScopedIdentifier:(id)arg1;
- (BOOL)hasRecordWithScopedIdentifier:(id)arg1;
- (id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)arg1;
- (id)_relatedScopedIdentifierForRecordWithScopedIdentifier:(id)arg1;
- (id)recordWithScopedIdentifier:(id)arg1;
- (BOOL)deleteRecordWithScopedIdentifier:(id)arg1 error:(id )arg2;
- (BOOL)updateRecord:(id)arg1 error:(id )arg2;
- (BOOL)addRecord:(id)arg1 error:(id )arg2;
- (BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long )arg3 error:(id )arg4;
- (NSUInteger)scopeType;

@end

