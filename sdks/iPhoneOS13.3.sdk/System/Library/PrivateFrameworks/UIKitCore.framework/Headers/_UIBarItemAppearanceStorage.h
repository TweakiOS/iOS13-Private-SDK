//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UIBarItemAppearanceStorage : NSObject
{
    NSMutableDictionary *textAttributesForState;
}

// - (void).cxx_destruct;
- (void)enumerateTextAttributesWithBlock:(id /* CDUnknownBlockType */)arg1;
- (id)textAttributeForKey:(id)arg1 state:(NSUInteger)arg2;
- (void)setTextAttribute:(id)arg1 forKey:(id)arg2 state:(NSUInteger)arg3;
- (id)textAttributesForState:(NSUInteger)arg1;
- (void)setTextAttributes:(id)arg1 forState:(NSUInteger)arg2;

@end

