//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SAHLShowActivity : SADomainCommand
{
}

+ (id)showActivityWithDictionary:(id)arg1 context:(id)arg2;
+ (id)showActivity;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *activityView;
@property(copy, nonatomic) NSString *activityDataType;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
