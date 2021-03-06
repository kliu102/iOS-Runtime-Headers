/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSXPCConnection;

@interface MSConnection : NSObject {
    NSXPCConnection *_center;
    NSXPCConnection *_noWakeCenter;
    NSMutableDictionary *_serverSideConfig;
    int _serverSideConfigNotificationToken;
    NSObject<OS_dispatch_queue> *_serverSideConfigQueue;
}

+ (id)sharedConnection;

- (void).cxx_destruct;
- (id)_machErrorWithUnderlyingError:(id)arg1;
- (void)_waitForMessageToBeSent;
- (void)abortActivitiesForPersonID:(id)arg1;
- (void)checkForOutstandingActivities;
- (void)dealloc;
- (void)deleteAssetCollections:(id)arg1 personID:(id)arg2;
- (BOOL)dequeueAssetCollectionWithGUIDs:(id)arg1 personID:(id)arg2 outError:(id*)arg3;
- (BOOL)enqueueAssetCollections:(id)arg1 personID:(id)arg2 outError:(id*)arg3;
- (void)forgetPersonID:(id)arg1;
- (void)handleSubscriptionPushForPersonID:(id)arg1;
- (id)init;
- (BOOL)isBusy;
- (void)isBusyCompletionBlock:(id)arg1;
- (id)pause;
- (void)pollForSubscriptionUpdatesForPersonID:(id)arg1;
- (void)refreshServerSideConfigurationForPersonID:(id)arg1;
- (void)resetServerStateForPersonID:(id)arg1;
- (void)resume:(id)arg1;
- (id)serverSideConfigurationForPersonID:(id)arg1;

@end
