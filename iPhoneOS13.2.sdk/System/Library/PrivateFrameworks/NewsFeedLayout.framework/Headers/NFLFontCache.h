//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCThreadSafeMutableDictionary;

@interface NFLFontCache : NSObject
{
    FCThreadSafeMutableDictionary *_fontCache;
}

@property(retain, nonatomic) FCThreadSafeMutableDictionary *fontCache; // @synthesize fontCache=_fontCache;
- (void)clearCache;
- (id)fontWithName:(id)arg1 size:(double)arg2;
- (id)init;

@end
