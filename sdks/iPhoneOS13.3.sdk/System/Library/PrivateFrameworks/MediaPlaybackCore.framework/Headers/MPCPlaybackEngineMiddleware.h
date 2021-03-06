//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPCPlayerResponseBuilder-Protocol.h>
#import <MediaPlaybackCore/MPMiddleware-Protocol.h>
#import <MediaPlaybackCore/_MPCStateDumpPropertyListTransformable-Protocol.h>

@class MPCPlaybackEngine, NSArray;

@interface MPCPlaybackEngineMiddleware : NSObject <MPCPlayerResponseBuilder, _MPCStateDumpPropertyListTransformable, MPMiddleware>
{
    NSArray *_invalidationObservers;
    MPCPlaybackEngine *_playbackEngine;
}

@property(retain, nonatomic) MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
@property(retain, nonatomic) NSArray *invalidationObservers; // @synthesize invalidationObservers=_invalidationObservers;
// - (void).cxx_destruct;
- (id)_stateDumpObject;
- (id)operationsForPlayerRequest:(id)arg1;
- (id)operationsForRequest:(id)arg1;
- (id)playerVideoView:(id)arg1 chain:(id)arg2;

@end

