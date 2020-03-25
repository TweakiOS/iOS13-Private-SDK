//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplication.h>

@class CLKCBundleComplication;

@interface NTKBundleComplication : NTKComplication
{
    CLKCBundleComplication *_complication;
}

+ (id)_revertedBundleComplicationFromJSONDictionary:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)bundledComplicationWithComplication:(id)arg1;
+ (id)bundledComplicationWithBundleIdentifier:(id)arg1 appBundleIdentifier:(id)arg2;
@property(readonly, nonatomic) CLKCBundleComplication *complication; // @synthesize complication=_complication;
// - (void).cxx_destruct;
- (void)_addKeysToJSONDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithComplicationType:(NSUInteger)arg1 JSONDictionary:(id)arg2;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)localizedRichDetailText;
- (id)localizedDetailText;
- (id)localizedRichKeylineLabelText;
- (id)localizedKeylineLabelText;
- (id)description;
- (id)customDailySnapshotKey;

@end
