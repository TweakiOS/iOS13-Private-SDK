//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSError, VSAppDocumentController, VSViewModel;

@protocol VSAppDocumentControllerDelegate <NSObject>

@optional
- (void)appDocumentController:(VSAppDocumentController *)arg1 didFailToUpdateViewModelWithError:(NSError *)arg2;
- (void)appDocumentController:(VSAppDocumentController *)arg1 didUpdateViewModel:(VSViewModel *)arg2;
@end

