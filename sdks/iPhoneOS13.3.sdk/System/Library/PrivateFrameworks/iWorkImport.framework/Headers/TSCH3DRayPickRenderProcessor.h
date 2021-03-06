//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DRetargetRenderProcessor.h>

@class NSArray, NSMutableArray, TSCH3DDataBuffer, TSCH3DRayPickPipelineDelegate;

__attribute__((visibility("hidden")))
@interface TSCH3DRayPickRenderProcessor : TSCH3DRetargetRenderProcessor
{
    TSCH3DDataBuffer *mBuffer;
    NSMutableArray *mPickedPoints;
    tvec2_84d5962d mPosition;
    float mSlack;
    TSCH3DRayPickPipelineDelegate *mSceneObjectDelegate;
}

@property(retain, nonatomic) TSCH3DRayPickPipelineDelegate *sceneObjectDelegate; // @synthesize sceneObjectDelegate=mSceneObjectDelegate;
@property(nonatomic) float slack; // @synthesize slack=mSlack;
@property(nonatomic) tvec2_84d5962d position; // @synthesize position=mPosition;
- (id).cxx_construct;
@property(readonly, nonatomic) NSArray *pickedPoints;
- (void)submit:(id)arg1;
- (void)geometry:(id)arg1;
- (id)matrix;
- (void)dealloc;
- (id)init;

@end

