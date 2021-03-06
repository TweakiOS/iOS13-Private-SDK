//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

#import <ActivityAchievementsDaemon/HDNanoSyncEntity-Protocol.h>
#import <ActivityAchievementsDaemon/HDSyncEntity-Protocol.h>

@interface ACHTemplateEntity : HDHealthEntity <HDSyncEntity, HDNanoSyncEntity>
{
}

+ (id)codableTemplateForTemplateInDatabase:(id)arg1 profile:(id)arg2 error:(id )arg3;
+ (NSUInteger)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id )arg4;
+ (BOOL)generateSyncObjectsForSession:(id)arg1 predicate:(id)arg2 syncAnchorRange:(struct HDSyncAnchorRange)arg3 maxEncodedBytesPerMessage:(long long)arg4 profile:(id)arg5 error:(id )arg6 handler:(id /* CDUnknownBlockType */)arg7;
+ (long long)nextSyncAnchorWithSession:(id)arg1 predicate:(id)arg2 startSyncAnchor:(long long)arg3 profile:(id)arg4 error:(id )arg5;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;
+ (id)propertyForSyncProvenance;
+ (id)decodeSyncObjectWithData:(id)arg1;
+ (id)syncEntityIdentifier;
+ (BOOL)supportsSyncStore:(id)arg1;
+ (id)_templatesWithPredicate:(id)arg1 profile:(id)arg2 error:(id )arg3;
+ (BOOL)_removeTemplates:(id)arg1 profile:(id)arg2 error:(id )arg3;
+ (id)_insertTemplate:(id)arg1 provenance:(long long)arg2 database:(id)arg3 error:(id )arg4;
+ (BOOL)_insertTemplates:(id)arg1 provenance:(long long)arg2 profile:(id)arg3 databaseContext:(id)arg4 error:(id )arg5;
+ (id)allTemplatesWithProfile:(id)arg1 error:(id )arg2;
+ (BOOL)removeTemplates:(id)arg1 profile:(id)arg2 error:(id )arg3;
+ (BOOL)insertTemplates:(id)arg1 provenance:(long long)arg2 profile:(id)arg3 databaseContext:(id)arg4 error:(id )arg5;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* CDUnknownBlockType */)arg5;
+ (long long)protectionClass;
+ (const CDStruct_4c492439 )columnDefinitionsWithCount:(NSUInteger )arg1;
+ (id)createTableSQL;
+ (id)databaseTable;
+ (id)syncedTemplatesObserver;
+ (void)setSyncedTemplatesObserver:(id)arg1;

@end

