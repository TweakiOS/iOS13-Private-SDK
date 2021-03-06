//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HKConcept, HKConceptIdentifier, HKMedicalCodingContext, HKSample, NSArray, NSNumber, NSString, NSURL;

@protocol HKConceptStoreServerInterface <NSObject>
- (void)remote_unitTest_queryConceptByExactNameMatch:(NSString *)arg1 completion:(void (^)(HKConcept *, NSError *))arg2;
- (void)remote_resetOntologyUsingAssetAtLocation:(NSURL *)arg1 rememberLocation:(BOOL)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)remote_queryConceptsAssociatedToUserRecordsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)remote_queryCountOfConceptsAssociatedToUserRecordsWithCompletion:(void (^)(long long, NSError *))arg1;
- (void)remote_cleanUpAfterUnitTestWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)remote_queryNodeNameForAttributeWithKeyID:(NSNumber *)arg1 value:(NSString *)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (void)remote_breakAssociationFromSample:(HKSample *)arg1 toConcept:(HKConcept *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)remote_makeAssociationFromSample:(HKSample *)arg1 toConcept:(HKConcept *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)remote_queryRelationshipsForNodeWithID:(HKConceptIdentifier *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)remote_queryConceptsByRelationship:(NSString *)arg1 fromNodeWithID:(HKConceptIdentifier *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)remote_queryConceptsByRelationship:(NSString *)arg1 toNodeWithID:(HKConceptIdentifier *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)remote_queryConceptsByAttribute:(long long)arg1 withValue:(NSString *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)remote_queryConceptByID:(NSNumber *)arg1 completion:(void (^)(HKConcept *, NSError *))arg2;
- (void)remote_displayNamesByResolvingContexts:(NSArray *)arg1 completion:(void (^)(NSArray *))arg2;
- (void)remote_conceptByResolvingContext:(HKMedicalCodingContext *)arg1 completion:(void (^)(HKConcept *))arg2;
- (void)remote_ontologyVersionWithCompletion:(void (^)(NSNumber *, NSError *))arg1;
- (void)remote_currentIndexingState:(void (^)(NSUInteger))arg1;
- (void)remote_testTaskServerWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)remote_startTaskServerIfNeeded;
@end

