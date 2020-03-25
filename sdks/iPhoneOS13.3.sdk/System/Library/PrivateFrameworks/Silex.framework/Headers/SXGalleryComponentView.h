//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXMediaComponentView.h>

#import <Silex/SXDragManagerDataSource-Protocol.h>

@class SXDragManager;

@interface SXGalleryComponentView : SXMediaComponentView <SXDragManagerDataSource>
{
    SXDragManager *_dragManager;
}

@property(retain, nonatomic) SXDragManager *dragManager; // @synthesize dragManager=_dragManager;
// - (void).cxx_destruct;
- (id)dragManager:(id)arg1 dragableAtLocation:(CGPoint)arg2;
- (id)viewForDragManager:(id)arg1;
- (void)forceImageViewFullscreen:(id)arg1;
- (id)imageViewForLocation:(CGPoint)arg1;
- (id)hostingView;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReporting:(id)arg5 appStateMonitor:(id)arg6 mediaSharingPolicyProvider:(id)arg7;

@end
