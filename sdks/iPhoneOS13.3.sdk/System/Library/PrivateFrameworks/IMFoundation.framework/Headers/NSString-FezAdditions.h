//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (FezAdditions)
+ (id)generatedRoomNameForGroupChat;
+ (id)randomString;
+ (id)copyStringGUIDForObject:(id)arg1;
+ (id)stringGUIDForObject:(id)arg1;
+ (id)stringGUID;
+ (id)copyStringGUID;
- (BOOL)roomNameIsProbablyAutomaticallyGenerated;
- (id)stringByRemovingCharactersFromSet:(id)arg1;
- (id)stringWithLTREmbedding;
- (id)pathStringForDisplay;
- (id)__stringByStrippingAttachmentAndControlCharacters;
- (id)__stringByStrippingControlCharacters;
- (id)uniqueSavePath;
- (id)stringByRemovingWhitespace;
- (_NSRange)__rangeOfNewlineInRange:(_NSRange)arg1;
- (id)stringByResolvingAndStandardizingPath;
- (BOOL)_appearsToBeBusinessID;
- (BOOL)_appearsToBeDSID;
- (BOOL)_appearsToBePhoneNumber;
- (id)_md5Hash;
- (id)_stripPotentialTokenURIWithToken:(id )arg1;
- (BOOL)_appearsToBeEmail;
- (id)_IDFromFZIDType:(long long)arg1;
- (id)_URIFromFZIDType:(long long)arg1;
- (id)_URIFromCanonicalizedFZIDType:(long long)arg1;
- (long long)_FZBestGuessFZIDType;
- (id)_bestGuessURIFromCanicalizedID;
- (id)_URIFromCanonicalizedBusinessID;
- (id)_URIFromCanonicalizedDSID;
- (id)_URIFromCanonicalizedPhoneNumber;
- (id)_URIFromCanonicalizedEmail;
- (id)_bestGuessURI;
- (id)_URIFromBusinessID;
- (id)_URIFromDSID;
- (id)_URIFromPhoneNumber;
- (id)_URIFromEmail;
- (long long)_FZIDType;
- (id)_FZIDFromPhoneNumber;
- (id)_FZIDFromEmail;
- (id)_stripFZIDPrefix;
- (id)urlFromString;
- (id)stringByAddingURLEscapes;
- (id)stringByRemovingURLEscapes;
- (id)trimmedString;
- (long long)localizedCompareToString:(id)arg1;
- (unsigned int)unsignedIntValue;
- (unsigned int)hexValue;
- (BOOL)isDirectory;
- (BOOL)isEqualToIgnoringCase:(id)arg1;
- (id)_imInitWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
@property(readonly, nonatomic) NSString *stripMobileMSuffixIfPresent;
@property(readonly, nonatomic) BOOL hasMobileMeSuffix;
@property(readonly, nonatomic) NSString *mobileMeDomain;
@end

