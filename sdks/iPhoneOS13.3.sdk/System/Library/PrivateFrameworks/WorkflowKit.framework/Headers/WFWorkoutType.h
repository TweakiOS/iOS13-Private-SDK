//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WFWorkoutType : NSObject
{
    NSUInteger _activityType;
    NSString *_name;
}

+ (id)allTypes;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSUInteger activityType; // @synthesize activityType=_activityType;
// - (void).cxx_destruct;
- (id)initWithActivityType:(NSUInteger)arg1;

@end

