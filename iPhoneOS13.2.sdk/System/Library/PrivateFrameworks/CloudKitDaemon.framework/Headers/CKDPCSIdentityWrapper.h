//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDPCSIdentityWrapper : NSObject
{
    NSString *_identityString;
    struct _PCSIdentitySetData *_identitySet;
    NSString *_primaryServiceName;
}

@property(readonly, nonatomic) NSString *primaryServiceName; // @synthesize primaryServiceName=_primaryServiceName;
@property(readonly, nonatomic) struct _PCSIdentitySetData *identitySet; // @synthesize identitySet=_identitySet;
@property(readonly, nonatomic) NSString *identityString; // @synthesize identityString=_identityString;
- (void)dealloc;
- (id)initWithIdentitySet:(struct _PCSIdentitySetData *)arg1 withPrimaryServiceName:(id)arg2;

@end
