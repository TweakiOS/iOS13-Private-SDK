//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CHStrokeClassificationResult;
@protocol CHStrokeProvider;

@interface CHStrokeClassifier : NSObject
{
    BOOL _textOnly;
    id <CHStrokeProvider> _strokeProvider;
    CHStrokeClassificationResult *_strokeClassificationLastResult;
}

+ (double)containerSupportForPoints:(const vector_2e7754b6 )arg1 withBounds:(CGRect)arg2;
+ (id)nonTextCandidateForStroke:(id)arg1 withSubstrokes:(id)arg2;
@property(readonly, nonatomic) BOOL textOnly; // @synthesize textOnly=_textOnly;
@property(readonly, retain, nonatomic) CHStrokeClassificationResult *strokeClassificationLastResult; // @synthesize strokeClassificationLastResult=_strokeClassificationLastResult;
@property(readonly, retain, nonatomic) id <CHStrokeProvider> strokeProvider; // @synthesize strokeProvider=_strokeProvider;
- (id)updatedStrokeClassificationResultByAddingStrokes:(id)arg1 removingStrokeIdentifiers:(id)arg2 clutterFilter:(id)arg3 affectedClutterStrokeIDs:(id)arg4 cancellationBlock:(id /* CDUnknownBlockType */)arg5;
- (void)dealloc;
- (id)initWithStrokeProvider:(id)arg1 strokeClassificationLastResult:(id)arg2 textOnly:(BOOL)arg3;

@end
