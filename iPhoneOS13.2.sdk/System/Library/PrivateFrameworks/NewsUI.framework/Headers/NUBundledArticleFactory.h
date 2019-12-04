//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUArticleFactory-Protocol.h>

@class FCArticleController, NSString;

@interface NUBundledArticleFactory : NSObject <NUArticleFactory>
{
    FCArticleController *_articleController;
}

@property(readonly, nonatomic) FCArticleController *articleController; // @synthesize articleController=_articleController;
- (id)createArticlesForArticleIDs:(id)arg1;
- (id)initWithArticleController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
