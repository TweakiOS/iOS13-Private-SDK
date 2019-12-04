//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSURL;

__attribute__((visibility("hidden")))
@interface TSUSandboxedURL : NSObject <NSCopying>
{
    _Bool _URLStartedAccessingSecurityScopedResource;
    NSURL *_URL;
}

@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) _Bool hasSandboxAccess;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)init;

@end
