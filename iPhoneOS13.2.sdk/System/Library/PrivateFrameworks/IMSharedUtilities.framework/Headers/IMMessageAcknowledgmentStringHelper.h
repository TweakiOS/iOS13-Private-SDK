//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMMessageAcknowledgmentStringHelper : NSObject
{
}

+ (id)generateBackwardCompatibilityStringForMessageAcknowledgmentType:(long long)arg1 messageSummaryInfo:(id)arg2;
+ (id)generateBackwardCompatibilityStringForMessageAcknowledgmentType:(long long)arg1 messageSummaryInfo:(id)arg2 isGroupMessage:(_Bool)arg3;
+ (id)generateBackwardCompatibilityFormatStringForMessageAcknowledgmentType:(long long)arg1 messageSummaryInfo:(id)arg2 format:(long long *)arg3;
+ (id)generatePreviewStringForMessageAcknowledgmentType:(long long)arg1 acknowledgmentDisplayName:(id)arg2 isFromMe:(_Bool)arg3 messageSummaryInfo:(id)arg4;
+ (id)generatePreviewStringForMessageAcknowledgmentType:(long long)arg1 acknowledgmentDisplayName:(id)arg2 isFromMe:(_Bool)arg3 messageSummaryInfo:(id)arg4 isGroupMessage:(_Bool)arg5;
+ (id)generateFormatStringForMessageAcknowledgmentType:(long long)arg1 acknowledgmentDisplayName:(id)arg2 isFromMe:(_Bool)arg3 messageSummaryInfo:(id)arg4 format:(long long *)arg5;
+ (id)longContentTypeStringForContentType:(id)arg1;
+ (id)longContentTypeStringForPluginBundleID:(id)arg1 pluginDisplayName:(id)arg2;
+ (_Bool)shouldQuoteContentString:(id)arg1;
+ (id)messageAcknowledgmentString:(long long)arg1 lowercase:(_Bool)arg2;

@end
