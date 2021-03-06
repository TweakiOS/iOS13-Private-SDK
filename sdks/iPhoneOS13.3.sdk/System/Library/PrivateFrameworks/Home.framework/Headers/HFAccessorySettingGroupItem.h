//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/HFHomeKitSettingItemProtocol-Protocol.h>
#import <Home/HFHomeKitSettingsVendorProvider-Protocol.h>

@class HFAccessorySettingsEntity, HMAccessorySelectionSetting, HMSettingGroup, NSDictionary, NSString;
@protocol HFHomeKitObject, HFHomeKitSettingsVendor;

@interface HFAccessorySettingGroupItem : HFItem <HFHomeKitSettingItemProtocol, HFHomeKitSettingsVendorProvider>
{
    id <HFHomeKitSettingsVendor> _homeKitSettingsVendor;
    HFAccessorySettingsEntity *_entity;
    NSDictionary *_usageOptions;
    HMSettingGroup *_settingGroup;
    HMAccessorySelectionSetting *_selectionSetting;
}

@property(readonly, nonatomic) HMAccessorySelectionSetting *selectionSetting; // @synthesize selectionSetting=_selectionSetting;
@property(readonly, nonatomic) HMSettingGroup *settingGroup; // @synthesize settingGroup=_settingGroup;
@property(retain, nonatomic) NSDictionary *usageOptions; // @synthesize usageOptions=_usageOptions;
@property(readonly, nonatomic) HFAccessorySettingsEntity *entity; // @synthesize entity=_entity;
@property(readonly, nonatomic) id <HFHomeKitSettingsVendor> homeKitSettingsVendor; // @synthesize homeKitSettingsVendor=_homeKitSettingsVendor;
// - (void).cxx_destruct;
- (void)_decorateHiddenOrDisabled:(id)arg1;
- (BOOL)_validateKeyPathDependencies;
- (id)_displayTitle;
- (id)_subclass_updateWithOptions:(id)arg1;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
@property(readonly, nonatomic) NSString *settingKeyPath;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 selectionSetting:(id)arg3;
- (id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 group:(id)arg3;
- (id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 entity:(id)arg3;
- (id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2;

@end

