//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFResource.h>

#import <WorkflowKit/WFActionEventObserver-Protocol.h>

@class NSString, WFAction;

@interface WFParameterRelationResource : WFResource <WFActionEventObserver>
{
    WFAction *_action;
}

+ (BOOL)mustBeAvailableForDisplay;
@property(nonatomic) __weak WFAction *action; // @synthesize action=_action;
// - (void).cxx_destruct;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (void)refreshAvailability;
- (void)setupWithAction:(id)arg1;
@property(readonly, nonatomic) NSString *parameterKey;
- (id)comparedValues;
- (id)initWithParameterKey:(id)arg1 parameterValues:(id)arg2 relation:(id)arg3;

@end

