//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class EDAMNotFoundException, EDAMUserException, EDAMUserIdentity;

@interface EDAMManageNotebookSharesError : FATObject
{
    EDAMUserIdentity *_userIdentity;
    EDAMUserException *_userException;
    EDAMNotFoundException *_notFoundException;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) EDAMNotFoundException *notFoundException; // @synthesize notFoundException=_notFoundException;
@property(retain, nonatomic) EDAMUserException *userException; // @synthesize userException=_userException;
@property(retain, nonatomic) EDAMUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
// - (void).cxx_destruct;

@end

