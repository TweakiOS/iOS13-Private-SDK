//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEORelatedSearchSuggestion, NSString;

@interface GEOMapItemChildActionSearch : NSObject
{
    GEORelatedSearchSuggestion *_relatedSearchSuggestion;
}

@property(retain, nonatomic) GEORelatedSearchSuggestion *relatedSearchSuggestion; // @synthesize relatedSearchSuggestion=_relatedSearchSuggestion;
@property(readonly, nonatomic) NSString *displayString;
- (id)initWithChildActionSearch:(id)arg1;

@end
