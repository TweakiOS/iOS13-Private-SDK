//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AXMediaUtilities/AXMVisionEngine.h>

@class AXMIconClassDetectorNode, AXMImageNode;

@interface AXMIconVisionEngine : AXMVisionEngine
{
    AXMImageNode *_imageNode;
    AXMIconClassDetectorNode *_iconClassDetector;
}

+ (id)sharedInstance;
@property(nonatomic) __weak AXMIconClassDetectorNode *iconClassDetector; // @synthesize iconClassDetector=_iconClassDetector;
@property(nonatomic) __weak AXMImageNode *imageNode; // @synthesize imageNode=_imageNode;
- (id)classifyImages:(id)arg1 withTimeout:(double)arg2;
- (id)initWithIdentifier:(id)arg1;

@end
