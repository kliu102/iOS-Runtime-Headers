/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GKDiscovery, GKMatch, NSDate, NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSSet;

@interface GKMatchmaker : NSObject {
    id _inviteHandler;
    id _inviteeResponseHandler;
    NSSet *_invitees;
    NSDictionary *_inviteesByUserID;
    NSObject<OS_dispatch_queue> *_lookForInviteQueue;
    GKMatch *_match;
    int _matching;
    BOOL _nearbyAdvertising;
    BOOL _nearbyBrowsing;
    NSSet *_nearbyCompatibileHashes;
    GKDiscovery *_nearbyDiscovery;
    NSMutableDictionary *_nearbyInvites;
    id _nearbyPlayerHandler;
    id _nearbyPlayerIDHandler;
    NSMutableDictionary *_nearbyPlayers;
    double _nearbyQueryAllowance;
    NSDate *_nearbyQueryLastCheckDate;
    id _recipientResponseHandler;
    BOOL _wasNearbyBrowsing;
}

@property(readonly) BOOL hasInviteListener;
@property(copy) id inviteHandler;
@property(copy) id inviteeResponseHandler;
@property(retain) NSSet * invitees;
@property(retain) NSDictionary * inviteesByUserID;
@property NSObject<OS_dispatch_queue> * lookForInviteQueue;
@property(retain) GKMatch * match;
@property int matching;
@property BOOL nearbyAdvertising;
@property BOOL nearbyBrowsing;
@property(retain) NSSet * nearbyCompatibileHashes;
@property(retain) GKDiscovery * nearbyDiscovery;
@property(retain) NSMutableDictionary * nearbyInvites;
@property(copy) id nearbyPlayerHandler;
@property(copy) id nearbyPlayerIDHandler;
@property(retain) NSMutableDictionary * nearbyPlayers;
@property double nearbyQueryAllowance;
@property(retain) NSDate * nearbyQueryLastCheckDate;
@property(copy) id recipientResponseHandler;
@property BOOL wasNearbyBrowsing;

+ (id)descriptionForNearbyDictionary:(id)arg1;
+ (id)sharedMatchmaker;
+ (id)syncQueue;

