//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIArchiveItem : NSObject
{
    _Bool _fileSizeIsSet;
    _Bool _isAppleDoubleFile;
    NSString *_pathInArchive;
    NSString *_fileType;
    unsigned long long _fileSize;
    NSString *_pathToAppleDoubleRealFileCounterpart;
}

@property(retain, nonatomic) NSString *pathToAppleDoubleRealFileCounterpart; // @synthesize pathToAppleDoubleRealFileCounterpart=_pathToAppleDoubleRealFileCounterpart;
@property(nonatomic) _Bool isAppleDoubleFile; // @synthesize isAppleDoubleFile=_isAppleDoubleFile;
@property(nonatomic) _Bool fileSizeIsSet; // @synthesize fileSizeIsSet=_fileSizeIsSet;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *fileType; // @synthesize fileType=_fileType;
@property(retain, nonatomic) NSString *pathInArchive; // @synthesize pathInArchive=_pathInArchive;
- (id)description;

@end
