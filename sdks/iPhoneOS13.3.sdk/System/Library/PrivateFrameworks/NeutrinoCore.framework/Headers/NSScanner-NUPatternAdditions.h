//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSScanner.h>

@interface NSScanner (NUPatternAdditions)
- (id)substringFromScanLocation;
- (BOOL)scanRepeatPattern:(inout id )arg1 error:(out id )arg2;
- (BOOL)scanPatterns:(out id )arg1 from:(id)arg2 to:(id)arg3 delimiter:(id)arg4 error:(out id )arg5;
- (BOOL)scanChoicePattern:(out id )arg1 error:(out id )arg2;
- (BOOL)scanGroupPattern:(out id )arg1 error:(out id )arg2;
- (BOOL)scanListPattern:(out id )arg1 error:(out id )arg2;
- (BOOL)scanTokenPattern:(out id )arg1 error:(out id )arg2;
- (BOOL)scanPattern:(out id )arg1 error:(out id )arg2;
@end

