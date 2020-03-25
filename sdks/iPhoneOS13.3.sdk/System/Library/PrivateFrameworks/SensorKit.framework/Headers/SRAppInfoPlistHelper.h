//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet, NSString, NSURL;

@interface SRAppInfoPlistHelper : NSObject
{
    NSString *_appName;
    NSString *_studyName;
    NSURL *_privacyLink;
    NSString *_usageDescription;
    NSDictionary *_perCategoryDetailDescription;
    NSSet *_requiredServices;
}

+ (id)privacyLink:(id)arg1;
+ (id)_privacyLinkWithInfoDictionary:(id)arg1;
+ (id)usageDescription:(id)arg1;
+ (id)_usageDescriptionWithInfoDictionary:(id)arg1;
+ (id)studyName:(id)arg1;
+ (id)appName:(id)arg1;
+ (id)_studyNameWithInfoDictionary:(id)arg1 bundleId:(id)arg2;
+ (id)_appNameWithInfoDictionary:(id)arg1 bundleId:(id)arg2;
+ (id)infoDictionaryForBundle:(id)arg1;
+ (BOOL)isValidString:(id)arg1;
+ (void)initialize;
@property(copy, nonatomic) NSSet *requiredServices; // @synthesize requiredServices=_requiredServices;
@property(copy, nonatomic) NSDictionary *perCategoryDetailDescription; // @synthesize perCategoryDetailDescription=_perCategoryDetailDescription;
@property(copy, nonatomic) NSString *usageDescription; // @synthesize usageDescription=_usageDescription;
@property(retain, nonatomic) NSURL *privacyLink; // @synthesize privacyLink=_privacyLink;
@property(readonly, copy, nonatomic) NSString *studyName; // @synthesize studyName=_studyName;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
- (void)crashWithMessage:(id)arg1;
- (void)verifyRequiredInfoPlistContentForRequestedServices:(id)arg1;
- (void)dealloc;
- (id)initWithInfoDictionary:(id)arg1 bundleIdentifier:(id)arg2;
- (id)initWithBundle:(id)arg1;

@end
