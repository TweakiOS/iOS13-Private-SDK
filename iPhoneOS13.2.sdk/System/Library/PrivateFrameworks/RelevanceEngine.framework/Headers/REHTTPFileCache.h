//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSString;

@interface REHTTPFileCache : NSObject
{
    NSString *_directory;
    NSCache *_cache;
}

- (id)loadFileAtPath:(id)arg1;
- (id)initWithRootDirectory:(id)arg1;

@end
