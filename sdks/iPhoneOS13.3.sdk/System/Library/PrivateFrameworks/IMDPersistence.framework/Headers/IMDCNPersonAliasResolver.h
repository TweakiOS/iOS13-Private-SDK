//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStore, IMDContactStoreChangeHistoryEventsHandler, NSData, NSMutableDictionary;

@interface IMDCNPersonAliasResolver : NSObject
{
    CNContactStore *_contactStore;
    NSData *_currentHistoryToken;
    NSMutableDictionary *_aliasToCNIDMap;
    IMDContactStoreChangeHistoryEventsHandler *_contactsEventhandler;
}

@property(retain, nonatomic) IMDContactStoreChangeHistoryEventsHandler *contactsEventhandler; // @synthesize contactsEventhandler=_contactsEventhandler;
@property(retain, nonatomic) NSMutableDictionary *aliasToCNIDMap; // @synthesize aliasToCNIDMap=_aliasToCNIDMap;
@property(retain, nonatomic) NSData *currentHistoryToken; // @synthesize currentHistoryToken=_currentHistoryToken;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
// - (void).cxx_destruct;
- (BOOL)isCNContactFavorited:(id)arg1;
- (BOOL)isFavoritedContact:(id)arg1;
- (void)CNRecordIDForAliases:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)_updateAliasToCNIDMap:(id)arg1 withHistoryToken:(id)arg2;
- (id)_fetchAliasToCNIDMapForAliases:(id)arg1;
- (id)_batchFetchContactRecordIDForAliases:(id)arg1;
- (id)_fetchContactIdentifierForAlias:(id)arg1;
- (id)_predicateForAlias:(id)arg1;
- (id)_predicateForPhoneNumber:(id)arg1;
- (id)_predicateForEmailAddress:(id)arg1;
- (id)init;

@end

