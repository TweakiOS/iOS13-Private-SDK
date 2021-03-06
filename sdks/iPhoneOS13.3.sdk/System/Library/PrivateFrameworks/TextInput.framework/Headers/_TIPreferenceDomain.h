//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _TIPreferenceDomain : NSObject
{
    BOOL _needsGetSync;
    BOOL _needsSetSync;
    NSString *_domain;
    NSString *_notification;
    double _lastSynchronizedTime;
}

+ (id)domainWithName:(id)arg1 notification:(id)arg2;
@property(nonatomic) double lastSynchronizedTime; // @synthesize lastSynchronizedTime=_lastSynchronizedTime;
@property(nonatomic) BOOL needsSetSync; // @synthesize needsSetSync=_needsSetSync;
@property(nonatomic) BOOL needsGetSync; // @synthesize needsGetSync=_needsGetSync;
@property(retain, nonatomic) NSString *notification; // @synthesize notification=_notification;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
// - (void).cxx_destruct;

@end

