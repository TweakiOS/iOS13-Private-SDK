//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDDataExternalSyncIdentifierEntity : HDHealthEntity
{
}

+ (BOOL)insertSyncIdentifierWithProfile:(id)arg1 database:(id)arg2 objectID:(long long)arg3 localSourceID:(long long)arg4 externalSyncObjectCode:(long long)arg5 syncIdentifier:(id)arg6 syncVersion:(id)arg7 deleted:(BOOL)arg8 errorOut:(id )arg9;
+ (BOOL)populateSyncInfoForObjectID:(long long)arg1 database:(id)arg2 localSourceIDOut:(long long )arg3 externalSyncObjectCodeOut:(long long )arg4 syncIdentifierOut:(id )arg5 syncVersionOut:(id )arg6 deletedOut:(BOOL )arg7 errorOut:(id )arg8;
+ (BOOL)populateSyncInfoForLocalSourceID:(long long)arg1 externalSyncObjectCode:(long long)arg2 syncIdentifier:(id)arg3 deleted:(BOOL)arg4 database:(id)arg5 objectIDOut:(id )arg6 errorOut:(id )arg7;
+ (long long)protectionClass;
+ (id)indices;
+ (id)foreignKeys;
+ (const CDStruct_4c492439 )columnDefinitionsWithCount:(NSUInteger )arg1;
+ (id)databaseTable;
+ (BOOL)enumerateValuesWithProfile:(id)arg1 error:(id )arg2 handler:(id /* CDUnknownBlockType */)arg3;

@end
