//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoViewControllerSizeObserving-Protocol.h>

@class NSString, SVKeyValueObserver, SVVideoViewController;

@interface SVVideoViewControllerSizeObserver : NSObject <SVVideoViewControllerSizeObserving>
{
    id /* block */ changeBlock;
    SVVideoViewController *_videoViewController;
    SVKeyValueObserver *_boundsObserver;
    struct CGSize _size;
}

@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) SVKeyValueObserver *boundsObserver; // @synthesize boundsObserver=_boundsObserver;
@property(readonly, nonatomic) __weak SVVideoViewController *videoViewController; // @synthesize videoViewController=_videoViewController;
@property(copy, nonatomic, setter=onChange:) id /* block */ changeBlock; // @synthesize changeBlock;
- (id)initWithVideoViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
