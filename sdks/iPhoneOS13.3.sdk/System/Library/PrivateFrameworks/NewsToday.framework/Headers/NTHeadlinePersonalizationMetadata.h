//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NTHeadlinePersonalizationMetadata-Protocol.h>

@class NSDictionary, NSString;

@interface NTHeadlinePersonalizationMetadata : NSObject <NTHeadlinePersonalizationMetadata>
{
    NSString *_articleID;
    NSString *_publisherID;
    NSDictionary *_scoredTopicIDs;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSDictionary *scoredTopicIDs; // @synthesize scoredTopicIDs=_scoredTopicIDs;
@property(readonly, copy, nonatomic) NSString *publisherID; // @synthesize publisherID=_publisherID;
@property(readonly, copy, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithArticleID:(id)arg1 publisherID:(id)arg2 scoredTopicIDs:(id)arg3;
- (id)init;

@end

