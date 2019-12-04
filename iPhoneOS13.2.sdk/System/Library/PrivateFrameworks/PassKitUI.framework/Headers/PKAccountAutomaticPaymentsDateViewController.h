//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKSectionTableViewController.h>

#import <PassKitUI/PKAddBankAccountInformationViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKMonthDayCollectionViewControllerDelegate-Protocol.h>

@class NSCalendar, NSDate, NSDateFormatter, NSIndexPath, NSNumberFormatter, NSString, NSTimeZone, PKAccount, PKAccountAutomaticPaymentsController, PKAccountAutomaticPaymentsDateFooterView, PKMonthDayCollectionViewController, PKTableHeaderView;

@interface PKAccountAutomaticPaymentsDateViewController : PKSectionTableViewController <PKAddBankAccountInformationViewControllerDelegate, PKMonthDayCollectionViewControllerDelegate>
{
    NSDate *_date;
    long long _scheduledDay;
    PKAccountAutomaticPaymentsController *_controller;
    PKAccount *_account;
    unsigned long long _featureIdentifier;
    PKTableHeaderView *_tableHeaderView;
    NSIndexPath *_selectedIndexPath;
    PKMonthDayCollectionViewController *_monthDayCollectionViewController;
    NSNumberFormatter *_ordinalDayNumberFormatter;
    NSDateFormatter *_cardinalDayDateFormatter;
    _Bool _useOrdinalDay;
    PKAccountAutomaticPaymentsDateFooterView *_collectionFooterView;
    NSTimeZone *_productTimeZone;
    NSCalendar *_productCalendar;
}

- (void)addBankAccountInformationViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)addBankAccountInformationViewControllerDidFinish:(id)arg1;
- (void)addBankAccountInformationViewController:(id)arg1 didAddFundingSource:(id)arg2;
- (void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)arg1;
- (id)_addBankAccountInformationViewController;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)shouldMapSection:(unsigned long long)arg1;
- (void)monthDaySelectionViewController:(id)arg1 didSelectDate:(id)arg2 day:(long long)arg3;
- (id)_footerText;
- (void)_updateNextButtonEnabledIfNecessary;
- (void)_performPresentPayment;
- (void)_handlePresentPayment;
- (_Bool)_shouldShowCollectionView;
- (long long)_frequency;
- (void)_handleNext:(id)arg1;
- (id)tableHeaderView;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
