#import <VoiceShortcuts/APSConnectionDelegate-Protocol.h>
#import <VoiceShortcuts/CDStructures.h>
#import <VoiceShortcuts/CKRecord-VCManatee.h>
#import <VoiceShortcuts/HFTriggerProtocol-Protocol.h>
#import <VoiceShortcuts/HMHomeManagerDelegate-Protocol.h>
#import <VoiceShortcuts/INVCIntentDefinitionManager-Protocol.h>
#import <VoiceShortcuts/MTLJSONSerializing-Protocol.h>
#import <VoiceShortcuts/MTLModel-Protocol.h>
#import <VoiceShortcuts/PBCodable-VCPBCodable.h>
#import <VoiceShortcuts/PSYSyncCoordinatorDelegate-Protocol.h>
#import <VoiceShortcuts/SYChange-Protocol.h>
#import <VoiceShortcuts/SYChangeSerializer-Protocol.h>
#import <VoiceShortcuts/SYServiceDelegate-Protocol.h>
#import <VoiceShortcuts/SYSessionDelegate-Protocol.h>
#import <VoiceShortcuts/UNUserNotificationCenterDelegate-Protocol.h>
#import <VoiceShortcuts/VCCKNotificationCenter.h>
#import <VoiceShortcuts/VCCKVoiceShortcutFetcher.h>
#import <VoiceShortcuts/VCCompanionSyncIncomingSession.h>
#import <VoiceShortcuts/VCCompanionSyncOutgoingSession.h>
#import <VoiceShortcuts/VCCompanionSyncSerializer.h>
#import <VoiceShortcuts/VCCompanionSyncService.h>
#import <VoiceShortcuts/VCCompanionSyncServiceDelegate-Protocol.h>
#import <VoiceShortcuts/VCCompanionSyncSession.h>
#import <VoiceShortcuts/VCCompanionSyncSessionDelegate-Protocol.h>
#import <VoiceShortcuts/VCCoreDataStore.h>
#import <VoiceShortcuts/VCCoreDuetListener.h>
#import <VoiceShortcuts/VCDaemon.h>
#import <VoiceShortcuts/VCDaemonDatabaseProvider.h>
#import <VoiceShortcuts/VCDaemonSyncDataEndpoint.h>
#import <VoiceShortcuts/VCDaemonXPCEventHandler.h>
#import <VoiceShortcuts/VCDailyMetricCheckIn.h>
#import <VoiceShortcuts/VCDailyMetricSubmitter.h>
#import <VoiceShortcuts/VCDatabaseChange.h>
#import <VoiceShortcuts/VCDatabaseProvider-Protocol.h>
#import <VoiceShortcuts/VCDatabaseSyncDataHandler.h>
#import <VoiceShortcuts/VCGuardedPreferencesManager.h>
#import <VoiceShortcuts/VCIDApplicationSyncState.h>
#import <VoiceShortcuts/VCIncomingSyncDataHandling-Protocol.h>
#import <VoiceShortcuts/VCIntentDefinitionChange.h>
#import <VoiceShortcuts/VCIntentDefinitionManager.h>
#import <VoiceShortcuts/VCIntentDefinitionSyncDataHandler.h>
#import <VoiceShortcuts/VCIntentDefinitionSyncState.h>
#import <VoiceShortcuts/VCNRDeviceSyncService.h>
#import <VoiceShortcuts/VCOutgoingSyncDataHandling-Protocol.h>
#import <VoiceShortcuts/VCPBChange.h>
#import <VoiceShortcuts/VCPBCodable-Protocol.h>
#import <VoiceShortcuts/VCPBDecodable-Protocol.h>
#import <VoiceShortcuts/VCPBEncodable-Protocol.h>
#import <VoiceShortcuts/VCPBIntentDefinition.h>
#import <VoiceShortcuts/VCPBIntentDefinitionChange.h>
#import <VoiceShortcuts/VCPBIntentDefinitionFile.h>
#import <VoiceShortcuts/VCPBMessageTyped-Protocol.h>
#import <VoiceShortcuts/VCPBSpotlightBookmark.h>
#import <VoiceShortcuts/VCPBSpotlightPair.h>
#import <VoiceShortcuts/VCPBVoiceShortcut.h>
#import <VoiceShortcuts/VCPBVoiceShortcutChange.h>
#import <VoiceShortcuts/VCPBWorkflow.h>
#import <VoiceShortcuts/VCRealmDataStore.h>
#import <VoiceShortcuts/VCRecordZoneParser.h>
#import <VoiceShortcuts/VCSYChange-Protocol.h>
#import <VoiceShortcuts/VCSYChangeEnumerator.h>
#import <VoiceShortcuts/VCShareSheetWorkflowStatusUpdater.h>
#import <VoiceShortcuts/VCShortcutSyncService-Protocol.h>
#import <VoiceShortcuts/VCShortcutsAssetUpdater.h>
#import <VoiceShortcuts/VCShortcutsObliterator.h>
#import <VoiceShortcuts/VCSpotlightState.h>
#import <VoiceShortcuts/VCSpotlightSyncOperation.h>
#import <VoiceShortcuts/VCSpotlightSyncOperationDelegate-Protocol.h>
#import <VoiceShortcuts/VCSpotlightSyncService.h>
#import <VoiceShortcuts/VCSyncDataEndpoint-Protocol.h>
#import <VoiceShortcuts/VCSyncDataHandler.h>
#import <VoiceShortcuts/VCSyncDataHandling-Protocol.h>
#import <VoiceShortcuts/VCUserDefaults.h>
#import <VoiceShortcuts/VCUserNotificationManager.h>
#import <VoiceShortcuts/VCUserNotificationManagerDelegate-Protocol.h>
#import <VoiceShortcuts/VCVoiceShortcutBlacklist.h>
#import <VoiceShortcuts/VCVoiceShortcutChange.h>
#import <VoiceShortcuts/VCVoiceShortcutManagedObject.h>
#import <VoiceShortcuts/VCVoiceShortcutManager.h>
#import <VoiceShortcuts/VCVoiceShortcutManagerAccessWrapper.h>
#import <VoiceShortcuts/VCVoiceShortcutManagerXPCInterface-Protocol.h>
#import <VoiceShortcuts/VCVoiceShortcutPeaceMigrator.h>
#import <VoiceShortcuts/VCVoiceShortcutSuggestionListManagedObject.h>
#import <VoiceShortcuts/VCVoiceShortcutSyncStateManagedObject.h>
#import <VoiceShortcuts/VCWatchSyncCoordinator.h>
#import <VoiceShortcuts/VCWorkflowChange.h>
#import <VoiceShortcuts/VCWorkflowSyncDataHandler.h>
#import <VoiceShortcuts/VCXPCServer.h>
#import <VoiceShortcuts/WFAirplaneModeTrigger-CoreDuetContext.h>
#import <VoiceShortcuts/WFAlarmTrigger-CoreDuetContext.h>
#import <VoiceShortcuts/WFAppInFocusTrigger-CoreDuetContext.h>
#import <VoiceShortcuts/WFArriveLocationTrigger-CoreDuetContext.h>
#import <VoiceShortcuts/WFBluetoothTrigger-CoreDuetContext.h>
#import <VoiceShortcuts/WFCarPlayConnectionTrigger-CoreDuetContext.h>
#import <VoiceShortcuts/WFDNDTrigger-CoreDuetContext.h>
#import <VoiceShortcuts/WFDatabase-VCDatabaseProvider.h>
#import <VoiceShortcuts/WFDatabaseResultObserver-Protocol.h>
#import <VoiceShortcuts/WFEmailTrigger-CoreDuetContext.h>
#import <VoiceShortcuts/WFLeaveLocationTrigger-CoreDuetContext.h>
#import <VoiceShortcuts/WFLowPowerModeTrigger-CoreDuetContext.h>
#import <VoiceShortcuts/WFMessageTrigger-CoreDuetContext.h>
#import <VoiceShortcuts/WFNFCTrigger-CoreDuetContext.h>
#import <VoiceShortcuts/WFOutOfProcessWorkflowControllerDelegate-Protocol.h>
#import <VoiceShortcuts/WFPredictedLocationTransitionTrigger-CoreDuetContext.h>
#import <VoiceShortcuts/WFRemoteQuarantinePolicyManager-XPCActivity.h>
#import <VoiceShortcuts/WFTimeOfDayTrigger-CoreDuetContext.h>
#import <VoiceShortcuts/WFTrigger-PowerLog.h>
#import <VoiceShortcuts/WFWifiTrigger-CoreDuetContext.h>
#import <VoiceShortcuts/WFWorkflowRecord-PeaceDeserialization.h>
#import <VoiceShortcuts/WFWorkflowReference-CSSearchableItem.h>
#import <VoiceShortcuts/WFWorkoutTrigger-CoreDuetContext.h>