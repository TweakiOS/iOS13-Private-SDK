//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriCore/SiriCoreConnectionProviderDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, SiriCoreDataCompressor, SiriCoreDataDecompressor, SiriCorePingInfo, SiriCoreSiriConnectionInfo;
@protocol OS_dispatch_data, OS_dispatch_queue, OS_dispatch_source, SiriCoreConnectionProvider, SiriCoreSiriBackgroundConnectionDelegate;

@interface SiriCoreSiriBackgroundConnection : NSObject <SiriCoreConnectionProviderDelegate>
{
    id <SiriCoreSiriBackgroundConnectionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    id <SiriCoreConnectionProvider> _connectionProvider;
    SiriCoreSiriConnectionInfo *_connectionInfo;
    NSObject<OS_dispatch_data> *_bufferedInputData;
    NSObject<OS_dispatch_data> *_bufferedProviderHeaderOutputData;
    NSObject<OS_dispatch_data> *_bufferedGeneralOutputData;
    NSObject<OS_dispatch_data> *_bufferedUncompressedData;
    SiriCoreDataDecompressor *_inputDecompressor;
    SiriCoreDataCompressor *_outputCompressor;
    struct __CFHTTPMessage _httpResponseHeader;
    BOOL _isOpened;
    BOOL _isCanceled;
    BOOL _hasReportedError;
    NSMutableDictionary *_errorsForConnectionMethods;
    NSObject<OS_dispatch_source> *_aceHeaderTimerSource;
    NSUInteger _aceHeaderTimerFireCount;
    NSObject<OS_dispatch_source> *_pingTimerSource;
    unsigned int _currentPingIndex;
    SiriCorePingInfo *_pingInfo;
    NSUInteger _lastInputLength;
    void _lastInputDataPointer;
    NSUInteger _inputLengthUnchangedCounter;
    NSUInteger _lastOutputLength;
    void _lastOutputDataPointer;
    NSUInteger _outputLengthUnchangedCounter;
    unsigned int _currentBarrierIndex;
    NSMutableDictionary *_outstandingBarriers;
    long long _connectionMethod;
    NSObject<OS_dispatch_data> *_safetyNetBuffer;
    NSObject<OS_dispatch_queue> *_metricsQueue;
    double _firstStartTime;
    double _currentStartTime;
    double _currentOpenTime;
    double _firstByteReadTime;
    NSUInteger _startCount;
    NSUInteger _metricsCount;
    NSString *_peerType;
    NSString *_peerVersion;
    NSString *_productTypePrefix;
    BOOL _usesProxyConnection;
    BOOL _deviceIsInWalkaboutExperimentGroup;
    BOOL _siriConnectionUsesPeerManagedSync;
    Class _peerProviderClass;
    NSMutableArray *_outgoingCommandsWithSendCompletions;
    BOOL _primaryConnectionViable;
    BOOL _betterPathAvailable;
    long long _secondaryConnectionOpenState;
    id <SiriCoreConnectionProvider> _secondaryConnectionProvider;
    BOOL _dispatchedSnapshotMetrics;
}

