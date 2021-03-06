//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class IKAppDocument, IKViewElementRegistry, NSDictionary, NSString, NSURL;
@protocol IKAppDataStoring, IKAppUserDefaultsStoring;

@protocol IKApplication <NSObject>
- (id <IKAppUserDefaultsStoring>)userDefaultsStorage;
- (id <IKAppDataStoring>)vendorStorage;
- (id <IKAppDataStoring>)localStorage;
- (NSString *)vendorIdentifier;
- (NSString *)appIdentifier;
- (NSURL *)appJSURL;
- (BOOL)shouldIgnoreJSValidation;

@optional
- (NSDictionary *)appTraitCollection;
- (BOOL)appUsesDefaultStyleSheets;
- (IKViewElementRegistry *)viewElementRegistry;
- (IKAppDocument *)activeDocument;
- (NSDictionary *)appLaunchParams;
- (NSString *)appLaunchParamsResolvedBootURLKey;
- (BOOL)appIsPrivileged;
- (BOOL)appIsTrusted;
- (BOOL)shouldAllowRemoteInspection;
- (NSURL *)appLocalJSURL;
- (NSURL *)appJSCachePath;
- (NSURL *)offlineJSURL;
- (NSString *)bagBootURLKey;
@end

