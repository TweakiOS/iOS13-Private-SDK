//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAHandoffPayload-Protocol.h>

@class NSURL;

@interface SAURIHandoffPayload : AceObject <SAHandoffPayload>
{
}

+ (id)uRIHandoffPayloadWithDictionary:(id)arg1 context:(id)arg2;
+ (id)uRIHandoffPayload;
@property(copy, nonatomic) NSURL *link;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