- (id)_nearbyDeviceWithDeviceID:(id)arg1;
- (void)_request:(id)arg1 match:(id)arg2 rematchID:(id)arg3 serverHosted:(BOOL)arg4 playerCount:(int)arg5 connectionData:(id)arg6 completionHandler:(id)arg7;
- (void)acceptNearbyInvite:(id)arg1 connectionData:(id)arg2;
- (void)addPlayersForHostedMatchRequest:(id)arg1 existingPlayerCount:(int)arg2 completionHandler:(id)arg3;
- (void)addPlayersToMatch:(id)arg1 matchRequest:(id)arg2 completionHandler:(id)arg3;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)applicationWillEnterForegroundNotification:(id)arg1;
- (void)applicationWillTerminateNotification:(id)arg1;
- (void)cancel;
- (void)cancelInviteToPlayer:(id)arg1;
- (void)cancelNearbyInvitesToPlayers:(id)arg1;
- (void)cancelPendingInviteToPlayer:(id)arg1;
- (void)cancelPendingInvitesAndMarkInviteComplete:(BOOL)arg1;
- (void)cancelSentNearbyInvites;
- (BOOL)compatibilityMatrix:(id)arg1 includesAppWithBundleID:(id)arg2 version:(id)arg3;
- (int)currentEnvironment;
- (void)dealloc;
- (void)declineNearbyInviteFromDevice:(id)arg1 reason:(int)arg2;
- (void)declineReceivedNearbyInvites;
- (void)determineIfShouldRespondToNearbyPlayer:(id)arg1 handler:(id)arg2;
- (void)doneMatchmaking;
- (void)findMatchForRequest:(id)arg1 withCompletionHandler:(id)arg2;
- (void)findPlayersForHostedMatchRequest:(id)arg1 withCompletionHandler:(id)arg2;
- (void)findPlayersForHostedRequest:(id)arg1 withCompletionHandler:(id)arg2;
- (void)findRematchForMatch:(id)arg1 completionHandler:(id)arg2;
- (void)finishMatchmakingForMatch:(id)arg1;
- (void)finishedAuthenticating;
- (void)foundNearbyDeviceID:(id)arg1 discoveryInfo:(id)arg2;
- (void)generateHashedCompatibiltySet;
- (void)handleNearbyInvite:(id)arg1 fromDevice:(id)arg2;
- (void)handleNearbyInviteResponse:(id)arg1 fromDevice:(id)arg2;
- (void)handleNearbyProfileQuery:(id)arg1 fromDevice:(id)arg2;
- (void)handleNearbyProfileResponse:(id)arg1 fromDevice:(id)arg2 withCompletionHandler:(id)arg3;
- (BOOL)hasInviteListener;
- (id)hashForBundleID:(id)arg1 version:(id)arg2;
- (id)hashForCurrentGame;
- (id)init;
- (void)inviteAnyNearbyPlayersWithRequest:(id)arg1;
- (id)inviteHandler;
- (void)invitePlayersWithRequest:(id)arg1 serverHosted:(BOOL)arg2 completionHandler:(id)arg3;
- (void)invitePlayersWithRequest:(id)arg1 serverHosted:(BOOL)arg2 onlineConnectionData:(id)arg3 completionHandler:(id)arg4;
- (void)inviteeAcceptedNotification:(id)arg1;
- (void)inviteeDeclinedNotification:(id)arg1;
- (id)inviteeResponseHandler;
- (id)invitees;
- (id)inviteesByUserID;
- (void)loadCompatabilityMatrixAsDictionaryWithHandler:(id)arg1;
- (void)loadConnectivitySettingsWithCompletionHandler:(id)arg1;
- (void)loadPhotoDataDictionaryWithHandler:(id)arg1;
- (void)localPlayerAcceptedGameInvite:(id)arg1;
- (void)localPlayerAcceptedNearbyInvite:(id)arg1;
- (void)localPlayerRespondedToNearbyInvite:(id)arg1;
- (void)lookForInvite;
- (id)lookForInviteQueue;
- (void)lostNearbyDeviceID:(id)arg1;
- (id)match;
- (void)matchForInvite:(id)arg1 completionHandler:(id)arg2;
- (void)matchForNearbyInvite:(id)arg1 handler:(id)arg2;
- (void)matchForRemoteInvite:(id)arg1 completionHandler:(id)arg2;
- (void)matchWithRequest:(id)arg1 currentMatch:(id)arg2 hostedCurrentPlayerCount:(int)arg3 serverHosted:(BOOL)arg4 rematchID:(id)arg5 completionHandler:(id)arg6;
- (int)matching;
- (BOOL)nearbyAdvertising;
- (BOOL)nearbyBrowsing;
- (id)nearbyCompatibileHashes;
- (id)nearbyDeviceWithDeviceID:(id)arg1;
- (id)nearbyDevicesForPlayer:(id)arg1 withState:(int)arg2;
- (id)nearbyDiscovery;
- (id)nearbyInviteFromPlayer:(id)arg1;
- (void)nearbyInviteWasCancelled:(id)arg1 fromDevice:(id)arg2;
- (id)nearbyInvites;
- (id)nearbyPlayerHandler;
- (id)nearbyPlayerIDHandler;
- (id)nearbyPlayers;
- (double)nearbyQueryAllowance;
- (id)nearbyQueryLastCheckDate;
- (int)numberOfNearbyDevicesForPlayer:(id)arg1 withState:(int)arg2;
- (void)performSync:(id)arg1;
- (void)presentNearbyInvite:(id)arg1 fromDevice:(id)arg2;
- (id)profileDictionaryForLocalPlayer;
- (void)queryActivityWithCompletionHandler:(id)arg1;
- (void)queryPlayerGroupActivity:(unsigned int)arg1 withCompletionHandler:(id)arg2;
- (void)receivedData:(id)arg1 fromNearbyDeviceID:(id)arg2;
- (id)recipientResponseHandler;
- (void)registeredListentersChanged;
- (BOOL)removeInvitee:(id)arg1;
- (void)removeNearbyInviteFromPlayer:(id)arg1;
- (void)reportResponse:(int)arg1 forInvitees:(id)arg2 withCompletionHandler:(id)arg3;
- (void)respondToHostedInvite:(id)arg1 completionHandler:(id)arg2;
- (int)responseForDeclineReason:(int)arg1;
- (void)saveNearbyInvite:(id)arg1 fromPlayer:(id)arg2;
- (void)sendProfileResponseToDevice:(id)arg1;
- (void)setConnectivitySettings:(id)arg1;
- (void)setInviteHandler:(id)arg1;
- (void)setInviteeResponseHandler:(id)arg1;
- (void)setInvitees:(id)arg1;
- (void)setInviteesByUserID:(id)arg1;
- (void)setLookForInviteQueue:(id)arg1;
- (void)setMatch:(id)arg1;
- (void)setMatching:(int)arg1;
- (void)setNearbyAdvertising:(BOOL)arg1;
- (void)setNearbyBrowsing:(BOOL)arg1;
- (void)setNearbyCompatibileHashes:(id)arg1;
- (void)setNearbyDevice:(id)arg1 reachable:(BOOL)arg2;
- (void)setNearbyDiscovery:(id)arg1;
- (void)setNearbyInvites:(id)arg1;
- (void)setNearbyPlayerAccepted:(id)arg1 connectionData:(id)arg2;
- (void)setNearbyPlayerAccepted:(id)arg1 deviceID:(id)arg2 connectionData:(id)arg3;
- (void)setNearbyPlayerDeclined:(id)arg1 deviceID:(id)arg2 reason:(int)arg3;
- (void)setNearbyPlayerDeclined:(id)arg1 reason:(int)arg2;
- (void)setNearbyPlayerFailed:(id)arg1 deviceID:(id)arg2;
- (void)setNearbyPlayerFailed:(id)arg1;
- (void)setNearbyPlayerHandler:(id)arg1;
- (void)setNearbyPlayerIDHandler:(id)arg1;
- (void)setNearbyPlayers:(id)arg1;
- (void)setNearbyQueryAllowance:(double)arg1;
- (void)setNearbyQueryLastCheckDate:(id)arg1;
- (void)setRecipientResponseHandler:(id)arg1;
- (void)setWasNearbyBrowsing:(BOOL)arg1;
- (void)setupNearbyDiscovery;
- (BOOL)shouldRespondToNearbyQuery;
- (void)startBrowsingForNearbyPlayersWithHandler:(id)arg1;
- (void)startBrowsingForNearbyPlayersWithReachableHandler:(id)arg1;
- (void)startNearbyAdvertising;
- (void)startNearbyBrowsing;
- (void)stopBrowsingForNearbyPlayers;
- (void)stopNearbyAdvertising;
- (void)stopNearbyBrowsing;
- (void)updateNearbyAdvertising;
- (BOOL)wasNearbyBrowsing;

@end
