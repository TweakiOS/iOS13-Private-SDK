//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BKSDisplayRenderOverlayDescribing-Protocol.h>
#import <BackBoardServices/BSDescriptionProviding-Protocol.h>

@class BKSDisplayProgressIndicatorProperties, CADisplay, NSString;

@interface BKSDisplayRenderOverlayDescriptor : NSObject <NSSecureCoding, BSDescriptionProviding, BKSDisplayRenderOverlayDescribing>
{
    NSString *_name;
    NSString *_displayUUID;
    CADisplay *_display;
    BKSDisplayProgressIndicatorProperties *_progressIndicatorProperties;
    long long _interfaceOrientation;
    BOOL _lockBacklight;
    BOOL _interstitial;
}

+ (BOOL)supportsSecureCoding;
+ (id)_classesRequiredToDecode;
+ (id)descriptorWithName:(id)arg1 display:(id)arg2;
@property(nonatomic, getter=isInterstitial, setter=_setInterstitial:) BOOL interstitial; // @synthesize interstitial=_interstitial;
@property(retain, nonatomic) BKSDisplayProgressIndicatorProperties *progressIndicatorProperties; // @synthesize progressIndicatorProperties=_progressIndicatorProperties;
@property(nonatomic) BOOL lockBacklight; // @synthesize lockBacklight=_lockBacklight;
@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(copy, nonatomic) NSString *displayUUID; // @synthesize displayUUID=_displayUUID;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) CADisplay *display; // @synthesize display=_display;
- (id)initWithName:(id)arg1 display:(id)arg2;
- (id)_initWithName:(id)arg1 displayUUID:(id)arg2;

@end
