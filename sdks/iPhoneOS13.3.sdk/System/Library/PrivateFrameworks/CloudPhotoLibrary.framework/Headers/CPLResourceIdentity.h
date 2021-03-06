//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString, NSURL;

@interface CPLResourceIdentity : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _available;
    NSURL *_fileURL;
    NSString *_fingerPrint;
    NSUInteger _fileSize;
    NSString *_fileUTI;
    CGSize _imageDimensions;
}

+ (id)identityForStorageName:(id)arg1;
+ (id)storageNameForFingerPrint:(id)arg1 fileUTI:(id)arg2 bucket:(id )arg3;
+ (id)extensionForFileUTI:(id)arg1;
+ (id)fileUTIForExtension:(id)arg1;
+ (id)identityFromStoredIdentity:(id)arg1;
+ (id)alloc;
+ (id)allocWithZone:(_NSZone )arg1;
+ (id)fingerPrintForFD:(int)arg1 typeIdentifier:(id)arg2 error:(id )arg3;
+ (id)fingerPrintForData:(id)arg1 typeIdentifier:(id)arg2 error:(id )arg3;
+ (id)fingerPrintForFileAtURL:(id)arg1 typeIdentifier:(id)arg2 error:(id )arg3;
+ (Class)_identityImplementationClass;
+ (Class)resourceIdentityImplementation;
+ (void)setResourceIdentityImplementation:(Class)arg1;
+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *fileUTI; // @synthesize fileUTI=_fileUTI;
@property(nonatomic, getter=isAvailable) BOOL available; // @synthesize available=_available;
@property(nonatomic) CGSize imageDimensions; // @synthesize imageDimensions=_imageDimensions;
@property(nonatomic) NSUInteger fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSString *fingerPrint; // @synthesize fingerPrint=_fingerPrint;
@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
// - (void).cxx_destruct;
- (id)identityForStorage;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithFileURL:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

