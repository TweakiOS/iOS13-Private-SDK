//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TemplateKit/TLKStackView.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TLKIconsView : TLKStackView
{
    NSMutableArray *_imageViews;
    unsigned long long _prominence;
}

@property(nonatomic) unsigned long long prominence; // @synthesize prominence=_prominence;
@property(retain, nonatomic) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
- (void)updateIcons:(id)arg1;
- (id)init;

@end
