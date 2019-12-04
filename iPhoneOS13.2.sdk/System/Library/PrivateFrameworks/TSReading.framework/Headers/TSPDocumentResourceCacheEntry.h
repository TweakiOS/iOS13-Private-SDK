//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURL;

@interface TSPDocumentResourceCacheEntry : NSObject
{
    _Bool _wasDownloaded;
    NSString *_digestString;
    long long _accessCount;
    NSURL *_URL;
    long long _fileSize;
    NSDate *_contentAccessDate;
}

@property(nonatomic) _Bool wasDownloaded; // @synthesize wasDownloaded=_wasDownloaded;
@property(retain, nonatomic) NSDate *contentAccessDate; // @synthesize contentAccessDate=_contentAccessDate;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) long long accessCount; // @synthesize accessCount=_accessCount;
@property(readonly, nonatomic) NSString *digestString; // @synthesize digestString=_digestString;
- (id)initWithDigestString:(id)arg1;
- (id)init;

@end
