//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, RWIProtocolDOMStorageStorageId;

@protocol RWIProtocolDOMStorageDomainHandler <NSObject>
- (void)removeDOMStorageItemWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 storageId:(RWIProtocolDOMStorageStorageId *)arg3 key:(NSString *)arg4;
- (void)setDOMStorageItemWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 storageId:(RWIProtocolDOMStorageStorageId *)arg3 key:(NSString *)arg4 value:(NSString *)arg5;
- (void)getDOMStorageItemsWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSArray *))arg2 storageId:(RWIProtocolDOMStorageStorageId *)arg3;
- (void)disableWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2;
- (void)enableWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2;
@end

