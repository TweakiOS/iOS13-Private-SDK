//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Cards/CRFeedback-Protocol.h>

@protocol CRCard;

@protocol CRAsyncCardReceiptFeedback <CRFeedback>
@property(retain, nonatomic) id <CRCard> receivedCard;
@property(retain, nonatomic) id <CRCard> requestedCard;
@property(retain, nonatomic) id <CRCard> baseCard;
@end

