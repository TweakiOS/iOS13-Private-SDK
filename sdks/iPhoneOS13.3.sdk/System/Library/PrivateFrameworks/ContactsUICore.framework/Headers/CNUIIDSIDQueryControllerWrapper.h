//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIIDSIDQueryControllerWrapper-Protocol.h>

@class IDSIDQueryController;

@interface CNUIIDSIDQueryControllerWrapper : NSObject <CNUIIDSIDQueryControllerWrapper>
{
    IDSIDQueryController *_controller;
}

@property(readonly, nonatomic) IDSIDQueryController *controller; // @synthesize controller=_controller;
// - (void).cxx_destruct;
- (BOOL)refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id /* CDUnknownBlockType */)arg5;
- (id)initWithController:(id)arg1;

@end

