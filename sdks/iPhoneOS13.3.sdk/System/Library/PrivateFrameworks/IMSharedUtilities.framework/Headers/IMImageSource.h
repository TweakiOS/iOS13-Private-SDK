//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface IMImageSource : NSObject
{
    CGImageSource _imageSourceRef;
    NSURL *_fileURL;
}

@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, nonatomic) CGImageSource imageSourceRef; // @synthesize imageSourceRef=_imageSourceRef;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSString *filePath;
@property(readonly, nonatomic) BOOL fileExists;
- (void)dealloc;
- (id)initWithFileURL:(id)arg1;

@end
