//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PPXPCServer : NSObject
{
}

+ (void)registerXPCListeners;
+ (void)_registerInternalListener;
+ (void)_registerConfigListener;
+ (void)_registerConnectionsListener;
+ (void)_registerEventListener;
+ (void)_registerContactListener;
+ (void)_registerQuickTypeListener;
+ (void)_registerLocationReadWriteListener;
+ (void)_registerLocationReadOnlyListener;
+ (void)_registerTopicReadWriteListener;
+ (void)_registerTopicReadOnlyListener;
+ (void)_registerNamedEntityReadWriteListener;
+ (void)_registerNamedEntityReadOnlyListener;

@end

