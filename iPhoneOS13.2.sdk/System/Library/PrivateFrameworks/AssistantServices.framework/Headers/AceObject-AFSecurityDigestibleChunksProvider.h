//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <AssistantServices/AFAnalyticsContextVending-Protocol.h>
#import <AssistantServices/AFSecurityDigestibleChunksProviding-Protocol.h>

@class NSString;

@interface AceObject (AFSecurityDigestibleChunksProvider) <AFSecurityDigestibleChunksProviding, AFAnalyticsContextVending>
- (void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)af_dialogIdentifiersForAnalyticsContext;
- (void)af_addEntriesToAnalyticsContext:(id)arg1;
- (id)af_analyticsContext;
- (_Bool)_af_isKindOfDictationRequest;
- (id)af_speakableText;
- (id)af_text;
- (id)af_dialogIdentifier;
- (_Bool)af_isUserUtterance;
- (_Bool)af_isUtterance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@end
