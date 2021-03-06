/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTAudioRouteChangeMonitor : VTEventMonitor {
    struct opaqueCMSession { } * _cmSession;
}

+ (id)sharedInstance;

- (id)_CMSessionDispatchQueue;
- (void)_notifyObserver:(id)arg1;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)init;
- (void)updateExternalRouteConnectionStatus;

@end
