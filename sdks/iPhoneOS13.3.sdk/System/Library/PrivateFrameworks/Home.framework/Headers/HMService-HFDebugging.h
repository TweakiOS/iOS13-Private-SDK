//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMService.h>

#import <Home/HFFavoritable-Protocol.h>
#import <Home/HFHomeContainedObject-Protocol.h>
#import <Home/HFHomeStatusVisible-Protocol.h>
#import <Home/HFReorderableHomeKitObject-Protocol.h>
#import <Home/HFRoomContextProviding-Protocol.h>
#import <Home/HFStateDumpBuildable-Protocol.h>
#import <Home/HFUserNotificationServiceSettingsProviding-Protocol.h>

@class HFServiceNameComponents, HFUserNotificationServiceSettings, HMCharacteristic, HMHome, HMRoom, NSDate, NSString;

@interface HMService (HFDebugging) <HFStateDumpBuildable, HFFavoritable, HFHomeStatusVisible, HFHomeContainedObject, HFRoomContextProviding, HFUserNotificationServiceSettingsProviding, HFReorderableHomeKitObject>
+ (id)hf_allRequiredCharacteristicTypesForStandardServices;
+ (id)hf_requiredCharacteristicTypesForDisplayMetadataWithServiceType:(id)arg1;
+ (id)hf_sensorCharacteristicTypeForServiceType:(id)arg1;
+ (id)hf_descriptionForServiceSubtype:(id)arg1;
+ (id)hf_defaultServiceSubtypeForServiceType:(id)arg1;
+ (id)_hf_allowedChildServicesTypeMap;
+ (id /* CDUnknownBlockType */)hf_serviceComparator;
+ (id)hf_roomsForServices:(id)arg1;
+ (id)hf_standardServiceTypes;
+ (id)hf_standardServices;
+ (id)hf_programmableSwitchServiceTypes;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (id)hf_updateIsFavorite:(BOOL)arg1;
@property(readonly, nonatomic) BOOL hf_shouldShowInFavorites;
@property(readonly, nonatomic) BOOL hf_hasSetFavorite;
@property(readonly, nonatomic) BOOL hf_isFavorite;
- (id)hf_requiredCharacteristicTypesForDisplayMetadata;
- (BOOL)hf_canGroupWithService:(id)arg1;
- (id)hf_effectiveServiceSubtype;
- (id)hf_parentService;
- (BOOL)_hf_isDirectlyOrIndirectlyLinkedToService:(id)arg1;
- (id)hf_childServices;
- (id)hf_childServicesOfType:(id)arg1;
- (BOOL)hf_isChildService;
- (BOOL)hf_isTelevision;
- (BOOL)hf_isVisible;
- (BOOL)hf_isLegacyService;
- (BOOL)hf_isInGroup;
- (BOOL)hf_supportsGroups;
- (id)hf_updateIconDescriptor:(id)arg1;
- (id)hf_iconDescriptor;
- (id)hf_effectiveServiceType;
- (id)hf_serviceDescriptor;
- (id)hf_characteristicOfType:(id)arg1;
- (id)_hf_firstLinkedServiceOfType:(id)arg1;
@property(readonly, nonatomic) HMCharacteristic *hf_labelNamespaceCharacteristic;
@property(readonly, nonatomic) HMCharacteristic *hf_labelIndexCharacteristic;
@property(readonly, nonatomic) NSUInteger hf_fallbackProgrammableSwitchIndex;
@property(readonly, nonatomic) BOOL hf_isProgrammableSwitch;
- (id)hf_updateIsVisibleInHomeStatus:(BOOL)arg1;
@property(readonly, nonatomic) BOOL hf_hasSetVisibleInHomeStatus;
@property(readonly, nonatomic) BOOL hf_isVisibleInHomeStatus;
@property(readonly, nonatomic) BOOL hf_supportsHomeStatus;
@property(readonly, nonatomic) __weak HMHome *home;
- (BOOL)hf_isValidObject;
@property(readonly, nonatomic) __weak HMRoom *hf_parentRoom;
- (id)hf_updateUserNotificationSettings:(id)arg1;
@property(readonly, copy, nonatomic) HFUserNotificationServiceSettings *hf_userNotificationSettings;
- (id)hf_updateDateAdded:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *hf_dateAdded;
@property(readonly, nonatomic) HFServiceNameComponents *hf_serviceNameComponents;
@property(readonly, copy, nonatomic) NSString *hf_displayName;
@end

