//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATException.h>

@class NSNumber, NSString;

@interface EDAMSystemException : FATException
{
    NSNumber *_errorCode;
    NSString *_message;
    NSNumber *_rateLimitDuration;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSNumber *rateLimitDuration; // @synthesize rateLimitDuration=_rateLimitDuration;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSNumber *errorCode; // @synthesize errorCode=_errorCode;
// - (void).cxx_destruct;

@end

