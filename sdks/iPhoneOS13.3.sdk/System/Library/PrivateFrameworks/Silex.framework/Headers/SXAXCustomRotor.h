//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAccessibilityCustomRotor.h>

@class NSOrderedSet;

@interface SXAXCustomRotor : UIAccessibilityCustomRotor
{
    NSOrderedSet *_rotorItems;
}

+ (id)rotorWithName:(id)arg1;
@property(copy, nonatomic) NSOrderedSet *rotorItems; // @synthesize rotorItems=_rotorItems;
// - (void).cxx_destruct;
- (id)description;
- (long long)indexOfRotorItem:(id)arg1;
- (id)rotorItemAfter:(id)arg1;
- (id)rotorItemBefore:(id)arg1;
- (id)initWithName:(id)arg1;

@end

