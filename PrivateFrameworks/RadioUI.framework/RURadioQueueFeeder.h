/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class NSArray, NSMapTable, NSMutableSet, RURadioAdObserver, RadioStation, RadioStationSkipController;

@interface RURadioQueueFeeder : MPQueueFeeder {
    RURadioAdObserver *_adObserver;
    NSMapTable *_adSlotToAllAdTracks;
    NSMapTable *_adSlotToInsertedAdTracks;
    NSMapTable *_adSlotToRadioTrack;
    BOOL _didReceiveTracklistEnd;
    NSMapTable *_fetchingTracksCompletionHandlersByStation;
    BOOL _hasReceivedStreamTrack;
    int _maximumGetTracksRetryCount;
    int _playbackMode;
    NSArray *_previousDatabaseTrackPlaybackDescriptorQueue;
    NSMapTable *_radioTrackToAdSlot;
    RadioStation *_station;
    RadioStationSkipController *_stationSkipController;
    NSMapTable *_stationTracklistRetrievalRetryCount;
    NSArray *_tracks;
    NSMutableSet *_visibleAdSlots;
    BOOL _wasUsingBackgroundNetwork;
}

@property(copy,readonly) NSArray * allPreparedAdSlotRadioTracks;
@property(retain) RadioStation * station;
@property(copy) NSArray * tracks;
@property(readonly) NSArray * tracksForNextPlaybackGroup;

+ (void)_explicitContentAllowedDidChangeNotification:(id)arg1;
+ (id)_tracksByRemovingPromotionalContentFromTracks:(id)arg1;
+ (id)_tracksWithPromotionalContentFromTracks:(id)arg1;
+ (void)_updateIsExplicitContentRestrictedAndPostNotification:(BOOL)arg1 removeTracks:(BOOL)arg2;
+ (BOOL)isExplicitTracksEnabled;
+ (BOOL)isProfileExplicitContentRestricted;
+ (BOOL)isUserDefaultExplicitTracksEnabled;
+ (int)maximumNumberOfTracksToFetch;
+ (void)setUserDefaultExplicitTracksEnabled:(BOOL)arg1;

- (void).cxx_destruct;
- (void)_adSlotAdTracksDidChangeNotification:(id)arg1;
- (id)_adSlotForAdTrack:(id)arg1;
- (void)_adTrackActionDidFinishNotification:(id)arg1;
- (void)_adTrackActionWillBeginNotification:(id)arg1;
- (void)_adTrackDidFailToLoadNotification:(id)arg1;
- (void)_applicationWillTerminateNotification:(id)arg1;
- (void)_applyTracksForAdSlot:(id)arg1 radioTrack:(id)arg2 currentPlayingItem:(id)arg3 toTracks:(id)arg4;
- (void)_bufferingStateDidChangeNotification:(id)arg1;
- (BOOL)_canHavePlaceholderTrack;
- (void)_cellularNetworkingAllowedDidChangeNotification:(id)arg1;
- (id)_currentTrackPlaybackDescriptorQueueWithCurrentItem:(id)arg1 shouldIncludePlaybackInformation:(BOOL)arg2 skipDate:(id)arg3;
- (BOOL)_endPlaybackIfNecessaryForNetworkType;
- (void)_fetchAdSlotIfNeededForRadioTrack:(id)arg1 inStation:(id)arg2;
- (void)_fetchAdditionalTracksWithBaseIndex:(int)arg1 withCompletionHandler:(id)arg2;
- (void)_fetchNextTrackAdSlotIfNeeded;
- (BOOL)_hasReceivedStreamTrack;
- (unsigned int)_indexOfCurrentItem;
- (unsigned int)_indexOfItem:(id)arg1 inTracks:(id)arg2;
- (unsigned int)_indexOfItem:(id)arg1;
- (void)_isExplicitTracksEnabledDidChangeNotification:(id)arg1;
- (void)_itemIsBannedDidChangedNotification:(id)arg1;
- (void)_itemWillChangeNotification:(id)arg1;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (void)_numberOfAvailableSkipsDidChangeNotification:(id)arg1;
- (void)_performGetTracksOperationForStation:(id)arg1 withNumberOfTracks:(int)arg2;
- (int)_playbackModeForTrack:(id)arg1;
- (void)_playerContentsDidChangeNotification:(id)arg1;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (BOOL)_reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(BOOL)arg2 startPlayback:(BOOL)arg3;
- (void)_setAdSlot:(id)arg1 forRadioTrack:(id)arg2;
- (void)_storeBagDidLoadNotification:(id)arg1;
- (id)_trackAtIndex:(unsigned int)arg1;
- (id)_tracksByRemovingPlayedTracks:(id)arg1;
- (void)_updateForLoadedStoreBag:(id)arg1;
- (void)_updateTracksForAdSlot:(id)arg1 radioTrack:(id)arg2;
- (void)_updateTracksForChangedTrackPlaybackDescriptorQueue;
- (void)_updateWithTracks:(id)arg1 tracklistActionType:(int)arg2 options:(int)arg3;
- (id)allPreparedAdSlotRadioTracks;
- (BOOL)canSeek;
- (BOOL)canSkipItem:(id)arg1;
- (BOOL)canSkipToPreviousItem;
- (id)copyRawItemAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (void)getContainerType:(unsigned int*)arg1 mediaLibraryContainerPersistentID:(long long*)arg2 storeContainerID:(id*)arg3 storePersonalizedContainerID:(id*)arg4;
- (BOOL)hasValidItemAtIndex:(unsigned int)arg1;
- (id)init;
- (unsigned int)initialPlaybackQueueDepthForStartingIndex:(unsigned int)arg1;
- (BOOL)isRadioQueueFeeder;
- (Class)itemClass;
- (unsigned int)itemCount;
- (unsigned int)itemTypeForIndex:(unsigned int)arg1;
- (id)localizedAttributedPositionInPlaylistStringForItem:(id)arg1 withRegularTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;
- (id)localizedPositionInPlaylistString:(id)arg1;
- (id)playbackInfoAtIndex:(unsigned int)arg1;
- (int)playbackMode;
- (BOOL)playerPreparesItemsForPlaybackAsynchronously;
- (id)preparedAdSlotForRadioTrack:(id)arg1;
- (unsigned int)realRepeatType;
- (BOOL)reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(BOOL)arg2;
- (void)setAVController:(id)arg1;
- (void)setStation:(id)arg1;
- (void)setTracks:(id)arg1;
- (struct { int x1; int x2; double x3; })skipLimit;
- (id)station;
- (id)tracks;
- (id)tracksForNextPlaybackGroup;
- (BOOL)userCanChangeShuffleAndRepeatType;

@end
