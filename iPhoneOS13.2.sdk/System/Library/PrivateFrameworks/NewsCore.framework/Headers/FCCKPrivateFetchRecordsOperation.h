//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@class NSArray, NSDictionary;

@interface FCCKPrivateFetchRecordsOperation : FCCKPrivateDatabaseOperation
{
    NSArray *_recordIDs;
    NSArray *_desiredKeys;
    id /* block */ _fetchRecordsCompletionBlock;
    NSDictionary *_resultRecordsByRecordID;
}

@property(retain, nonatomic) NSDictionary *resultRecordsByRecordID; // @synthesize resultRecordsByRecordID=_resultRecordsByRecordID;
@property(copy, nonatomic) id /* block */ fetchRecordsCompletionBlock; // @synthesize fetchRecordsCompletionBlock=_fetchRecordsCompletionBlock;
@property(copy, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(copy, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;

@end
