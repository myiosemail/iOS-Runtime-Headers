/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString;

@interface MPAirTrafficMediaDownloadObserver : MPMediaDownloadObserver {
    NSString *_assetIdentifier;
    double _lastDownloadProgress;
}

+ (void)connection:(id)arg1 updatedProgress:(id)arg2;
+ (void)initialize;
+ (void)registerObserver:(id)arg1 forAssetID:(id)arg2;
+ (void)unregisterObserver:(id)arg1 forAssetID:(id)arg2;

- (void)_onQueue_invalidate;
- (void)dealloc;
- (double)downloadProgress;
- (id)initWithAssetIdentifier:(id)arg1;

@end