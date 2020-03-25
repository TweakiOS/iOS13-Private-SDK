//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSDictionary, NSManagedObjectModel, NSMutableArray, NSSet, NSString;

@protocol PLJournalEntryPayloadValidation
+ (NSArray *)snapshotSortDescriptors;
+ (BOOL)shouldPersistForChangedKeys:(NSSet *)arg1 entityName:(NSString *)arg2;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (NSSet *)additionalEntityNames;
+ (BOOL)isValidForPersistenceWithObjectDictionary:(NSDictionary *)arg1;
+ (void)validatePayloadPropertiesForManagedObjectModel:(NSManagedObjectModel *)arg1;
+ (NSDictionary *)modelProperties;
- (BOOL)comparePayloadToObjectDictionary:(NSDictionary *)arg1 usingModelProperties:(NSDictionary *)arg2 errorDescriptions:(NSMutableArray *)arg3;
@end
