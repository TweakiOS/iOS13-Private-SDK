//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PLPhotoLibraryBundle;

@interface PLPhotoLibraryBundlePriorityTuple : NSObject
{
    PLPhotoLibraryBundle *_bundle;
    unsigned long long _priority;
}

@property(readonly, nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) PLPhotoLibraryBundle *bundle; // @synthesize bundle=_bundle;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithBundle:(id)arg1 priority:(unsigned long long)arg2;

@end