@property(nonatomic) BOOL deviceIsInWalkaboutExperimentGroup; // @synthesize deviceIsInWalkaboutExperimentGroup=_deviceIsInWalkaboutExperimentGroup;
@property(retain, nonatomic) Class peerProviderClass; // @synthesize peerProviderClass=_peerProviderClass;
@property(nonatomic) BOOL siriConnectionUsesPeerManagedSync; // @synthesize siriConnectionUsesPeerManagedSync=_siriConnectionUsesPeerManagedSync;
@property(nonatomic) BOOL usesProxyConnection; // @synthesize usesProxyConnection=_usesProxyConnection;
@property(copy, nonatomic) NSString *productTypePrefix; // @synthesize productTypePrefix=_productTypePrefix;
@property(copy, nonatomic) NSString *peerVersion; // @synthesize peerVersion=_peerVersion;
@property(copy, nonatomic) NSString *peerType; // @synthesize peerType=_peerType;
@property(nonatomic) __weak id <SiriCoreSiriBackgroundConnectionDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)getConnectionMetrics:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (id)_connectionMethodDescription;
- (id)getConnectionMethodUsed;
- (id)analysisInfo;
- (void)_handleAceEnd;
- (void)_handleAcePong:(unsigned int)arg1;
- (void)_handleAcePing:(unsigned int)arg1;
- (void)_handleAceObject:(id)arg1;
- (void)_handleAceNop;
- (void)_handlePacket:(CDStruct_95d471ab )arg1;
- (BOOL)_tryReadingParsedDataFromBytes:(const void )arg1 length:(NSUInteger)arg2 packet:(CDStruct_95d471ab )arg3 object:(id )arg4 bytesParsed:(NSUInteger )arg5 error:(id )arg6;
- (id)_tryReadingAceHeaderFromData:(id)arg1 bytesParsed:(NSUInteger )arg2 error:(id )arg3;
- (BOOL)_tryParsingHTTPHeaderData:(id)arg1 partialMessage:(struct __CFHTTPMessage )arg2 statusCode:(long long )arg3 bytesRead:(NSUInteger )arg4 error:(id )arg5;
- (BOOL)_tryReadingHTTPHeaderData:(id)arg1 withMessage:(struct __CFHTTPMessage )arg2 bytesRead:(NSUInteger )arg3 error:(id )arg4;
- (void)_setupReadHandlerOnProvider;
- (BOOL)_sendAcePongWithId:(unsigned int)arg1 error:(id )arg2;
- (BOOL)_sendAcePingWithId:(unsigned int)arg1 error:(id )arg2;
- (void)sendCommands:(id)arg1 errorHandler:(id /* CDUnknownBlockType */)arg2;
- (void)sendCommand:(id)arg1 moreComing:(BOOL)arg2 errorHandler:(id /* CDUnknownBlockType */)arg3;
- (void)_prepareProviderHeaderWithForceReconnect:(BOOL)arg1;
- (void)_sendGeneralData:(id)arg1;
- (void)_bufferGeneralData:(id)arg1;
- (void)_tryToWriteBufferedOutputData;
- (id)_headerDataForURL:(id)arg1 aceHost:(id)arg2 languageCode:(id)arg3 syncAssistantId:(id)arg4;
- (void)_networkProviderDidOpen;
- (void)_connectionHasBytesAvailable:(id)arg1;
- (void)_cancelForExtendedValidationFailureWithTrustInfo:(id)arg1;
- (BOOL)_consumeAceDataWithData:(id)arg1 bytesRead:(NSUInteger )arg2 error:(id )arg3;
- (BOOL)_consumeAceHeaderWithData:(id)arg1 bytesRead:(NSUInteger )arg2 error:(id )arg3;
- (id)_connectionType;
- (BOOL)_hasReadACEHeader;
- (BOOL)_consumeHTTPHeaderWithData:(id)arg1 bytesRead:(NSUInteger )arg2 error:(id )arg3;
- (BOOL)_hasReadHTTPHeader;
- (void)connectionProviderReceivedBetterRouteNotification:(id)arg1;
- (void)connectionProvider:(id)arg1 receivedViabilityChangeNotification:(BOOL)arg2;
- (void)connectionProvider:(id)arg1 receivedError:(id)arg2;
- (void)stopHeartBeat;
- (void)startHeartBeat;
- (void)_cancelOutstandingBarriers;
- (void)_handleBarrierReply:(unsigned int)arg1;
- (void)barrier:(id /* CDUnknownBlockType */)arg1;
- (void)probeConnection;
- (long long)_checkPings;
- (long long)_checkForProgressOnReadingData;
- (void)_pingTimerFired;
- (void)_resumePingTimer;
- (void)setSendPings:(BOOL)arg1;
- (void)_aceHeaderTimeoutFired:(id)arg1 afterTimeout:(double)arg2;
- (void)_scheduleAceHeaderTimeoutTimerWithInterval:(double)arg1;
- (BOOL)_wifiOrCellularMayBeBetterThanCurrentStream;
- (BOOL)_tcpInfoIndicatesPoorLinkQuality;
- (void)_getWifiMetrics:(id)arg1;
- (long long)_normalizeSNR:(long long)arg1;
- (void)_getCellularMetrics:(id)arg1;
- (BOOL)_canFallBackFromError:(id)arg1;
- (void)_fallBackToNextConnectionMethodWithError:(id)arg1 orElse:(id /* CDUnknownBlockType */)arg2;
- (void)_fallBackToNextConnectionMethod:(long long)arg1 fromError:(id)arg2 afterDelay:(double)arg3;
- (BOOL)_shouldTrySameConnectionMethodForMethod:(long long)arg1 error:(id)arg2;
- (BOOL)_hasBufferedDataOrOutstandingPings;
- (id)_bestErrorBetweenError:(id)arg1 peerError:(id)arg2;
- (void)_didEncounterError:(id)arg1;
- (void)_closeConnection;
- (void)_closeConnectionAndPrepareForReconnect:(BOOL)arg1;
- (void)_initializeBufferedGeneralOutputDataWithInitialPayload:(BOOL)arg1;
- (id)_aceHeaderData;
- (id)_httpHeaderData;
- (void)_forceTriggerRetry;
- (void)_cancelSecondaryConnection;
- (void)_startSecondaryConnection;
- (void)updateActiveBackgroundConnectionWithSecondary;
- (void)cancel;
- (void)_startNetworkProviderWithInfo:(id)arg1;
- (void)_updateBuffersForInitialPayload:(id)arg1 bufferedLength:(NSUInteger)arg2 forceReconnect:(BOOL)arg3;
- (id)_getInitialPayloadWithBufferedLength:(NSUInteger )arg1 forceReconnect:(BOOL)arg2;
- (Class)_providerClass;
- (void)_setNetworkProvider:(id)arg1;
- (void)_startWithConnectionInfo:(id)arg1 proposedFallbackMethod:(long long)arg2 allowFallbackToNewMethod:(BOOL)arg3;
- (void)startWithConnectionInfo:(id)arg1;
- (long long)_nextConnectionMethod;
- (BOOL)_usingNetwork;
- (BOOL)_usingPeer;
- (BOOL)_usingPOPOnPeer;
- (BOOL)_usingFlorence;
- (BOOL)_usingPOP;
- (void)dealloc;
- (id)init;
- (id)initWithQueue:(id)arg1;

@end
