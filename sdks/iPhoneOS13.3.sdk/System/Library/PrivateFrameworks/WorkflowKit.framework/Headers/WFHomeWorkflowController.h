//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFOutOfProcessWorkflowControllerDelegate-Protocol.h>

@class WFHomeWorkflow, WFOutOfProcessWorkflowController;

@interface WFHomeWorkflowController : NSObject <WFOutOfProcessWorkflowControllerDelegate>
{
    WFOutOfProcessWorkflowController *_workflowController;
    WFHomeWorkflow *_workflow;
    id /* CDUnknownBlockType */ _completionHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) WFHomeWorkflow *workflow; // @synthesize workflow=_workflow;
// - (void).cxx_destruct;
@property(readonly, nonatomic) WFOutOfProcessWorkflowController *workflowController; // @synthesize workflowController=_workflowController;
- (void)outOfProcessWorkflowController:(id)arg1 didFinishWithError:(id)arg2 cancelled:(BOOL)arg3;
@property(readonly, nonatomic, getter=isRunning) BOOL running;
- (void)cancel;
- (void)startWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (id)init;
- (id)initWithWorkflow:(id)arg1;

@end

