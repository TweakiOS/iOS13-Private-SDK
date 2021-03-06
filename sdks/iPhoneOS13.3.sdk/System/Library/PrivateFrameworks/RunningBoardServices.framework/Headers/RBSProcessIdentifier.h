//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoardServices/BSXPCSecureCoding-Protocol.h>
#import <RunningBoardServices/RBSProcessIdentifier-Protocol.h>

@class NSString;

@interface RBSProcessIdentifier : NSObject <BSXPCSecureCoding, RBSProcessIdentifier, NSSecureCoding, NSCopying>
{
    NSString *_description;
    int _pid;
}

+ (BOOL)supportsBSXPCSecureCoding;
+ (BOOL)supportsSecureCoding;
+ (id)identifierForIdentifier:(id)arg1;
+ (id)identifierForCurrentProcess;
+ (id)identifierWithPid:(int)arg1;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (id)processPredicate;
- (BOOL)matchesProcess:(id)arg1;
- (int)rbs_pid;
- (id)initWithPid:(int)arg1;
- (id)init;

@end

