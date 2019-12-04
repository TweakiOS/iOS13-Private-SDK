//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUURLHandling-Protocol.h>
#import <NewsUI/SXURLHandling-Protocol.h>

@class NSExtensionContext, NSString;

@interface NUExtensionURLHandler : NSObject <NUURLHandling, SXURLHandling>
{
    NSExtensionContext *_extensionContext;
}

@property(readonly, nonatomic) NSExtensionContext *extensionContext; // @synthesize extensionContext=_extensionContext;
- (void)openURL:(id)arg1;
- (void)openURL:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithExtensionContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
