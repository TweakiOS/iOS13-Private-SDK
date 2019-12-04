//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class NTPBTodayResultOperationInfo;
@protocol FCContentContext, NTReadablePrivateDataStorage;

@interface NTTodayResultOperation : FCOperation
{
    id <NTReadablePrivateDataStorage> _privateDataStorage;
    id <FCContentContext> _contentContext;
    id /* block */ _sessionProvider;
    NTPBTodayResultOperationInfo *_operationInfo;
    id /* block */ _headlineResultCompletionHandler;
}

@property(copy, nonatomic) id /* block */ headlineResultCompletionHandler; // @synthesize headlineResultCompletionHandler=_headlineResultCompletionHandler;
@property(copy, nonatomic) NTPBTodayResultOperationInfo *operationInfo; // @synthesize operationInfo=_operationInfo;
@property(copy, nonatomic) id /* block */ sessionProvider; // @synthesize sessionProvider=_sessionProvider;
@property(retain, nonatomic) id <FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
@property(retain, nonatomic) id <NTReadablePrivateDataStorage> privateDataStorage; // @synthesize privateDataStorage=_privateDataStorage;
- (id)init;

@end
