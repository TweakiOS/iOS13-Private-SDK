//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class UIColor;

@interface SUScriptColor : SUScriptObject
{
    UIColor *_color;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(readonly) double red;
@property(readonly) double green;
- (id)_className;
@property(readonly) double blue;
@property(readonly) double alpha;
- (void)setWhite:(double)arg1 alpha:(double)arg2;
- (void)setRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (void)setHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
- (id)stringRepresentation;
@property(readonly) UIColor *nativeColor;
- (CGColor )copyCGColor;
- (void)dealloc;
- (id)initWithStyleString:(id)arg1;
- (id)initWithUIColor:(id)arg1;

@end

