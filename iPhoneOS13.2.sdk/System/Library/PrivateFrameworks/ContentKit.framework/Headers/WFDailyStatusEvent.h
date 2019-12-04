//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFDailyStatusEvent : WFEvent
{
    _Bool _installed;
    _Bool _sharingEnabled;
    _Bool _personalAutomationsEnabled;
    _Bool _homeAutomationsEnabled;
    NSString *_key;
}

+ (Class)codableEventClass;
@property(nonatomic) _Bool homeAutomationsEnabled; // @synthesize homeAutomationsEnabled=_homeAutomationsEnabled;
@property(nonatomic) _Bool personalAutomationsEnabled; // @synthesize personalAutomationsEnabled=_personalAutomationsEnabled;
@property(nonatomic) _Bool sharingEnabled; // @synthesize sharingEnabled=_sharingEnabled;
@property(nonatomic) _Bool installed; // @synthesize installed=_installed;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;

@end
